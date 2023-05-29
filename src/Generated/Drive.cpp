// This file is automatically generated by the Generate.py script.
#include "Berry.hpp"
extern "C"
{
#include "be_constobj.h"
#include "be_mapping.h"
}
using namespace Xila_Namespace;
using namespace Drive_Types;

// - Functions

// - - Constructors
void * Berry_File_Class_Initialize_39A0156B_7961_4745_9886_E6C5EA60F8D6(bvm* V, File* A_0)
{
void* Pointer = be_malloc(V, sizeof(Drive_Types::File_Class));
return new (Pointer) Drive_Types::File_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Initialize_39A0156B_7961_4745_9886_E6C5EA60F8D6, "+_p", "@.");

void * Berry_File_Class_Initialize_55FB078B_ECE3_46AF_B945_8B6781D48426(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Drive_Types::File_Class));
return new (Pointer) Drive_Types::File_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Initialize_55FB078B_ECE3_46AF_B945_8B6781D48426, "+_p", "@");


// - - Destructors
void Berry_File_Class_Deinitialize_8DDFDE9D_F457_4EAB_AB21_71A5603F83BF(bvm* V, Xila_Namespace::Drive_Types::File_Class* I)
{
if (!I) { return; }
I->~File_Class();
be_free(V, I, sizeof(Drive_Types::File_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Deinitialize_8DDFDE9D_F457_4EAB_AB21_71A5603F83BF, "", "@.");


// - - Functions
int Berry_File_Class_write_757D0725_210A_42FD_9005_496F593184B8(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_write_757D0725_210A_42FD_9005_496F593184B8, "i", ".i");

int Berry_File_Class_write_5CF900F7_C3F5_4501_AA8B_88A5F44510D7(Xila_Namespace::Drive_Types::File_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_write_5CF900F7_C3F5_4501_AA8B_88A5F44510D7, "i", ".si");

int Berry_File_Class_available_DB47C714_559A_4F09_A911_F9B6F944DE3E(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_available_DB47C714_559A_4F09_A911_F9B6F944DE3E, "i", ".");

int Berry_File_Class_read_E257313E_C207_4FC6_A6B7_CEBC964F6C7A(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_read_E257313E_C207_4FC6_A6B7_CEBC964F6C7A, "i", ".");

int Berry_File_Class_peek_A049D46B_117E_4A06_A1B7_EB8ED218D4D5(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_peek_A049D46B_117E_4A06_A1B7_EB8ED218D4D5, "i", ".");

void Berry_File_Class_flush_807B5BB7_0A03_43E6_A81F_F256CBF808FB(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_flush_807B5BB7_0A03_43E6_A81F_F256CBF808FB, "", ".");

const char* Berry_File_Class_readBytes_6E94C4BD_76F4_4B29_97D0_BCD0730084EE(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
I->readBytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_readBytes_6E94C4BD_76F4_4B29_97D0_BCD0730084EE, "s", "@.i");

int Berry_File_Class_Write_D181424F_F301_47E9_AE71_8FD4BE583AA0(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Write_D181424F_F301_47E9_AE71_8FD4BE583AA0, "i", ".i");

int Berry_File_Class_Write_BE4E1EF5_B6E7_44A9_8F9A_3FFDE02FC4DA(Xila_Namespace::Drive_Types::File_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Write_BE4E1EF5_B6E7_44A9_8F9A_3FFDE02FC4DA, "i", ".si");

int Berry_File_Class_Available_E80E86EF_C3BC_443F_AF92_18506D21253C(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Available_E80E86EF_C3BC_443F_AF92_18506D21253C, "i", ".");

int Berry_File_Class_Read_F43D93BF_9A65_4027_A39C_104C127B6DAF(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_F43D93BF_9A65_4027_A39C_104C127B6DAF, "i", ".");

int Berry_File_Class_Peek_4072D3EC_7D44_47FE_8E76_9BCDDDFB9149(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Peek_4072D3EC_7D44_47FE_8E76_9BCDDDFB9149, "i", ".");

void Berry_File_Class_Flush_DD787D26_C06D_425F_B868_A756501DFDDB(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Flush_DD787D26_C06D_425F_B868_A756501DFDDB, "", ".");

bool Berry_File_Class_Is_Valid_60CF8318_3325_4DE4_8D9D_43D623DB0D6B(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Is_Valid(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Is_Valid_60CF8318_3325_4DE4_8D9D_43D623DB0D6B, "b", ".");

const char* Berry_File_Class_Read_String_9611E164_59A1_4C94_BBEE_CF73C538A1C2(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_String(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_String_9611E164_59A1_4C94_BBEE_CF73C538A1C2, "s", "@.i");

const unsigned char* Berry_File_Class_Read_Bytes_70D556FE_0E13_4DBE_A0C7_8DC1E4DC9F4C(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_Bytes_70D556FE_0E13_4DBE_A0C7_8DC1E4DC9F4C, "s", "@.i");

bool Berry_File_Class_Seek_F0985B1F_0886_4AA3_84A1_56514AE96CF1(Xila_Namespace::Drive_Types::File_Class* I, int A_0, int A_1)
{
return I->Seek((unsigned int)A_0, (Seek_Mode_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Seek_F0985B1F_0886_4AA3_84A1_56514AE96CF1, "b", ".ii");

bool Berry_File_Class_Seek_4F8BD485_90F1_4AA0_A2E1_36FBF32CEFEB(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return I->Seek((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Seek_4F8BD485_90F1_4AA0_A2E1_36FBF32CEFEB, "b", ".i");

int Berry_File_Class_Copy_F0EBA56B_A608_4932_AE71_F42F4D5DFB1D(Xila_Namespace::Drive_Types::File_Class* I, ::Xila_Namespace::Drive_Types::File_Class* A_0)
{
return (int)I->Copy(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Copy_F0EBA56B_A608_4932_AE71_F42F4D5DFB1D, "i", "..");

int Berry_File_Class_Cut_E01F4051_162D_447A_B563_52D31A8836FC(Xila_Namespace::Drive_Types::File_Class* I, ::Xila_Namespace::Drive_Types::File_Class* A_0)
{
return (int)I->Cut(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Cut_E01F4051_162D_447A_B563_52D31A8836FC, "i", "..");

void Berry_File_Class_Close_662BDFF3_C647_45EC_8DA9_BFA508CB5908(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Close(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Close_662BDFF3_C647_45EC_8DA9_BFA508CB5908, "", ".");

bool Berry_File_Class_Is_Directory_E4B171D3_C1E9_4682_B878_D8D6836FF51B(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Is_Directory(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Is_Directory_E4B171D3_C1E9_4682_B878_D8D6836FF51B, "b", ".");

void * Berry_File_Class_Open_Next_File_B0BE0C8F_1211_4273_AB23_76AF41884D07(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, bool A_0 = false, bool A_1 = false)
{
Xila_Namespace::Drive_Types::File_Class* R = (Xila_Namespace::Drive_Types::File_Class*) be_malloc(V, sizeof(Xila_Namespace::Drive_Types::File_Class));
new (R) Xila_Namespace::Drive_Types::File_Class();
*R = I->Open_Next_File(A_0, A_1); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Open_Next_File_B0BE0C8F_1211_4273_AB23_76AF41884D07, "Drive.File_Type", "@.[bb");

void Berry_File_Class_Rewind_Directory_4F964281_5EC1_477E_B96F_41FF4F548EAF(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Rewind_Directory(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Rewind_Directory_4F964281_5EC1_477E_B96F_41FF4F548EAF, "", ".");

int Berry_File_Class_Get_Items_Count_FF444C66_1BB4_42EF_8EB7_102FC62ABA79(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Items_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Items_Count_FF444C66_1BB4_42EF_8EB7_102FC62ABA79, "i", ".");

int Berry_File_Class_Get_Position_2E763313_03E8_4849_8E3B_BE135FA7C66A(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Position(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Position_2E763313_03E8_4849_8E3B_BE135FA7C66A, "i", ".");

int Berry_File_Class_Get_Size_98B8FBEA_C1C8_412E_B2CC_F92E44883C18(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Size_98B8FBEA_C1C8_412E_B2CC_F92E44883C18, "i", ".");

int Berry_File_Class_Get_Modification_Time_18A366E5_E78E_4024_A9FD_0BA0A999D722(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Modification_Time(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Modification_Time_18A366E5_E78E_4024_A9FD_0BA0A999D722, "i", ".");

const char* Berry_File_Class_Get_Path_9F063A4F_DED1_4434_A48E_0501A1538260(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Path(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Path_9F063A4F_DED1_4434_A48E_0501A1538260, "s", ".");

const char* Berry_File_Class_Get_Name_C392525B_C8EE_4BDE_88E3_5D1DC5CEC1BF(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Name(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Name_C392525B_C8EE_4BDE_88E3_5D1DC5CEC1BF, "s", ".");

const char* Berry_File_Class_Get_Extension_CB8C6A1E_9209_4A77_84B8_B9961A0CFBA2(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Extension(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Extension_CB8C6A1E_9209_4A77_84B8_B9961A0CFBA2, "s", ".");

int Berry_File_Class_Set_Buffer_Size_1E639A9E_D52F_46DA_B4F9_B20F763ECDA3(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->Set_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Set_Buffer_Size_1E639A9E_D52F_46DA_B4F9_B20F763ECDA3, "i", ".i");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_File_Type(scope:global, name:File_Type)
{
	_p, var
	init, ctype_func(Berry_File_Class_Initialize_39A0156B_7961_4745_9886_E6C5EA60F8D6)
	init, ctype_func(Berry_File_Class_Initialize_55FB078B_ECE3_46AF_B945_8B6781D48426)
	deinit, ctype_func(Berry_File_Class_Deinitialize_8DDFDE9D_F457_4EAB_AB21_71A5603F83BF)
	write, ctype_func(Berry_File_Class_write_757D0725_210A_42FD_9005_496F593184B8)
	write, ctype_func(Berry_File_Class_write_5CF900F7_C3F5_4501_AA8B_88A5F44510D7)
	available, ctype_func(Berry_File_Class_available_DB47C714_559A_4F09_A911_F9B6F944DE3E)
	read, ctype_func(Berry_File_Class_read_E257313E_C207_4FC6_A6B7_CEBC964F6C7A)
	peek, ctype_func(Berry_File_Class_peek_A049D46B_117E_4A06_A1B7_EB8ED218D4D5)
	flush, ctype_func(Berry_File_Class_flush_807B5BB7_0A03_43E6_A81F_F256CBF808FB)
	readBytes, ctype_func(Berry_File_Class_readBytes_6E94C4BD_76F4_4B29_97D0_BCD0730084EE)
	Write, ctype_func(Berry_File_Class_Write_D181424F_F301_47E9_AE71_8FD4BE583AA0)
	Write, ctype_func(Berry_File_Class_Write_BE4E1EF5_B6E7_44A9_8F9A_3FFDE02FC4DA)
	Available, ctype_func(Berry_File_Class_Available_E80E86EF_C3BC_443F_AF92_18506D21253C)
	Read, ctype_func(Berry_File_Class_Read_F43D93BF_9A65_4027_A39C_104C127B6DAF)
	Peek, ctype_func(Berry_File_Class_Peek_4072D3EC_7D44_47FE_8E76_9BCDDDFB9149)
	Flush, ctype_func(Berry_File_Class_Flush_DD787D26_C06D_425F_B868_A756501DFDDB)
	Is_Valid, ctype_func(Berry_File_Class_Is_Valid_60CF8318_3325_4DE4_8D9D_43D623DB0D6B)
	Read_String, ctype_func(Berry_File_Class_Read_String_9611E164_59A1_4C94_BBEE_CF73C538A1C2)
	Read_Bytes, ctype_func(Berry_File_Class_Read_Bytes_70D556FE_0E13_4DBE_A0C7_8DC1E4DC9F4C)
	Seek, ctype_func(Berry_File_Class_Seek_F0985B1F_0886_4AA3_84A1_56514AE96CF1)
	Seek, ctype_func(Berry_File_Class_Seek_4F8BD485_90F1_4AA0_A2E1_36FBF32CEFEB)
	Copy, ctype_func(Berry_File_Class_Copy_F0EBA56B_A608_4932_AE71_F42F4D5DFB1D)
	Cut, ctype_func(Berry_File_Class_Cut_E01F4051_162D_447A_B563_52D31A8836FC)
	Close, ctype_func(Berry_File_Class_Close_662BDFF3_C647_45EC_8DA9_BFA508CB5908)
	Is_Directory, ctype_func(Berry_File_Class_Is_Directory_E4B171D3_C1E9_4682_B878_D8D6836FF51B)
	Open_Next_File, ctype_func(Berry_File_Class_Open_Next_File_B0BE0C8F_1211_4273_AB23_76AF41884D07)
	Rewind_Directory, ctype_func(Berry_File_Class_Rewind_Directory_4F964281_5EC1_477E_B96F_41FF4F548EAF)
	Get_Items_Count, ctype_func(Berry_File_Class_Get_Items_Count_FF444C66_1BB4_42EF_8EB7_102FC62ABA79)
	Get_Position, ctype_func(Berry_File_Class_Get_Position_2E763313_03E8_4849_8E3B_BE135FA7C66A)
	Get_Size, ctype_func(Berry_File_Class_Get_Size_98B8FBEA_C1C8_412E_B2CC_F92E44883C18)
	Get_Modification_Time, ctype_func(Berry_File_Class_Get_Modification_Time_18A366E5_E78E_4024_A9FD_0BA0A999D722)
	Get_Path, ctype_func(Berry_File_Class_Get_Path_9F063A4F_DED1_4434_A48E_0501A1538260)
	Get_Name, ctype_func(Berry_File_Class_Get_Name_C392525B_C8EE_4BDE_88E3_5D1DC5CEC1BF)
	Get_Extension, ctype_func(Berry_File_Class_Get_Extension_CB8C6A1E_9209_4A77_84B8_B9961A0CFBA2)
	Set_Buffer_Size, ctype_func(Berry_File_Class_Set_Buffer_Size_1E639A9E_D52F_46DA_B4F9_B20F763ECDA3)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_File_Type.h"
}
// - Functions
void * Berry_Drive_Class_Get_Size_47293A56_64FA_4B53_9CB8_881B856E05AF(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Drive.Get_Size(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Size_47293A56_64FA_4B53_9CB8_881B856E05AF, "Long_Integer_Type", "@");


int Berry_Drive_Class_Get_Type_2E85C249_45E6_40B0_8C13_558CC524B54F()
{
return (int)Drive.Get_Type(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Type_2E85C249_45E6_40B0_8C13_558CC524B54F, "i", "");


void * Berry_Drive_Class_Get_Total_Size_509A0C66_1F28_4135_8662_32272AF61833(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Drive.Get_Total_Size(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Total_Size_509A0C66_1F28_4135_8662_32272AF61833, "Long_Integer_Type", "@");


void * Berry_Drive_Class_Get_Used_Size_3858A05A_4B90_4206_93FC_AA0BD1BF0435(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Drive.Get_Used_Size(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Used_Size_3858A05A_4B90_4206_93FC_AA0BD1BF0435, "Long_Integer_Type", "@");


bool Berry_Drive_Class_Exists_7B87F6F3_4E47_420C_B7FC_DF3CA4A07FB8(const char* A_0)
{
return Drive.Exists(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Exists_7B87F6F3_4E47_420C_B7FC_DF3CA4A07FB8, "b", "s");


int Berry_Drive_Class_Make_Directory_A972F9FC_ABAA_4187_A52A_9FD0D7377B26(const char* A_0)
{
return (int)Drive.Make_Directory(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Make_Directory_A972F9FC_ABAA_4187_A52A_9FD0D7377B26, "i", "s");


int Berry_Drive_Class_Remove_Directory_A6754475_CAC9_48E7_9BB4_EF244C0A90C8(const char* A_0)
{
return (int)Drive.Remove_Directory(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_Directory_A6754475_CAC9_48E7_9BB4_EF244C0A90C8, "i", "s");


int Berry_Drive_Class_Remove_Directory_57D32F34_DBA7_4339_9011_39F6A26C1DCC(const char* A_0, bool A_1)
{
return (int)Drive.Remove_Directory(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_Directory_57D32F34_DBA7_4339_9011_39F6A26C1DCC, "i", "sb");


int Berry_Drive_Class_Remove_435D76F3_4D38_4A3B_A31D_5AE6E6A66A7A(const char* A_0)
{
return (int)Drive.Remove(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_435D76F3_4D38_4A3B_A31D_5AE6E6A66A7A, "i", "s");


void * Berry_Drive_Class_Open_D258C0FC_E9B2_49A5_80F0_5531194C93D2(bvm* V, const char* A_0, bool A_1 = false, bool A_2 = false, bool A_3 = false)
{
Xila_Namespace::Drive_Types::File_Class* R = (Xila_Namespace::Drive_Types::File_Class*) be_malloc(V, sizeof(Xila_Namespace::Drive_Types::File_Class));
new (R) Xila_Namespace::Drive_Types::File_Class();
*R = Drive.Open(A_0, A_1, A_2, A_3); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Open_D258C0FC_E9B2_49A5_80F0_5531194C93D2, "Drive.File_Type", "@s[bbb");


int Berry_Drive_Class_Remove_File_70F4E62F_1F24_4E1C_AC96_882F27C0DCA1(const char* A_0)
{
return (int)Drive.Remove_File(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_File_70F4E62F_1F24_4E1C_AC96_882F27C0DCA1, "i", "s");


int Berry_Drive_Class_Rename_3E06BD8E_9E78_4C56_8162_4D325F9F9A0B(const char* A_0, const char* A_1)
{
return (int)Drive.Rename(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Rename_3E06BD8E_9E78_4C56_8162_4D325F9F9A0B, "i", "ss");


void Berry_Drive_Class_End_6995C328_1904_40FF_9899_0DBDF3EC815B()
{
return Drive.End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_End_6995C328_1904_40FF_9899_0DBDF3EC815B, "", "");


int Berry_Drive_Class_Start_C908EF0D_1A59_40CE_923E_C0D491C3FEC1()
{
return (int)Drive.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Start_C908EF0D_1A59_40CE_923E_C0D491C3FEC1, "i", "");


void* Berry_Drive_Class_Get_Pointer()
{
	return (Module_Type*)&Drive;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Drive (scope:global)
{
	Get_Size, ctype_func(Berry_Drive_Class_Get_Size_47293A56_64FA_4B53_9CB8_881B856E05AF)
	Get_Type, ctype_func(Berry_Drive_Class_Get_Type_2E85C249_45E6_40B0_8C13_558CC524B54F)
	Get_Total_Size, ctype_func(Berry_Drive_Class_Get_Total_Size_509A0C66_1F28_4135_8662_32272AF61833)
	Get_Used_Size, ctype_func(Berry_Drive_Class_Get_Used_Size_3858A05A_4B90_4206_93FC_AA0BD1BF0435)
	Exists, ctype_func(Berry_Drive_Class_Exists_7B87F6F3_4E47_420C_B7FC_DF3CA4A07FB8)
	Make_Directory, ctype_func(Berry_Drive_Class_Make_Directory_A972F9FC_ABAA_4187_A52A_9FD0D7377B26)
	Remove_Directory, ctype_func(Berry_Drive_Class_Remove_Directory_A6754475_CAC9_48E7_9BB4_EF244C0A90C8)
	Remove_Directory, ctype_func(Berry_Drive_Class_Remove_Directory_57D32F34_DBA7_4339_9011_39F6A26C1DCC)
	Remove, ctype_func(Berry_Drive_Class_Remove_435D76F3_4D38_4A3B_A31D_5AE6E6A66A7A)
	Open, ctype_func(Berry_Drive_Class_Open_D258C0FC_E9B2_49A5_80F0_5531194C93D2)
	Remove_File, ctype_func(Berry_Drive_Class_Remove_File_70F4E62F_1F24_4E1C_AC96_882F27C0DCA1)
	Rename, ctype_func(Berry_Drive_Class_Rename_3E06BD8E_9E78_4C56_8162_4D325F9F9A0B)
	End, ctype_func(Berry_Drive_Class_End_6995C328_1904_40FF_9899_0DBDF3EC815B)
	Start, ctype_func(Berry_Drive_Class_Start_C908EF0D_1A59_40CE_923E_C0D491C3FEC1)
	Get_Pointer, ctype_func(Berry_Drive_Class_Get_Pointer)

	File_Type, class(Berry_File_Type)

	Seek_Mode_Set, int(0)
	Seek_Mode_Current, int(1)
	Seek_Mode_End, int(2)

	Drive_None, int(0)
	Drive_MMC, int(1)
	Drive_SD_SC, int(2)
	Drive_SD_HC, int(3)
	Drive_Unknow, int(4)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Drive.h"
}