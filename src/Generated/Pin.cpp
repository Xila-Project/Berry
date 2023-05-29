// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Pin_Types;

// - Functions

// - - Constructors

// - - Destructors
void Berry_Serial_Class_Deinitialize_3FFF8CF3_09C1_40B8_8C7F_BCECA361C8ED(bvm* V, Xila_Namespace::Pin_Types::Serial_Class* I)
{
if (!I) { return; }
I->~Serial_Class();
be_free(V, I, sizeof(Pin_Types::Serial_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Deinitialize_3FFF8CF3_09C1_40B8_8C7F_BCECA361C8ED, "", "@.");


// - - Functions
void Berry_Serial_Class_Begin_3A022746_F4D4_4BE4_A9CC_F7ED3198DAEA(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0, int A_1 = (int)Xila_Namespace::Pin_Types::Serial_Configuration_Type::Data_8_Bits, int A_2 = -1, int A_3 = -1, bool A_4 = false, int A_5 = 20000)
{
return I->Begin((long unsigned int)A_0, (Serial_Configuration_Type)A_1, (signed char)A_2, (signed char)A_3, A_4, (long unsigned int)A_5); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Begin_3A022746_F4D4_4BE4_A9CC_F7ED3198DAEA, "", ".i[iiibi");

void Berry_Serial_Class_End_DB1DDB44_9D4C_459A_BC4B_DB102BAA2320(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return I->End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_End_DB1DDB44_9D4C_459A_BC4B_DB102BAA2320, "", ".");

int Berry_Serial_Class_Available_C7C84EF9_9FD0_4E18_ADE0_62E4C27F7A99(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Available_C7C84EF9_9FD0_4E18_ADE0_62E4C27F7A99, "i", ".");

int Berry_Serial_Class_Peek_5B91A889_7FFB_4060_8BFC_3BB65FF8BC74(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Peek_5B91A889_7FFB_4060_8BFC_3BB65FF8BC74, "i", ".");

int Berry_Serial_Class_Read_95776A55_961E_4660_91C0_0DDABE6C64B1(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Read_95776A55_961E_4660_91C0_0DDABE6C64B1, "i", ".");

const unsigned char* Berry_Serial_Class_Read_Bytes_700DBA59_6AD1_4814_9BA9_4F7A0257DF0A(bvm* V, Xila_Namespace::Pin_Types::Serial_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Read_Bytes_700DBA59_6AD1_4814_9BA9_4F7A0257DF0A, "s", "@.i");

const char* Berry_Serial_Class_Read_String_ACD7E2BB_92A3_4914_A6FF_849DECF3554C(bvm* V, Xila_Namespace::Pin_Types::Serial_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Read_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Read_String_ACD7E2BB_92A3_4914_A6FF_849DECF3554C, "s", "@.");

int Berry_Serial_Class_Available_For_Write_E584C620_B15C_4515_BD67_4510D3BC9185(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Available_For_Write(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Available_For_Write_E584C620_B15C_4515_BD67_4510D3BC9185, "i", ".");

void Berry_Serial_Class_Flush_451D698A_A11F_4892_A0CC_EE14FB550883(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Flush_451D698A_A11F_4892_A0CC_EE14FB550883, "", ".");

int Berry_Serial_Class_Write_C38BBEF2_AA22_43F7_B177_788F651CF87F(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Write_C38BBEF2_AA22_43F7_B177_788F651CF87F, "i", ".i");

int Berry_Serial_Class_Write_Bytes_3665BFEB_3378_4E7B_BE63_F3CA957500D8(Xila_Namespace::Pin_Types::Serial_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write_Bytes(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Write_Bytes_3665BFEB_3378_4E7B_BE63_F3CA957500D8, "i", ".si");

int Berry_Serial_Class_Write_String_97E35AD3_B42B_4125_A86F_86C14E68C6D1(Xila_Namespace::Pin_Types::Serial_Class* I, const char* A_0)
{
return (int)I->Write_String(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Write_String_97E35AD3_B42B_4125_A86F_86C14E68C6D1, "i", ".s");

void Berry_Serial_Class_Set_Baud_Rate_22D02035_DDAC_4506_B9C3_2D81413274FB(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return I->Set_Baud_Rate((long unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Baud_Rate_22D02035_DDAC_4506_B9C3_2D81413274FB, "", ".i");

int Berry_Serial_Class_Set_Pins_AC542A36_0836_4178_81E0_B6B9108B29FC(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0, int A_1, int A_2 = -1, int A_3 = -1)
{
return (int)I->Set_Pins((signed char)A_0, (signed char)A_1, (signed char)A_2, (signed char)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Pins_AC542A36_0836_4178_81E0_B6B9108B29FC, "i", ".ii[ii");

int Berry_Serial_Class_Set_Hardware_Flow_Control_ACF86193_A90E_4C8C_9BEC_502A6C46BF95(Xila_Namespace::Pin_Types::Serial_Class* I, bool A_0, bool A_1 = false, bool A_2 = false, int A_3 = 64)
{
return (int)I->Set_Hardware_Flow_Control(A_0, A_1, A_2, (signed char)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Hardware_Flow_Control_ACF86193_A90E_4C8C_9BEC_502A6C46BF95, "i", ".b[bbi");

int Berry_Serial_Class_Set_Mode_11CC310B_51B7_46C0_8C3C_0293D4849C45(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Set_Mode((Serial_Mode_Type)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Mode_11CC310B_51B7_46C0_8C3C_0293D4849C45, "i", ".i");

int Berry_Serial_Class_Set_Receive_Buffer_Size_3912FC92_F702_4727_BA8C_F2B92B428AF5(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Set_Receive_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Receive_Buffer_Size_3912FC92_F702_4727_BA8C_F2B92B428AF5, "i", ".i");

int Berry_Serial_Class_Set_Transmit_Buffer_Size_373BF1A4_660D_4953_84DE_0B5425BF9762(Xila_Namespace::Pin_Types::Serial_Class* I, int A_0)
{
return (int)I->Set_Transmit_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Transmit_Buffer_Size_373BF1A4_660D_4953_84DE_0B5425BF9762, "i", ".i");

void Berry_Serial_Class_Set_Receive_Invert_AB226B80_92BA_400A_9D7B_319D343C0DBF(Xila_Namespace::Pin_Types::Serial_Class* I, bool A_0)
{
return I->Set_Receive_Invert(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Set_Receive_Invert_AB226B80_92BA_400A_9D7B_319D343C0DBF, "", ".b");

int Berry_Serial_Class_Get_Baud_Rate_6BD33AC3_2BFD_46CE_95E9_90BE4EC77513(Xila_Namespace::Pin_Types::Serial_Class* I)
{
return (int)I->Get_Baud_Rate(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Serial_Class_Get_Baud_Rate_6BD33AC3_2BFD_46CE_95E9_90BE4EC77513, "i", ".");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Serial_Type(scope:global, name:Serial_Type)
{
	_p, var
	deinit, ctype_func(Berry_Serial_Class_Deinitialize_3FFF8CF3_09C1_40B8_8C7F_BCECA361C8ED)
	Begin, ctype_func(Berry_Serial_Class_Begin_3A022746_F4D4_4BE4_A9CC_F7ED3198DAEA)
	End, ctype_func(Berry_Serial_Class_End_DB1DDB44_9D4C_459A_BC4B_DB102BAA2320)
	Available, ctype_func(Berry_Serial_Class_Available_C7C84EF9_9FD0_4E18_ADE0_62E4C27F7A99)
	Peek, ctype_func(Berry_Serial_Class_Peek_5B91A889_7FFB_4060_8BFC_3BB65FF8BC74)
	Read, ctype_func(Berry_Serial_Class_Read_95776A55_961E_4660_91C0_0DDABE6C64B1)
	Read_Bytes, ctype_func(Berry_Serial_Class_Read_Bytes_700DBA59_6AD1_4814_9BA9_4F7A0257DF0A)
	Read_String, ctype_func(Berry_Serial_Class_Read_String_ACD7E2BB_92A3_4914_A6FF_849DECF3554C)
	Available_For_Write, ctype_func(Berry_Serial_Class_Available_For_Write_E584C620_B15C_4515_BD67_4510D3BC9185)
	Flush, ctype_func(Berry_Serial_Class_Flush_451D698A_A11F_4892_A0CC_EE14FB550883)
	Write, ctype_func(Berry_Serial_Class_Write_C38BBEF2_AA22_43F7_B177_788F651CF87F)
	Write_Bytes, ctype_func(Berry_Serial_Class_Write_Bytes_3665BFEB_3378_4E7B_BE63_F3CA957500D8)
	Write_String, ctype_func(Berry_Serial_Class_Write_String_97E35AD3_B42B_4125_A86F_86C14E68C6D1)
	Set_Baud_Rate, ctype_func(Berry_Serial_Class_Set_Baud_Rate_22D02035_DDAC_4506_B9C3_2D81413274FB)
	Set_Pins, ctype_func(Berry_Serial_Class_Set_Pins_AC542A36_0836_4178_81E0_B6B9108B29FC)
	Set_Hardware_Flow_Control, ctype_func(Berry_Serial_Class_Set_Hardware_Flow_Control_ACF86193_A90E_4C8C_9BEC_502A6C46BF95)
	Set_Mode, ctype_func(Berry_Serial_Class_Set_Mode_11CC310B_51B7_46C0_8C3C_0293D4849C45)
	Set_Receive_Buffer_Size, ctype_func(Berry_Serial_Class_Set_Receive_Buffer_Size_3912FC92_F702_4727_BA8C_F2B92B428AF5)
	Set_Transmit_Buffer_Size, ctype_func(Berry_Serial_Class_Set_Transmit_Buffer_Size_373BF1A4_660D_4953_84DE_0B5425BF9762)
	Set_Receive_Invert, ctype_func(Berry_Serial_Class_Set_Receive_Invert_AB226B80_92BA_400A_9D7B_319D343C0DBF)
	Get_Baud_Rate, ctype_func(Berry_Serial_Class_Get_Baud_Rate_6BD33AC3_2BFD_46CE_95E9_90BE4EC77513)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Serial_Type.h"
}
// - Functions

// - - Constructors

// - - Destructors
void Berry_Two_Wire_Class_Deinitialize_655D10A0_5B43_429E_B844_4F73DC1AEEDE(bvm* V, Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
if (!I) { return; }
I->~Two_Wire_Class();
be_free(V, I, sizeof(Pin_Types::Two_Wire_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Deinitialize_655D10A0_5B43_429E_B844_4F73DC1AEEDE, "", "@.");


// - - Functions
int Berry_Two_Wire_Class_Begin_79E20CD8_0139_4AAE_9A6C_00D8706EDE6E(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0 = -1, int A_1 = -1, int A_2 = 0, int A_3 = -1)
{
return (int)I->Begin((signed char)A_0, (signed char)A_1, (unsigned int)A_2, (short int)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Begin_79E20CD8_0139_4AAE_9A6C_00D8706EDE6E, "i", ".[iiii");

int Berry_Two_Wire_Class_End_26085972_25B9_42CD_A984_3F6824D218BE(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return (int)I->End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_End_26085972_25B9_42CD_A984_3F6824D218BE, "i", ".");

void Berry_Two_Wire_Class_Begin_Transmission_3A75290F_D13D_4B21_A046_D9C7BFEB7659(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0)
{
return I->Begin_Transmission((short unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Begin_Transmission_3A75290F_D13D_4B21_A046_D9C7BFEB7659, "", ".i");

int Berry_Two_Wire_Class_End_Transmission_4DFD48EA_422C_4936_8DE6_03F49C0E770E(Xila_Namespace::Pin_Types::Two_Wire_Class* I, bool A_0 = true)
{
return (int)I->End_Transmission(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_End_Transmission_4DFD48EA_422C_4936_8DE6_03F49C0E770E, "i", ".[b");

int Berry_Two_Wire_Class_Request_From_C1781B1E_6F85_4C6C_A019_831E67D1182A(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0, int A_1, bool A_2 = true)
{
return (int)I->Request_From((short unsigned int)A_0, (unsigned int)A_1, A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Request_From_C1781B1E_6F85_4C6C_A019_831E67D1182A, "i", ".ii[b");

int Berry_Two_Wire_Class_Available_F4F19619_CF7A_46F9_8838_AABE5F696A73(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Available_F4F19619_CF7A_46F9_8838_AABE5F696A73, "i", ".");

int Berry_Two_Wire_Class_Peek_D0C93F67_581D_467C_AE6A_B42733893DC6(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Peek_D0C93F67_581D_467C_AE6A_B42733893DC6, "i", ".");

int Berry_Two_Wire_Class_Read_5EF3697E_E9C8_417B_8672_7D27415541B1(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Read_5EF3697E_E9C8_417B_8672_7D27415541B1, "i", ".");

const unsigned char* Berry_Two_Wire_Class_Read_Bytes_78311E62_2776_4F00_9918_C0D9350495BF(bvm* V, Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Read_Bytes_78311E62_2776_4F00_9918_C0D9350495BF, "s", "@.i");

const char* Berry_Two_Wire_Class_Read_String_35A68179_C3F0_467E_9BB6_8DDD75C99B6E(bvm* V, Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Read_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Read_String_35A68179_C3F0_467E_9BB6_8DDD75C99B6E, "s", "@.");

void Berry_Two_Wire_Class_Flush_B7F88ECE_0E98_4AD6_ADCD_0C4DB6C1ABCF(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Flush_B7F88ECE_0E98_4AD6_ADCD_0C4DB6C1ABCF, "", ".");

int Berry_Two_Wire_Class_Write_4BC8DED4_A828_4C03_868A_B4351FCF4A61(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Write_4BC8DED4_A828_4C03_868A_B4351FCF4A61, "i", ".i");

int Berry_Two_Wire_Class_Write_Bytes_050AC144_6F69_4D4E_B10F_A2B78692E561(Xila_Namespace::Pin_Types::Two_Wire_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write_Bytes(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Write_Bytes_050AC144_6F69_4D4E_B10F_A2B78692E561, "i", ".si");

int Berry_Two_Wire_Class_Slave_Write_683587A1_43F1_4B00_93E4_B781FB04B78A(Xila_Namespace::Pin_Types::Two_Wire_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Slave_Write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Slave_Write_683587A1_43F1_4B00_93E4_B781FB04B78A, "i", ".si");

int Berry_Two_Wire_Class_Get_Timeout_0B781774_F9A8_4EF2_A9AF_72375574BD20(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return (int)I->Get_Timeout(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Get_Timeout_0B781774_F9A8_4EF2_A9AF_72375574BD20, "i", ".");

int Berry_Two_Wire_Class_Get_Clock_Frequency_60F164B7_C3D8_42DB_8D82_47E679BF4260(Xila_Namespace::Pin_Types::Two_Wire_Class* I)
{
return (int)I->Get_Clock_Frequency(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Get_Clock_Frequency_60F164B7_C3D8_42DB_8D82_47E679BF4260, "i", ".");

void Berry_Two_Wire_Class_Set_Timeout_D90BCCBD_B0D2_43DD_95C0_7E4C271139F1(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0)
{
return I->Set_Timeout((short unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Set_Timeout_D90BCCBD_B0D2_43DD_95C0_7E4C271139F1, "", ".i");

void Berry_Two_Wire_Class_Set_Clock_Frequency_14141973_6DF1_4C79_BBFC_62B9A75505B2(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0)
{
return I->Set_Clock_Frequency((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Set_Clock_Frequency_14141973_6DF1_4C79_BBFC_62B9A75505B2, "", ".i");

int Berry_Two_Wire_Class_Set_Pins_46D78B1C_5349_4CC3_9DCD_2071FBB748E0(Xila_Namespace::Pin_Types::Two_Wire_Class* I, int A_0, int A_1)
{
return (int)I->Set_Pins((int)A_0, (int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Two_Wire_Class_Set_Pins_46D78B1C_5349_4CC3_9DCD_2071FBB748E0, "i", ".ii");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Two_Wire_Type(scope:global, name:Two_Wire_Type)
{
	_p, var
	deinit, ctype_func(Berry_Two_Wire_Class_Deinitialize_655D10A0_5B43_429E_B844_4F73DC1AEEDE)
	Begin, ctype_func(Berry_Two_Wire_Class_Begin_79E20CD8_0139_4AAE_9A6C_00D8706EDE6E)
	End, ctype_func(Berry_Two_Wire_Class_End_26085972_25B9_42CD_A984_3F6824D218BE)
	Begin_Transmission, ctype_func(Berry_Two_Wire_Class_Begin_Transmission_3A75290F_D13D_4B21_A046_D9C7BFEB7659)
	End_Transmission, ctype_func(Berry_Two_Wire_Class_End_Transmission_4DFD48EA_422C_4936_8DE6_03F49C0E770E)
	Request_From, ctype_func(Berry_Two_Wire_Class_Request_From_C1781B1E_6F85_4C6C_A019_831E67D1182A)
	Available, ctype_func(Berry_Two_Wire_Class_Available_F4F19619_CF7A_46F9_8838_AABE5F696A73)
	Peek, ctype_func(Berry_Two_Wire_Class_Peek_D0C93F67_581D_467C_AE6A_B42733893DC6)
	Read, ctype_func(Berry_Two_Wire_Class_Read_5EF3697E_E9C8_417B_8672_7D27415541B1)
	Read_Bytes, ctype_func(Berry_Two_Wire_Class_Read_Bytes_78311E62_2776_4F00_9918_C0D9350495BF)
	Read_String, ctype_func(Berry_Two_Wire_Class_Read_String_35A68179_C3F0_467E_9BB6_8DDD75C99B6E)
	Flush, ctype_func(Berry_Two_Wire_Class_Flush_B7F88ECE_0E98_4AD6_ADCD_0C4DB6C1ABCF)
	Write, ctype_func(Berry_Two_Wire_Class_Write_4BC8DED4_A828_4C03_868A_B4351FCF4A61)
	Write_Bytes, ctype_func(Berry_Two_Wire_Class_Write_Bytes_050AC144_6F69_4D4E_B10F_A2B78692E561)
	Slave_Write, ctype_func(Berry_Two_Wire_Class_Slave_Write_683587A1_43F1_4B00_93E4_B781FB04B78A)
	Get_Timeout, ctype_func(Berry_Two_Wire_Class_Get_Timeout_0B781774_F9A8_4EF2_A9AF_72375574BD20)
	Get_Clock_Frequency, ctype_func(Berry_Two_Wire_Class_Get_Clock_Frequency_60F164B7_C3D8_42DB_8D82_47E679BF4260)
	Set_Timeout, ctype_func(Berry_Two_Wire_Class_Set_Timeout_D90BCCBD_B0D2_43DD_95C0_7E4C271139F1)
	Set_Clock_Frequency, ctype_func(Berry_Two_Wire_Class_Set_Clock_Frequency_14141973_6DF1_4C79_BBFC_62B9A75505B2)
	Set_Pins, ctype_func(Berry_Two_Wire_Class_Set_Pins_46D78B1C_5349_4CC3_9DCD_2071FBB748E0)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Two_Wire_Type.h"
}
// - Functions
void Berry_Pin_Class_Set_Mode_8B947AA2_6EDE_49DB_B1E7_42CAE93F7758(int A_0, int A_1)
{
return Pin.Set_Mode((unsigned char)A_0, (Mode_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Mode_8B947AA2_6EDE_49DB_B1E7_42CAE93F7758, "", "ii");


int Berry_Pin_Class_Valid_Output_Pin_7BCB17AC_5849_4638_AD8E_DB4B24832A63(int A_0)
{
return (int)Pin.Valid_Output_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Valid_Output_Pin_7BCB17AC_5849_4638_AD8E_DB4B24832A63, "i", "i");


void Berry_Pin_Class_Digital_Write_78AE1C0A_11FE_4123_A1E7_BE11176BBACD(int A_0, int A_1)
{
return Pin.Digital_Write((unsigned char)A_0, (Digital_State_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Digital_Write_78AE1C0A_11FE_4123_A1E7_BE11176BBACD, "", "ii");


int Berry_Pin_Class_Digital_Read_CC7529B4_1909_4999_8E96_82872695D652(int A_0)
{
return (int)Pin.Digital_Read((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Digital_Read_CC7529B4_1909_4999_8E96_82872695D652, "i", "i");


int Berry_Pin_Class_Valid_Digital_Pin_53F8CF54_9EDC_47CB_AD52_147B7A35419E(int A_0)
{
return (int)Pin.Valid_Digital_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Valid_Digital_Pin_53F8CF54_9EDC_47CB_AD52_147B7A35419E, "i", "i");


int Berry_Pin_Class_Get_Pulse_In_E4AA29B1_E798_46BA_9425_D633FF4A7CAA(int A_0, int A_1, int A_2 = 1000000)
{
return (int)Pin.Get_Pulse_In((unsigned char)A_0, (Digital_State_Type)A_1, (unsigned int)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Get_Pulse_In_E4AA29B1_E798_46BA_9425_D633FF4A7CAA, "i", "ii[i");


int Berry_Pin_Class_Analog_Read_01E26942_7D31_4E87_B0DB_B7F8C4AF1105(int A_0)
{
return (int)Pin.Analog_Read((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Analog_Read_01E26942_7D31_4E87_B0DB_B7F8C4AF1105, "i", "i");


int Berry_Pin_Class_Analog_Read_Milli_Volts_AB8A8BE2_7EA4_4B27_BED5_2DB93C068795(int A_0)
{
return (int)Pin.Analog_Read_Milli_Volts((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Analog_Read_Milli_Volts_AB8A8BE2_7EA4_4B27_BED5_2DB93C068795, "i", "i");


void Berry_Pin_Class_Set_Voltage_Reference_Pin_08B1CF59_2784_448C_9FB3_17687DBB295C(int A_0)
{
return Pin.Set_Voltage_Reference_Pin((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Voltage_Reference_Pin_08B1CF59_2784_448C_9FB3_17687DBB295C, "", "i");


void Berry_Pin_Class_Set_Read_Resolutions_49CA282B_638F_4493_8D08_88B64393E27E(int A_0)
{
return Pin.Set_Read_Resolutions((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Read_Resolutions_49CA282B_638F_4493_8D08_88B64393E27E, "", "i");


void Berry_Pin_Class_Set_Width_1B2D181A_4957_4B85_AA2F_3B371FF73DE6(int A_0)
{
return Pin.Set_Width((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Width_1B2D181A_4957_4B85_AA2F_3B371FF73DE6, "", "i");


void Berry_Pin_Class_Set_Clock_Divider_8984EE81_0E03_47A7_9CA9_95989FD4FFF8(int A_0)
{
return Pin.Set_Clock_Divider((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Clock_Divider_8984EE81_0E03_47A7_9CA9_95989FD4FFF8, "", "i");


void Berry_Pin_Class_Set_Attenuation_3DBCD6AD_04FC_49E2_8E77_22A4B46C96A6(int A_0)
{
return Pin.Set_Attenuation((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Attenuation_3DBCD6AD_04FC_49E2_8E77_22A4B46C96A6, "", "i");


void Berry_Pin_Class_Set_Attenuation_3BC9BA98_4D60_4EF7_A171_AD9208B96452(int A_0, int A_1)
{
return Pin.Set_Attenuation((unsigned char)A_0, (unsigned char)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Set_Attenuation_3BC9BA98_4D60_4EF7_A171_AD9208B96452, "", "ii");


void Berry_Pin_Class_Attach_Interrupt_F15EF859_839B_47B4_B33B_9939E83BDA86(int A_0, void (*  A_1)(  ), int A_2)
{
return Pin.Attach_Interrupt((unsigned char)A_0, A_1, (Interrupt_Mode_Type)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Attach_Interrupt_F15EF859_839B_47B4_B33B_9939E83BDA86, "", "i^^i");



void Berry_Pin_Class_Detach_Interrupt_2C4C656A_2416_4C59_8D01_487B33365F84(int A_0)
{
return Pin.Detach_Interrupt((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Detach_Interrupt_2C4C656A_2416_4C59_8D01_487B33365F84, "", "i");


void* Berry_Pin_Class_Get_Pointer()
{
	return (Module_Type*)&Pin;
}
BE_FUNC_CTYPE_DECLARE(Berry_Pin_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Pin (scope:global)
{
	Set_Mode, ctype_func(Berry_Pin_Class_Set_Mode_8B947AA2_6EDE_49DB_B1E7_42CAE93F7758)
	Valid_Output_Pin, ctype_func(Berry_Pin_Class_Valid_Output_Pin_7BCB17AC_5849_4638_AD8E_DB4B24832A63)
	Digital_Write, ctype_func(Berry_Pin_Class_Digital_Write_78AE1C0A_11FE_4123_A1E7_BE11176BBACD)
	Digital_Read, ctype_func(Berry_Pin_Class_Digital_Read_CC7529B4_1909_4999_8E96_82872695D652)
	Valid_Digital_Pin, ctype_func(Berry_Pin_Class_Valid_Digital_Pin_53F8CF54_9EDC_47CB_AD52_147B7A35419E)
	Get_Pulse_In, ctype_func(Berry_Pin_Class_Get_Pulse_In_E4AA29B1_E798_46BA_9425_D633FF4A7CAA)
	Analog_Read, ctype_func(Berry_Pin_Class_Analog_Read_01E26942_7D31_4E87_B0DB_B7F8C4AF1105)
	Analog_Read_Milli_Volts, ctype_func(Berry_Pin_Class_Analog_Read_Milli_Volts_AB8A8BE2_7EA4_4B27_BED5_2DB93C068795)
	Set_Voltage_Reference_Pin, ctype_func(Berry_Pin_Class_Set_Voltage_Reference_Pin_08B1CF59_2784_448C_9FB3_17687DBB295C)
	Set_Read_Resolutions, ctype_func(Berry_Pin_Class_Set_Read_Resolutions_49CA282B_638F_4493_8D08_88B64393E27E)
	Set_Width, ctype_func(Berry_Pin_Class_Set_Width_1B2D181A_4957_4B85_AA2F_3B371FF73DE6)
	Set_Clock_Divider, ctype_func(Berry_Pin_Class_Set_Clock_Divider_8984EE81_0E03_47A7_9CA9_95989FD4FFF8)
	Set_Attenuation, ctype_func(Berry_Pin_Class_Set_Attenuation_3DBCD6AD_04FC_49E2_8E77_22A4B46C96A6)
	Set_Attenuation, ctype_func(Berry_Pin_Class_Set_Attenuation_3BC9BA98_4D60_4EF7_A171_AD9208B96452)
	Attach_Interrupt, ctype_func(Berry_Pin_Class_Attach_Interrupt_F15EF859_839B_47B4_B33B_9939E83BDA86)
	Detach_Interrupt, ctype_func(Berry_Pin_Class_Detach_Interrupt_2C4C656A_2416_4C59_8D01_487B33365F84)
	Get_Pointer, ctype_func(Berry_Pin_Class_Get_Pointer)

	Serial_Type, class(Berry_Serial_Type)

	Two_Wire_Type, class(Berry_Two_Wire_Type)

	Serial_Configuration_Data_5_Bits, int(134217744)
	Serial_Configuration_Data_6_Bits, int(134217748)
	Serial_Configuration_Data_7_Bits, int(134217752)
	Serial_Configuration_Data_8_Bits, int(134217756)
	Serial_Configuration_Data_5_Bits_2_Stop_Bits, int(134217776)
	Serial_Configuration_Data_6_Bits_2_Stop_Bits, int(134217780)
	Serial_Configuration_Data_7_Bits_2_Stop_Bits, int(134217784)
	Serial_Configuration_Data_8_Bits_2_Stop_Bits, int(134217788)
	Serial_Configuration_Data_5_Bits_Even_Parity, int(134217746)
	Serial_Configuration_Data_6_Bits_Even_Parity, int(134217750)
	Serial_Configuration_Data_7_Bits_Even_Parity, int(134217754)
	Serial_Configuration_Data_8_Bits_Even_Parity, int(134217758)
	Serial_Configuration_Data_5_Bits_Even_Parity_2_Stop_Bits, int(134217778)
	Serial_Configuration_Data_6_Bits_Even_Parity_2_Stop_Bits, int(134217782)
	Serial_Configuration_Data_7_Bits_Even_Parity_2_Stop_Bits, int(134217786)
	Serial_Configuration_Data_8_Bits_Even_Parity_2_Stop_Bits, int(134217790)
	Serial_Configuration_Data_5_Bits_Odd_Parity, int(134217747)
	Serial_Configuration_Data_6_Bits_Odd_Parity, int(134217751)
	Serial_Configuration_Data_7_Bits_Odd_Parity, int(134217755)
	Serial_Configuration_Data_8_Bits_Odd_Parity, int(134217759)
	Serial_Configuration_Data_5_Bits_Odd_Parity_2_Stop_Bits, int(134217779)
	Serial_Configuration_Data_6_Bits_Odd_Parity_2_Stop_Bits, int(134217783)
	Serial_Configuration_Data_7_Bits_Odd_Parity_2_Stop_Bits, int(134217787)
	Serial_Configuration_Data_8_Bits_Odd_Parity_2_Stop_Bits, int(134217791)

	Serial_Mode_Regular, int(0)
	Serial_Mode_RS485_Half_Duplex, int(1)
	Serial_Mode_IRDA, int(2)
	Serial_Mode_RS485_Collision_Detect, int(3)
	Serial_Mode_RS485_Custom, int(4)

	Digital_State_Low, int(0)
	Digital_State_High, int(1)

	Mode_Input, int(1)
	Mode_Output, int(3)
	Mode_Pull_Up, int(4)
	Mode_Input_Pull_Up, int(5)
	Mode_Pull_Down, int(8)
	Mode_Input_Pull_Down, int(9)
	Mode_Open_Drain, int(16)
	Mode_Output_Open_Drain, int(18)
	Mode_Analog, int(192)

	Interrupt_Mode_Disabled, int(0)
	Interrupt_Mode_Rising, int(1)
	Interrupt_Mode_Falling, int(2)
	Interrupt_Mode_Change, int(3)
	Interrupt_Mode_On_Low, int(4)
	Interrupt_Mode_On_High, int(5)
	Interrupt_Mode_On_Low_WE, int(6)
	Interrupt_Mode_On_High_WE, int(7)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Pin.h"
}