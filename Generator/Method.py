import uuid

from pygccxml import utils
from pygccxml import declarations

import Paths

import Type
import Variable

class Method_Class:

    def __init__(self, Class, Declaration):
        self.Declaration = Declaration
        self.Class = Class            

        # Add UUID for binding name since there may be collision in binding function names.
        self.UUID = str(uuid.uuid4()).replace("-", "_").upper()[0:8]

        # - Collect method arguments
        self.Arguments = []    
        for Argument in self.Declaration.arguments:
            self.Arguments.append(Variable.Argument_Class(Argument))

    def Get_Class(self):
        return self.Class

    def Get_Berry_Declaration(self):
        return  self.Get_Berry_Name() + ", ctype_func(" + self.Get_Binding_Function_Name() + ")"

    def Get_Name(self, Full : bool = False) -> str:
        if Full:
            return self.Get_Class().Get_String() + "::" + self.Declaration.name
        return self.Declaration.name

    def Get_Calling_String(self) -> str:
        String = ""

        if self.Is_Static():
            String += self.Get_Name(True)
        else:
            if self.Get_Class().Is_Module_Class():
                String += self.Get_Class().Get_Name().replace("_Class", "") + "." + self.Get_Name(False)
            else:
                String += "Self->" + self.Get_Name(False)

        return String

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

    def Convert_Type(self, Type) -> dict:
        Result = dict(C_Type = "", Berry_Type = "", Casting = "", Override_Return_Type = None, Need_Virtual_Machine = False, Next_May_Be_Buffer_Size = False)
        
        # - Void
        if Type.Is_Void():
            Result["C_Type"] = "void"
            Result["Berry_Type"] = ""
        # - Fundamental types
        elif Type.Is_Fundamental():
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
                Result["Casting"] = "(" + Type.Get_String() + ")"
                Result["C_Type"] = "int"
                Result["Berry_Type"] = "i"
            # - Floating point (`float`, `double` and any `long` variation)
            elif Type.Is_Floating_Point():
                Result["Casting"] = "(" + Type.Get_String() + ")"
                Result["C_Type"] = "breal"
                Result["Berry_Type"] = "f"
        # - Declared types
        elif Type.Is_Declarated():
            Declaration = Type.Get_Declaration()
            # - Class or structure
            if Declaration.Is_Class():
                # - If it's a String_Class, we use the String_Type
                if Declaration.Get_Name() == "String_Class":
                    Result["Casting"] = "(String_Type)"
                    Result["C_Type"] = "const char*"
                    Result["Berry_Type"] = "s"
                else:
                    Result["Casting"] = "*"
                    Result["C_Type"] = Type.Get_String() + "*"
                    # If the class is from Xila namespace, it must be already declared in berry
                    if Type.Get_String(Raw=True).startswith("Xila_Namespace::"):
                        Result["Berry_Type"] = "(" + Type.Get_String().replace("_Types", "") + ")"
                    # For other classes, we doesn't specify the type
                    else:
                        Result["Berry_Type"] = "."
            # - Enumeration
            elif Declaration.Is_Enumeration():
                Result["Casting"] = "(" + Type.Get_String() + ")"
                Result["C_Type"] = "int"
                Result["Berry_Type"] = "i"
            # - Typedef
            elif Declaration.Is_Typedef():
                Result = self.Convert_Type(Declaration.Get_Type())
        # - Function
        elif Type.Is_Function():
            Result["C_Type"] = "void (* %s)(void)"
            Result["Berry_Type"] = "^^"
        # - Compound types (pointer, reference, array, const etc.)
        elif Type.Is_Compound():
            Result = self.Convert_Type(Type.Get_Base())
            # - Pointer
            if Type.Is_Pointer(): 
                # - Pointer to a class or structure
                if Result["Berry_Type"].startswith("("):
                    Result["Casting"] = "" # Remove the casting since berry already use pointer
                # - Pointer to a function
                elif Result["Berry_Type"].startswith("^^"):
                    pass # Already done
                # - Pointer to a `const char*`
                elif Result["C_Type"] == "const char":
                    Result["C_Type"] = "const char*"
                    Result["Override_Return_Type"] = None
                # - Pointer to a `char*`
                elif Result["C_Type"] == "char":
                    Result["C_Type"] = "char*"
                    Result["Berry_Type"] = "s"
                    Result["Override_Return_Type"] = dict(C_Type = "char*", Berry_Type = "s")
                    Result["Next_May_Be_Buffer_Size"] = True
                # - Other kind of pointer
                else:
                    Result["Casting"] = "*(" + Result["C_Type"] + "*)"
                    Result["C_Type"] = "void*"
                    Result["Berry_Type"] = "c"
            # - Reference
            elif Type.Is_Reference():
                # - Reference to a String_Class
                if Type.Get_Base().Get_String() == "String_Class" or Type.Get_Base().Get_String() == "String_Type":
                    Result["Casting"] = "#String_Type&#"
                    Result["C_Type"] = "char*"
                    Result["Berry_Type"] = "s"
                    Result["Override_Return_Type"] = dict(C_Type = "char*", Berry_Type = "s")
                # - Reference to a class or structure
                elif Result["Berry_Type"].startswith("("):
                    Result["Casting"] = "*" # Dereference the pointer for reference
                # - Other kind of reference
                else:
                    Result["Casting"] = "*(" + Result["C_Type"] + "*)" # Dereference the pointer for reference
                    Result["C_Type"] = "void*"
                    Result["Berry_Type"] = "c"
            # - Array
            elif Type.Is_Array():
                Result["Casting"] = "#List#"
                Result["C_Type"] = "blist*"
                Result["Berry_Type"] = "(list)"
                Result["Need_Virtual_Machine"] = True
                Result["Next_May_Be_Buffer_Size"] = True
                # No need to override return type since we directly modify the list
            elif Type.Is_Constant():
                print("Constant !")
                if Result["Casting"] == "#List#":
                    Result["C_Type"] = "#const List#"
                    Result["Override_Return_Type"] = None
                elif Result["Casting"] == "#String_Type&#":
                    Result["Casting"] = "(String_Type)"
                    Result["C_Type"] = "const char*"
                    Result["Berry_Type"] = "s"
                    Result["Override_Return_Type"] = None
                else:
                    Result["C_Type"] = "const " + Result["C_Type"]
            
        print(f"{Type.Get_String()}: {Result}")
        return Result
    
    def Get_Binding(self, Is_Constructor = False) -> (str, str, str):
        Return = (None, None) 

        Function_Arguments = []
        Definition_Preamble = []
        Definition_Postamble = []

        if not(self.Get_Class().Is_Module_Class()):
            if self.Is_Static():
                Function_Arguments.insert(0, (None, "-", None))    # Discard self argument for static methods
            else:
                Function_Arguments.insert(0, (self.Get_Class().Get_String() + "* Self", ".", None))

        Optional_Already_Defined = False
        Virtual_Machine_Already_Defined = False
        Next_May_Be_Buffer_Size = False
        Previous_Argument = None

        # - Collect and convert arguments to Berry types
        for Argument in self.Get_Arguments():

            # - Optional arguments
            if Argument.Is_Optional() and not Optional_Already_Defined:
                Function_Arguments.append((None, "[", None))
                Optional_Already_Defined = True

            # - Convert type to Berry type
            Converted_Type = self.Convert_Type(Argument.Get_Type())

            # - If the previous argument was an array or a string, the next argument may be the buffer size
            if Next_May_Be_Buffer_Size:
                if Converted_Type["Berry_Type"] == "i":
                    if Function_Arguments[-1][1] == "s":
                        Function_Arguments.append((None, None, f"strlen({Previous_Argument.Get_Name()}) + 1"))
                    elif Function_Arguments[-1][1] == "(list)":
                        Function_Arguments.append((None, None, f"be_list_count({Previous_Argument.Get_Name()})"))

                Previous_Argument = None
                Next_May_Be_Buffer_Size = False
            
            # - If the current argument is an array or a string, the next argument may be the buffer size
            if Converted_Type["Next_May_Be_Buffer_Size"]:
                Previous_Argument = Argument
                Next_May_Be_Buffer_Size = True

            # - Virtual machine
            if (Converted_Type["Need_Virtual_Machine"] or Is_Constructor) and not Virtual_Machine_Already_Defined:
                Function_Arguments.insert(0, ("bvm* Virtual_Machine", "@", None))
                Virtual_Machine_Already_Defined = True

            # - Specials castings

            # - - Arrays
            if Converted_Type["Casting"] == "#List#" or Converted_Type["Casting"] == "#const List#":
                #Definition_Preamble.append("if (!Berry_List_Is_Homogeneous_Type(List, BE_CLASS)) return Result::Error;")
                Definition_Preamble.append(f"auto Temporary_Array = Berry_List_To_Type_Array<{Type.Get_Base()}>(Virtual_Machine, {Argument.Get_Name()});")
                if Converted_Type["Casting"] == "#const List#":
                    Definition_Postamble.append(f"be_free(Virtual_Machine, Temporary_Array, sizeof({Type.Get_Base()}) * be_list_count({Argument.Get_Name()}));")
                else:
                    Definition_Postamble.append(f"Type_To_Berry_List(Virtual_Machine, Temporary_Array, {Argument.Get_Name()});")

                Function_Arguments.append(Converted_Type["C_Type"] + Argument.Get_Name(), Converted_Type["Berry_Type"], "Temporary_Array")
            # - - String references
            elif Converted_Type["Casting"] == "#String_Type&#":
                Definition_Preamble.append("String_Type Temporary_String;")
                Definition_Preamble.append(f"Temporary_String.Set_Buffer({Argument.Get_Name()}, strlen({Argument.Get_Name()}) + 1);")
           
                Definition_Preamble.append(f"Temporary_String.Clear_Pointer();")
           
                Function_Arguments.append((Converted_Type["C_Type"] + Argument.Get_Name(), Converted_Type["Berry_Type"], "Temporary_String"))
            # - - Function pointer
            elif Converted_Type["Berry_Type"] == "^^":
                Function_Arguments.append((Converted_Type["C_Type"].replace("%s", Argument.Get_Name()), Converted_Type["Berry_Type"], Converted_Type["Casting"] + Argument.Get_Name()))
            # - - Usual castings
            else:
                if Argument.Is_Optional():
                    Function_Arguments.append((Converted_Type["C_Type"] + " " + Argument.Get_Name() + " = " + Argument.Get_Default_Value(), Converted_Type["Berry_Type"], Converted_Type["Casting"] + Argument.Get_Name()))
                else:
                    Function_Arguments.append((Converted_Type["C_Type"] + " " + Argument.Get_Name(), Converted_Type["Berry_Type"], Converted_Type["Casting"] + Argument.Get_Name()))

            # - Override return type
            if Converted_Type["Override_Return_Type"] and Return == (None, None):
                Return = (Converted_Type["Override_Return_Type"]["C_Type"], Converted_Type["Override_Return_Type"]["Berry_Type"])

        Definition_Middle = []
        Concatenated_Passed_Arguments = ""
        for i, Argument in enumerate(Function_Arguments):
            if Argument[2] is not None:
                Concatenated_Passed_Arguments += Argument[2] + ", "
        if Concatenated_Passed_Arguments.endswith(", "):
            Concatenated_Passed_Arguments = Concatenated_Passed_Arguments[:-2]

        # - Constructor
        if Is_Constructor:
            Return = ("void*", "+_p") # Override return type
            Definition_Preamble.append("void* Self = be_malloc(V, sizeof(" + self.Get_Class().Get_String() + "));")
            if len(Definition_Postamble) > 0:
                Definition_Middle.append("new (Self) " + self.Get_Calling_String() + "(" + Concatenated_Passed_Arguments + ");")
                Definition_Postamble.insert(-1, "return Self;")
            else:
                Definition_Middle.append("return new (Self) " + self.Get_Name(True) + "(" + Concatenated_Passed_Arguments + ");")
        # - No return type defined
        elif Return == (None, None):
            Converted_Return_Type = self.Convert_Type(self.Get_Return_Type())
            Return = (Converted_Return_Type["C_Type"], Converted_Return_Type["Berry_Type"])
       
        # - No return needed
        if Return[0] == "void":
            
            Definition_Middle.append(f"{self.Get_Calling_String()}({Concatenated_Passed_Arguments});")
        # - Return needed
        else:
            # - If return is the last line of the function, no need to store it in a variable
            if len(Definition_Postamble) > 0:
                Definition_Middle.append(f"auto Return_Variable = {self.Get_Calling_String()}({Concatenated_Passed_Arguments});")
                Definition_Postamble.insert(-1, f"return Return_Variable;")
            else:
                Definition_Middle.append(f"return {self.Get_Calling_String()}({Concatenated_Passed_Arguments});")
         

        Concatenated_Function_Arguments = ""
        for i, Argument in enumerate(Function_Arguments):
            if Argument[0] is not None:
                Concatenated_Function_Arguments += Argument[0] + ", "
        if Concatenated_Function_Arguments.endswith(", "):
            Concatenated_Function_Arguments = Concatenated_Function_Arguments[:-2]

        Prototype = f"{Return[0]} {self.Get_Binding_Function_Name()}({Concatenated_Function_Arguments})"

        Concatenated_Berry_Arguments = ""
        for Argument in Function_Arguments:
            if Argument[1] is not None:
                Concatenated_Berry_Arguments += Argument[1]

        Berry_Declaration = "BE_FUNC_CTYPE_DECLARE(" + self.Get_Binding_Function_Name() + ", \"" + Return[1] + "\", \"" + Concatenated_Berry_Arguments + "\")"

        Definition = ""
        for Line in Definition_Preamble + Definition_Middle + Definition_Postamble:
            Definition += Line + "\n"

        return (Prototype, Definition, Berry_Declaration)

class Constructor_Class(Method_Class):
    def __init__(self, Class, Declaration):
        super().__init__(Class, Declaration)

    def Get_Berry_Name(self) -> str:
        return "init"

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_Constructor_" + self.Get_UUID()

    def Is_Copy(self) -> bool:
        return declarations.type_traits_classes.is_copy_constructor(self.Declaration)

    def Get_Binding(self) -> (str, str, str):
        return Method_Class.Get_Binding(self, Is_Constructor=True)

class Destructor_Class(Method_Class):
    def __init__(self, Class, Declaration):
        super().__init__(Class, Declaration)

    def Get_Berry_Name(self) -> str:
        return "deinit"

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_Destructor_" + self.Get_UUID() 

    def Get_Binding(self) -> (str, str, str):
        Prototype = "void " + self.Get_Binding_Function_Name() + "(bvm* Virtual_Machine," + self.Get_Class().Get_String() + "* Self)"

        Definition = "if (!Self)\n"
        Definition += "return;\n"
        Definition += "Self->" + self.Get_Name(True) + "();\n"
        Definition += "be_free(Virtual_Machine, Self, sizeof(" + self.Get_Class().Get_String() + "));\n"

        Declaration = "BE_FUNC_CTYPE_DECLARE(" + self.Get_Binding_Function_Name() + ", \"\", \"@.\")"

        return (Prototype, Definition, Declaration)

class Operator_Class(Method_Class):
    def __init__(self, Class, Declaration):
        super().__init__(Class, Declaration)

    def Get_Berry_Name(self) -> str:
        return self.Get_Symbol()

    def Get_Binding(self) -> (str, str, str):
        Prototype = ""
        Prototype += "bool " + self.Get_Binding_Function_Name() + "(" + self.Get_Class().Get_String() + "* Self, " + self.Get_Class().Get_String() + "* A_0)"
        
        Definition = ""
        Definition += "return *Self " + self.Get_Symbol() + " *A_0;"
        
        Declaration = "BE_FUNC_CTYPE_DECLARE(" + self.Get_Binding_Function_Name() + ", \"b\", \"..\")"

        return (Prototype, Definition, Declaration)

    def Get_Binding_Function_Name(self) -> str:
        return "Berry_" + self.Get_Class().Get_Name() + "_Operator_" + self.Get_UUID()

    def Get_Symbol(self) -> str:
        return self.Declaration.symbol
