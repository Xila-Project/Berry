from pygccxml import utils
from pygccxml.declarations import type_traits as Type_Traits
from pygccxml import declarations as Declarations
from pygccxml import parser as Parser
from pygccxml.declarations import type_traits_classes as Type_Traits_Classes
import os

def Clear():
    os.system("tput reset")

def Is_Namespace(Declaration):
    return type(Declaration) == Declarations.namespace_t

def Is_Class(Declaration):
    return (type(Declaration) == Declarations.class_declaration.class_t)


def Is_Operator(Declaration):
    return (type(Declaration) == Declarations.calldef_members.operator_t) or (type(Declaration) == Declarations.calldef_members.member_operator_t)


def Is_Enumeration_Type(Declaration):
    return type(Declaration) == Declarations.enumeration.enumeration_t

def Is_Typedef(Declaration):
    return type(Declaration) == Declarations.typedef.typedef_t

def Is_Destructor(Declaration):
    return type(Declaration) == Declarations.calldef_members.destructor_t and (Declaration.access_type == "public")

def Is_Declarated_Type(Declaration):
    return type(Declaration) == Declarations.declarated_t

def Get_Name(Declaration):
    return Declaration.name

def Is_Function_Pointer(Declaration):
    return Declarations.is_calldef_pointer(Declaration)

def Get_Return_Type(Declaration):
    
    #print("For : ", Get_Name(Declaration), " return type : ", str(Declaration.return_type))
    #if (Is_Typedef(Declaration.return_type)):
    #    print("Typedef !")
    #    print("Top level: " + Get_Name(Declaration.return_type.top_parent))

   # print("Declaration : ", Declaration.return_type, " base : ", Type_Traits.base_type(Ty), " is fund", Type_Traits.is_fundamental(Ty) )

    return Declaration.return_type

def Get_Function_Arguments(Declaration):
    return Declaration.arguments

def Get_Base_Type(Declaration):
    return Type_Traits.base_type(Declaration)

def Is_Void_Type(Declaration):
    return Type_Traits.is_void(Declaration)

def Is_Fundamental_Type(Declaration):
    return Type_Traits.is_fundamental(Declaration)

def Is_Boolean_Type(Declaration):
    return Type_Traits.is_bool(Declaration)


def Is_Integral_Type(Declaration):
    return Type_Traits.is_integral(Declaration)

def Is_Elaborated_Type(Declaration):
    return Type_Traits.is_elaborated(Declaration)

def Is_Float_Type(Declaration):
    return Type_Traits.is_floating_point(Declaration)

def Is_Pointer_Type(Declaration):
    return Type_Traits.is_pointer(Declaration)

def Is_Reference_Type(Declaration):
    return Type_Traits.is_reference(Declaration)

def Is_Const(Declaration):
    return Type_Traits.is_const(Declaration)

def Remove_Alias(Declaration):
    return Type_Traits.remove_alias(Declaration)

def Remove_Const_Volatile(Declaration):
    return Type_Traits.remove_cv(Declaration)





def Get_Size(Declaration):
    return Declaration.byte_size



def Find_Namespace(Declarations, Name):
    for Declaration in Declarations:
        if Is_Namespace(Declaration) and (Get_Name(Declaration) == Name):
            return Declaration