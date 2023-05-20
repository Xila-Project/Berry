// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace System_Types;

// - Functions
const char* Berry_System_Class_Get_Device_Name_F35CCF62_F933_47EA_B9E2_AD091F39773A(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
System.Get_Device_Name(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Device_Name_F35CCF62_F933_47EA_B9E2_AD091F39773A, "s", "@");


void * Berry_System_Class_Get_eFuse_MAC_FC94C37D_9906_4ED2_B09A_F8475811B69B(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = System.Get_eFuse_MAC(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_eFuse_MAC_FC94C37D_9906_4ED2_B09A_F8475811B69B, "Long_Integer_Type", "@");


int Berry_System_Class_Get_Chip_Revision_E42A5F74_236C_4D83_8997_5A2563416473()
{
return (int)System.Get_Chip_Revision(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Revision_E42A5F74_236C_4D83_8997_5A2563416473, "i", "");


const char* Berry_System_Class_Get_Chip_Model_C151D8F2_A0D0_460B_81BF_724C1695C561()
{
return System.Get_Chip_Model(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Model_C151D8F2_A0D0_460B_81BF_724C1695C561, "s", "");


int Berry_System_Class_Get_Chip_Cores_ED55857D_D72C_49E4_BB60_D7826CC4DEC8()
{
return (int)System.Get_Chip_Cores(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Chip_Cores_ED55857D_D72C_49E4_BB60_D7826CC4DEC8, "i", "");


int Berry_System_Class_Get_CPU_Frequency_974B1F95_A973_4D84_A7EB_1BCE6CE1F4C4()
{
return (int)System.Get_CPU_Frequency(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_CPU_Frequency_974B1F95_A973_4D84_A7EB_1BCE6CE1F4C4, "i", "");


void Berry_System_Class_Set_Device_Name_5308D98F_C644_43BD_BB7B_24BA8CB85233(const char* A_0)
{
return System.Set_Device_Name(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_Device_Name_5308D98F_C644_43BD_BB7B_24BA8CB85233, "", "s");


void * Berry_System_Class_Get_Time_26B36CDA_FD63_4B49_A10C_B72A33684BE0(bvm* V)
{
Xila_Namespace::Time_Class* R = (Xila_Namespace::Time_Class*) be_malloc(V, sizeof(Xila_Namespace::Time_Class));
 *R = System.Get_Time(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Time_26B36CDA_FD63_4B49_A10C_B72A33684BE0, "Time_Type", "@");


void * Berry_System_Class_Get_Date_151A1C95_1CF8_47F5_8611_FDFDD00A31F9(bvm* V)
{
Xila_Namespace::Date_Class* R = (Xila_Namespace::Date_Class*) be_malloc(V, sizeof(Xila_Namespace::Date_Class));
 *R = System.Get_Date(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Date_151A1C95_1CF8_47F5_8611_FDFDD00A31F9, "Date_Type", "@");


int Berry_System_Class_Get_Cycles_Count_A4422B6C_087C_4059_BD7B_9E10A7C8F64A()
{
return (int)System.Get_Cycles_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Cycles_Count_A4422B6C_087C_4059_BD7B_9E10A7C8F64A, "i", "");


void * Berry_System_Class_Get_Up_Time_43C23290_D4E0_4735_8123_3FAB5E3D7A42(bvm* V)
{
Xila_Namespace::Time_Class* R = (Xila_Namespace::Time_Class*) be_malloc(V, sizeof(Xila_Namespace::Time_Class));
 *R = System.Get_Up_Time(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_43C23290_D4E0_4735_8123_3FAB5E3D7A42, "Time_Type", "@");


int Berry_System_Class_Get_Up_Time_Milliseconds_3247611F_AC82_42F9_8C45_960B0F2C6CD0()
{
return (int)System.Get_Up_Time_Milliseconds(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_Milliseconds_3247611F_AC82_42F9_8C45_960B0F2C6CD0, "i", "");


void * Berry_System_Class_Get_Up_Time_Microseconds_7468292E_EA00_419C_936B_C9E08B1D7604(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = System.Get_Up_Time_Microseconds(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Up_Time_Microseconds_7468292E_EA00_419C_936B_C9E08B1D7604, "Long_Integer_Type", "@");


int Berry_System_Class_Get_UTC_Offset_6944D06C_2430_4158_B42D_5FA438582980()
{
return (int)System.Get_UTC_Offset(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_UTC_Offset_6944D06C_2430_4158_B42D_5FA438582980, "i", "");


int Berry_System_Class_Get_Daylight_Offset_75B5DEA0_1D1E_481F_A38A_EBCD2D8B661A()
{
return (int)System.Get_Daylight_Offset(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Daylight_Offset_75B5DEA0_1D1E_481F_A38A_EBCD2D8B661A, "i", "");


const char* Berry_System_Class_Get_NTP_Server_86056AEA_4386_4375_8806_7525A589B7D6(bvm* V)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
System.Get_NTP_Server(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_NTP_Server_86056AEA_4386_4375_8806_7525A589B7D6, "s", "@");


void Berry_System_Class_Set_Time_Zone_F5422CB0_288E_44E5_BEE9_BFC4CBF2B2A0(int A_0, int A_1)
{
return System.Set_Time_Zone((unsigned int)A_0, (short unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_Time_Zone_F5422CB0_288E_44E5_BEE9_BFC4CBF2B2A0, "", "ii");


void Berry_System_Class_Set_NTP_Server_99A8AF0E_268E_4AA4_93ED_7F117B382B4B(const char* A_0)
{
return System.Set_NTP_Server(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Set_NTP_Server_99A8AF0E_268E_4AA4_93ED_7F117B382B4B, "", "s");


void Berry_System_Class_Start_5C95C8BC_3F3D_446A_A4E4_D11DB9C41674()
{
return System.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Start_5C95C8BC_3F3D_446A_A4E4_D11DB9C41674, "", "");


void Berry_System_Class_Shutdown_E5FD63FD_F9CF_4286_85AB_0971A41916A6()
{
return System.Shutdown(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Shutdown_E5FD63FD_F9CF_4286_85AB_0971A41916A6, "", "");


void Berry_System_Class_Restart_2D2DF8ED_C196_466B_8B5F_721AE33C729E()
{
return System.Restart(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Restart_2D2DF8ED_C196_466B_8B5F_721AE33C729E, "", "");



void Berry_System_Class_Task_Function_090065C5_A97B_4F7F_8C15_388BA8957344()
{
return System.Task_Function(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Task_Function_090065C5_A97B_4F7F_8C15_388BA8957344, "", "");


void* Berry_System_Class_Get_Pointer()
{
	return (Module_Type*)&System;
}
BE_FUNC_CTYPE_DECLARE(Berry_System_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module System (scope:global)
{
	Get_Device_Name, ctype_func(Berry_System_Class_Get_Device_Name_F35CCF62_F933_47EA_B9E2_AD091F39773A)
	Get_eFuse_MAC, ctype_func(Berry_System_Class_Get_eFuse_MAC_FC94C37D_9906_4ED2_B09A_F8475811B69B)
	Get_Chip_Revision, ctype_func(Berry_System_Class_Get_Chip_Revision_E42A5F74_236C_4D83_8997_5A2563416473)
	Get_Chip_Model, ctype_func(Berry_System_Class_Get_Chip_Model_C151D8F2_A0D0_460B_81BF_724C1695C561)
	Get_Chip_Cores, ctype_func(Berry_System_Class_Get_Chip_Cores_ED55857D_D72C_49E4_BB60_D7826CC4DEC8)
	Get_CPU_Frequency, ctype_func(Berry_System_Class_Get_CPU_Frequency_974B1F95_A973_4D84_A7EB_1BCE6CE1F4C4)
	Set_Device_Name, ctype_func(Berry_System_Class_Set_Device_Name_5308D98F_C644_43BD_BB7B_24BA8CB85233)
	Get_Time, ctype_func(Berry_System_Class_Get_Time_26B36CDA_FD63_4B49_A10C_B72A33684BE0)
	Get_Date, ctype_func(Berry_System_Class_Get_Date_151A1C95_1CF8_47F5_8611_FDFDD00A31F9)
	Get_Cycles_Count, ctype_func(Berry_System_Class_Get_Cycles_Count_A4422B6C_087C_4059_BD7B_9E10A7C8F64A)
	Get_Up_Time, ctype_func(Berry_System_Class_Get_Up_Time_43C23290_D4E0_4735_8123_3FAB5E3D7A42)
	Get_Up_Time_Milliseconds, ctype_func(Berry_System_Class_Get_Up_Time_Milliseconds_3247611F_AC82_42F9_8C45_960B0F2C6CD0)
	Get_Up_Time_Microseconds, ctype_func(Berry_System_Class_Get_Up_Time_Microseconds_7468292E_EA00_419C_936B_C9E08B1D7604)
	Get_UTC_Offset, ctype_func(Berry_System_Class_Get_UTC_Offset_6944D06C_2430_4158_B42D_5FA438582980)
	Get_Daylight_Offset, ctype_func(Berry_System_Class_Get_Daylight_Offset_75B5DEA0_1D1E_481F_A38A_EBCD2D8B661A)
	Get_NTP_Server, ctype_func(Berry_System_Class_Get_NTP_Server_86056AEA_4386_4375_8806_7525A589B7D6)
	Set_Time_Zone, ctype_func(Berry_System_Class_Set_Time_Zone_F5422CB0_288E_44E5_BEE9_BFC4CBF2B2A0)
	Set_NTP_Server, ctype_func(Berry_System_Class_Set_NTP_Server_99A8AF0E_268E_4AA4_93ED_7F117B382B4B)
	Start, ctype_func(Berry_System_Class_Start_5C95C8BC_3F3D_446A_A4E4_D11DB9C41674)
	Shutdown, ctype_func(Berry_System_Class_Shutdown_E5FD63FD_F9CF_4286_85AB_0971A41916A6)
	Restart, ctype_func(Berry_System_Class_Restart_2D2DF8ED_C196_466B_8B5F_721AE33C729E)
	Task_Function, ctype_func(Berry_System_Class_Task_Function_090065C5_A97B_4F7F_8C15_388BA8957344)
	Get_Pointer, ctype_func(Berry_System_Class_Get_Pointer)

	Panic_Missing_System_Files, int(0)
	Panic_Failed_To_Update_Display, int(1)
	Panic_Damaged_System_Registry, int(2)
	Panic_Installation_Conflict, int(3)
	Panic_Drive_Failure, int(4)
	Panic_Failed_To_Start_Display, int(5)
	Panic_Failed_To_Start_Graphics, int(6)
	Panic_Failed_To_Start_Sound, int(7)
	Panic_Failed_To_Start_Power, int(8)
	Panic_Failed_To_Start_Communication, int(9)
	Panic_Failed_To_Start_Accounts, int(10)
	Panic_Failed_To_Start_Drive, int(11)
	Panic_Failed_To_Start_Softwares, int(12)
	Panic_Low_Memory, int(13)
	Panic_Memory_Corruption, int(14)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_System.h"
}