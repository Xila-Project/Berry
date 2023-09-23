from pygccxml import utils
from pygccxml import declarations 

import Class
import Enumeration

import Basic
import Exclusion

class Namespace_Class:
    def __init__(Declaration):
        self.Declaration = Declaration

    def Get_Name() -> str:
        return self.Declaration.name

    def Get_Declarations():
        return self.Declaration.declarations

    def Find_Class(self, Class_Name):
        for Declaration in self.Get_Declarations():
            if Basic.Is_Class(Declaration) and (Get_Name(Declaration) == Name):
                return Class.Class_Class(Declaration)

    def Find_Classes(self, Recursive = False):
        Classes = []
        try:
            PyGCCXML_Classes = self.Declaration.classes(recursive=Recursive)
        except: 
            return Classes

        for PyGCCXML_Class in PyGCCXML_Classes:
            if not(Exclusion.Is_Class_Excluded(PyGCCXML_Class)):
                Classes.append(Class.Class_Class(PyGCCXML_Class))

        return Classes

    def Find_Enumerations(self):
        Enumerations = []
        try:
            PyGCCXML_Enumerations = self.Get_Declarations.enumerations()
        except:
            return Enumerations

        for PyGCCXML_Enumeration in PyGCCXML_Enumerations:
            Enumerations.append(Enumeration.Enumeration_Class(PyGCCXML_Enumeration))

        return Enumerations 


    def Find_Namespace(self, Namespace_Name):
        self.Declaration.namespace(Module_Name + "_Types")

    