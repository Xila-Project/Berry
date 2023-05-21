// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Communication_Types;

// - Functions

// - - Constructors
void * Berry_IP_Address_Class_Initialize_C1A64476_2291_49C7_914D_95B4F3F1EA6E(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_C1A64476_2291_49C7_914D_95B4F3F1EA6E, "+_p", "@");

void * Berry_IP_Address_Class_Initialize_529734E3_D60D_406F_AF6A_AAFA5DF3C135(bvm* V, bool A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_529734E3_D60D_406F_AF6A_AAFA5DF3C135, "+_p", "@b");

void * Berry_IP_Address_Class_Initialize_FF69C9A5_75E4_4761_AC11_963C0CC73EBD(bvm* V, int A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_FF69C9A5_75E4_4761_AC11_963C0CC73EBD, "+_p", "@i");

void * Berry_IP_Address_Class_Initialize_C3F2A546_15E9_4A0B_BAEA_44CC03251C39(bvm* V, const unsigned char* A_0, bool A_1 = true)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_C3F2A546_15E9_4A0B_BAEA_44CC03251C39, "+_p", "@s[b");

void * Berry_IP_Address_Class_Initialize_5E611081_15C6_4AF4_8BC1_B9A9CEC4191A(bvm* V, int A_0, int A_1, int A_2, int A_3)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class((unsigned char)A_0, (unsigned char)A_1, (unsigned char)A_2, (unsigned char)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_5E611081_15C6_4AF4_8BC1_B9A9CEC4191A, "+_p", "@iiii");

void * Berry_IP_Address_Class_Initialize_A086CE94_5E35_4B37_A479_6DECD8D5BD33(bvm* V, ::IPAddress* A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_A086CE94_5E35_4B37_A479_6DECD8D5BD33, "+_p", "@.");

void * Berry_IP_Address_Class_Initialize_5F36E8FB_BDC7_460F_B651_4216DAAEE26A(bvm* V, ::IPv6Address* A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_5F36E8FB_BDC7_460F_B651_4216DAAEE26A, "+_p", "@.");


// - - Destructors
void Berry_IP_Address_Class_Deinitialize_14BF6903_31BB_45CF_8148_68D9BEA59A12(bvm* V, Xila_Namespace::Communication_Types::IP_Address_Class* I)
{
if (!I) { return; }
I->~IP_Address_Class();
be_free(V, I, sizeof(Communication_Types::IP_Address_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Deinitialize_14BF6903_31BB_45CF_8148_68D9BEA59A12, "", "@.");


// - - Functions
const char* Berry_IP_Address_Class_To_70B32C69_9216_45E0_949E_7C9BCCBC265A(bvm* V, Xila_Namespace::Communication_Types::IP_Address_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->To(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_To_70B32C69_9216_45E0_949E_7C9BCCBC265A, "s", "@.");

bool Berry_IP_Address_Class_Is_IP_v4_02BAE8C9_1DCF_4C57_BB15_07244779C419(Xila_Namespace::Communication_Types::IP_Address_Class* I)
{
return I->Is_IP_v4(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Is_IP_v4_02BAE8C9_1DCF_4C57_BB15_07244779C419, "b", ".");

void Berry_IP_Address_Class_Set_IP_Version_57E1A042_B403_4F5F_AD16_154C6BA579EB(Xila_Namespace::Communication_Types::IP_Address_Class* I, bool A_0)
{
return I->Set_IP_Version(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Set_IP_Version_57E1A042_B403_4F5F_AD16_154C6BA579EB, "", ".b");

// - - Operators
bool Berry_IP_Address_Class_Operator_14EDF696_C7CF_4B4C_BA9C_60788EFD77FF(Xila_Namespace::Communication_Types::IP_Address_Class* I, Xila_Namespace::Communication_Types::IP_Address_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Operator_14EDF696_C7CF_4B4C_BA9C_60788EFD77FF, "b", "..")

bool Berry_IP_Address_Class_Operator_1B40FFD4_BBF4_4206_9D10_CCE43E90FD8F(Xila_Namespace::Communication_Types::IP_Address_Class* I, Xila_Namespace::Communication_Types::IP_Address_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Operator_1B40FFD4_BBF4_4206_9D10_CCE43E90FD8F, "b", "..")


// - Berry declaration
/* @const_object_info_begin
class Berry_IP_Address_Type(scope:global, name:IP_Address_Type)
{
	_p, var
	init, ctype_func(Berry_IP_Address_Class_Initialize_C1A64476_2291_49C7_914D_95B4F3F1EA6E)
	init, ctype_func(Berry_IP_Address_Class_Initialize_529734E3_D60D_406F_AF6A_AAFA5DF3C135)
	init, ctype_func(Berry_IP_Address_Class_Initialize_FF69C9A5_75E4_4761_AC11_963C0CC73EBD)
	init, ctype_func(Berry_IP_Address_Class_Initialize_C3F2A546_15E9_4A0B_BAEA_44CC03251C39)
	init, ctype_func(Berry_IP_Address_Class_Initialize_5E611081_15C6_4AF4_8BC1_B9A9CEC4191A)
	init, ctype_func(Berry_IP_Address_Class_Initialize_A086CE94_5E35_4B37_A479_6DECD8D5BD33)
	init, ctype_func(Berry_IP_Address_Class_Initialize_5F36E8FB_BDC7_460F_B651_4216DAAEE26A)
	deinit, ctype_func(Berry_IP_Address_Class_Deinitialize_14BF6903_31BB_45CF_8148_68D9BEA59A12)
	To, ctype_func(Berry_IP_Address_Class_To_70B32C69_9216_45E0_949E_7C9BCCBC265A)
	Is_IP_v4, ctype_func(Berry_IP_Address_Class_Is_IP_v4_02BAE8C9_1DCF_4C57_BB15_07244779C419)
	Set_IP_Version, ctype_func(Berry_IP_Address_Class_Set_IP_Version_57E1A042_B403_4F5F_AD16_154C6BA579EB)
	==, ctype_func(Berry_IP_Address_Class_Operator_14EDF696_C7CF_4B4C_BA9C_60788EFD77FF)
	==, ctype_func(Berry_IP_Address_Class_Operator_1B40FFD4_BBF4_4206_9D10_CCE43E90FD8F)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_IP_Address_Type.h"
}
// - Functions

// - - Constructors
void * Berry_HTTPS_Client_Class_Initialize_AACD75FF_C3DB_46F9_8712_8237D9AEEBBA(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::HTTPS_Client_Class));
return new (Pointer) Communication_Types::HTTPS_Client_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Initialize_AACD75FF_C3DB_46F9_8712_8237D9AEEBBA, "+_p", "@");


// - - Destructors
void Berry_HTTPS_Client_Class_Deinitialize_C245DB14_8AC9_4BA5_9D6B_75264A30BE6D(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
if (!I) { return; }
I->~HTTPS_Client_Class();
be_free(V, I, sizeof(Communication_Types::HTTPS_Client_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Deinitialize_C245DB14_8AC9_4BA5_9D6B_75264A30BE6D, "", "@.");


// - - Functions
int Berry_HTTPS_Client_Class_Begin_0EECEF3E_6F28_4D4B_B4B5_52635037CBA2(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, ::Xila_Namespace::Communication_Types::WiFi_Client_Class* A_0, const char* A_1, int A_2, const char* A_3 = __null, bool A_4 = false)
{
return (int)I->Begin(*A_0, A_1, (short unsigned int)A_2, A_3, A_4); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Begin_0EECEF3E_6F28_4D4B_B4B5_52635037CBA2, "i", "..si[sb");

void Berry_HTTPS_Client_Class_End_644447A4_0AB4_4AF4_A7E4_E4D5BCFCD56F(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_End_644447A4_0AB4_4AF4_A7E4_E4D5BCFCD56F, "", ".");

bool Berry_HTTPS_Client_Class_Connected_9E1BE28F_0E5F_4115_9BF5_CB7C88CC430A(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Connected(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Connected_9E1BE28F_0E5F_4115_9BF5_CB7C88CC430A, "b", ".");

int Berry_HTTPS_Client_Class_Get_5BA8C9B4_D493_45AF_9A3D_88F89D64C93F(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return (int)I->Get(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_5BA8C9B4_D493_45AF_9A3D_88F89D64C93F, "i", ".");

int Berry_HTTPS_Client_Class_Patch_8F046CC4_8FAD_4129_B345_74EC09C80C65(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Patch(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Patch_8F046CC4_8FAD_4129_B345_74EC09C80C65, "i", ".s");

int Berry_HTTPS_Client_Class_Post_3D6EFD8B_87DA_43F9_8ED6_8427996D4214(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Post(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Post_3D6EFD8B_87DA_43F9_8ED6_8427996D4214, "i", ".s");

int Berry_HTTPS_Client_Class_Put_3D0BE061_1A56_4DF2_8D2C_3ECAF89D64F8(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Put(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Put_3D0BE061_1A56_4DF2_8D2C_3ECAF89D64F8, "i", ".s");

int Berry_HTTPS_Client_Class_Send_Request_9FD372F5_3110_4E6E_B7E7_7704B7DA9312(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0, const char* A_1 = __null)
{
return (int)I->Send_Request(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Send_Request_9FD372F5_3110_4E6E_B7E7_7704B7DA9312, "i", ".s[s");

void Berry_HTTPS_Client_Class_Add_Header_4F1CB87C_4523_4AE5_AF33_B9484E4044EF(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0, const char* A_1, bool A_2 = false, bool A_3 = true)
{
return I->Add_Header(A_0, A_1, A_2, A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Add_Header_4F1CB87C_4523_4AE5_AF33_B9484E4044EF, "", ".ss[bb");

bool Berry_HTTPS_Client_Class_Has_Header_86614E31_CA3C_459F_AD5F_57BE08E21B70(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return I->Has_Header(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Has_Header_86614E31_CA3C_459F_AD5F_57BE08E21B70, "b", ".s");

void Berry_HTTPS_Client_Class_Use_HTTP_1_0_10EFFE5C_9526_4312_8CA4_3B8E8DB70448(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, bool A_0)
{
return I->Use_HTTP_1_0(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Use_HTTP_1_0_10EFFE5C_9526_4312_8CA4_3B8E8DB70448, "", ".b");

void Berry_HTTPS_Client_Class_Reset_Cookie_Jar_58DDA4E7_332C_4E14_B722_B8AFD04408E6(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Reset_Cookie_Jar(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Reset_Cookie_Jar_58DDA4E7_332C_4E14_B722_B8AFD04408E6, "", ".");

void Berry_HTTPS_Client_Class_Clear_All_Cookies_2C36CB46_33FA_41B4_8805_AF7E4894B234(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Clear_All_Cookies(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Clear_All_Cookies_2C36CB46_33FA_41B4_8805_AF7E4894B234, "", ".");

void Berry_HTTPS_Client_Class_Set_Reuse_2F9F02F0_FF1F_4210_92AB_560D1A2504CB(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, bool A_0)
{
return I->Set_Reuse(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Reuse_2F9F02F0_FF1F_4210_92AB_560D1A2504CB, "", ".b");

void Berry_HTTPS_Client_Class_Set_User_Agent_301DB233_CD81_485F_A914_DB7CEE061C2E(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return I->Set_User_Agent(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_User_Agent_301DB233_CD81_485F_A914_DB7CEE061C2E, "", ".s");

void Berry_HTTPS_Client_Class_Set_Authorization_58F0A742_FCCF_4F78_BA89_0F98DC85998C(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0, const char* A_1 = __null)
{
return I->Set_Authorization(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Authorization_58F0A742_FCCF_4F78_BA89_0F98DC85998C, "", ".s[s");

void Berry_HTTPS_Client_Class_Set_Authorization_Type_34CC6285_F80A_44FA_806B_E577BA9AD9F2(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return I->Set_Authorization_Type(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Authorization_Type_34CC6285_F80A_44FA_806B_E577BA9AD9F2, "", ".s");

void Berry_HTTPS_Client_Class_Set_Connect_Timeout_DA1863DA_9013_4352_9182_742392D07D8B(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_0)
{
return I->Set_Connect_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Connect_Timeout_DA1863DA_9013_4352_9182_742392D07D8B, "", ".i");

void Berry_HTTPS_Client_Class_Set_Timeout_3E68AD37_A3DA_4A6D_A0F0_C842ED07EC79(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_0)
{
return I->Set_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Timeout_3E68AD37_A3DA_4A6D_A0F0_C842ED07EC79, "", ".i");

void Berry_HTTPS_Client_Class_Set_Follow_Redirects_995C404E_0AF6_422E_8B4E_FB0168500A30(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, bool A_0, bool A_1 = false)
{
return I->Set_Follow_Redirects(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Follow_Redirects_995C404E_0AF6_422E_8B4E_FB0168500A30, "", ".b[b");

void Berry_HTTPS_Client_Class_Set_Redirect_Limit_617BE2FB_DB38_40C3_AC1D_EB23D4E28F12(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_0)
{
return I->Set_Redirect_Limit((short unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Redirect_Limit_617BE2FB_DB38_40C3_AC1D_EB23D4E28F12, "", ".i");

int Berry_HTTPS_Client_Class_Set_URL_BF492864_25B8_4261_8A40_0DE01590B8A2(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Set_URL(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_URL_BF492864_25B8_4261_8A40_0DE01590B8A2, "i", ".s");

const char* Berry_HTTPS_Client_Class_Get_Header_0831E1EC_AB5C_43BD_B097_D8389DC0F35E(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_1)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Get_Header(S_0, A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Header_0831E1EC_AB5C_43BD_B097_D8389DC0F35E, "s", "@.s");

const char* Berry_HTTPS_Client_Class_Get_Header_Name_C9C5D16B_B4B5_44E9_8A99_1AD6B360CC98(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_1)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Get_Header_Name(S_0, (unsigned int)A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Header_Name_C9C5D16B_B4B5_44E9_8A99_1AD6B360CC98, "s", "@.i");

int Berry_HTTPS_Client_Class_Get_Header_Count_13396EC8_C500_4216_8427_0DC2F83640AB(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return (int)I->Get_Header_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Header_Count_13396EC8_C500_4216_8427_0DC2F83640AB, "i", ".");

int Berry_HTTPS_Client_Class_Get_Size_84DD8A84_843F_4AC4_920C_67630CBC8CF9(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return (int)I->Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Size_84DD8A84_843F_4AC4_920C_67630CBC8CF9, "i", ".");

const char* Berry_HTTPS_Client_Class_Get_Location_B2EDAA47_DC84_4086_9B28_C80CCE6E4F5F(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Get_Location(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Location_B2EDAA47_DC84_4086_9B28_C80CCE6E4F5F, "s", ".");

const char* Berry_HTTPS_Client_Class_Get_String_4E123DA7_27AA_45E5_9C7D_9674C6616BB2(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Get_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_String_4E123DA7_27AA_45E5_9C7D_9674C6616BB2, "s", "@.");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_HTTPS_Client_Type(scope:global, name:HTTPS_Client_Type)
{
	_p, var
	init, ctype_func(Berry_HTTPS_Client_Class_Initialize_AACD75FF_C3DB_46F9_8712_8237D9AEEBBA)
	deinit, ctype_func(Berry_HTTPS_Client_Class_Deinitialize_C245DB14_8AC9_4BA5_9D6B_75264A30BE6D)
	Begin, ctype_func(Berry_HTTPS_Client_Class_Begin_0EECEF3E_6F28_4D4B_B4B5_52635037CBA2)
	End, ctype_func(Berry_HTTPS_Client_Class_End_644447A4_0AB4_4AF4_A7E4_E4D5BCFCD56F)
	Connected, ctype_func(Berry_HTTPS_Client_Class_Connected_9E1BE28F_0E5F_4115_9BF5_CB7C88CC430A)
	Get, ctype_func(Berry_HTTPS_Client_Class_Get_5BA8C9B4_D493_45AF_9A3D_88F89D64C93F)
	Patch, ctype_func(Berry_HTTPS_Client_Class_Patch_8F046CC4_8FAD_4129_B345_74EC09C80C65)
	Post, ctype_func(Berry_HTTPS_Client_Class_Post_3D6EFD8B_87DA_43F9_8ED6_8427996D4214)
	Put, ctype_func(Berry_HTTPS_Client_Class_Put_3D0BE061_1A56_4DF2_8D2C_3ECAF89D64F8)
	Send_Request, ctype_func(Berry_HTTPS_Client_Class_Send_Request_9FD372F5_3110_4E6E_B7E7_7704B7DA9312)
	Add_Header, ctype_func(Berry_HTTPS_Client_Class_Add_Header_4F1CB87C_4523_4AE5_AF33_B9484E4044EF)
	Has_Header, ctype_func(Berry_HTTPS_Client_Class_Has_Header_86614E31_CA3C_459F_AD5F_57BE08E21B70)
	Use_HTTP_1_0, ctype_func(Berry_HTTPS_Client_Class_Use_HTTP_1_0_10EFFE5C_9526_4312_8CA4_3B8E8DB70448)
	Reset_Cookie_Jar, ctype_func(Berry_HTTPS_Client_Class_Reset_Cookie_Jar_58DDA4E7_332C_4E14_B722_B8AFD04408E6)
	Clear_All_Cookies, ctype_func(Berry_HTTPS_Client_Class_Clear_All_Cookies_2C36CB46_33FA_41B4_8805_AF7E4894B234)
	Set_Reuse, ctype_func(Berry_HTTPS_Client_Class_Set_Reuse_2F9F02F0_FF1F_4210_92AB_560D1A2504CB)
	Set_User_Agent, ctype_func(Berry_HTTPS_Client_Class_Set_User_Agent_301DB233_CD81_485F_A914_DB7CEE061C2E)
	Set_Authorization, ctype_func(Berry_HTTPS_Client_Class_Set_Authorization_58F0A742_FCCF_4F78_BA89_0F98DC85998C)
	Set_Authorization_Type, ctype_func(Berry_HTTPS_Client_Class_Set_Authorization_Type_34CC6285_F80A_44FA_806B_E577BA9AD9F2)
	Set_Connect_Timeout, ctype_func(Berry_HTTPS_Client_Class_Set_Connect_Timeout_DA1863DA_9013_4352_9182_742392D07D8B)
	Set_Timeout, ctype_func(Berry_HTTPS_Client_Class_Set_Timeout_3E68AD37_A3DA_4A6D_A0F0_C842ED07EC79)
	Set_Follow_Redirects, ctype_func(Berry_HTTPS_Client_Class_Set_Follow_Redirects_995C404E_0AF6_422E_8B4E_FB0168500A30)
	Set_Redirect_Limit, ctype_func(Berry_HTTPS_Client_Class_Set_Redirect_Limit_617BE2FB_DB38_40C3_AC1D_EB23D4E28F12)
	Set_URL, ctype_func(Berry_HTTPS_Client_Class_Set_URL_BF492864_25B8_4261_8A40_0DE01590B8A2)
	Get_Header, ctype_func(Berry_HTTPS_Client_Class_Get_Header_0831E1EC_AB5C_43BD_B097_D8389DC0F35E)
	Get_Header_Name, ctype_func(Berry_HTTPS_Client_Class_Get_Header_Name_C9C5D16B_B4B5_44E9_8A99_1AD6B360CC98)
	Get_Header_Count, ctype_func(Berry_HTTPS_Client_Class_Get_Header_Count_13396EC8_C500_4216_8427_0DC2F83640AB)
	Get_Size, ctype_func(Berry_HTTPS_Client_Class_Get_Size_84DD8A84_843F_4AC4_920C_67630CBC8CF9)
	Get_Location, ctype_func(Berry_HTTPS_Client_Class_Get_Location_B2EDAA47_DC84_4086_9B28_C80CCE6E4F5F)
	Get_String, ctype_func(Berry_HTTPS_Client_Class_Get_String_4E123DA7_27AA_45E5_9C7D_9674C6616BB2)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_HTTPS_Client_Type.h"
}
// - Functions

// - - Constructors
void * Berry_WiFi_Client_Class_Initialize_EE07C07D_B8B3_48B4_81F6_A1FAC352C54F(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::WiFi_Client_Class));
return new (Pointer) Communication_Types::WiFi_Client_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Initialize_EE07C07D_B8B3_48B4_81F6_A1FAC352C54F, "+_p", "@");


// - - Destructors
void Berry_WiFi_Client_Class_Deinitialize_61C593D0_297F_49C5_81A3_F915C574F178(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
if (!I) { return; }
I->~WiFi_Client_Class();
be_free(V, I, sizeof(Communication_Types::WiFi_Client_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Deinitialize_61C593D0_297F_49C5_81A3_F915C574F178, "", "@.");


// - - Functions
int Berry_WiFi_Client_Class_Connect_8FBD3B32_6929_4975_8A1A_A9FF4913EA51(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, const char* A_0, int A_1, int A_2 = 30000)
{
return (int)I->Connect(A_0, (short unsigned int)A_1, (int)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Connect_8FBD3B32_6929_4975_8A1A_A9FF4913EA51, "i", ".si[i");

void Berry_WiFi_Client_Class_Stop_61139E59_114A_4612_9170_206887BFF8D4(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Stop_61139E59_114A_4612_9170_206887BFF8D4, "", ".");

bool Berry_WiFi_Client_Class_Connected_EDDDCDD8_58F0_4C10_9BAF_B09A6B7926F8(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Connected(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Connected_EDDDCDD8_58F0_4C10_9BAF_B09A6B7926F8, "b", ".");

const char* Berry_WiFi_Client_Class_Last_Error_D98B3D04_1252_4595_919E_9959B6B50DCB(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Last_Error(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Last_Error_D98B3D04_1252_4595_919E_9959B6B50DCB, "s", "@.");

void Berry_WiFi_Client_Class_Set_Insecure_59B33D04_5F6B_47EA_BC55_1077F2008432(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Set_Insecure(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Set_Insecure_59B33D04_5F6B_47EA_BC55_1077F2008432, "", ".");

void Berry_WiFi_Client_Class_Set_Handshake_Timeout_28C94D1F_8EC5_4EE4_98F0_E05F9439D1E7(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_0)
{
return I->Set_Handshake_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Set_Handshake_Timeout_28C94D1F_8EC5_4EE4_98F0_E05F9439D1E7, "", ".i");

void Berry_WiFi_Client_Class_Set_Timeout_31127B13_5480_45C8_94E1_F0B95B81B3C2(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_0)
{
return I->Set_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Set_Timeout_31127B13_5480_45C8_94E1_F0B95B81B3C2, "", ".i");

int Berry_WiFi_Client_Class_Available_7C195F74_7E53_415D_A524_A84313D367F4(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Available_7C195F74_7E53_415D_A524_A84313D367F4, "i", ".");

int Berry_WiFi_Client_Class_Peek_A0668B89_879D_441D_82E4_A7DB6DFACFAB(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Peek_A0668B89_879D_441D_82E4_A7DB6DFACFAB, "i", ".");

int Berry_WiFi_Client_Class_Read_2C539702_318A_41B7_A24F_7F2348D9AFC1(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Read_2C539702_318A_41B7_A24F_7F2348D9AFC1, "i", ".");

const unsigned char* Berry_WiFi_Client_Class_Read_Bytes_F48405C1_129A_4A34_86B0_F8E5FB94422B(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Read_Bytes_F48405C1_129A_4A34_86B0_F8E5FB94422B, "s", "@.i");

const char* Berry_WiFi_Client_Class_Read_String_5598F489_6983_4C76_9581_C96F2842F1BE(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Read_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Read_String_5598F489_6983_4C76_9581_C96F2842F1BE, "s", "@.");

void Berry_WiFi_Client_Class_Flush_1D27DF1B_ACA7_4E17_A09D_69D9F66720CC(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Flush_1D27DF1B_ACA7_4E17_A09D_69D9F66720CC, "", ".");

int Berry_WiFi_Client_Class_Write_9E59727D_176B_4BCE_8A99_9685BA1875CD(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Write_9E59727D_176B_4BCE_8A99_9685BA1875CD, "i", ".i");

int Berry_WiFi_Client_Class_Write_Bytes_56B8D4D1_B5D1_458F_8346_E54D1827A5E4(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write_Bytes(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Write_Bytes_56B8D4D1_B5D1_458F_8346_E54D1827A5E4, "i", ".si");

int Berry_WiFi_Client_Class_Write_String_1FD37F7F_513E_4F78_8642_1C0D7393E380(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, const char* A_0)
{
return (int)I->Write_String(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Write_String_1FD37F7F_513E_4F78_8642_1C0D7393E380, "i", ".s");

// - - Operators
bool Berry_WiFi_Client_Class_Operator_FA1D8BF7_8D77_4DCB_8283_DF35B7DC38EC(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, Xila_Namespace::Communication_Types::WiFi_Client_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Operator_FA1D8BF7_8D77_4DCB_8283_DF35B7DC38EC, "b", "..")

bool Berry_WiFi_Client_Class_Operator_E4084754_4A04_4431_AE6A_F45624759B00(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, Xila_Namespace::Communication_Types::WiFi_Client_Class* A_0)
{
return *I != *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Operator_E4084754_4A04_4431_AE6A_F45624759B00, "b", "..")


// - Berry declaration
/* @const_object_info_begin
class Berry_WiFi_Client_Type(scope:global, name:WiFi_Client_Type)
{
	_p, var
	init, ctype_func(Berry_WiFi_Client_Class_Initialize_EE07C07D_B8B3_48B4_81F6_A1FAC352C54F)
	deinit, ctype_func(Berry_WiFi_Client_Class_Deinitialize_61C593D0_297F_49C5_81A3_F915C574F178)
	Connect, ctype_func(Berry_WiFi_Client_Class_Connect_8FBD3B32_6929_4975_8A1A_A9FF4913EA51)
	Stop, ctype_func(Berry_WiFi_Client_Class_Stop_61139E59_114A_4612_9170_206887BFF8D4)
	Connected, ctype_func(Berry_WiFi_Client_Class_Connected_EDDDCDD8_58F0_4C10_9BAF_B09A6B7926F8)
	Last_Error, ctype_func(Berry_WiFi_Client_Class_Last_Error_D98B3D04_1252_4595_919E_9959B6B50DCB)
	Set_Insecure, ctype_func(Berry_WiFi_Client_Class_Set_Insecure_59B33D04_5F6B_47EA_BC55_1077F2008432)
	Set_Handshake_Timeout, ctype_func(Berry_WiFi_Client_Class_Set_Handshake_Timeout_28C94D1F_8EC5_4EE4_98F0_E05F9439D1E7)
	Set_Timeout, ctype_func(Berry_WiFi_Client_Class_Set_Timeout_31127B13_5480_45C8_94E1_F0B95B81B3C2)
	Available, ctype_func(Berry_WiFi_Client_Class_Available_7C195F74_7E53_415D_A524_A84313D367F4)
	Peek, ctype_func(Berry_WiFi_Client_Class_Peek_A0668B89_879D_441D_82E4_A7DB6DFACFAB)
	Read, ctype_func(Berry_WiFi_Client_Class_Read_2C539702_318A_41B7_A24F_7F2348D9AFC1)
	Read_Bytes, ctype_func(Berry_WiFi_Client_Class_Read_Bytes_F48405C1_129A_4A34_86B0_F8E5FB94422B)
	Read_String, ctype_func(Berry_WiFi_Client_Class_Read_String_5598F489_6983_4C76_9581_C96F2842F1BE)
	Flush, ctype_func(Berry_WiFi_Client_Class_Flush_1D27DF1B_ACA7_4E17_A09D_69D9F66720CC)
	Write, ctype_func(Berry_WiFi_Client_Class_Write_9E59727D_176B_4BCE_8A99_9685BA1875CD)
	Write_Bytes, ctype_func(Berry_WiFi_Client_Class_Write_Bytes_56B8D4D1_B5D1_458F_8346_E54D1827A5E4)
	Write_String, ctype_func(Berry_WiFi_Client_Class_Write_String_1FD37F7F_513E_4F78_8642_1C0D7393E380)
	==, ctype_func(Berry_WiFi_Client_Class_Operator_FA1D8BF7_8D77_4DCB_8283_DF35B7DC38EC)
	!=, ctype_func(Berry_WiFi_Client_Class_Operator_E4084754_4A04_4431_AE6A_F45624759B00)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_WiFi_Client_Type.h"
}
// - Functions
int Berry_Communication_Class_Start_F9D9A7CD_2CD4_4FF3_A8E0_35FACF3BD915()
{
return (int)Communication.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Communication_Class_Start_F9D9A7CD_2CD4_4FF3_A8E0_35FACF3BD915, "i", "");


int Berry_Communication_Class_Stop_EB5F2C31_B3EA_4465_9C9A_25EA212F9C0D()
{
return (int)Communication.Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Communication_Class_Stop_EB5F2C31_B3EA_4465_9C9A_25EA212F9C0D, "i", "");


void* Berry_Communication_Class_Get_Pointer()
{
	return (Module_Type*)&Communication;
}
BE_FUNC_CTYPE_DECLARE(Berry_Communication_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Communication (scope:global)
{
	Start, ctype_func(Berry_Communication_Class_Start_F9D9A7CD_2CD4_4FF3_A8E0_35FACF3BD915)
	Stop, ctype_func(Berry_Communication_Class_Stop_EB5F2C31_B3EA_4465_9C9A_25EA212F9C0D)
	Get_Pointer, ctype_func(Berry_Communication_Class_Get_Pointer)

	IP_Address_Type, class(Berry_IP_Address_Type)

	HTTPS_Client_Type, class(Berry_HTTPS_Client_Type)

	WiFi_Client_Type, class(Berry_WiFi_Client_Type)

	HTTP_Code_Continue, int(100)
	HTTP_Code_Switching_Protocols, int(101)
	HTTP_Code_Processing, int(102)
	HTTP_Code_OK, int(200)
	HTTP_Code_Created, int(201)
	HTTP_Code_Accepted, int(202)
	HTTP_Code_Non_Authoritative_Information, int(203)
	HTTP_Code_No_Content, int(204)
	HTTP_Code_Reset_Content, int(205)
	HTTP_Code_Partial_Content, int(206)
	HTTP_Code_Multi_Status, int(207)
	HTTP_Code_Already_Reported, int(208)
	HTTP_Code_I_M_Used, int(226)
	HTTP_Code_Multiple_Choices, int(300)
	HTTP_Code_Moved_Permanently, int(301)
	HTTP_Code_Found, int(302)
	HTTP_Code_See_Other, int(303)
	HTTP_Code_Not_Modified, int(304)
	HTTP_Code_Use_Proxy, int(305)
	HTTP_Code_Temporary_Redirect, int(307)
	HTTP_Code_Permanent_Redirect, int(308)
	HTTP_Code_Bad_Request, int(400)
	HTTP_Code_Unauthorized, int(401)
	HTTP_Code_Payment_Required, int(402)
	HTTP_Code_Forbidden, int(403)
	HTTP_Code_Not_Found, int(404)
	HTTP_Code_Method_Not_Allowed, int(405)
	HTTP_Code_Not_Acceptable, int(406)
	HTTP_Code_Proxy_Authentication_Required, int(407)
	HTTP_Code_Request_Timeout, int(408)
	HTTP_Code_Conflict, int(409)
	HTTP_Code_Gone, int(410)
	HTTP_Code_Length_Required, int(411)
	HTTP_Code_Precondition_Failed, int(412)
	HTTP_Code_Payload_Too_Large, int(413)
	HTTP_Code_URI_Too_Long, int(414)
	HTTP_Code_Unsupported_Media_Type, int(415)
	HTTP_Code_Range_Not_Satisfiable, int(416)
	HTTP_Code_Expectation_Failed, int(417)
	HTTP_Code_Misdirected_Request, int(421)
	HTTP_Code_Unprocessable_Entity, int(422)
	HTTP_Code_Locked, int(423)
	HTTP_Code_Failed_Dependency, int(424)
	HTTP_Code_Upgrade_Required, int(426)
	HTTP_Code_Precondition_Required, int(428)
	HTTP_Code_Too_Many_Requests, int(429)
	HTTP_Code_Request_Header_Fields_Too_Large, int(431)
	HTTP_Code_Internal_Server_Error, int(500)
	HTTP_Code_Not_Implemented, int(501)
	HTTP_Code_Bad_Gateway, int(502)
	HTTP_Code_Service_Unavailable, int(503)
	HTTP_Code_Gateway_Timeout, int(504)
	HTTP_Code_HTTP_Version_Not_Supported, int(505)
	HTTP_Code_Variant_Also_Negotiates, int(506)
	HTTP_Code_Insufficient_Storage, int(507)
	HTTP_Code_Loop_Detected, int(508)
	HTTP_Code_Not_Extended, int(510)
	HTTP_Code_Network_Authentication_Required, int(511)

	Status_No_Shield, int(0)
	Status_Idle, int(1)
	Status_No_SSID_Available, int(2)
	Status_Scan_Completed, int(3)
	Status_Connected, int(4)
	Status_Connection_Failed, int(5)
	Status_Connection_Lost, int(6)
	Status_Disconnected, int(7)

	Mode_None, int(0)
	Mode_Station, int(1)
	Mode_Access_Point, int(2)
	Mode_Station_Access_Point, int(3)

	Authentication_Mode_Open, int(0)
	Authentication_Mode_WEP, int(1)
	Authentication_Mode_WPA_PSK, int(2)
	Authentication_Mode_WPA2_PSK, int(3)
	Authentication_Mode_WPA_WPA2_PSK, int(4)
	Authentication_Mode_WPA2_ENTERPRISE, int(5)
	Authentication_Mode_WPA3_PSK, int(6)
	Authentication_Mode_WPA2_WPA3_PSK, int(7)
	Authentication_Mode_WAPI_PSK, int(8)
	Authentication_Mode_MAX, int(9)

	WPA2_Authentication_Method_TLS, int(0)
	WPA2_Authentication_Method_PEAP, int(1)
	WPA2_Authentication_Method_TTLS, int(2)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Communication.h"
}