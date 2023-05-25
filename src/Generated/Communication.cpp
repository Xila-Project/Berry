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
void * Berry_IP_Address_Class_Initialize_661EF3F2_756B_4F87_8FA4_C809612BF06D(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_661EF3F2_756B_4F87_8FA4_C809612BF06D, "+_p", "@");

void * Berry_IP_Address_Class_Initialize_828A7307_6897_4050_BA22_10E34E4CE908(bvm* V, bool A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_828A7307_6897_4050_BA22_10E34E4CE908, "+_p", "@b");

void * Berry_IP_Address_Class_Initialize_3302E548_6457_470A_BBA4_6DB9C8DB4596(bvm* V, int A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_3302E548_6457_470A_BBA4_6DB9C8DB4596, "+_p", "@i");

void * Berry_IP_Address_Class_Initialize_338250EF_1DEB_48F6_90C8_6B0A074DCE2F(bvm* V, const unsigned char* A_0, bool A_1 = true)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_338250EF_1DEB_48F6_90C8_6B0A074DCE2F, "+_p", "@s[b");

void * Berry_IP_Address_Class_Initialize_457B8E18_20DB_4ADC_8DE8_0D9D7BC0FD16(bvm* V, int A_0, int A_1, int A_2, int A_3)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class((unsigned char)A_0, (unsigned char)A_1, (unsigned char)A_2, (unsigned char)A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_457B8E18_20DB_4ADC_8DE8_0D9D7BC0FD16, "+_p", "@iiii");

void * Berry_IP_Address_Class_Initialize_469183CF_E926_4A7A_BE59_9AB4A52A3666(bvm* V, ::IPAddress* A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_469183CF_E926_4A7A_BE59_9AB4A52A3666, "+_p", "@.");

void * Berry_IP_Address_Class_Initialize_56337033_C868_4526_888A_783923ADF17E(bvm* V, ::IPv6Address* A_0)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::IP_Address_Class));
return new (Pointer) Communication_Types::IP_Address_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Initialize_56337033_C868_4526_888A_783923ADF17E, "+_p", "@.");


// - - Destructors
void Berry_IP_Address_Class_Deinitialize_65E1CAF0_3E9A_4B09_9F74_FB41310B4CEC(bvm* V, Xila_Namespace::Communication_Types::IP_Address_Class* I)
{
if (!I) { return; }
I->~IP_Address_Class();
be_free(V, I, sizeof(Communication_Types::IP_Address_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Deinitialize_65E1CAF0_3E9A_4B09_9F74_FB41310B4CEC, "", "@.");


// - - Functions
const char* Berry_IP_Address_Class_To_99515416_7617_4900_BC12_42DD70A939DD(bvm* V, Xila_Namespace::Communication_Types::IP_Address_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->To(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_To_99515416_7617_4900_BC12_42DD70A939DD, "s", "@.");

bool Berry_IP_Address_Class_Is_IP_v4_AF9FE2DF_19DB_42F5_B33A_73C98CF980E0(Xila_Namespace::Communication_Types::IP_Address_Class* I)
{
return I->Is_IP_v4(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Is_IP_v4_AF9FE2DF_19DB_42F5_B33A_73C98CF980E0, "b", ".");

void Berry_IP_Address_Class_Set_IP_Version_2CE8B007_7E9A_442C_B54E_9A041328AF51(Xila_Namespace::Communication_Types::IP_Address_Class* I, bool A_0)
{
return I->Set_IP_Version(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Set_IP_Version_2CE8B007_7E9A_442C_B54E_9A041328AF51, "", ".b");

// - - Operators
bool Berry_IP_Address_Class_Operator_F7A3F957_3682_47EF_8881_0566FFB24608(Xila_Namespace::Communication_Types::IP_Address_Class* I, Xila_Namespace::Communication_Types::IP_Address_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Operator_F7A3F957_3682_47EF_8881_0566FFB24608, "b", "..")

bool Berry_IP_Address_Class_Operator_82F803FD_F943_4FBF_BA33_A8C1148736D2(Xila_Namespace::Communication_Types::IP_Address_Class* I, Xila_Namespace::Communication_Types::IP_Address_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_IP_Address_Class_Operator_82F803FD_F943_4FBF_BA33_A8C1148736D2, "b", "..")


// - Berry declaration
/* @const_object_info_begin
class Berry_IP_Address_Type(scope:global, name:IP_Address_Type)
{
	_p, var
	init, ctype_func(Berry_IP_Address_Class_Initialize_661EF3F2_756B_4F87_8FA4_C809612BF06D)
	init, ctype_func(Berry_IP_Address_Class_Initialize_828A7307_6897_4050_BA22_10E34E4CE908)
	init, ctype_func(Berry_IP_Address_Class_Initialize_3302E548_6457_470A_BBA4_6DB9C8DB4596)
	init, ctype_func(Berry_IP_Address_Class_Initialize_338250EF_1DEB_48F6_90C8_6B0A074DCE2F)
	init, ctype_func(Berry_IP_Address_Class_Initialize_457B8E18_20DB_4ADC_8DE8_0D9D7BC0FD16)
	init, ctype_func(Berry_IP_Address_Class_Initialize_469183CF_E926_4A7A_BE59_9AB4A52A3666)
	init, ctype_func(Berry_IP_Address_Class_Initialize_56337033_C868_4526_888A_783923ADF17E)
	deinit, ctype_func(Berry_IP_Address_Class_Deinitialize_65E1CAF0_3E9A_4B09_9F74_FB41310B4CEC)
	To, ctype_func(Berry_IP_Address_Class_To_99515416_7617_4900_BC12_42DD70A939DD)
	Is_IP_v4, ctype_func(Berry_IP_Address_Class_Is_IP_v4_AF9FE2DF_19DB_42F5_B33A_73C98CF980E0)
	Set_IP_Version, ctype_func(Berry_IP_Address_Class_Set_IP_Version_2CE8B007_7E9A_442C_B54E_9A041328AF51)
	==, ctype_func(Berry_IP_Address_Class_Operator_F7A3F957_3682_47EF_8881_0566FFB24608)
	==, ctype_func(Berry_IP_Address_Class_Operator_82F803FD_F943_4FBF_BA33_A8C1148736D2)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_IP_Address_Type.h"
}
// - Functions

// - - Constructors
void * Berry_HTTPS_Client_Class_Initialize_2A9A79B7_69F3_4ABD_8902_474699190521(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::HTTPS_Client_Class));
return new (Pointer) Communication_Types::HTTPS_Client_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Initialize_2A9A79B7_69F3_4ABD_8902_474699190521, "+_p", "@");


// - - Destructors
void Berry_HTTPS_Client_Class_Deinitialize_6E435F30_A552_452D_8E52_CB36CFB76409(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
if (!I) { return; }
I->~HTTPS_Client_Class();
be_free(V, I, sizeof(Communication_Types::HTTPS_Client_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Deinitialize_6E435F30_A552_452D_8E52_CB36CFB76409, "", "@.");


// - - Functions
int Berry_HTTPS_Client_Class_Begin_CC44BAD5_3471_4264_85AA_8F61BFCE8F7D(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, ::Xila_Namespace::Communication_Types::WiFi_Client_Class* A_0, const char* A_1, int A_2, const char* A_3 = __null, bool A_4 = false)
{
return (int)I->Begin(*A_0, A_1, (short unsigned int)A_2, A_3, A_4); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Begin_CC44BAD5_3471_4264_85AA_8F61BFCE8F7D, "i", "..si[sb");

void Berry_HTTPS_Client_Class_End_1B4D5967_AD17_4213_B356_67210F2C50DA(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_End_1B4D5967_AD17_4213_B356_67210F2C50DA, "", ".");

bool Berry_HTTPS_Client_Class_Connected_BA6B173D_87FE_440A_ABA7_85102AC18549(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Connected(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Connected_BA6B173D_87FE_440A_ABA7_85102AC18549, "b", ".");

int Berry_HTTPS_Client_Class_Get_2362DC71_2E39_4C0A_8FDD_544583F2402F(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return (int)I->Get(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_2362DC71_2E39_4C0A_8FDD_544583F2402F, "i", ".");

int Berry_HTTPS_Client_Class_Patch_DFC1663F_711F_45CA_8323_110CA0C24160(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Patch(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Patch_DFC1663F_711F_45CA_8323_110CA0C24160, "i", ".s");

int Berry_HTTPS_Client_Class_Post_2AA1684A_D770_4A62_B941_9D2306CFBD1C(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Post(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Post_2AA1684A_D770_4A62_B941_9D2306CFBD1C, "i", ".s");

int Berry_HTTPS_Client_Class_Put_B1619554_F655_44F5_8D60_6A062EB3AD2C(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Put(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Put_B1619554_F655_44F5_8D60_6A062EB3AD2C, "i", ".s");

int Berry_HTTPS_Client_Class_Send_Request_392F3205_CEE4_4EB7_8B83_55B089032560(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0, const char* A_1 = __null)
{
return (int)I->Send_Request(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Send_Request_392F3205_CEE4_4EB7_8B83_55B089032560, "i", ".s[s");

void Berry_HTTPS_Client_Class_Add_Header_E112F7D0_6D5C_4497_9FE7_A522E528AA20(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0, const char* A_1, bool A_2 = false, bool A_3 = true)
{
return I->Add_Header(A_0, A_1, A_2, A_3); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Add_Header_E112F7D0_6D5C_4497_9FE7_A522E528AA20, "", ".ss[bb");

bool Berry_HTTPS_Client_Class_Has_Header_8E975445_6BFB_439F_BDE2_F48C36AE758F(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return I->Has_Header(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Has_Header_8E975445_6BFB_439F_BDE2_F48C36AE758F, "b", ".s");

void Berry_HTTPS_Client_Class_Use_HTTP_1_0_7D8079A9_DF95_45A9_9FC2_A48F77BCF94F(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, bool A_0)
{
return I->Use_HTTP_1_0(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Use_HTTP_1_0_7D8079A9_DF95_45A9_9FC2_A48F77BCF94F, "", ".b");

void Berry_HTTPS_Client_Class_Reset_Cookie_Jar_C30F294E_BE00_4A52_B9AF_2BB7805EED30(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Reset_Cookie_Jar(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Reset_Cookie_Jar_C30F294E_BE00_4A52_B9AF_2BB7805EED30, "", ".");

void Berry_HTTPS_Client_Class_Clear_All_Cookies_D3D00C27_1C8C_4712_9192_4B5F645BF458(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Clear_All_Cookies(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Clear_All_Cookies_D3D00C27_1C8C_4712_9192_4B5F645BF458, "", ".");

void Berry_HTTPS_Client_Class_Set_Reuse_C6756036_D29D_465D_85A8_11AD223B2DB0(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, bool A_0)
{
return I->Set_Reuse(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Reuse_C6756036_D29D_465D_85A8_11AD223B2DB0, "", ".b");

void Berry_HTTPS_Client_Class_Set_User_Agent_764967F5_D9EB_41EF_A7DC_6BC3BCD6CA13(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return I->Set_User_Agent(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_User_Agent_764967F5_D9EB_41EF_A7DC_6BC3BCD6CA13, "", ".s");

void Berry_HTTPS_Client_Class_Set_Authorization_0795A3D6_9308_47B1_9616_F92DBE798D5E(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0, const char* A_1 = __null)
{
return I->Set_Authorization(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Authorization_0795A3D6_9308_47B1_9616_F92DBE798D5E, "", ".s[s");

void Berry_HTTPS_Client_Class_Set_Authorization_Type_A2CD3038_16B6_4D66_9676_8CBAEB9A2357(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return I->Set_Authorization_Type(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Authorization_Type_A2CD3038_16B6_4D66_9676_8CBAEB9A2357, "", ".s");

void Berry_HTTPS_Client_Class_Set_Connect_Timeout_7F41AFAF_33C3_43DD_8719_AF04249D5B46(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_0)
{
return I->Set_Connect_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Connect_Timeout_7F41AFAF_33C3_43DD_8719_AF04249D5B46, "", ".i");

void Berry_HTTPS_Client_Class_Set_Timeout_7544CE25_94D9_494E_8C20_19AD879AD6AD(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_0)
{
return I->Set_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Timeout_7544CE25_94D9_494E_8C20_19AD879AD6AD, "", ".i");

void Berry_HTTPS_Client_Class_Set_Follow_Redirects_F263BC29_4F43_40B5_B585_937800E76B61(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, bool A_0, bool A_1 = false)
{
return I->Set_Follow_Redirects(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Follow_Redirects_F263BC29_4F43_40B5_B585_937800E76B61, "", ".b[b");

void Berry_HTTPS_Client_Class_Set_Redirect_Limit_585DED50_CE8E_4DCD_A67D_8450A8D69CE0(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_0)
{
return I->Set_Redirect_Limit((short unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_Redirect_Limit_585DED50_CE8E_4DCD_A67D_8450A8D69CE0, "", ".i");

int Berry_HTTPS_Client_Class_Set_URL_B20E60E2_BB53_45E5_BC70_247DE3835F9E(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_0)
{
return (int)I->Set_URL(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Set_URL_B20E60E2_BB53_45E5_BC70_247DE3835F9E, "i", ".s");

const char* Berry_HTTPS_Client_Class_Get_Header_6C557BE5_3E18_4F9C_9E94_FC745ADB26AD(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, const char* A_1)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Get_Header(S_0, A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Header_6C557BE5_3E18_4F9C_9E94_FC745ADB26AD, "s", "@.s");

const char* Berry_HTTPS_Client_Class_Get_Header_Name_D4C68A63_4C6D_450D_B006_26EDBF6FBF6E(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I, int A_1)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Get_Header_Name(S_0, (unsigned int)A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Header_Name_D4C68A63_4C6D_450D_B006_26EDBF6FBF6E, "s", "@.i");

int Berry_HTTPS_Client_Class_Get_Header_Count_EB3F087D_DEF4_45C4_971C_E22B6E83CD41(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return (int)I->Get_Header_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Header_Count_EB3F087D_DEF4_45C4_971C_E22B6E83CD41, "i", ".");

int Berry_HTTPS_Client_Class_Get_Size_85982BA2_8A05_4331_8D29_30958D5301EC(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return (int)I->Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Size_85982BA2_8A05_4331_8D29_30958D5301EC, "i", ".");

const char* Berry_HTTPS_Client_Class_Get_Location_9D5B5601_1981_4F4B_A8D7_B6E0719B09FE(Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
return I->Get_Location(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_Location_9D5B5601_1981_4F4B_A8D7_B6E0719B09FE, "s", ".");

const char* Berry_HTTPS_Client_Class_Get_String_D125BEC0_371F_4AD6_88F0_BE31EA5ABA19(bvm* V, Xila_Namespace::Communication_Types::HTTPS_Client_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Get_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_HTTPS_Client_Class_Get_String_D125BEC0_371F_4AD6_88F0_BE31EA5ABA19, "s", "@.");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_HTTPS_Client_Type(scope:global, name:HTTPS_Client_Type)
{
	_p, var
	init, ctype_func(Berry_HTTPS_Client_Class_Initialize_2A9A79B7_69F3_4ABD_8902_474699190521)
	deinit, ctype_func(Berry_HTTPS_Client_Class_Deinitialize_6E435F30_A552_452D_8E52_CB36CFB76409)
	Begin, ctype_func(Berry_HTTPS_Client_Class_Begin_CC44BAD5_3471_4264_85AA_8F61BFCE8F7D)
	End, ctype_func(Berry_HTTPS_Client_Class_End_1B4D5967_AD17_4213_B356_67210F2C50DA)
	Connected, ctype_func(Berry_HTTPS_Client_Class_Connected_BA6B173D_87FE_440A_ABA7_85102AC18549)
	Get, ctype_func(Berry_HTTPS_Client_Class_Get_2362DC71_2E39_4C0A_8FDD_544583F2402F)
	Patch, ctype_func(Berry_HTTPS_Client_Class_Patch_DFC1663F_711F_45CA_8323_110CA0C24160)
	Post, ctype_func(Berry_HTTPS_Client_Class_Post_2AA1684A_D770_4A62_B941_9D2306CFBD1C)
	Put, ctype_func(Berry_HTTPS_Client_Class_Put_B1619554_F655_44F5_8D60_6A062EB3AD2C)
	Send_Request, ctype_func(Berry_HTTPS_Client_Class_Send_Request_392F3205_CEE4_4EB7_8B83_55B089032560)
	Add_Header, ctype_func(Berry_HTTPS_Client_Class_Add_Header_E112F7D0_6D5C_4497_9FE7_A522E528AA20)
	Has_Header, ctype_func(Berry_HTTPS_Client_Class_Has_Header_8E975445_6BFB_439F_BDE2_F48C36AE758F)
	Use_HTTP_1_0, ctype_func(Berry_HTTPS_Client_Class_Use_HTTP_1_0_7D8079A9_DF95_45A9_9FC2_A48F77BCF94F)
	Reset_Cookie_Jar, ctype_func(Berry_HTTPS_Client_Class_Reset_Cookie_Jar_C30F294E_BE00_4A52_B9AF_2BB7805EED30)
	Clear_All_Cookies, ctype_func(Berry_HTTPS_Client_Class_Clear_All_Cookies_D3D00C27_1C8C_4712_9192_4B5F645BF458)
	Set_Reuse, ctype_func(Berry_HTTPS_Client_Class_Set_Reuse_C6756036_D29D_465D_85A8_11AD223B2DB0)
	Set_User_Agent, ctype_func(Berry_HTTPS_Client_Class_Set_User_Agent_764967F5_D9EB_41EF_A7DC_6BC3BCD6CA13)
	Set_Authorization, ctype_func(Berry_HTTPS_Client_Class_Set_Authorization_0795A3D6_9308_47B1_9616_F92DBE798D5E)
	Set_Authorization_Type, ctype_func(Berry_HTTPS_Client_Class_Set_Authorization_Type_A2CD3038_16B6_4D66_9676_8CBAEB9A2357)
	Set_Connect_Timeout, ctype_func(Berry_HTTPS_Client_Class_Set_Connect_Timeout_7F41AFAF_33C3_43DD_8719_AF04249D5B46)
	Set_Timeout, ctype_func(Berry_HTTPS_Client_Class_Set_Timeout_7544CE25_94D9_494E_8C20_19AD879AD6AD)
	Set_Follow_Redirects, ctype_func(Berry_HTTPS_Client_Class_Set_Follow_Redirects_F263BC29_4F43_40B5_B585_937800E76B61)
	Set_Redirect_Limit, ctype_func(Berry_HTTPS_Client_Class_Set_Redirect_Limit_585DED50_CE8E_4DCD_A67D_8450A8D69CE0)
	Set_URL, ctype_func(Berry_HTTPS_Client_Class_Set_URL_B20E60E2_BB53_45E5_BC70_247DE3835F9E)
	Get_Header, ctype_func(Berry_HTTPS_Client_Class_Get_Header_6C557BE5_3E18_4F9C_9E94_FC745ADB26AD)
	Get_Header_Name, ctype_func(Berry_HTTPS_Client_Class_Get_Header_Name_D4C68A63_4C6D_450D_B006_26EDBF6FBF6E)
	Get_Header_Count, ctype_func(Berry_HTTPS_Client_Class_Get_Header_Count_EB3F087D_DEF4_45C4_971C_E22B6E83CD41)
	Get_Size, ctype_func(Berry_HTTPS_Client_Class_Get_Size_85982BA2_8A05_4331_8D29_30958D5301EC)
	Get_Location, ctype_func(Berry_HTTPS_Client_Class_Get_Location_9D5B5601_1981_4F4B_A8D7_B6E0719B09FE)
	Get_String, ctype_func(Berry_HTTPS_Client_Class_Get_String_D125BEC0_371F_4AD6_88F0_BE31EA5ABA19)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_HTTPS_Client_Type.h"
}
// - Functions

// - - Constructors
void * Berry_WiFi_Client_Class_Initialize_E9EAB374_68DB_4015_8672_88F87F277E06(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Communication_Types::WiFi_Client_Class));
return new (Pointer) Communication_Types::WiFi_Client_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Initialize_E9EAB374_68DB_4015_8672_88F87F277E06, "+_p", "@");


// - - Destructors
void Berry_WiFi_Client_Class_Deinitialize_57666CA0_CD94_4455_BA64_C528B60485EE(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
if (!I) { return; }
I->~WiFi_Client_Class();
be_free(V, I, sizeof(Communication_Types::WiFi_Client_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Deinitialize_57666CA0_CD94_4455_BA64_C528B60485EE, "", "@.");


// - - Functions
int Berry_WiFi_Client_Class_Connect_3B0BF050_E294_468A_9A60_32A3B292BBF9(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, const char* A_0, int A_1, int A_2 = 30000)
{
return (int)I->Connect(A_0, (short unsigned int)A_1, (int)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Connect_3B0BF050_E294_468A_9A60_32A3B292BBF9, "i", ".si[i");

void Berry_WiFi_Client_Class_Stop_18788748_63EC_4972_B6C8_D122056AACDF(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Stop_18788748_63EC_4972_B6C8_D122056AACDF, "", ".");

bool Berry_WiFi_Client_Class_Connected_B2B4A9ED_4FEF_4B5B_97D1_5D4B18D3BEE4(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Connected(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Connected_B2B4A9ED_4FEF_4B5B_97D1_5D4B18D3BEE4, "b", ".");

const char* Berry_WiFi_Client_Class_Last_Error_9410FB87_A0AA_4FDF_BD99_5CF62D3521BF(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Last_Error(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Last_Error_9410FB87_A0AA_4FDF_BD99_5CF62D3521BF, "s", "@.");

void Berry_WiFi_Client_Class_Set_Insecure_D3B30E1C_19D8_4E1B_B976_B7004655859A(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Set_Insecure(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Set_Insecure_D3B30E1C_19D8_4E1B_B976_B7004655859A, "", ".");

void Berry_WiFi_Client_Class_Set_Handshake_Timeout_D19B3061_ED13_4C7D_B3EB_860241D393A7(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_0)
{
return I->Set_Handshake_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Set_Handshake_Timeout_D19B3061_ED13_4C7D_B3EB_860241D393A7, "", ".i");

void Berry_WiFi_Client_Class_Set_Timeout_0A4EFCD5_D4F2_45E4_84F5_1EBC030C936F(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_0)
{
return I->Set_Timeout((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Set_Timeout_0A4EFCD5_D4F2_45E4_84F5_1EBC030C936F, "", ".i");

int Berry_WiFi_Client_Class_Available_352E42A5_2CEA_4A26_A6BD_C84D942179D7(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Available_352E42A5_2CEA_4A26_A6BD_C84D942179D7, "i", ".");

int Berry_WiFi_Client_Class_Peek_3F66FEF8_A673_471B_B290_63D4D457B581(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Peek_3F66FEF8_A673_471B_B290_63D4D457B581, "i", ".");

int Berry_WiFi_Client_Class_Read_35B6B2FA_A0F3_4381_9BE7_3586790B2549(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Read_35B6B2FA_A0F3_4381_9BE7_3586790B2549, "i", ".");

const unsigned char* Berry_WiFi_Client_Class_Read_Bytes_5E0D7D97_D891_4390_9B57_6AE93A3A091F(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Read_Bytes_5E0D7D97_D891_4390_9B57_6AE93A3A091F, "s", "@.i");

const char* Berry_WiFi_Client_Class_Read_String_9DF0503B_24ED_408A_B7E5_89633BF38303(bvm* V, Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
String_Type S_0;
S_0.Set_Buffer((char*)Berry_Class::Get_Instance(V)->Buffer, sizeof(Berry_Class::Buffer));
I->Read_String(S_0); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Read_String_9DF0503B_24ED_408A_B7E5_89633BF38303, "s", "@.");

void Berry_WiFi_Client_Class_Flush_8349D581_8114_4439_812B_60CF74FBE63B(Xila_Namespace::Communication_Types::WiFi_Client_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Flush_8349D581_8114_4439_812B_60CF74FBE63B, "", ".");

int Berry_WiFi_Client_Class_Write_786BBEBB_2E06_4FB1_8834_CD2D50A36FE3(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Write_786BBEBB_2E06_4FB1_8834_CD2D50A36FE3, "i", ".i");

int Berry_WiFi_Client_Class_Write_Bytes_78CCCE8A_1C98_4AD8_B6BF_EF1D5506F68F(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write_Bytes(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Write_Bytes_78CCCE8A_1C98_4AD8_B6BF_EF1D5506F68F, "i", ".si");

int Berry_WiFi_Client_Class_Write_String_A35B6E48_0B33_4350_9BDC_4B50E1D1DBCE(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, const char* A_0)
{
return (int)I->Write_String(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Write_String_A35B6E48_0B33_4350_9BDC_4B50E1D1DBCE, "i", ".s");

// - - Operators
bool Berry_WiFi_Client_Class_Operator_F725B515_394F_485F_B9EA_9DBD65269BD9(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, Xila_Namespace::Communication_Types::WiFi_Client_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Operator_F725B515_394F_485F_B9EA_9DBD65269BD9, "b", "..")

bool Berry_WiFi_Client_Class_Operator_EB491347_9076_4F0F_9568_AB807D92AD2E(Xila_Namespace::Communication_Types::WiFi_Client_Class* I, Xila_Namespace::Communication_Types::WiFi_Client_Class* A_0)
{
return *I != *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_WiFi_Client_Class_Operator_EB491347_9076_4F0F_9568_AB807D92AD2E, "b", "..")


// - Berry declaration
/* @const_object_info_begin
class Berry_WiFi_Client_Type(scope:global, name:WiFi_Client_Type)
{
	_p, var
	init, ctype_func(Berry_WiFi_Client_Class_Initialize_E9EAB374_68DB_4015_8672_88F87F277E06)
	deinit, ctype_func(Berry_WiFi_Client_Class_Deinitialize_57666CA0_CD94_4455_BA64_C528B60485EE)
	Connect, ctype_func(Berry_WiFi_Client_Class_Connect_3B0BF050_E294_468A_9A60_32A3B292BBF9)
	Stop, ctype_func(Berry_WiFi_Client_Class_Stop_18788748_63EC_4972_B6C8_D122056AACDF)
	Connected, ctype_func(Berry_WiFi_Client_Class_Connected_B2B4A9ED_4FEF_4B5B_97D1_5D4B18D3BEE4)
	Last_Error, ctype_func(Berry_WiFi_Client_Class_Last_Error_9410FB87_A0AA_4FDF_BD99_5CF62D3521BF)
	Set_Insecure, ctype_func(Berry_WiFi_Client_Class_Set_Insecure_D3B30E1C_19D8_4E1B_B976_B7004655859A)
	Set_Handshake_Timeout, ctype_func(Berry_WiFi_Client_Class_Set_Handshake_Timeout_D19B3061_ED13_4C7D_B3EB_860241D393A7)
	Set_Timeout, ctype_func(Berry_WiFi_Client_Class_Set_Timeout_0A4EFCD5_D4F2_45E4_84F5_1EBC030C936F)
	Available, ctype_func(Berry_WiFi_Client_Class_Available_352E42A5_2CEA_4A26_A6BD_C84D942179D7)
	Peek, ctype_func(Berry_WiFi_Client_Class_Peek_3F66FEF8_A673_471B_B290_63D4D457B581)
	Read, ctype_func(Berry_WiFi_Client_Class_Read_35B6B2FA_A0F3_4381_9BE7_3586790B2549)
	Read_Bytes, ctype_func(Berry_WiFi_Client_Class_Read_Bytes_5E0D7D97_D891_4390_9B57_6AE93A3A091F)
	Read_String, ctype_func(Berry_WiFi_Client_Class_Read_String_9DF0503B_24ED_408A_B7E5_89633BF38303)
	Flush, ctype_func(Berry_WiFi_Client_Class_Flush_8349D581_8114_4439_812B_60CF74FBE63B)
	Write, ctype_func(Berry_WiFi_Client_Class_Write_786BBEBB_2E06_4FB1_8834_CD2D50A36FE3)
	Write_Bytes, ctype_func(Berry_WiFi_Client_Class_Write_Bytes_78CCCE8A_1C98_4AD8_B6BF_EF1D5506F68F)
	Write_String, ctype_func(Berry_WiFi_Client_Class_Write_String_A35B6E48_0B33_4350_9BDC_4B50E1D1DBCE)
	==, ctype_func(Berry_WiFi_Client_Class_Operator_F725B515_394F_485F_B9EA_9DBD65269BD9)
	!=, ctype_func(Berry_WiFi_Client_Class_Operator_EB491347_9076_4F0F_9568_AB807D92AD2E)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_WiFi_Client_Type.h"
}
// - Functions
int Berry_Communication_Class_Start_4C9437AA_1C34_4EB0_B114_11CBB21CC620()
{
return (int)Communication.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Communication_Class_Start_4C9437AA_1C34_4EB0_B114_11CBB21CC620, "i", "");


int Berry_Communication_Class_Stop_308D0142_E67E_4982_B7A6_02C90F4141A2()
{
return (int)Communication.Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Communication_Class_Stop_308D0142_E67E_4982_B7A6_02C90F4141A2, "i", "");


void* Berry_Communication_Class_Get_Pointer()
{
	return (Module_Type*)&Communication;
}
BE_FUNC_CTYPE_DECLARE(Berry_Communication_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Communication (scope:global)
{
	Start, ctype_func(Berry_Communication_Class_Start_4C9437AA_1C34_4EB0_B114_11CBB21CC620)
	Stop, ctype_func(Berry_Communication_Class_Stop_308D0142_E67E_4982_B7A6_02C90F4141A2)
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