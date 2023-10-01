import os

import Class
import Paths
import Format

class Module_Class:

    def __init__(self, Xila_Namespace, Module_Name, Excluded_Classes = None):
        self.Name = Module_Name
        # Find module class
        self.Module_Class = Xila_Namespace.Find_Class(self.Name + "_Class")
        self.Module_Class.Module_Class = True
        # Find module namespace
        self.Module_Namespace = Xila_Namespace.Find_Namespace(self.Name + "_Types")

        # Open module file
        File_Path = os.path.join(Paths.Get_Generated_Folder_Path(), self.Name + ".cpp")

        if os.path.exists(File_Path):
            os.remove(File_Path)

        self.File = open(File_Path, "w")

    def __del__(self):
        Format.Format_File(self.File.name)
        self.File.close()

    def Get_Name(self):
        return self.Name

    def Write(self, String : str):
        self.File.write(String)

    def Write_Line(self, String : str = ""):
        self.Write(String + "\n")

    def Include_Header_File(self, Files_Path, C_Header = False):
        if not isinstance(Files_Path, list):
            Files_Path = [Files_Path]

        Include = ""
        if C_Header:
            Include += "extern \"C\"\n{\n"
        
        for Path in Files_Path:
            Include += "#include \"" + Path + "\"\n"
        
        if C_Header:
            Include += "}\n"
        
        return Include

    def Generate_Binding(self):
        # - Write header
        self.Write_Line("// This file is automatically generated by the Generate.py script.")
        self.Write_Line(self.Include_Header_File("Berry.hpp"))
        self.Write_Line(self.Include_Header_File(["be_constobj.h", "be_mapping.h"], True))
        self.Write_Line("using namespace Xila_Namespace;")
        self.Write_Line("using namespace " + self.Name + "_Types;")

        # - Generate modules's classes bindings and declarations
        Binding_Functions = []

        Classes = self.Module_Namespace.Find_Classes()

        for Class in Classes:
            # - Generate 
            self.Write_Line(Class.Get_Binding())
            self.Write_Line()
            
            self.Write_Line("// - Berry declaration")
            self.Write_Line()
            
            Header, Declarations = Class.Get_Berry_Definition()
            self.Write_Line("/* @const_object_info_begin")
            self.Write_Line(Header)
            self.Write_Line("{")

            for Declaration in Declarations:
                self.Write_Line(Declaration)

            self.Write_Line("}")
            self.Write_Line("@const_object_info_end */")

            self.Write_Line(self.Include_Header_File(Class.Get_Generated_Header_File_Path(), True))

        # - Generate module's class bindings
        self.Write_Line("// - Module methods")

        for Member in self.Module_Class.Methods:
            Prototype, Definition, Declaration = Member.Get_Binding()
            self.Write_Line(Prototype)
            self.Write_Line("{")
            self.Write_Line(Definition)
            self.Write_Line("}")
            self.Write_Line(Declaration + "\n")


        # - Custom 
        self.File.write("void* Berry_" + self.Get_Name() + "_Class_Get_Pointer()\n{\n\treturn (Module_Type*)&" + self.Get_Name() + ";\n}\n")
        self.File.write("BE_FUNC_CTYPE_DECLARE(Berry_" + self.Get_Name() + "_Class_Get_Pointer, \"c\", \"\")\n")
        Binding_Functions.append(("Get_Pointer", "Berry_" + self.Get_Name() + "_Class_Get_Pointer"))
  
        # - Module declaration for Berry
        self.Write_Line("// - Berry declaration ")

        Header, Declarations = self.Module_Class.Get_Berry_Definition()
        self.Write_Line("/* @const_object_info_begin")
        self.Write_Line(Header)
        self.Write_Line("{")

        # - - Methods
        for Declaration in Declarations:
            self.Write_Line(Declaration)
        self.Write_Line()

        # - Classes
        for Class in Classes:
            self.Write_Line(Class.Get_Berry_Declaration())
        self.Write_Line()
        
        # - Enumerations
        for Enumeration in self.Module_Namespace.Find_Enumerations():
            for Declaration in Enumeration.Get_Berry_Declarations():
                self.Write_Line(Declaration)

        self.Write_Line("}")
        self.Write_Line("@const_object_info_end */")
        
        # - Include berry header
        self.Write_Line(self.Include_Header_File("../generate/be_fixed_" + self.Get_Name() + ".h", True))