from pygccxml import utils
from pygccxml import declarations

import Method
import Basics
import Namespace

import Type

class Class_Class(Type.Type_Class):
    def __init__(self, Declaration, Module_Class = False):
        super().__init__(Declaration)
        
        self.Module_Class = Module_Class
        self.Parent_Namespace = Namespace.Namespace_Class(self.Declaration.parent)

        self.Bases = []
        for Hierarchy_Information in self.Declaration.bases:
            self.Bases.append(Class_Class(Hierarchy_Information.related_class))


        # - Search for class methods

        # - - Search for constructors
        self.Constructors = []
        for Constructor in self.Declaration.constructors():
            if (Constructor.access_type == "public" and not(self.Declaration.is_artificial)):
                self.Constructors.append(Method.Constructor_Class(self, Constructor))

        # - - Search for destructor
        if declarations.type_traits_classes.has_destructor(self.Declaration):
            self.Destructor = Method.Destructor_Class(self, declarations.type_traits_classes.has_destructor(self.Declaration))

        # - - Search for operators
        self.Operators = []
        for Operator in self.Declaration.operators():
            if (Operator.access_type == "public"):
                self.Operators.append(Method.Operator_Class(self, Operator))

        # - - Search for regular methods
        self.Methods = []

        for M in self.Declaration.member_functions():
            if (isinstance(M, declarations.calldef_members.member_function_t) and (M.access_type == "public") and not(M.has_ellipsis)):
                self.Methods.append(Method.Method_Class(self, M))

    def Get_Module_Name(self) -> str:
        return self.Declaration.name.replace("_Class", "")

    def Get_Name(self) -> str:
        return self.Declaration.name

    def Get_Berry_Name(self) -> str:
        return "Berry_" + self.Get_Type_Name()

    def Get_Type_Name(self) -> str:
        return self.Declaration.name.replace("_Class", "_Type")

    def Is_Module_Class(self) -> bool:
        return self.Is_Module_Class

    def Get_Berry_Declaration(self) -> str:
        return self.Get_Type_Name()

    def Get_Berry_Definition(self) -> (str, list):

        Header = ""
        # - Header
        if self.Is_Module_Class():
            Header = "module " + self.Get_Module_Name() + " (scope:global)"
        else:
            Header += "class " + self.Get_Berry_Name() + "(scope:global, name:" + self.Get_Type_Name()
            
            if self.Parent_Namespace.Get_Name() == "Graphics_Types":    # ! : Fix this exception rule
                if self.Bases:
                    Header += ", super: " + self.Bases[0].Get_Berry_Name()
        
            Header += ")"

        Declarations = []

        # - Attributes
        if not self.Is_Module_Class():
            Declarations.append("_t, var") # Add an instance pointer for regular class

        Declarations.append("")

        # - Methods



        for Constructor in self.Constructors:
            Declarations.append(Constructor.Get_Berry_Declaration())

        Declarations.append("")

        if self.Destructor:
            Declarations.append(self.Destructor.Get_Berry_Declaration())

        Declarations.append("")

        for Operator in self.Operators:
            Declarations.append(Operator.Get_Berry_Declaration())

        Declarations.append("")

        for Method in self.Methods:
            Declarations.append(Method.Get_Berry_Declaration())

        return (Header, Declarations)

    def Get_Generated_Header_File_Path(self) -> str:
        return "../generate/be_fixed_Berry_" + self.Get_Type_Name() + ".h"
    
    def Get_Binding(self) -> str:
        Binding = ""
        
        Binding += "// - Methods\n"

        # - - Constructors
        Binding += "// - - Constructors\n"

        for Constructor in self.Constructors:
            if not Constructor.Is_Copy():
                Prototype, Definition, Declaration = Constructor.Get_Binding()
                Binding += Prototype + "\n"
                Binding += "{\n"
                Binding += Definition + "\n"
                Binding += "\n}" + "\n"
                Binding += Declaration + "\n\n"

        # - - Destructors
        Binding += "// - - Destructors\n"

        if self.Destructor:
            Binding += Prototype + "\n"
            Binding += "{"
            Binding += Definition + "\n"
            Binding += "}" + "\n"
            Binding += Declaration + "\n\n"

        # - - Operators
        Binding += "// - - Operators"

        for Operator in self.Operators:
            if Operator.Get_Symbol() == "==" or Operator.Get_Symbol() == "!=":
                Binding += Operator.Get_Binding() + "\n"

        # - - Methods

        Binding += "// - - Regular methods\n"

        for Method in self.Methods:
            Prototype, Definition, Declaration = Method.Get_Binding() 
            Binding += Prototype + "\n"
            Binding += "{"
            Binding += Definition + "\n"
            Binding += "}" + "\n"
            Binding += Declaration + "\n\n"

            
        return Binding
        