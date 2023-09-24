import uuid

from pygccxml import utils
from pygccxml import declarations


import Paths

import Type
import Variable

import Class

class Method_Class:

    def __init__(self, Class, Declaration):
        self.Declaration = Declaration
        self.Class = Class            

        # Add UUID for binding name since there may be collision in binding function names.
        self.UUID = str(uuid.uuid4()).replace("-", "_").upper()

        # - Collect method arguments
        self.Arguments = []    
        for Argument in self.Declaration.arguments:
            Arguments.append(Variable.Argument_Class(Argument))

    def Get_Class(self) -> Class.Class_Class:
        return self.Class

    def Get_Berry_Declaration(self):
        return self.Get_Berry_Name() + ", ctype_func(" + self.Get_Binding_Function_Name() + ")"

    def Get_Name(self) -> str:
        return self.Declaration.name

    def Get_Berry_Name(self) -> str:
        return self.Declaration.name

    def Get_UUID(self) -> str:
        return self.UUID

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_" + self.Get_Name() + "_" + self.Get_UUID()
    
    def Get_Return_Type(self) -> Type.Type_Class:
        return Type.Type_Class(self.Declaration.return_type)

    def Get_Arguments(self) -> list:
        return self.Arguments

    def Is_Static(self) -> bool:
        return self.Declaration.has_static

    def Convert_Type(Type) -> dict:
        Result = dict(C_Type = "", Berry_Type = "", Casting = None, Need_New_Buffer = False , Override_Return_Type = False)
        
        # - Fundamental types
        if Type.Is_Fundamental():
            # - Boolean (`bool`)
            if Type.Is_Boolean():
                # Regular boolean, no conversion needed
                Result["C_Type"] = "bool"
                Result["Berry_Type"] = "b"
            # - Character (`char`)
            elif Type.Is_Character():
                Result["C_Type"] = "char"
                Result["Berry_Type"] = "i"
            # - Integral (`int` or `unsigned int` and any `long` or `short` variation)
            elif Type.Is_Integral():
                Result["Casting"] = self.Type.Get_String()
                Result["C_Type"] = "int"
                Result["Berry_Type"] = "i"
            # - Floating point (`float`, `double` and any `long` variation)
            elif Type.Is_Floating_Point():
                Result["Casting"] = self.Type.Get_String()
                Result["C_Type"] = "breal"
                Result["Berry_Type"] = "f"
        # - Declared types
        elif Type.Is_Declarated():
            Declaration = self.Type.Get_Declaration()
            # - Class or structure
            if Declaration.Is_Class():
                # - 
                if Declaration.Get_Name() == "String_Class":
                    Result["Casting"] = "*"
                    Result["C_Type"] = "const char*"
                    Result["Berry_Type"] = "s"
                    # TODO : Add conversion from const char* to String_Class
                else:
                    Result["Casting"] = "*"
                    Result["C_Type"] = Type.Get_String() + "*"
                    Result["Berry_Type"] = "(" + Type.Get_String() + ")"
            # - Enumeration
            elif Declaration.Is_Enumeration():
                Result["Casting"] = "(" + Type.Get_String() + ")"
                Result["C_Type"] = "int"
                Result["Berry_Type"] = "i"
            # - Typedef
            elif Declaration.Is_Typedef():
                Result = Convert_Type(Declaration.Get_Type())
        # - Function
        elif Type.Is_Function():
            Result["C_Type"] = "void (* %s)(void)"
            Result["Berry_Type"] = "^^"
        # - Compound types (pointer, reference, array, const etc.)
        elif Type.Is_Compound():
            Result = Convert_Type(Type.Get_Base())
            # - Pointer
            if Type.Is_Pointer(): 
                # - Pointer to a class or structure
                if Result["Berry_Type"].startswith("("):
                    Result["Casting"] = "" # Remove the casting since berry already use pointer
                    if Result["C_Type"].startswith("(String_Class"):
                        Result["Casting"] = "*"
                        Result["C_Type"] = "const char*"
                        Result["Berry_Type"] = "s"
                        Nrr
                elif Type.Get_Base().Get_Size() == 

                # - Pointer to a function
                elif Result["Berry_Type"].startswith("^^"):
                    pass
                # - Pointer to a char
                elif Result["C_Type"] == "char":
                    Result["C_Type"] = "const char*"
                    Result["Berry_Type"] = "s"
                    Result["Override_Return_Type"] = True            
                    Result["Need_New_Buffer"] = True
                
                # - Other kind of pointer
                else:
                    Result["Berry_Type"] = "."
            # - Reference
            elif Type.Is_Reference():
                Result["Casting"] = "*" # Need to dereference the pointer for reference
            elif self.Type.Is_Constant():

                Result["Override_Return_Type"] = False
                Result["Need_New_Buffer"] = False

        return Result


        def Is_Optional(self) -> bool:
            return self.Type.Is_Optional()

        def Get_Name(self) -> str:
            return self.Name

        

    class Berry_Return_Class(Berry_Argument_Class):
        def __init__(self, Declaration, Berry_Declaration):
            Berry_Argument_Class.__init__(self, Declaration, Berry_Declaration, None)
    
    def Get_Binding(self) -> (str, str, str):


        Return = (None, None) 
        Function_Arguments = []

        if not(self.Get_Class().Is_Module_Class()):
            if self.Is_Static():
                Function_Arguments.append(Berry_Argument_Class(None, "-", None))    # Discard self argument for static methods
            else:
                Function_Arguments.append((self.Get_Class().Get_String() + "* Self", ".", None))

        Optional_Already_Defined = False
        Virtual_Machine_Already_Defined = False
        Next_May_Be_Buffer_Size = False
        Override_Return_Type = False

        # - Collect and convert arguments to Berry types
        for i, Argument in enumerate(self.Get_Arguments()):

            Berry_Type = None
            Casting = ""

            Left = ""
            Right = ""
            Middle = ""
            Default_Value = ""

            if (Argument.Is_Optional()) and not(Optional_Already_Defined):
                Function_Arguments.append((None, "[", None))
                Optional_Already_Defined = True

            Type = Argument.Get_Type()


            while Type.Is_Compound():
                if Type.Is_Constant():
                    Left += "const " + Left
                elif Type.Is_Pointer():
                    Right += "*"

                Type = Type.Get_Base()

            Type_Declarated = Type
            while Type_Declarated.Is_Declarated():
                Declaration = Type_Declarated.Get_Declaration()
                if Declaration.Is_Typedef():
                    Type_Declarated = Declaration.Get_Type()
                else:
                    break

            if not(Type_Declarated.Is_Integral()):
                Next_May_Be_Buffer_Size = False
        
            if Type_Declarated.Is_Fundamental():
                if Right == "*":
                    if "const" in Left:
                        Berry_Type = "s"
                        Middle = "char"
                    else:
                        # - Virtual machine buffer needed
                        if not Virtual_Machine_Already_Defined:
                            # - Add virtual machine as first argument
                            Function_Arguments.insert(0, ("bvm* V", "@", None))
                            Virtual_Machine_Already_Defined = True  
                            Next_May_Be_Buffer_Size = True

                elif Type_Declarated.Is_Boolean():
                    Berry_Type = "b"
                    Middle = "bool"
                elif Type_Declarated.Is_Floating_Point():
                    Berry_Type = "f"
                    if Type_Declarated.Get_Size() > 4:  # Cast double and long double to float since Berry only supports float (currently)
                        Casting = "(" + Type.Get_String() + ")"
                    Middle = "float"
                else:
                    if Type_Declarated.Is_Integral() and Next_May_Be_Buffer_Size:
                        Casting = "(" + Argument.Get_Name() + "> sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : "
                        Next_May_Be_Buffer_Size = False                    
                    else:
                        Casting = "(" + Type.Get_String() + ")"

                    Berry_Type += "i"
                    Middle = "int"
            elif Type_Declarated.Is_Pointer():
                if Type_Declarated.Get_Base().Is_Function():
                    Berry_Type += "^^"
            elif Type_Declarated.Is_Declarated():    
                Declaration = Type_Declarated.Get_Declaration()
                if Declaration.Is_Enumeration():
                    Middle = "int"
                    Berry_Type += "i"
                    Casting = "(" + Type.Get_Name() + ")"
                elif Declaration.Is_Class() or Declaration.Is_Structure():
                    Middle = Type.Get_Name()
                    Right = "*"
                    Berry_Type += "."
                    Casting = "*"

            if Argument.Is_Optional():
                Default_Value = " = "
                if not(Type_Declarated.Is_Declarated()):
                    if not(Type_Declarated.Get_Declaration().Is_Class()):
                        if Type_Declarated.Is_Reference():
                            Default_Value += "&"
                else:
                    if Type_Declarated.Get_Declaration().Is_Enumeration():
                        Default_Value += "(int)"
                Default_Value += Argument.Get_Default_Value()

            Passed_Argument = Casting + Argument.Get_Name()

            if Type_Declarated.Is_Pointer() and Type_Declarated.Get_Base().Is_Function():
                Argument_String = Type.Get_String().replace("(*", "(* " + Argument.Get_Name())
            else:
                Argument_String = Left + Middle + Right + " " + Argument + Default_Value

            Function_Arguments.append((Argument_String, Berry_Type, Passed_Argument))

        # - Return type
        if ()

        Optional_Already_Defined = False

class Constructor_Class(Method_Class):
    def __init__(self, Class, Declaration):
        Method_Class.__init__(Class, Declaration)

    def Get_Berry_Name(self) -> str:
        return "init"

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_Constructor_" + self.Get_UUID()

    def Is_Copy(self) -> bool:
        return declarations.type_traits.is_copy_constructor(self.Declaration)

class Destructor_Class(Method_Class):
    def __init__(self, Class, Declaration):
        Method_Class.__init__(Class, Declaration)

    def Get_Berry_Name() -> str:
        return "deinit"

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_Destructor_" + self.Get_UUID() 

class Operator_Class(Method_Class):
    def __init__(self, Class, Declaration):
        Method_Class.__init__(Class, Declaration)

    def Get_Berry_Name() -> str:
        return self.Get_Symbol()

    def Get_Binding() -> (str, str, str):
        Prototype = ""
        Prototype += "bool " + self.Get_Binding_Function_Name() + "(" + self.Get_Class().Get_String() + "* Self, " + self.Get_Class().Get_String() + "* A_0)"
        
        Definition = ""
        Definition += "return *Self " + self.Get_Symbol() + " *A_0;"
        
        Declaration = "BE_FUNC_CTYPE_DECLARE(" + self.Get_Binding_Function_Name() + ", \"b\", \"..\")"

        return (Prototype, Definition, Declaration)

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_Operator_" + self.Get_UUID()

    def Get_Symbol() -> str:
        return self.Declaration.symbol
