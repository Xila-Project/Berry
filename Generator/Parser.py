from pygccxml import utils
from pygccxml import declarations
from pygccxml import parser

import re
import json
import os

import Namespace
import Paths

def Get_Compilation_Commands() -> str:
    Compilation_Database = open(Paths.Get_Compilation_Database_Path(), "r")

    Compilation_Database_Parsed = json.load(Compilation_Database)

    Compilation_Commands = ""
    for Command in Compilation_Database_Parsed:
        Compilation_Commands += Command["command"]

    return Compilation_Commands

def Get_Compiler_Path(Compilation_Commands : str) -> str:
    return re.findall(r'^(\/.*?g\+\+)', Compilation_Commands)[0]

def Get_Include_Paths(Compilation_Commands : str) -> list:
    Include_Paths_Raw = re.findall(r'-I([^\s]+)', Compilation_Commands)
    Include_Paths = []
    for Include_Path in Include_Paths_Raw:
        if not(Include_Path.startswith("/")):
            Include_Path = os.path.join(Paths.Get_Code_Path(), Include_Path)
        if Include_Path not in Include_Paths:
            Include_Paths.append(Include_Path)

    return Include_Paths

def Get_Defines(Compilation_Commands : str) -> list:
    Defines_Raw = re.findall(r'-D([^\s]+)', Compilation_Commands)
    Defines = []
    for Define in Defines_Raw:
        if Define not in Defines:
            Defines.append(Define)

    return Defines

def Parse() -> Namespace.Namespace_Class:

    XML_Generator_Path, XML_Generator_Name = utils.find_xml_generator()

    Compilation_Commands = Get_Compilation_Commands()

    Compiler_Path = Get_Compiler_Path(Compilation_Commands)
    Include_Paths = Get_Include_Paths(Compilation_Commands)
    Defines = Get_Defines(Compilation_Commands)
    Flags = "-m32 -fpermissive -fsyntax-only -ferror-limit=200 -std=gnu++11 -Wignored-attributes -fexceptions -fms-extensions -frtti  -mlong-calls -ffunction-sections -fdata-sections -Wno-error=unused-function -Wno-error=unused-variable -Wno-error=deprecated-declarations -Wno-unused-parameter -Wno-sign-compare -ggdb -freorder-blocks -Wwrite-strings -fstack-protector -Wno-error=unused-but-set-variable -fno-jump-tables -MMD -Og -g2 -ggdb2"

    XML_Generator_Configuration = parser.xml_generator_configuration_t(
        xml_generator_path=XML_Generator_Path,
        xml_generator=XML_Generator_Name,
        compiler_path=Compiler_Path,
        define_symbols=Defines,
        cflags=Flags,
        include_paths=Include_Paths
    )

    Declarations = parser.parse([Paths.Get_Xila_Header_Path()], XML_Generator_Configuration)

    return Namespace.Namespace_Class(declarations.get_global_namespace(Declarations))