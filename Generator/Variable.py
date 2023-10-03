from pygccxml import utils
from pygccxml import declarations

import re

import Type

class Variable_Class():
    def __init__(self, Declaration):
        self.Declaration = Declaration

    def Get_Name(self) -> str:
        return self.Declaration.name

    def Get_Type(self) -> Type.Type_Class:
        return Type.Type_Class(self.Declaration.decl_type)    


class Argument_Class(Variable_Class):
    def __init__(self, Declaration):
        Variable_Class.__init__(self, Declaration)

    def Get_Default_Value(self) -> str:
        Default_Value = self.Declaration.default_value

        if Default_Value != None:
            if Default_Value.startswith("::"):
                Default_Value = Default_Value[2:]

            if Default_Value.startswith("Xila_Namespace::"):
                Default_Value = Default_Value.replace("Xila_Namespace::", "", 1)

        return Default_Value

    def Is_Optional(self) -> bool:
        return self.Get_Default_Value() != None
