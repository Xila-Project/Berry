#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}

using namespace Xila_Namespace;

void *Berry_Module_Type_Initialize(bvm* V)
{
   Module_Type** Pointer = (Module_Type**)be_malloc(V, sizeof(Module_Type*));
    *Pointer = NULL;
//    return new (Pointer) Module_Type();
    return Pointer;
}
BE_FUNC_CTYPE_DECLARE(Berry_Module_Type_Initialize, "+_p", "@");

void Berry_Module_Type_Deinitialize(bvm* V, Module_Type **Module)
{
//    Module->~Module_Type();
    be_free(V, Module, sizeof(Module_Type*));
}
BE_FUNC_CTYPE_DECLARE(Berry_Module_Type_Deinitialize, "", "@.");

bool Berry_Module_Type_Equal(Module_Type **Module, Module_Type **Module_2)
{
    if (!*Module || !*Module_2)
        return false;
    return *Module == *Module_2;
}
BE_FUNC_CTYPE_DECLARE(Berry_Module_Type_Equal, "b", "..");

bool Berry_Module_Type_Not_Equal(Module_Type **Module, Module_Type **Module_2)
{
    if (!Module || !Module_2)
        return false;
    return *Module != *Module_2;
}
BE_FUNC_CTYPE_DECLARE(Berry_Module_Type_Not_Equal, "b", "..");


/*
@const_object_info_begin
class be_class_Berry_Module_Type(scope:global, name:Module_Type)
{
    _p, var
    init, ctype_func(Berry_Module_Type_Initialize)
    deinit, ctype_func(Berry_Module_Type_Deinitialize)
    ==, ctype_func(Berry_Module_Type_Equal)
    !=, ctype_func(Berry_Module_Type_Not_Equal)
}
@const_object_info_end
*/

extern "C"
{
    #include "../generate/be_fixed_be_class_Berry_Module_Type.h"
}