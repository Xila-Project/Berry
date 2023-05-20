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
int Berry_Memory_Class_Get_Heap_Size_A31F16D3_A09D_4D75_988B_58CA441B5672()
{
return (int)Memory.Get_Heap_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Heap_Size_A31F16D3_A09D_4D75_988B_58CA441B5672, "i", "");


int Berry_Memory_Class_Get_Free_Heap_15F3E10B_CAFD_4025_BE1F_67040C8376B6()
{
return (int)Memory.Get_Free_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Free_Heap_15F3E10B_CAFD_4025_BE1F_67040C8376B6, "i", "");


int Berry_Memory_Class_Get_Minimum_Free_Heap_42A2DD5D_977D_4CD2_874A_D8F5A6547923()
{
return (int)Memory.Get_Minimum_Free_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Minimum_Free_Heap_42A2DD5D_977D_4CD2_874A_D8F5A6547923, "i", "");


int Berry_Memory_Class_Get_Maximum_Allocated_Heap_998E64CB_5BF4_4D65_B11F_667AC1C21AB7()
{
return (int)Memory.Get_Maximum_Allocated_Heap(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Maximum_Allocated_Heap_998E64CB_5BF4_4D65_B11F_667AC1C21AB7, "i", "");


int Berry_Memory_Class_Get_PSRAM_Size_0FFA12EB_0C37_4132_9592_54350BA358A2()
{
return (int)Memory.Get_PSRAM_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_PSRAM_Size_0FFA12EB_0C37_4132_9592_54350BA358A2, "i", "");


int Berry_Memory_Class_Get_Free_PSRAM_0EF6DCDE_7D35_45EE_B38F_8835E539602F()
{
return (int)Memory.Get_Free_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Free_PSRAM_0EF6DCDE_7D35_45EE_B38F_8835E539602F, "i", "");


int Berry_Memory_Class_Get_Minimum_Free_PSRAM_2D3C7E4E_23D0_4054_85A6_2C449CA009E7()
{
return (int)Memory.Get_Minimum_Free_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Minimum_Free_PSRAM_2D3C7E4E_23D0_4054_85A6_2C449CA009E7, "i", "");


int Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_E1692FCA_F378_4AF8_A3FA_7DEF0A4E4255()
{
return (int)Memory.Get_Maximum_Allocated_PSRAM(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_E1692FCA_F378_4AF8_A3FA_7DEF0A4E4255, "i", "");


void* Berry_Memory_Class_Get_Pointer()
{
	return (Module_Type*)&Memory;
}
BE_FUNC_CTYPE_DECLARE(Berry_Memory_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Memory (scope:global)
{
	Get_Heap_Size, ctype_func(Berry_Memory_Class_Get_Heap_Size_A31F16D3_A09D_4D75_988B_58CA441B5672)
	Get_Free_Heap, ctype_func(Berry_Memory_Class_Get_Free_Heap_15F3E10B_CAFD_4025_BE1F_67040C8376B6)
	Get_Minimum_Free_Heap, ctype_func(Berry_Memory_Class_Get_Minimum_Free_Heap_42A2DD5D_977D_4CD2_874A_D8F5A6547923)
	Get_Maximum_Allocated_Heap, ctype_func(Berry_Memory_Class_Get_Maximum_Allocated_Heap_998E64CB_5BF4_4D65_B11F_667AC1C21AB7)
	Get_PSRAM_Size, ctype_func(Berry_Memory_Class_Get_PSRAM_Size_0FFA12EB_0C37_4132_9592_54350BA358A2)
	Get_Free_PSRAM, ctype_func(Berry_Memory_Class_Get_Free_PSRAM_0EF6DCDE_7D35_45EE_B38F_8835E539602F)
	Get_Minimum_Free_PSRAM, ctype_func(Berry_Memory_Class_Get_Minimum_Free_PSRAM_2D3C7E4E_23D0_4054_85A6_2C449CA009E7)
	Get_Maximum_Allocated_PSRAM, ctype_func(Berry_Memory_Class_Get_Maximum_Allocated_PSRAM_E1692FCA_F378_4AF8_A3FA_7DEF0A4E4255)
	Get_Pointer, ctype_func(Berry_Memory_Class_Get_Pointer)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Memory.h"
}