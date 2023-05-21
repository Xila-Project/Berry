/// @file Berry.cpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 20-03-2023
///
/// @copyright Copyright (c) 2023
///

#include "Berry.hpp"

extern "C"
{
#include "berry.h"
#include "be_mapping.h"
#include "be_repl.h"
#include "be_vm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
}

// -

std::vector<Berry_Class *> Berry_Class::Instances_List;

Berry_Class::Berry_Class(const Accounts_Types::User_Type *Owner_User, const Berry_Handle_Class &Handle)
    : Softwares_Types::Software_Type(Handle, Owner_User, 8 * 1024),
      Virtual_Machine(NULL)
{
    Instances_List.push_back(this);
}

Berry_Class::~Berry_Class()
{
    Virtual_Machine_Delete();

    if (Window.Is_Valid())
        Window.Delete();

    Instances_List.erase(std::remove(Instances_List.begin(), Instances_List.end(), this), Instances_List.end());
}

Berry_Class *Berry_Class::Get_Instance(bvm *Virtual_Machine)
{
    for (auto &Instance : Instances_List)
    {
        if (Instance->Virtual_Machine == Virtual_Machine)
            return Instance;
    }
    return NULL;
}

void Berry_Class::Main_Task_Function()
{
    Window.Create(this);

    Virtual_Machine_Create();

    Static_String_Type<64>
        Path;

    Path = Software_Directory_Path;
    Path += "/";
    {
        Static_String_Type<24> Name;
        Path += Get_Handle()->Get_Name(Name);
    }
    Path += "/Main.be";

    if (Virtual_Machine_Load_File(Path) != Result_Type::Success)
    {
        Log_Error("Berry", "Failed to load file");
        // TODO : Add dialog to show the error.
        delete this;
    }

    if (Call(0) != Result_Type::Success)
    {
        Log_Error("Berry", "Failed to call main function");
        // TODO : Add dialog
    }

    delete this;
}

void Berry_Class::Virtual_Machine_Create()
{
    if (!Virtual_Machine)
    {
        Virtual_Machine = be_vm_new();
        be_set_ctype_func_hanlder(Virtual_Machine, be_call_ctype_func);
    }
}

void Berry_Class::Virtual_Machine_Delete()
{
    if (Virtual_Machine)
        be_vm_delete(Virtual_Machine);
    Virtual_Machine = NULL;
}

void Berry_Class::Load_Softwares_Handles()
{
    using namespace Drive_Types;

    // - Waiting for System to start Drive module asynchrously.
    while (Xila::Drive.Get_Type() == Xila::Drive_Types::Drive_Type_Type::None)
    {
        Task_Type::Delay_Static(100);
    }

    File_Type Softwares_Folder = Drive.Open(Software_Directory_Path);

    if (!Softwares_Folder)
        return;

    Softwares_Folder.Rewind_Directory();

    File_Type Software_Folder = Softwares_Folder.Open_Next_File();

    while (Software_Folder)
    {
        if (!Software_Folder.Is_Directory())
            continue;

        Static_String_Type<64> Path;
        Path = Software_Folder.Get_Path();
        Path += "/Main.be";

        if (Drive.Exists(Path))
        {
            Softwares.Register_Handle(*new Berry_Handle_Class(Software_Folder.Get_Name()));
        }

        Software_Folder.Close();
        Software_Folder = Softwares_Folder.Open_Next_File();
    }
}

void Berry_Class::Virtual_Machine_Register_Function(const char *Name, bntvfunc Function)
{
    be_regfunc(Virtual_Machine, Name, Function);
}

Result_Type Berry_Class::Virtual_Machine_Load_File(const char *Path)
{
    Byte_Type Error = be_loadfile(Virtual_Machine, Path);
    if (Error != BE_OK)
        return Result_Type::Error;
    return Result_Type::Success;
}

Result_Type Berry_Class::Virtual_Machine_Load_String(const char *String)
{
    Byte_Type Error = be_loadstring(Virtual_Machine, String);
    if (Error != BE_OK)
        return Result_Type::Error;
    return Result_Type::Success;
}

Result_Type Berry_Class::Call(Integer_Type Argument_Count)
{
    if (!Virtual_Machine)
        return Result_Type::Error;

    Byte_Type Error = be_pcall(Virtual_Machine, Argument_Count);
    if (Error != BE_OK)
        return Result_Type::Error;

    Log_Information("Berry", "Call returned : %i", Error);
    be_getexcept(Virtual_Machine, Error);

    return Result_Type::Success;
}
