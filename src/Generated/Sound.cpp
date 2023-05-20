// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Sound_Types;

// - Functions

// - - Constructors
void * Berry_Configuration_Class_Initialize_D0A5EA19_57AF_4C58_999D_5B48F11172D4(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::Configuration_Class));
return new (Pointer) Sound_Types::Configuration_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Initialize_D0A5EA19_57AF_4C58_999D_5B48F11172D4, "+_p", "@");

void * Berry_Configuration_Class_Initialize_F5759CF9_5C8D_4F05_B0E6_9164340F3428(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::Configuration_Class));
return new (Pointer) Sound_Types::Configuration_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Initialize_F5759CF9_5C8D_4F05_B0E6_9164340F3428, "+_p", "@");

void * Berry_Configuration_Class_Initialize_EFD83E45_B225_4BF4_8B78_CE14BB5779E7(bvm* V, int A_0 = -1, int A_1 = -1, int A_2 = -1)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::Configuration_Class));
return new (Pointer) Sound_Types::Configuration_Class((int)A_0, (int)A_1, (int)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Initialize_EFD83E45_B225_4BF4_8B78_CE14BB5779E7, "+_p", "@[iii");


// - - Destructors
void Berry_Configuration_Class_Deinitialize_DD9FBBA2_2B29_4C6B_AE76_DEAC4A1968C2(bvm* V, Xila_Namespace::Sound_Types::Configuration_Class* I)
{
if (!I) { return; }
I->~Configuration_Class();
be_free(V, I, sizeof(Sound_Types::Configuration_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Deinitialize_DD9FBBA2_2B29_4C6B_AE76_DEAC4A1968C2, "", "@.");


// - - Functions
int Berry_Configuration_Class_Get_Sample_Rate_B3A7BCA5_7DB5_48C4_AA40_0A397063DF0E(Xila_Namespace::Sound_Types::Configuration_Class* I)
{
return (int)I->Get_Sample_Rate(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Get_Sample_Rate_B3A7BCA5_7DB5_48C4_AA40_0A397063DF0E, "i", ".");

int Berry_Configuration_Class_Get_Channel_Count_244D6A0D_53E4_4163_B475_167B6FF9F01C(Xila_Namespace::Sound_Types::Configuration_Class* I)
{
return (int)I->Get_Channel_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Get_Channel_Count_244D6A0D_53E4_4163_B475_167B6FF9F01C, "i", ".");

int Berry_Configuration_Class_Get_Bits_Per_Sample_E3E6C71E_4BDD_49A2_BA84_A9F099AEB1B2(Xila_Namespace::Sound_Types::Configuration_Class* I)
{
return (int)I->Get_Bits_Per_Sample(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Get_Bits_Per_Sample_E3E6C71E_4BDD_49A2_BA84_A9F099AEB1B2, "i", ".");

void Berry_Configuration_Class_Set_Sample_Rate_916A07FA_47EB_40D8_B469_FDC3A2EF0BBE(Xila_Namespace::Sound_Types::Configuration_Class* I, int A_0)
{
return I->Set_Sample_Rate((int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Set_Sample_Rate_916A07FA_47EB_40D8_B469_FDC3A2EF0BBE, "", ".i");

void Berry_Configuration_Class_Set_Channel_Count_C772A2F4_DEA8_4919_BDF4_493E74057689(Xila_Namespace::Sound_Types::Configuration_Class* I, int A_0)
{
return I->Set_Channel_Count((signed char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Set_Channel_Count_C772A2F4_DEA8_4919_BDF4_493E74057689, "", ".i");

void Berry_Configuration_Class_Set_Bits_Per_Sample_C09FE4D9_E826_4FF9_8BDA_36A57FB64BB0(Xila_Namespace::Sound_Types::Configuration_Class* I, int A_0)
{
return I->Set_Bits_Per_Sample((int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Set_Bits_Per_Sample_C09FE4D9_E826_4FF9_8BDA_36A57FB64BB0, "", ".i");

void Berry_Configuration_Class_Set_57D7C8F6_0AD1_4F41_A451_80E8C60ADC85(Xila_Namespace::Sound_Types::Configuration_Class* I, int A_0 = -1, int A_1 = -1, int A_2 = -1)
{
return I->Set((int)A_0, (int)A_1, (int)A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Set_57D7C8F6_0AD1_4F41_A451_80E8C60ADC85, "", ".[iii");

// - - Operators
bool Berry_Configuration_Class_Operator_FCB057BD_07E6_4C40_9A63_018AE8D41CA9(Xila_Namespace::Sound_Types::Configuration_Class* I, Xila_Namespace::Sound_Types::Configuration_Class* A_0)
{
return *I == *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Operator_FCB057BD_07E6_4C40_9A63_018AE8D41CA9, "b", "..")

bool Berry_Configuration_Class_Operator_2A7D9946_1FCB_4E07_96CD_5314252EAF5A(Xila_Namespace::Sound_Types::Configuration_Class* I, Xila_Namespace::Sound_Types::Configuration_Class* A_0)
{
return *I != *A_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_Configuration_Class_Operator_2A7D9946_1FCB_4E07_96CD_5314252EAF5A, "b", "..")


// - Berry declaration
/* @const_object_info_begin
class Berry_Configuration_Type(scope:global, name:Configuration_Type)
{
	_p, var
	init, ctype_func(Berry_Configuration_Class_Initialize_D0A5EA19_57AF_4C58_999D_5B48F11172D4)
	init, ctype_func(Berry_Configuration_Class_Initialize_F5759CF9_5C8D_4F05_B0E6_9164340F3428)
	init, ctype_func(Berry_Configuration_Class_Initialize_EFD83E45_B225_4BF4_8B78_CE14BB5779E7)
	deinit, ctype_func(Berry_Configuration_Class_Deinitialize_DD9FBBA2_2B29_4C6B_AE76_DEAC4A1968C2)
	Get_Sample_Rate, ctype_func(Berry_Configuration_Class_Get_Sample_Rate_B3A7BCA5_7DB5_48C4_AA40_0A397063DF0E)
	Get_Channel_Count, ctype_func(Berry_Configuration_Class_Get_Channel_Count_244D6A0D_53E4_4163_B475_167B6FF9F01C)
	Get_Bits_Per_Sample, ctype_func(Berry_Configuration_Class_Get_Bits_Per_Sample_E3E6C71E_4BDD_49A2_BA84_A9F099AEB1B2)
	Set_Sample_Rate, ctype_func(Berry_Configuration_Class_Set_Sample_Rate_916A07FA_47EB_40D8_B469_FDC3A2EF0BBE)
	Set_Channel_Count, ctype_func(Berry_Configuration_Class_Set_Channel_Count_C772A2F4_DEA8_4919_BDF4_493E74057689)
	Set_Bits_Per_Sample, ctype_func(Berry_Configuration_Class_Set_Bits_Per_Sample_C09FE4D9_E826_4FF9_8BDA_36A57FB64BB0)
	Set, ctype_func(Berry_Configuration_Class_Set_57D7C8F6_0AD1_4F41_A451_80E8C60ADC85)
	==, ctype_func(Berry_Configuration_Class_Operator_FCB057BD_07E6_4C40_9A63_018AE8D41CA9)
	!=, ctype_func(Berry_Configuration_Class_Operator_2A7D9946_1FCB_4E07_96CD_5314252EAF5A)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Configuration_Type.h"
}
// - Functions

// - - Constructors
void * Berry_Volume_Configuration_Class_Initialize_C372DC03_C900_40D3_BEF3_41C34DA5AFDF(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::Volume_Configuration_Class));
return new (Pointer) Sound_Types::Volume_Configuration_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Initialize_C372DC03_C900_40D3_BEF3_41C34DA5AFDF, "+_p", "@");

void * Berry_Volume_Configuration_Class_Initialize_337AEC29_51A2_4A42_A5FC_753BCB14EB05(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::Volume_Configuration_Class));
return new (Pointer) Sound_Types::Volume_Configuration_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Initialize_337AEC29_51A2_4A42_A5FC_753BCB14EB05, "+_p", "@");


// - - Destructors
void Berry_Volume_Configuration_Class_Deinitialize_DEE4614A_8FED_40DA_808B_6946CA880620(bvm* V, Xila_Namespace::Sound_Types::Volume_Configuration_Class* I)
{
if (!I) { return; }
I->~Volume_Configuration_Class();
be_free(V, I, sizeof(Sound_Types::Volume_Configuration_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Deinitialize_DEE4614A_8FED_40DA_808B_6946CA880620, "", "@.");


// - - Functions
bool Berry_Volume_Configuration_Class_Get_Allow_Boost_BEE75E57_9F9C_4BAC_9EA2_E223132B4A44(Xila_Namespace::Sound_Types::Volume_Configuration_Class* I)
{
return I->Get_Allow_Boost(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Get_Allow_Boost_BEE75E57_9F9C_4BAC_9EA2_E223132B4A44, "b", ".");

float Berry_Volume_Configuration_Class_Get_Volume_4B614D48_2C09_4253_BAD1_DB3C61570302(Xila_Namespace::Sound_Types::Volume_Configuration_Class* I)
{
return (float)I->Get_Volume(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Get_Volume_4B614D48_2C09_4253_BAD1_DB3C61570302, "f", ".");

void Berry_Volume_Configuration_Class_Set_Allow_Boost_11E46CD2_7CF8_41CE_AC26_F6C4C459AEF6(Xila_Namespace::Sound_Types::Volume_Configuration_Class* I, bool A_0)
{
return I->Set_Allow_Boost(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Set_Allow_Boost_11E46CD2_7CF8_41CE_AC26_F6C4C459AEF6, "", ".b");

void Berry_Volume_Configuration_Class_Set_Volume_11E73C35_09C2_4088_BAB3_12AC15F15E91(Xila_Namespace::Sound_Types::Volume_Configuration_Class* I, float A_0)
{
return I->Set_Volume((float)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Configuration_Class_Set_Volume_11E73C35_09C2_4088_BAB3_12AC15F15E91, "", ".f");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Volume_Configuration_Type(scope:global, name:Volume_Configuration_Type)
{
	_p, var
	init, ctype_func(Berry_Volume_Configuration_Class_Initialize_C372DC03_C900_40D3_BEF3_41C34DA5AFDF)
	init, ctype_func(Berry_Volume_Configuration_Class_Initialize_337AEC29_51A2_4A42_A5FC_753BCB14EB05)
	deinit, ctype_func(Berry_Volume_Configuration_Class_Deinitialize_DEE4614A_8FED_40DA_808B_6946CA880620)
	Get_Allow_Boost, ctype_func(Berry_Volume_Configuration_Class_Get_Allow_Boost_BEE75E57_9F9C_4BAC_9EA2_E223132B4A44)
	Get_Volume, ctype_func(Berry_Volume_Configuration_Class_Get_Volume_4B614D48_2C09_4253_BAD1_DB3C61570302)
	Set_Allow_Boost, ctype_func(Berry_Volume_Configuration_Class_Set_Allow_Boost_11E46CD2_7CF8_41CE_AC26_F6C4C459AEF6)
	Set_Volume, ctype_func(Berry_Volume_Configuration_Class_Set_Volume_11E73C35_09C2_4088_BAB3_12AC15F15E91)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Volume_Configuration_Type.h"
}
// - Functions

// - - Constructors
void * Berry_Volume_Class_Initialize_88C2BC5F_6247_4759_A08C_3CD508B94001(bvm* V, ::Xila_Namespace::Sound_Types::Stream_Class* A_0)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::Volume_Class));
return new (Pointer) Sound_Types::Volume_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Initialize_88C2BC5F_6247_4759_A08C_3CD508B94001, "+_p", "@.");


// - - Destructors
void Berry_Volume_Class_Deinitialize_C9E6729F_80F4_44F3_B047_9AC5D6D56E62(bvm* V, Xila_Namespace::Sound_Types::Volume_Class* I)
{
if (!I) { return; }
I->~Volume_Class();
be_free(V, I, sizeof(Sound_Types::Volume_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Deinitialize_C9E6729F_80F4_44F3_B047_9AC5D6D56E62, "", "@.");


// - - Functions
int Berry_Volume_Class_Begin_C1483873_F2CE_4A03_9F85_A0AEEF158284(Xila_Namespace::Sound_Types::Volume_Class* I, Volume_Configuration_Class* A_0)
{
return (int)I->Begin(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Begin_C1483873_F2CE_4A03_9F85_A0AEEF158284, "i", "..");

int Berry_Volume_Class_Begin_90059A92_A993_4DEB_90EF_9FE85FF81BC2(Xila_Namespace::Sound_Types::Volume_Class* I, Configuration_Class* A_0)
{
return (int)I->Begin(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Begin_90059A92_A993_4DEB_90EF_9FE85FF81BC2, "i", "..");

void * Berry_Volume_Class_Get_Default_Configuration_5FFC9F2F_82BD_4FE1_AA4A_194F983C2006(bvm* V, Xila_Namespace::Sound_Types::Volume_Class* I)
{
Xila_Namespace::Sound_Types::Volume_Configuration_Class* R = (Xila_Namespace::Sound_Types::Volume_Configuration_Class*) be_malloc(V, sizeof(Xila_Namespace::Sound_Types::Volume_Configuration_Class));
 *R = I->Get_Default_Configuration(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Get_Default_Configuration_5FFC9F2F_82BD_4FE1_AA4A_194F983C2006, "Sound.Volume_Configuration_Type", "@.");

float Berry_Volume_Class_Get_Volume_C867583E_0949_4B5C_B1CF_A8001B0185EC(Xila_Namespace::Sound_Types::Volume_Class* I, int A_0 = -1)
{
return (float)I->Get_Volume((signed char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Get_Volume_C867583E_0949_4B5C_B1CF_A8001B0185EC, "f", ".[i");

void Berry_Volume_Class_Set_Volume_83CC9FAC_242C_4E0C_851C_1863681A45DC(Xila_Namespace::Sound_Types::Volume_Class* I, float A_0, int A_1 = -1)
{
return I->Set_Volume((float)A_0, (signed char)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Volume_Class_Set_Volume_83CC9FAC_242C_4E0C_851C_1863681A45DC, "", ".f[i");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Volume_Type(scope:global, name:Volume_Type)
{
	_p, var
	init, ctype_func(Berry_Volume_Class_Initialize_88C2BC5F_6247_4759_A08C_3CD508B94001)
	deinit, ctype_func(Berry_Volume_Class_Deinitialize_C9E6729F_80F4_44F3_B047_9AC5D6D56E62)
	Begin, ctype_func(Berry_Volume_Class_Begin_C1483873_F2CE_4A03_9F85_A0AEEF158284)
	Begin, ctype_func(Berry_Volume_Class_Begin_90059A92_A993_4DEB_90EF_9FE85FF81BC2)
	Get_Default_Configuration, ctype_func(Berry_Volume_Class_Get_Default_Configuration_5FFC9F2F_82BD_4FE1_AA4A_194F983C2006)
	Get_Volume, ctype_func(Berry_Volume_Class_Get_Volume_C867583E_0949_4B5C_B1CF_A8001B0185EC)
	Set_Volume, ctype_func(Berry_Volume_Class_Set_Volume_83CC9FAC_242C_4E0C_851C_1863681A45DC)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Volume_Type.h"
}
// - Functions

// - - Constructors
void * Berry_I2S_Configuration_Class_Initialize_E0AFF549_6164_4D65_9E5F_061DFC2D2EB0(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::I2S_Configuration_Class));
return new (Pointer) Sound_Types::I2S_Configuration_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Initialize_E0AFF549_6164_4D65_9E5F_061DFC2D2EB0, "+_p", "@");

void * Berry_I2S_Configuration_Class_Initialize_27D5554A_3102_4B18_9182_7A0477B015AE(bvm* V, int A_0 = (int)Xila_Namespace::Sound_Types::Mode_Type::Transmit)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::I2S_Configuration_Class));
return new (Pointer) Sound_Types::I2S_Configuration_Class((Mode_Type)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Initialize_27D5554A_3102_4B18_9182_7A0477B015AE, "+_p", "@[i");


// - - Destructors
void Berry_I2S_Configuration_Class_Deinitialize_D296248B_4566_4D18_86A7_DD27585F614C(bvm* V, Xila_Namespace::Sound_Types::I2S_Configuration_Class* I)
{
if (!I) { return; }
I->~I2S_Configuration_Class();
be_free(V, I, sizeof(Sound_Types::I2S_Configuration_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Deinitialize_D296248B_4566_4D18_86A7_DD27585F614C, "", "@.");


// - - Functions
int Berry_I2S_Configuration_Class_Get_Mode_B39E40C6_A065_40F6_B0E4_8F45FF9C2C02(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I)
{
return (int)I->Get_Mode(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Get_Mode_B39E40C6_A065_40F6_B0E4_8F45FF9C2C02, "i", ".");

int Berry_I2S_Configuration_Class_Get_Word_Select_Clock_Pin_9F0C69AC_C2FC_40D7_9DE7_5C447E48F060(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I)
{
return (int)I->Get_Word_Select_Clock_Pin(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Get_Word_Select_Clock_Pin_9F0C69AC_C2FC_40D7_9DE7_5C447E48F060, "i", ".");

int Berry_I2S_Configuration_Class_Get_Bit_Clock_Pin_39608EDE_F100_470C_B07A_E77B2122061C(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I)
{
return (int)I->Get_Bit_Clock_Pin(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Get_Bit_Clock_Pin_39608EDE_F100_470C_B07A_E77B2122061C, "i", ".");

int Berry_I2S_Configuration_Class_Get_Data_Pin_4A64C7B4_49E5_4447_9B79_E9D58A44193A(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I)
{
return (int)I->Get_Data_Pin(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Get_Data_Pin_4A64C7B4_49E5_4447_9B79_E9D58A44193A, "i", ".");

int Berry_I2S_Configuration_Class_Get_Format_8E729513_D6BE_42B9_A3C0_D1FF5D6121E3(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I)
{
return (int)I->Get_Format(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Get_Format_8E729513_D6BE_42B9_A3C0_D1FF5D6121E3, "i", ".");

void Berry_I2S_Configuration_Class_Set_Mode_F643BFB7_BCBF_4FFC_8336_8CAA2FFCD4E8(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I, int A_0)
{
return I->Set_Mode((Mode_Type)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Set_Mode_F643BFB7_BCBF_4FFC_8336_8CAA2FFCD4E8, "", ".i");

void Berry_I2S_Configuration_Class_Set_Word_Select_Clock_Pin_A140D0EA_57E4_43E5_A305_63BDA7C16569(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I, int A_0)
{
return I->Set_Word_Select_Clock_Pin((int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Set_Word_Select_Clock_Pin_A140D0EA_57E4_43E5_A305_63BDA7C16569, "", ".i");

void Berry_I2S_Configuration_Class_Set_Bit_Clock_Pin_A9EC51E4_1CCC_4705_8C01_CE520F1B1506(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I, int A_0)
{
return I->Set_Bit_Clock_Pin((int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Set_Bit_Clock_Pin_A9EC51E4_1CCC_4705_8C01_CE520F1B1506, "", ".i");

void Berry_I2S_Configuration_Class_Set_Data_Pin_C21AD287_101C_448E_A406_C35AEC005F65(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I, int A_0)
{
return I->Set_Data_Pin((int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Set_Data_Pin_C21AD287_101C_448E_A406_C35AEC005F65, "", ".i");

void Berry_I2S_Configuration_Class_Set_Format_65245465_076B_4A87_8CF3_1E298827E03C(Xila_Namespace::Sound_Types::I2S_Configuration_Class* I, int A_0)
{
return I->Set_Format((Format_Type)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Configuration_Class_Set_Format_65245465_076B_4A87_8CF3_1E298827E03C, "", ".i");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_I2S_Configuration_Type(scope:global, name:I2S_Configuration_Type)
{
	_p, var
	init, ctype_func(Berry_I2S_Configuration_Class_Initialize_E0AFF549_6164_4D65_9E5F_061DFC2D2EB0)
	init, ctype_func(Berry_I2S_Configuration_Class_Initialize_27D5554A_3102_4B18_9182_7A0477B015AE)
	deinit, ctype_func(Berry_I2S_Configuration_Class_Deinitialize_D296248B_4566_4D18_86A7_DD27585F614C)
	Get_Mode, ctype_func(Berry_I2S_Configuration_Class_Get_Mode_B39E40C6_A065_40F6_B0E4_8F45FF9C2C02)
	Get_Word_Select_Clock_Pin, ctype_func(Berry_I2S_Configuration_Class_Get_Word_Select_Clock_Pin_9F0C69AC_C2FC_40D7_9DE7_5C447E48F060)
	Get_Bit_Clock_Pin, ctype_func(Berry_I2S_Configuration_Class_Get_Bit_Clock_Pin_39608EDE_F100_470C_B07A_E77B2122061C)
	Get_Data_Pin, ctype_func(Berry_I2S_Configuration_Class_Get_Data_Pin_4A64C7B4_49E5_4447_9B79_E9D58A44193A)
	Get_Format, ctype_func(Berry_I2S_Configuration_Class_Get_Format_8E729513_D6BE_42B9_A3C0_D1FF5D6121E3)
	Set_Mode, ctype_func(Berry_I2S_Configuration_Class_Set_Mode_F643BFB7_BCBF_4FFC_8336_8CAA2FFCD4E8)
	Set_Word_Select_Clock_Pin, ctype_func(Berry_I2S_Configuration_Class_Set_Word_Select_Clock_Pin_A140D0EA_57E4_43E5_A305_63BDA7C16569)
	Set_Bit_Clock_Pin, ctype_func(Berry_I2S_Configuration_Class_Set_Bit_Clock_Pin_A9EC51E4_1CCC_4705_8C01_CE520F1B1506)
	Set_Data_Pin, ctype_func(Berry_I2S_Configuration_Class_Set_Data_Pin_C21AD287_101C_448E_A406_C35AEC005F65)
	Set_Format, ctype_func(Berry_I2S_Configuration_Class_Set_Format_65245465_076B_4A87_8CF3_1E298827E03C)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_I2S_Configuration_Type.h"
}
// - Functions

// - - Constructors
void * Berry_I2S_Class_Initialize_68BCD9A2_4912_472A_B275_220BC45D735E(bvm* V, int A_0 = -1)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::I2S_Class));
return new (Pointer) Sound_Types::I2S_Class((int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Class_Initialize_68BCD9A2_4912_472A_B275_220BC45D735E, "+_p", "@[i");


// - - Destructors
void Berry_I2S_Class_Deinitialize_3682573E_BD51_4B2A_AF3F_8F2A797ECD53(bvm* V, Xila_Namespace::Sound_Types::I2S_Class* I)
{
if (!I) { return; }
I->~I2S_Class();
be_free(V, I, sizeof(Sound_Types::I2S_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Class_Deinitialize_3682573E_BD51_4B2A_AF3F_8F2A797ECD53, "", "@.");


// - - Functions
int Berry_I2S_Class_Begin_FBEF5F17_9A40_4C1D_902C_ADF8801643CE(Xila_Namespace::Sound_Types::I2S_Class* I, I2S_Configuration_Class* A_0)
{
return (int)I->Begin(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Class_Begin_FBEF5F17_9A40_4C1D_902C_ADF8801643CE, "i", "..");

void * Berry_I2S_Class_Get_Default_Configuration_B84A364B_C898_48BB_9661_D217B1689F3D(bvm* V, Xila_Namespace::Sound_Types::I2S_Class* I, int A_0 = (int)Xila_Namespace::Sound_Types::Mode_Type::Transmit)
{
Xila_Namespace::Sound_Types::I2S_Configuration_Class* R = (Xila_Namespace::Sound_Types::I2S_Configuration_Class*) be_malloc(V, sizeof(Xila_Namespace::Sound_Types::I2S_Configuration_Class));
 *R = I->Get_Default_Configuration((Mode_Type)A_0); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_I2S_Class_Get_Default_Configuration_B84A364B_C898_48BB_9661_D217B1689F3D, "Sound.I2S_Configuration_Type", "@.[i");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_I2S_Type(scope:global, name:I2S_Type)
{
	_p, var
	init, ctype_func(Berry_I2S_Class_Initialize_68BCD9A2_4912_472A_B275_220BC45D735E)
	deinit, ctype_func(Berry_I2S_Class_Deinitialize_3682573E_BD51_4B2A_AF3F_8F2A797ECD53)
	Begin, ctype_func(Berry_I2S_Class_Begin_FBEF5F17_9A40_4C1D_902C_ADF8801643CE)
	Get_Default_Configuration, ctype_func(Berry_I2S_Class_Get_Default_Configuration_B84A364B_C898_48BB_9661_D217B1689F3D)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_I2S_Type.h"
}
// - Functions

// - - Constructors
void * Berry_File_Player_Class_Initialize_C4C2C029_8BAA_49E2_8D3E_52C28401AD64(bvm* V, ::Xila_Namespace::Sound_Types::Stream_Class* A_0, ::Xila_Namespace::Drive_Types::File_Class* A_1, ::Xila_Namespace::Sound_Types::Decoder_Class* A_2)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::File_Player_Class));
return new (Pointer) Sound_Types::File_Player_Class(*A_0, *A_1, *A_2); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Initialize_C4C2C029_8BAA_49E2_8D3E_52C28401AD64, "+_p", "@...");


// - - Destructors
void Berry_File_Player_Class_Deinitialize_27C37F2A_B1D8_4A54_BEEB_9DBF595A3BCD(bvm* V, Xila_Namespace::Sound_Types::File_Player_Class* I)
{
if (!I) { return; }
I->~File_Player_Class();
be_free(V, I, sizeof(Sound_Types::File_Player_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Deinitialize_27C37F2A_B1D8_4A54_BEEB_9DBF595A3BCD, "", "@.");


// - - Functions
int Berry_File_Player_Class_Begin_BB622523_E60B_4E68_835F_503A497CCD2A(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Begin(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Begin_BB622523_E60B_4E68_835F_503A497CCD2A, "i", ".");

void Berry_File_Player_Class_Stop_21975FFE_80FA_44D6_B3D1_C7A0BAADCE60(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return I->Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Stop_21975FFE_80FA_44D6_B3D1_C7A0BAADCE60, "", ".");

int Berry_File_Player_Class_Loop_5AD22B5D_B6AE_4BDD_B5F3_79FD552B7721(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Loop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Loop_5AD22B5D_B6AE_4BDD_B5F3_79FD552B7721, "i", ".");

int Berry_File_Player_Class_Get_Time_5F7EEB81_39D2_4D3F_BA59_990052276AE8(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Get_Time(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Get_Time_5F7EEB81_39D2_4D3F_BA59_990052276AE8, "i", ".");

int Berry_File_Player_Class_Get_Total_Time_BEE0B39A_71CF_49CE_8ADF_BD8D65650340(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Get_Total_Time(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Get_Total_Time_BEE0B39A_71CF_49CE_8ADF_BD8D65650340, "i", ".");

int Berry_File_Player_Class_Get_Sample_Rate_2CD2C96A_5AC4_4880_9098_85A52B90C06C(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Get_Sample_Rate(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Get_Sample_Rate_2CD2C96A_5AC4_4880_9098_85A52B90C06C, "i", ".");

int Berry_File_Player_Class_Get_Bits_Per_Sample_4E6DA84F_E347_417D_855D_43ECAA95318E(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Get_Bits_Per_Sample(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Get_Bits_Per_Sample_4E6DA84F_E347_417D_855D_43ECAA95318E, "i", ".");

int Berry_File_Player_Class_Get_Channels_8D0493EA_7918_4202_A7AC_BC7A612F955E(Xila_Namespace::Sound_Types::File_Player_Class* I)
{
return (int)I->Get_Channels(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Get_Channels_8D0493EA_7918_4202_A7AC_BC7A612F955E, "i", ".");

void Berry_File_Player_Class_Set_Time_9D9D4BB9_5C97_4512_A4F2_5C7388A9AC65(Xila_Namespace::Sound_Types::File_Player_Class* I, int A_0)
{
return I->Set_Time((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Set_Time_9D9D4BB9_5C97_4512_A4F2_5C7388A9AC65, "", ".i");

void Berry_File_Player_Class_Set_Time_5626E392_5F3A_418E_BB03_72DC8FD35B87(Xila_Namespace::Sound_Types::File_Player_Class* I, Time_Class* A_0)
{
return I->Set_Time(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Set_Time_5626E392_5F3A_418E_BB03_72DC8FD35B87, "", "..");

void Berry_File_Player_Class_Set_Input_File_C58A746C_890F_416B_9F95_8A1B40CAFDFC(Xila_Namespace::Sound_Types::File_Player_Class* I, ::Xila_Namespace::Drive_Types::File_Class* A_0)
{
return I->Set_Input_File(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Set_Input_File_C58A746C_890F_416B_9F95_8A1B40CAFDFC, "", "..");

void Berry_File_Player_Class_Set_Output_Stream_F7717EDF_B40F_4EFA_92E8_68BCE4C0D98F(Xila_Namespace::Sound_Types::File_Player_Class* I, ::Xila_Namespace::Sound_Types::Stream_Class* A_0)
{
return I->Set_Output_Stream(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Player_Class_Set_Output_Stream_F7717EDF_B40F_4EFA_92E8_68BCE4C0D98F, "", "..");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_File_Player_Type(scope:global, name:File_Player_Type)
{
	_p, var
	init, ctype_func(Berry_File_Player_Class_Initialize_C4C2C029_8BAA_49E2_8D3E_52C28401AD64)
	deinit, ctype_func(Berry_File_Player_Class_Deinitialize_27C37F2A_B1D8_4A54_BEEB_9DBF595A3BCD)
	Begin, ctype_func(Berry_File_Player_Class_Begin_BB622523_E60B_4E68_835F_503A497CCD2A)
	Stop, ctype_func(Berry_File_Player_Class_Stop_21975FFE_80FA_44D6_B3D1_C7A0BAADCE60)
	Loop, ctype_func(Berry_File_Player_Class_Loop_5AD22B5D_B6AE_4BDD_B5F3_79FD552B7721)
	Get_Time, ctype_func(Berry_File_Player_Class_Get_Time_5F7EEB81_39D2_4D3F_BA59_990052276AE8)
	Get_Total_Time, ctype_func(Berry_File_Player_Class_Get_Total_Time_BEE0B39A_71CF_49CE_8ADF_BD8D65650340)
	Get_Sample_Rate, ctype_func(Berry_File_Player_Class_Get_Sample_Rate_2CD2C96A_5AC4_4880_9098_85A52B90C06C)
	Get_Bits_Per_Sample, ctype_func(Berry_File_Player_Class_Get_Bits_Per_Sample_4E6DA84F_E347_417D_855D_43ECAA95318E)
	Get_Channels, ctype_func(Berry_File_Player_Class_Get_Channels_8D0493EA_7918_4202_A7AC_BC7A612F955E)
	Set_Time, ctype_func(Berry_File_Player_Class_Set_Time_9D9D4BB9_5C97_4512_A4F2_5C7388A9AC65)
	Set_Time, ctype_func(Berry_File_Player_Class_Set_Time_5626E392_5F3A_418E_BB03_72DC8FD35B87)
	Set_Input_File, ctype_func(Berry_File_Player_Class_Set_Input_File_C58A746C_890F_416B_9F95_8A1B40CAFDFC)
	Set_Output_Stream, ctype_func(Berry_File_Player_Class_Set_Output_Stream_F7717EDF_B40F_4EFA_92E8_68BCE4C0D98F)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_File_Player_Type.h"
}
// - Functions

// - - Constructors

// - - Destructors
void Berry_Decoder_Class_Deinitialize_142B6739_8419_4B68_BEBD_A5C09D2CDB0B(bvm* V, Xila_Namespace::Sound_Types::Decoder_Class* I)
{
if (!I) { return; }
I->~Decoder_Class();
be_free(V, I, sizeof(Sound_Types::Decoder_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Decoder_Class_Deinitialize_142B6739_8419_4B68_BEBD_A5C09D2CDB0B, "", "@.");


// - - Functions
void * Berry_Decoder_Class_Get_Configuration_00C99190_5C52_45DE_A802_C8E1A93EA684(bvm* V, Xila_Namespace::Sound_Types::Decoder_Class* I)
{
Xila_Namespace::Sound_Types::Configuration_Class* R = (Xila_Namespace::Sound_Types::Configuration_Class*) be_malloc(V, sizeof(Xila_Namespace::Sound_Types::Configuration_Class));
 *R = I->Get_Configuration(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Decoder_Class_Get_Configuration_00C99190_5C52_45DE_A802_C8E1A93EA684, "Sound.Configuration_Type", "@.");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Decoder_Type(scope:global, name:Decoder_Type)
{
	_p, var
	deinit, ctype_func(Berry_Decoder_Class_Deinitialize_142B6739_8419_4B68_BEBD_A5C09D2CDB0B)
	Get_Configuration, ctype_func(Berry_Decoder_Class_Get_Configuration_00C99190_5C52_45DE_A802_C8E1A93EA684)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Decoder_Type.h"
}
// - Functions

// - - Constructors
void * Berry_WAV_Decoder_Class_Initialize_FBA56780_41F1_4DEE_B349_8B773F4693AB(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Sound_Types::WAV_Decoder_Class));
return new (Pointer) Sound_Types::WAV_Decoder_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_WAV_Decoder_Class_Initialize_FBA56780_41F1_4DEE_B349_8B773F4693AB, "+_p", "@");


// - - Destructors
void Berry_WAV_Decoder_Class_Deinitialize_276726C3_339A_4374_ABB7_DC94171DAD3E(bvm* V, Xila_Namespace::Sound_Types::WAV_Decoder_Class* I)
{
if (!I) { return; }
I->~WAV_Decoder_Class();
be_free(V, I, sizeof(Sound_Types::WAV_Decoder_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_WAV_Decoder_Class_Deinitialize_276726C3_339A_4374_ABB7_DC94171DAD3E, "", "@.");


// - - Functions
// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_WAV_Decoder_Type(scope:global, name:WAV_Decoder_Type)
{
	_p, var
	init, ctype_func(Berry_WAV_Decoder_Class_Initialize_FBA56780_41F1_4DEE_B349_8B773F4693AB)
	deinit, ctype_func(Berry_WAV_Decoder_Class_Deinitialize_276726C3_339A_4374_ABB7_DC94171DAD3E)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_WAV_Decoder_Type.h"
}
// - Functions

// - - Constructors

// - - Destructors
void Berry_Stream_Class_Deinitialize_3BF7677B_BF4C_4419_AEA0_534C7912A3AF(bvm* V, Xila_Namespace::Sound_Types::Stream_Class* I)
{
if (!I) { return; }
I->~Stream_Class();
be_free(V, I, sizeof(Sound_Types::Stream_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_Stream_Class_Deinitialize_3BF7677B_BF4C_4419_AEA0_534C7912A3AF, "", "@.");


// - - Functions
int Berry_Stream_Class_Begin_0F2B664F_5137_482E_9A57_A48770A64332(Xila_Namespace::Sound_Types::Stream_Class* I)
{
return (int)I->Begin(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Stream_Class_Begin_0F2B664F_5137_482E_9A57_A48770A64332, "i", ".");

void Berry_Stream_Class_End_B6944AB4_E6F6_45AF_AB29_81BB63231E63(Xila_Namespace::Sound_Types::Stream_Class* I)
{
return I->End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Stream_Class_End_B6944AB4_E6F6_45AF_AB29_81BB63231E63, "", ".");

void * Berry_Stream_Class_Get_Configuration_B795FCD0_466C_4112_BD79_658E5721E35A(bvm* V, Xila_Namespace::Sound_Types::Stream_Class* I)
{
Xila_Namespace::Sound_Types::Configuration_Class* R = (Xila_Namespace::Sound_Types::Configuration_Class*) be_malloc(V, sizeof(Xila_Namespace::Sound_Types::Configuration_Class));
 *R = I->Get_Configuration(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Stream_Class_Get_Configuration_B795FCD0_466C_4112_BD79_658E5721E35A, "Sound.Configuration_Type", "@.");

void Berry_Stream_Class_Set_Configuration_53A5A2B3_07B2_4C2A_B7D0_643A2EEEBE3A(Xila_Namespace::Sound_Types::Stream_Class* I, Configuration_Class* A_0)
{
return I->Set_Configuration(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Stream_Class_Set_Configuration_53A5A2B3_07B2_4C2A_B7D0_643A2EEEBE3A, "", "..");

void Berry_Stream_Class_Set_Notify_Audio_Change_5CF9F84A_6375_4CEA_A7EB_7E642434177F(Xila_Namespace::Sound_Types::Stream_Class* I, ::Xila_Namespace::Sound_Types::Stream_Class* A_0)
{
return I->Set_Notify_Audio_Change(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Stream_Class_Set_Notify_Audio_Change_5CF9F84A_6375_4CEA_A7EB_7E642434177F, "", "..");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_Stream_Type(scope:global, name:Stream_Type)
{
	_p, var
	deinit, ctype_func(Berry_Stream_Class_Deinitialize_3BF7677B_BF4C_4419_AEA0_534C7912A3AF)
	Begin, ctype_func(Berry_Stream_Class_Begin_0F2B664F_5137_482E_9A57_A48770A64332)
	End, ctype_func(Berry_Stream_Class_End_B6944AB4_E6F6_45AF_AB29_81BB63231E63)
	Get_Configuration, ctype_func(Berry_Stream_Class_Get_Configuration_B795FCD0_466C_4112_BD79_658E5721E35A)
	Set_Configuration, ctype_func(Berry_Stream_Class_Set_Configuration_53A5A2B3_07B2_4C2A_B7D0_643A2EEEBE3A)
	Set_Notify_Audio_Change, ctype_func(Berry_Stream_Class_Set_Notify_Audio_Change_5CF9F84A_6375_4CEA_A7EB_7E642434177F)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_Stream_Type.h"
}
// - Functions
int Berry_Sound_Class_Start_32A866FD_983C_41AB_973C_28E397E8FF70()
{
return (int)Sound.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Start_32A866FD_983C_41AB_973C_28E397E8FF70, "i", "");


int Berry_Sound_Class_Stop_80EE81F1_DCD0_4E15_86FB_D2464DC2FB00()
{
return (int)Sound.Stop(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Stop_80EE81F1_DCD0_4E15_86FB_D2464DC2FB00, "i", "");


int Berry_Sound_Class_Get_Volume_E4C4015C_2085_4834_96FF_9172C6694E17()
{
return (int)Sound.Get_Volume(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Get_Volume_E4C4015C_2085_4834_96FF_9172C6694E17, "i", "");


const void* Berry_Sound_Class_Get_Current_Output_Stream_D75293EB_EF60_4B53_B6AB_CF887E1D002A()
{
return &Sound.Get_Current_Output_Stream(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Get_Current_Output_Stream_D75293EB_EF60_4B53_B6AB_CF887E1D002A, "c", "");


void Berry_Sound_Class_Set_Volume_8173FA2E_EBD6_4F66_B6E9_67D6663CE48E(int A_0)
{
return Sound.Set_Volume((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Set_Volume_8173FA2E_EBD6_4F66_B6E9_67D6663CE48E, "", "i");


int Berry_Sound_Class_Save_Registry_899D61C8_42D2_4576_816F_596538DC685E()
{
return (int)Sound.Save_Registry(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Save_Registry_899D61C8_42D2_4576_816F_596538DC685E, "i", "");


int Berry_Sound_Class_Load_Registry_671139BA_C08F_44A2_B2FE_F1EDA9C03EC3()
{
return (int)Sound.Load_Registry(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Load_Registry_671139BA_C08F_44A2_B2FE_F1EDA9C03EC3, "i", "");


int Berry_Sound_Class_Create_Registry_94C8D838_5D61_45F3_8409_04018150B5DD()
{
return (int)Sound.Create_Registry(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Create_Registry_94C8D838_5D61_45F3_8409_04018150B5DD, "i", "");


void* Berry_Sound_Class_Get_Pointer()
{
	return (Module_Type*)&Sound;
}
BE_FUNC_CTYPE_DECLARE(Berry_Sound_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Sound (scope:global)
{
	Start, ctype_func(Berry_Sound_Class_Start_32A866FD_983C_41AB_973C_28E397E8FF70)
	Stop, ctype_func(Berry_Sound_Class_Stop_80EE81F1_DCD0_4E15_86FB_D2464DC2FB00)
	Get_Volume, ctype_func(Berry_Sound_Class_Get_Volume_E4C4015C_2085_4834_96FF_9172C6694E17)
	Get_Current_Output_Stream, ctype_func(Berry_Sound_Class_Get_Current_Output_Stream_D75293EB_EF60_4B53_B6AB_CF887E1D002A)
	Set_Volume, ctype_func(Berry_Sound_Class_Set_Volume_8173FA2E_EBD6_4F66_B6E9_67D6663CE48E)
	Save_Registry, ctype_func(Berry_Sound_Class_Save_Registry_899D61C8_42D2_4576_816F_596538DC685E)
	Load_Registry, ctype_func(Berry_Sound_Class_Load_Registry_671139BA_C08F_44A2_B2FE_F1EDA9C03EC3)
	Create_Registry, ctype_func(Berry_Sound_Class_Create_Registry_94C8D838_5D61_45F3_8409_04018150B5DD)
	Get_Pointer, ctype_func(Berry_Sound_Class_Get_Pointer)

	Configuration_Type, class(Berry_Configuration_Type)

	Volume_Configuration_Type, class(Berry_Volume_Configuration_Type)

	Volume_Type, class(Berry_Volume_Type)

	I2S_Configuration_Type, class(Berry_I2S_Configuration_Type)

	I2S_Type, class(Berry_I2S_Type)

	File_Player_Type, class(Berry_File_Player_Type)

	Decoder_Type, class(Berry_Decoder_Type)

	WAV_Decoder_Type, class(Berry_WAV_Decoder_Type)

	Stream_Type, class(Berry_Stream_Type)

	Mode_Undefined, int(0)
	Mode_Transmit, int(1)
	Mode_Receive, int(2)
	Mode_Receive_Transmit, int(3)

	Format_Standard, int(0)
	Format_Least_Significant_Bit, int(1)
	Format_Most_Significant_Bit, int(2)
	Format_Philips, int(3)
	Format_Right_Justified, int(4)
	Format_Left_Justified, int(5)
	Format_Pulse_Code_Modulation, int(6)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Sound.h"
}