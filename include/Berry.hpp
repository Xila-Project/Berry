/// @file Berry.hpp
/// @author Alix ANNERAUD (alix.anneraud@outlook.fr)
/// @brief
/// @version 0.1.0
/// @date 20-03-2023
///
/// @copyright Copyright (c) 2023

#ifndef Berry_Hpp_Included
#define Berry_Hpp_Included

extern "C"
{
#include "be_mapping.h"
#include "be_mem.h"
}

#include "Xila.hpp"

#include <vector>

using namespace Xila;

// - Forward declaration

typedef struct bvm bvm;
typedef int (*bntvfunc)(bvm *);

class Berry_Softwares_Handle_Class;

/// @brief Berry class
class Berry_Class : public Softwares_Types::Software_Type
{
public:
    class Berry_Softwares_Handle_Class : public Softwares_Types::Software_Handle_Type
    {
    public:
        Berry_Softwares_Handle_Class(const char *Name) : Softwares_Types::Software_Handle_Type(Name){};

        void Create_Instance(const Accounts_Types::User_Type *Owner_User) const override
        {
            new Berry_Class(Owner_User, *this);
        }
    };

    static Berry_Class *Get_Instance(bvm *);
    uint8_t Buffer[1024]; // Buffer used to store the input object

    static void Load_Softwares_Handles();

protected:
    // - Methods

    // - - Constructors / destructor
    Berry_Class(const Accounts_Types::User_Type *Owner_User, const Berry_Softwares_Handle_Class &Handle);
    ~Berry_Class();

    // - - Task
    void Main_Task_Function() override;

    // - - - Berry

    void Virtual_Machine_Create();
    void Virtual_Machine_Delete();
    void Virtual_Machine_Register_Function(const char *Name, bntvfunc Function);
    Result_Type Virtual_Machine_Load_File(const char *Path);
    Result_Type Virtual_Machine_Load_String(const char *String);

    Result_Type Call(Integer_Type);

    // - - - Softwares

    static void Start_Task_Server(void *);
    void Server_Task_Function();

    // - Attributes

    WiFiServer Server;

    Task_Type Server_Task;

    bvm *Virtual_Machine;

    Graphics_Types::Keyboard_Type Keyboard;
    Graphics_Types::Text_Area_Type Input_Text_Area;
    Graphics_Types::Label_Type Prompt_Label;
    Graphics_Types::Object_Type Prompt_Container;

    static std::vector<Berry_Class *> Instances_List;

    Graphics_Types::Window_Class Window;

    friend class Berry_Handle_Class;
    friend class Berry_Softwares_Handle_Class;
    friend Graphics_Types::Window_Type *Berry_This_Get_Window(bvm *);
    friend void Berry_This_Delay(bvm *, int);
};

#endif