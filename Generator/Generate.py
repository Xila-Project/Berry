from pygccxml import utils
from pygccxml import declarations as Declarations
from pygccxml import parser as Parser
import os
from Basics import *
from Bindings import *
import json
import re
import shutil
import subprocess
import Exclusion
import traceback

def Generate_Class(Generated_File, Xila_Namespace, Class, Module_Name):
    Generated_File.write("\n// - Functions\n")
    # Constructors
    Generated_File.write("\n// - - Constructors\n")
    for Member in Class.get_members():
       if (Is_Constructor(Member) and not(Is_Copy_Constructor(Member))):        
            Generated_File.write(Generate_Binding_Function(Member, Module_Name, False))


    Generated_File.write("\n// - - Destructors\n")

    # Destructor
    for Member in Class.get_members():
        if (Is_Destructor(Member)):
            Generated_File.write(Generate_Binding_Function(Member, Module_Name, False)) 

    Generated_File.write("\n// - - Functions\n")

    # Function
    for Member in Class.get_members():
        if(Is_Function(Member)):
            Generated_File.write(Generate_Binding_Function(Member, Module_Name, False))
           
    Generated_File.write("// - - Operators\n")
    try:
        for Operator in Class.operators(symbol="=="):
            Generated_File.write(Generate_Binding_Function(Operator, Module_Name, False))
        for Operator in Class.operators(symbol="!="):
            Generated_File.write(Generate_Binding_Function(Operator, Module_Name, False))
    except:
        pass

    # Berry declaration part

    Generated_File.write("\n// - Berry declaration\n")
    Generated_File.write(Get_Class_Binding_Declaration(Class, False, Xila_Namespace.namespace(Module_Name + "_Types")) + "\n")
    Clear_Binding_Function_Table()

    # Include the berry header

    Generated_File.write("\nextern \"C\"\n{\n")
    Generated_File.write("\t#include \"../generate/be_fixed_Berry_" + Get_Name(Class).replace("_Class", "_Type") + ".h\"\n")
    Generated_File.write("}")


def Generate_Module(Global_Namespace, Xila_Namespace, Module_Name):
    
    # Generate module types


    try:
        Classes = Module_Namespace.classes(recursive=False)
        

        for C in Classes:
            if not(Exclusion.Is_Class_Excluded(C)) :
                Generate_Class(Generated_File, Xila_Namespace, C, Module_Name)

      #  if Module_Name == "Graphics":
      #      for C in Classes:
      #          if Get_Name(C) == "Dialog_Class":
      #              Generate_Class(Generated_File, Xila_Namespace, C, Module_Name)

        
    except Exception as e:
        traceback.print_exc()
        print(f"In module {Module_Name} generation, exception : {e}")
        pass

    Generated_File.write("\n// - Functions\n")

    # Module methods
        
    for Member in Module_Class.get_members():
        if(Is_Function(Member)):
            Generated_File.write(Generate_Binding_Function(Member, Module_Name, True) + "\n")

    Generated_File.write("void* Berry_" + Module_Name + "_Class_Get_Pointer()\n{\n\treturn (Module_Type*)&" + Module_Name + ";\n}\n")
    Generated_File.write("BE_FUNC_CTYPE_DECLARE(Berry_" + Module_Name + "_Class_Get_Pointer, \"c\", \"\")\n")
    Add_Custom_Binding_Function("Get_Pointer", "Berry_" + Module_Name + "_Class_Get_Pointer")

    # Berry declaration part

    Generated_File.write("\n// - Berry declaration\n")
    Generated_File.write(Get_Class_Binding_Declaration(Module_Class, True, Module_Namespace) + "\n")
    Clear_Binding_Function_Table()

    # Include the berry header

    Generated_File.write("\nextern \"C\"\n{\n")
    Generated_File.write("\t#include \"../generate/be_fixed_" + Module_Name + ".h\"\n")
    Generated_File.write("}")

    Generated_File.close()


Clear()

# Find the location of the xml generator (castxml or gccxml)
generator_path, generator_name = utils.find_xml_generator()

shutil.rmtree(Get_Generated_Folder_Path(), ignore_errors=True)
os.makedirs(Get_Generated_Folder_Path(), exist_ok=True)

# The C++ file we want to parse

compile_commands_path = os.path.join(os.path.dirname(__file__), "compile_commands.json")

Compile_Commands_File = open(compile_commands_path, "r")

Compile_Commands = json.load(Compile_Commands_File)

Commands = ""

for Command in Compile_Commands:
    Commands += Command["command"]

I_Flags_Raw = re.findall(r'-I([^\s]+)', Commands)

D_Flags_Raw = re.findall(r'-D([^\s]+)', Commands)

D_Flags = []

for Flag in D_Flags_Raw:
    if Flag not in D_Flags:
        D_Flags.append(Flag)

I_Flags = []

I_Flags_Raw.append(".pio/libdeps/WT32-SC01_Plus/Battery Library/src")

for Flag in I_Flags_Raw:
    if Flag not in I_Flags:
        I_Flags.append(Flag)

for i in range(len(I_Flags)):
    if not(I_Flags[i].startswith("/home")):
        I_Flags[i] = os.path.join(Get_Code_Path(), I_Flags[i])
    
print(I_Flags)
    
# Configure the xml generator
xml_generator_config = Parser.xml_generator_configuration_t(
    xml_generator_path=generator_path,
    xml_generator=generator_name,
    compiler_path="/home/alix_anneraud/.platformio/packages/toolchain-xtensa-esp32s3/bin/xtensa-esp32s3-elf-g++",
    define_symbols=D_Flags,
    cflags="-m32 -fpermissive -fsyntax-only -ferror-limit=200 -std=gnu++11 -Wignored-attributes -fexceptions -fms-extensions -frtti  -mlong-calls -ffunction-sections -fdata-sections -Wno-error=unused-function -Wno-error=unused-variable -Wno-error=deprecated-declarations -Wno-unused-parameter -Wno-sign-compare -ggdb -freorder-blocks -Wwrite-strings -fstack-protector -Wno-error=unused-but-set-variable -fno-jump-tables -MMD -Og -g2 -ggdb2",
    include_paths=I_Flags
)

Header = [os.path.join(Get_Code_Path(), "lib", "Xila", "include", "Xila.hpp")]

# Parse the c++ file
Dec = Parser.parse(Header, xml_generator_config)


if os.path.exists(os.path.join(Get_Code_Path(), "Xila.d")):
    os.remove(os.path.join(Get_Code_Path(), "Xila.d"))

# Get access to the global namespace
Global_Namespace = Declarations.get_global_namespace(Dec)
Xila_Namespace = Global_Namespace.namespace("Xila_Namespace")

#Parser.declarations_joiner.join_declarations(Declarations.get_global_namespace(Dec))
        

Generate_Module(Global_Namespace, Xila_Namespace, "Drive")
Generate_Module(Global_Namespace, Xila_Namespace, "Memory")
Generate_Module(Global_Namespace, Xila_Namespace, "System")
Generate_Module(Global_Namespace, Xila_Namespace, "Pin")
Generate_Module(Global_Namespace, Xila_Namespace, "Flash")
Generate_Module(Global_Namespace, Xila_Namespace, "Clipboard")
Generate_Module(Global_Namespace, Xila_Namespace, "Graphics")
Generate_Module(Global_Namespace, Xila_Namespace, "Sound")
Generate_Module(Global_Namespace, Xila_Namespace, "Network")
Generate_Module(Global_Namespace, Xila_Namespace, "Mathematics")
Generate_Module(Global_Namespace, Xila_Namespace, "Softwares")

Temporary_Folder_Path = os.path.join(Get_Code_Path(), "lib", "berry", "Temporary")

print("Temp : ", Temporary_Folder_Path)

# Delete temporary folder
shutil.rmtree(Temporary_Folder_Path, ignore_errors=True)
os.makedirs(Temporary_Folder_Path)

# Copy generated files to berry temporary folder

shutil.copytree(Get_Manual_Folder_Path(), Temporary_Folder_Path, dirs_exist_ok=True)

shutil.copytree(Get_Generated_Folder_Path(), Temporary_Folder_Path, dirs_exist_ok=True)

# Copy berry sources to temporary folder
Berry_Sources_Path = os.path.join(Get_Code_Path(), "lib", "berry", "src")
shutil.copytree(Berry_Sources_Path, Temporary_Folder_Path, dirs_exist_ok=True)

# Delete berry generate folder
Berry_Generate_Path = os.path.join(Get_Code_Path(), "lib", "berry", "generate")
shutil.rmtree(Berry_Generate_Path, ignore_errors=True)
os.makedirs(Berry_Generate_Path)

# Copy callback module to berry sources
Berry_Callback_Module_Path = os.path.join(Get_Code_Path(), "lib", "berry_mapping", "src", "be_cb_module.c")
shutil.copy(Berry_Callback_Module_Path, os.path.join(Temporary_Folder_Path, "be_cb_module.c"))

COC_Path = os.path.join(Get_Code_Path(), "lib", "berry", "tools", "coc", "coc")

Result = subprocess.run([COC_Path, '-o', 'generate', 'default', 'Temporary', '-c', 'src/berry_conf.h'], stdout=subprocess.PIPE)

if Result.returncode != 0:
    print("Error while generating berry sources : ", Result.stdout.decode("utf-8"))
else:
    print("Berry sources generated successfully.")

shutil.rmtree(Temporary_Folder_Path, ignore_errors=True)