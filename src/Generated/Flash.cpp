// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Flash_Types;

// - Functions
int Berry_Flash_Class_Get_Size_8ABA793F_A932_4720_97D6_640F00B8ECFF()
{
return (int)Flash.Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Size_8ABA793F_A932_4720_97D6_640F00B8ECFF, "i", "");


int Berry_Flash_Class_Get_Speed_FDBD499F_17C9_4E0A_8B53_7CBE4F845E57()
{
return (int)Flash.Get_Speed(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Speed_FDBD499F_17C9_4E0A_8B53_7CBE4F845E57, "i", "");


int Berry_Flash_Class_Get_Mode_CA172E25_A52C_4D7C_8210_A4CABFD4BF6B()
{
return (int)Flash.Get_Mode(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Mode_CA172E25_A52C_4D7C_8210_A4CABFD4BF6B, "i", "");


const unsigned int* Berry_Flash_Class_Read_C9184F0E_E799_4FAD_84BB_B875C0990A98(bvm* V, int A_0, int A_2)
{
unsigned int* S_1 = (unsigned int*)Berry_Class::Get_Instance(V)->Buffer;
Flash.Read((unsigned int)A_0, S_1, (A_2 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_2); 
return S_1;
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Read_C9184F0E_E799_4FAD_84BB_B875C0990A98, "s", "@ii");



int Berry_Flash_Class_Get_Sketch_Size_1D9C5F9A_08FF_47FF_BBC5_51D0FE4D1321()
{
return (int)Flash.Get_Sketch_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Sketch_Size_1D9C5F9A_08FF_47FF_BBC5_51D0FE4D1321, "i", "");


const char* Berry_Flash_Class_Get_Sketch_MD5_B6840AD3_D0D7_41E8_9C21_116946A9A766(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
Flash.Get_Sketch_MD5(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Sketch_MD5_B6840AD3_D0D7_41E8_9C21_116946A9A766, "s", "@");


int Berry_Flash_Class_Get_Sketch_Free_Space_A9638646_EA57_4898_8899_FADA0F72BF6D()
{
return (int)Flash.Get_Sketch_Free_Space(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Sketch_Free_Space_A9638646_EA57_4898_8899_FADA0F72BF6D, "i", "");


void* Berry_Flash_Class_Get_Pointer()
{
	return (Module_Type*)&Flash;
}
BE_FUNC_CTYPE_DECLARE(Berry_Flash_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Flash (scope:global)
{
	Get_Size, ctype_func(Berry_Flash_Class_Get_Size_8ABA793F_A932_4720_97D6_640F00B8ECFF)
	Get_Speed, ctype_func(Berry_Flash_Class_Get_Speed_FDBD499F_17C9_4E0A_8B53_7CBE4F845E57)
	Get_Mode, ctype_func(Berry_Flash_Class_Get_Mode_CA172E25_A52C_4D7C_8210_A4CABFD4BF6B)
	Read, ctype_func(Berry_Flash_Class_Read_C9184F0E_E799_4FAD_84BB_B875C0990A98)
	Get_Sketch_Size, ctype_func(Berry_Flash_Class_Get_Sketch_Size_1D9C5F9A_08FF_47FF_BBC5_51D0FE4D1321)
	Get_Sketch_MD5, ctype_func(Berry_Flash_Class_Get_Sketch_MD5_B6840AD3_D0D7_41E8_9C21_116946A9A766)
	Get_Sketch_Free_Space, ctype_func(Berry_Flash_Class_Get_Sketch_Free_Space_A9638646_EA57_4898_8899_FADA0F72BF6D)
	Get_Pointer, ctype_func(Berry_Flash_Class_Get_Pointer)

	Partition_Subtype_Enumeration_Bootloader_Partition, int(0)
	Partition_Subtype_Enumeration_OTA_Minimum, int(16)
	Partition_Subtype_Enumeration_Xila_Partition, int(16)
	Partition_Subtype_Enumeration_OTA_1, int(17)
	Partition_Subtype_Enumeration_OTA_2, int(18)
	Partition_Subtype_Enumeration_OTA_3, int(19)
	Partition_Subtype_Enumeration_OTA_4, int(20)
	Partition_Subtype_Enumeration_OTA_5, int(21)
	Partition_Subtype_Enumeration_OTA_6, int(22)
	Partition_Subtype_Enumeration_OTA_7, int(23)
	Partition_Subtype_Enumeration_OTA_8, int(24)
	Partition_Subtype_Enumeration_OTA_9, int(25)
	Partition_Subtype_Enumeration_OTA_10, int(26)
	Partition_Subtype_Enumeration_OTA_11, int(27)
	Partition_Subtype_Enumeration_OTA_12, int(28)
	Partition_Subtype_Enumeration_OTA_13, int(29)
	Partition_Subtype_Enumeration_OTA_14, int(30)
	Partition_Subtype_Enumeration_OTA_15, int(31)
	Partition_Subtype_Enumeration_OTA_Maximum, int(32)
	Partition_Subtype_Enumeration_Application_Test, int(32)
	Partition_Subtype_Enumeration_Data_OTA, int(0)
	Partition_Subtype_Enumeration_Data_PHY, int(1)
	Partition_Subtype_Enumeration_Data_NVS, int(2)
	Partition_Subtype_Enumeration_Data_Core_Dump, int(3)
	Partition_Subtype_Enumeration_Data_NVS_Keys, int(4)
	Partition_Subtype_Enumeration_Data_eFuse, int(5)
	Partition_Subtype_Enumeration_Data_Undefined, int(6)
	Partition_Subtype_Enumeration_Data_ESPHTTPD, int(128)
	Partition_Subtype_Enumeration_Data_Fat, int(129)
	Partition_Subtype_Enumeration_Data_SPIFFS, int(130)
	Partition_Subtype_Enumeration_Any, int(255)

	Flash_Mode_QIO, int(0)
	Flash_Mode_QOUT, int(1)
	Flash_Mode_DIO, int(2)
	Flash_Mode_DOUT, int(3)
	Flash_Mode_Fast_Read, int(4)
	Flash_Mode_Slow_Read, int(5)
	Flash_Mode_Unknown, int(255)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Flash.h"
}