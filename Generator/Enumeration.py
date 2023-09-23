from pygccxml import declarations

class Enumeration_Class:
    def __init__(self, Declaration : declarations.enumeration.enumeration_t):
        self.Declaration = Declaration

    def Get_Name(self) -> str:
        return self.Declaration.name

    def Get_Berry_Declarations(self) -> list:
        Declarations = []

        for Key, Value in self.Declaration.get_name2value_dict().items():
            Declaration += "\t" + self.Get_Name().replace("_Type", "")
            if self.Get_Name() != "":
                Declaration += "_"
            Declaration += Key + ", int(" + str(Value) + ")\n"
            Declarations.append(Declaration)

        return Declarations

