import shutil
import os
import subprocess

import Parser
import Paths
import Module

def Main():

    shutil.rmtree(Paths.Get_Generated_Folder_Path(), ignore_errors=True)
    os.makedirs(Paths.Get_Generated_Folder_Path(), exist_ok=True)

    Global_Namespace = Parser.Parse()

    Xila_Namespace = Global_Namespace.Find_Namespace("Xila_Namespace")

    Module.Module_Class(Xila_Namespace, "Drive").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "System").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Pin").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Flash").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Clipboard").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Graphics").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Sound").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Network").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Mathematics").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Memory").Generate_Binding()
    Module.Module_Class(Xila_Namespace, "Softwares").Generate_Binding()

    if os.path.exists(os.path.join(Paths.Get_Code_Path(), "Xila.d")):
        os.remove(os.path.join(Paths.Get_Code_Path(), "Xila.d"))

    # Delete temporary folder
    shutil.rmtree(Paths.Get_Temporary_Folder_Path(), ignore_errors=True)
    os.makedirs(Paths.Get_Temporary_Folder_Path())

    # Copy generated files to berry temporary folder

    shutil.copytree(Paths.Get_Manual_Folder_Path(), Paths.Get_Temporary_Folder_Path(), dirs_exist_ok=True)
    shutil.copytree(Paths.Get_Generated_Folder_Path(), Paths.Get_Temporary_Folder_Path(), dirs_exist_ok=True)

    # Copy berry sources to temporary folder
    shutil.copytree(Paths.Get_Berry_Source_Folder_Path(), Paths.Get_Temporary_Folder_Path(), dirs_exist_ok=True)

    # Delete berry generate folder
    shutil.rmtree(Paths.Get_Berry_Generate_Folder_Path(), ignore_errors=True)
    os.makedirs(Paths.Get_Berry_Generate_Folder_Path())

    # Copy callback module to berry sources
    shutil.copy(Paths.Get_Berry_Callback_Module_Source_File_Path(), os.path.join(Paths.Get_Temporary_Folder_Path(), "be_cb_module.c"))

    print(Paths.Get_Berry_Generating_Working_Folder_Path())

    Result = subprocess.run(["cd", Paths.Get_Berry_Generating_Working_Folder_Path(), "| ./tools/coc/coc", '-o', 'generate', 'default', 'Temporary', '-c', 'src/berry_conf.h'], stdout=subprocess.PIPE, shell=True)

    if Result.returncode != 0:
        print("Error while generating berry sources : ", Result.stdout.decode("utf-8"))
    else:
        print("Berry sources generated successfully.")

    shutil.rmtree(Paths.Get_Temporary_Folder_Path(), ignore_errors=True)

    fuck()

if __name__ == "__main__":
    Main()