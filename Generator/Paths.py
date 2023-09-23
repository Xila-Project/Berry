import os

def Get_Current_File_Path() -> str:
    return os.path.dirname(__file__)

def Get_Generated_Folder_Path() -> str:
    Path = os.path.join(Get_Current_File_Path, "..", "src", "Generated")
    if not os.path.exists(Path):
        os.mkdir(Path)
    return Path