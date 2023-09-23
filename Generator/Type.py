from pygccxml import utils
from pygccxml import declarations

class Declaration_Class:
    def __init__(self, Declaration):
        self.Declaration = Declaration

    def Get_Name(self):
        # - Remove the unnecessary "::" from the beginning of the string (global namespace)
        if self.Declaration.decl_string.startswith("::"):
            return self.Declaration.decl_string.replace("::", "")
        return self.Declaration.decl_string

    def Is_Class(self):
        return isinstance(self.Declaration, declarations.class_declaration.class_t)

    def Is_Structure(self):
        return isinstance(self.Declaration, declarations.class_declaration.struct_t)

    def Is_Typedef(self):
        return isinstance(self.Declaration, declarations.typedef.typedef_t)

    def Is_Calldef(self):
        return isinstance(self.Declaration, declarations.calldef.calldef_t)

    def Get_Type(self):
        return Type_Class(self.Declaration.decl_type)

    def Get_Informations(self, Recursive = False):
        Informations = self.Get_Name() + " : "

        if self.Is_Typedef():
            Informations += "typedef "

        if self.Is_Class():
            Informations += "class "

        if self.Is_Typedef() and Recursive:
            Informations += "\n" + self.Get_Type().Get_Informations(Recursive)

        return Informations
 

class Type_Class:

    Class_Conversion_List = [
        ["lv_obj_t", "Object_Class"],
        ["_lv_obj_t", "Object_Class"],
        ["lv_style_t", "Style_Class&"],
        ["lv_color_t", "Color_Class"],
        ["lv_event_", "Event_Class"],
        ["lv_area_t", "Area_Class"],
        ["lv_timer_t", "Timer_Class"]
    ]

    def __init__(self, Declaration):
        self.Declaration = Declaration

    def Get_String(self):
        if self.Declaration.decl_string.startswith("::"):
            return self.Declaration.decl_string.replace("::", "")
        return self.Declaration.decl_string

    def Get_Build_Declaration_String(self):
        return self.Declaration.build_decl_string()

    def Is_Pointer(self):
        return type(self.Declaration) == declarations.cpptypes.pointer_t

    def Is_Constant(self):
        return type(self.Declaration) == declarations.cpptypes.const_t

    def Is_Compound(self): 
        return isinstance(self.Declaration, declarations.cpptypes.compound_t)

    def Is_Ellipsis(self):
        return isinstance(self.Declaration, declarations.cpptypes.ellipsis_t)

    def Is_Declarated(self):
        return isinstance(self.Declaration, declarations.cpptypes.declarated_t)

    def Is_Void(self):
        return declarations.type_traits.is_void(self.Declaration)

    def Is_Fundamental(self):
        return declarations.type_traits.is_fundamental(self.Declaration)

    def Is_Floating_Point(self):
        return declarations.type_traits.is_floating_point(self.Declaration)

    def Is_Boolean(self):
        return declarations.type_traits.is_bool(self.Declaration)

    def Is_Character(self):
        return isinstance(self.Declaration, declarations.cpptypes.char_t)

    def Is_Enumeration(self):
        return isinstance(self.Declaration, declarations.cpptypes.fundamental_t)

    def Is_Function(self):
        return isinstance(self.Declaration, declarations.cpptypes.free_function_type_t)

    def Get_Declaration(self):
        if self.Is_Declarated():
            return Declaration_Class(self.Declaration.declaration)
        return None

    def Get_Base(self, Recursive = False):
        if self.Is_Compound():
            Base = Type_Class(self.Declaration.base)

            if not Recursive:
                return Base

            while Base.Is_Compound():
                Base = Base.Get_Base()

                if Base.Is_Declarated():
                    Base = Base.Get_Declaration().Get_Type()
                
            return Base
        
        return None

    def Get_Size(self):
        return self.Declaration.byte_size

    def Get_Informations(self, Recursive = False):

        Informations = self.Get_String() + " : "
        if self.Is_Compound():
            Informations += "compound "
        if self.Is_Pointer():
            Informations += "pointer "
        if self.Is_Constant():
            Informations += "constant "
        if self.Is_Fundamental():
            Informations += "fundamental "
        if self.Is_Declarated():
            Informations += "declarated "
        if self.Is_Function():
            Informations += "function "

        if self.Is_Compound() and Recursive:
            Informations += "\n" + self.Get_Base().Get_Informations(Recursive)

        if self.Is_Declarated() and Recursive:
            Informations += "\n" + self.Get_Declaration().Get_Informations(Recursive)

        return Informations

    def Get_Converted_String(self):
        if self.Is_Ellipsis():
            return "..."

        Left = ""
        Middle = ""
        Right = ""

        Type = self

        while Type.Is_Compound():
            if Type.Is_Constant():
                Left += "const " + Left
            elif Type.Is_Pointer():
                Right += "*"

            Type = Type.Get_Base()

        # Resolve the final form of a declarated type

        Type_Declarated = Type 
        while Type_Declarated.Is_Declarated():
            Declaration = Type_Declarated.Get_Declaration()
            if Declaration.Is_Typedef():
                Type_Declarated = Declaration.Get_Type()
            else:
                break            

        if Type_Declarated.Is_Fundamental():
            Middle += Type.Get_String()
        elif Type_Declarated.Is_Pointer():
            if Type_Declarated.Get_Base().Is_Function():
                Middle += Type.Get_String()
        elif Type_Declarated.Is_Declarated():
            if Type_Declarated.Get_Declaration().Is_Class():
                Keep_Regular_Name = True
                
                for Old_Name, New_Name in Type_Class.Class_Conversion_List:
                    if Old_Name == Type.Get_Declaration().Get_Name():
                        Right = Right.replace("*", "")
                        Middle += New_Name
                        Keep_Regular_Name = False
                
                if Keep_Regular_Name:
                    Middle += Type.Get_Declaration().Get_Name()
            else:
                Middle += Type.Get_Declaration().Get_Name()

        if Left + Middle + Right == "":
            print("ERROR : Type_Class.Get_Converted_String() : " + self.Get_Informations(True))
            print("- " + Type.Get_Informations(True))
            print("- " + Type_Declarated.Get_Informations(True))

        return Left + Middle + Right

        