from pygccxml import utils
from pygccxml import declarations

import Method
import Basics
import Namespace

import Type

class Class_Class(Type.Type_Class):
    def __init__(Declaration, Module_Class = False):
        Type.Type_Class(Declaration)
        
        self.Module_Class = Module_Class
        self.Parent_Namespace = Namespace.Namespace_Class(self.Declaration.parent)

        self.Bases = []
        for Hierarchy_Information in self.Declaration.bases:
            self.Bases.append(Class_Class(Hierarchy_Information.related_class))


        # - Search for class methods

        # - - Search for constructors
        self.Constructors = []
        for Constructor in self.Declaration.constructors():
            if (Constructor.access_type == "public" and not(Declaration.is_artificial)):
                self.Constructors.append(Method.Constructor_Class(self, Constructor))

        # - - Search for destructor
        self.Destructor = declarations.type_traits_classes.has_destructor()

        # - - Search for operators
        self.Operators = []
        for Operator in self.Declaration.operators():
            if (Operator.access_type == "public"):
                self.Operators.append(Method.Operator_Class(self, Operator))

        # - - Search for regular methods
        self.Methods = []

        for Method in self.Declaration.member_functions():
            if (isinstance(Method, declarations.calldef_members.member_function_t) and (Method.access_type == "public") and not(Method.has_ellipsis)):
                self.Methods.append(Method.Method_Class(self, Method))

    def Get_Module_Name() -> str:
        return self.Declaration.name.replace("_Class", "")

    def Get_Name() -> str:
        return self.Declaration.name

    def Get_Berry_Name() -> str:
        return "Berry_" + self.Get_Type_Name()

    def Get_Type_Name() -> str:
        return self.Declaration.name.replace("_Class", "_Type")

    def Is_Module_Class() -> bool:
        return self.Is_Module_Class

    def Get_Berry_Declaration() -> str:
        return self.Get_Type_Name()

    def Get_Berry_Definition() -> (str, list):

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

        if Destructor:
            Declarations.append(Destructor.Get_Berry_Declaration())

        Declaration.append("")

        for Operator in self.Operators:
            Declarations.append(Operator.Get_Berry_Declaration())

        Declaration.append("")

        for Method in self.Methods:
            Declarations.append(Method.Get_Berry_Declaration())

        return (Header, Declarations)

    def Get_Generated_Header_File_Path() -> str:
        return "../generate/be_fixed_Berry_" + self.Get_Type_Name() + ".h"
    
    def Get_Binding() -> str:
        Binding = ""
        
        Binding += "// - Methods\n"

        # - - Constructors
        Binding += "// - - Constructors\n"

        for Constructor in self.Constructor:
            if not Constructor.Is_Copy():
                Prototype, Definition, Declaration = Constructor.Get_Binding()
                Binding += Prototype + "\n"
                Binding += "{"
                Binding += Definition + "\n"
                Binding += "}" + "\n\n"
                Binding += Declaration + "\n"

        # - - Destructors
        Binding += "// - - Destructors\n"

        if Destructor:
            Binding += Destructor.Get_Binding() + "\n"

        # - - Operators
        Binding += "// - - Operators"

        for Operator in self.Operators:
            if Operator.Get_Symbol() == "==" or Operator.Get_Symbol == "!=":
                Binding += Method.Get_Binding() + "\n"

        # - - Methods

        return Binding
        