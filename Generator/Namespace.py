from pygccxml import utils
from pygccxml import declarations 

import Class
import Enumeration

import Exclusion

class Namespace_Class:
    def __init__(self, Declaration):
        self.Declaration = Declaration

    def Get_Name(self) -> str:
        return self.Declaration.name

    def Get_Declarations(self):
        return self.Declaration.declarations

    def Find_Class(self, Class_Name):
        for Declaration in self.Get_Declarations():
            if isinstance(Declaration, declarations.class_declaration.class_t) and (Declaration.name == Class_Name):
                return Class.Class_Class(Declaration)

    def Find_Classes(self, Recursive = False):
        Classes = []
        
        PyGCCXML_Classes = self.Declaration.classes(recursive=Recursive, allow_empty=True)
        
        for PyGCCXML_Class in PyGCCXML_Classes:
            if not(Exclusion.Is_Class_Excluded(PyGCCXML_Class)):
                Classes.append(Class.Class_Class(PyGCCXML_Class))

        return Classes

    def Find_Enumerations(self):
        Enumerations = []
        PyGCCXML_Enumerations = self.Declaration.enumerations(allow_empty=True)

        for PyGCCXML_Enumeration in PyGCCXML_Enumerations:
            Enumerations.append(Enumeration.Enumeration_Class(PyGCCXML_Enumeration))

        return Enumerations 


    def Find_Namespace(self, Namespace_Name):
        return Namespace_Class(self.Declaration.namespace(Namespace_Name))

    