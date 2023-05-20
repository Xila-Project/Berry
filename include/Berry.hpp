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

/// @brief Berry class
class Berry_Class : public Softwares_Types::Software_Type
{
public:
    class Berry_Handle_Class : public Softwares_Types::Software_Handle_Type
    {
    public:
        Berry_Handle_Class(const char *Name) : Softwares_Types::Software_Handle_Type(Name){};

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
    Berry_Class(const Accounts_Types::User_Type *Owner_User, const Berry_Handle_Class &Handle);
    ~Berry_Class();

    // - - Task

    /// @brief Main task function.
    void Main_Task_Function() override;

    // - - - Berry

    /// @brief Create a new virtual machine.
    void Virtual_Machine_Create();

    /// @brief Delete the current virtual machine.
    void Virtual_Machine_Delete();

    /// @brief Register a function to the virtual machine.
    void Virtual_Machine_Register_Function(const char *Name, bntvfunc Function);
    
    /// @brief Load and compile a file into the virtual machine.
    /// @param Path Path of the file to load.
    /// @return Result_Type::Success if the file is loaded and compiled successfully.
    Result_Type Virtual_Machine_Load_File(const char *Path);
    
    /// @brief Load and compile a string into the virtual machine.
    /// @param String String to load.
    /// @return Result_Type::Success if the string is loaded and compiled successfully.
    Result_Type Virtual_Machine_Load_String(const char *String);

    /// @brief Call a function from the virtual machine.
    /// @param Integer_Type Function stack index.
    /// @return Result_Type::Success if the function is called successfully.
    Result_Type Call(Integer_Type);

    // - Attributes

    bvm *Virtual_Machine;

    Graphics_Types::Keyboard_Type Keyboard;
    Graphics_Types::Text_Area_Type Input_Text_Area;
    Graphics_Types::Label_Type Prompt_Label;
    Graphics_Types::Object_Type Prompt_Container;

    static std::vector<Berry_Class *> Instances_List;

    Graphics_Types::Window_Class Window;

    friend class Berry_Handle_Class;
    friend Graphics_Types::Window_Type *Berry_This_Get_Window(bvm *);
    friend void Berry_This_Delay(bvm *, int);
};

#endif