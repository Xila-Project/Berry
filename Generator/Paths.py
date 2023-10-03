import os

def Get_Current_File_Path() -> str:
    return os.path.dirname(__file__)

def Get_Generated_Folder_Path() -> str:
    Path = os.path.join(Get_Current_File_Path(), "..", "src", "Generated")
    if not os.path.exists(Path):
        os.mkdir(Path)
    return Path

def Get_Compilation_Database_Path() -> str:
    return os.path.join(Get_Current_File_Path(), "compile_commands.json")


def Get_Project_Path() -> str:
    Path = Get_Current_File_Path()
    Path = Path.split("/Code/")[0]
    Path = os.path.join(Path, "Code")
    return Path

def Get_Code_Path() -> str:
    return Get_Project_Path()

def Get_Xila_Header_Path():
    return os.path.join(Get_Code_Path(), "lib", "Xila", "include", "Xila.hpp")

def Get_COC_Path() -> str:
    return os.path.join(Get_Code_Path(), "lib", "berry", "tools", "coc", "coc")

def Get_Manual_Folder_Path() -> str:
    Path = os.path.join(Get_Current_File_Path(), "..", "src", "Manual")
    if not os.path.exists(Path):
        os.mkdir(Path)
    return Path

def Get_Temporary_Folder_Path() -> str:
    return os.path.join(Get_Code_Path(), "lib", "berry", "Temporary")

def Get_Berry_Source_Folder_Path() -> str:
    return os.path.join(Get_Code_Path(), "lib", "berry", "src")

def Get_Berry_Generate_Folder_Path() -> str:
    return os.path.join(Get_Code_Path(), "lib", "berry", "generate")

def Get_Berry_Callback_Module_Source_File_Path() -> str:
    return os.path.join(Get_Code_Path(), "lib", "berry_mapping", "src", "be_cb_module.c")

def Get_Berry_Generating_Working_Folder_Path() -> str:
    return os.path.join(Get_Code_Path(), "lib", "berry")