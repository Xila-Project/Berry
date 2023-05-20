// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Memory_Types;

// - Functions
int Berry_Memory_Class_Get_Heap_Size_AC3D99E5_D32A_47D5_800D_05E4D94FDF03()
{
return (int)Memory.Get_Heap_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Heap_Size_AC3D99E5_D32A_47D5_800D_05E4D94FDF03, "i", "");


int Berry_Memory_Class_Get_Free_Heap_F66DE580_14CA_45DB_BBF7_17233677033C()
{
return (int)Memory.Get_Free_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Free_Heap_F66DE580_14CA_45DB_BBF7_17233677033C, "i", "");


int Berry_Memory_Class_Get_Minimum_Free_Heap_F6C28121_EE3A_48FB_87FA_B698CBB3CA94()
{
return (int)Memory.Get_Minimum_Free_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Minimum_Free_Heap_F6C28121_EE3A_48FB_87FA_B698CBB3CA94, "i", "");


int Berry_Memory_Class_Get_Maximum_Allocated_Heap_9E6DD52B_873C_41C9_8544_7368D4DBBC77()
{
return (int)Memory.Get_Maximum_Allocated_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Maximum_Allocated_Heap_9E6DD52B_873C_41C9_8544_7368D4DBBC77, "i", "");


int Berry_Memory_Class_Get_PSRAM_Size_D343D76E_735D_4DE6_B61C_CC05DA61E9D4()
{
return (int)Memory.Get_PSRAM_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_PSRAM_Size_D343D76E_735D_4DE6_B61C_CC05DA61E9D4, "i", "");


int Berry_Memory_Class_Get_Free_PSRAM_1B3E6BA6_2232_4D9D_B4AA_42907EE08296()
{
return (int)Memory.Get_Free_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Free_PSRAM_1B3E6BA6_2232_4D9D_B4AA_42907EE08296, "i", "");


int Berry_Memory_Class_Get_Minimum_Free_PSRAM_43A59BDE_1059_45D9_95F6_78B25847F8A1()
{
return (int)Memory.Get_Minimum_Free_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Minimum_Free_PSRAM_43A59BDE_1059_45D9_95F6_78B25847F8A1, "i", "");


int Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_53FF00AB_0A67_4343_AC79_6EB7B0CB1DF7()
{
return (int)Memory.Get_Maximum_Allocated_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_53FF00AB_0A67_4343_AC79_6EB7B0CB1DF7, "i", "");


void* Berry_Memory_Class_Get_Pointer()
{
	return (Module_Type*)&Memory;
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Memory (scope:global)
{
	Get_Heap_Size, ctype_func(Berry_Memory_Class_Get_Heap_Size_AC3D99E5_D32A_47D5_800D_05E4D94FDF03)
	Get_Free_Heap, ctype_func(Berry_Memory_Class_Get_Free_Heap_F66DE580_14CA_45DB_BBF7_17233677033C)
	Get_Minimum_Free_Heap, ctype_func(Berry_Memory_Class_Get_Minimum_Free_Heap_F6C28121_EE3A_48FB_87FA_B698CBB3CA94)
	Get_Maximum_Allocated_Heap, ctype_func(Berry_Memory_Class_Get_Maximum_Allocated_Heap_9E6DD52B_873C_41C9_8544_7368D4DBBC77)
	Get_PSRAM_Size, ctype_func(Berry_Memory_Class_Get_PSRAM_Size_D343D76E_735D_4DE6_B61C_CC05DA61E9D4)
	Get_Free_PSRAM, ctype_func(Berry_Memory_Class_Get_Free_PSRAM_1B3E6BA6_2232_4D9D_B4AA_42907EE08296)
	Get_Minimum_Free_PSRAM, ctype_func(Berry_Memory_Class_Get_Minimum_Free_PSRAM_43A59BDE_1059_45D9_95F6_78B25847F8A1)
	Get_Maximum_Allocated_PSRAM, ctype_func(Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_53FF00AB_0A67_4343_AC79_6EB7B0CB1DF7)
	Get_Pointer, ctype_func(Berry_Memory_Class_Get_Pointer)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Memory.h"
}