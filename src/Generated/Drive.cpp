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
void * Berry_File_Class_Initialize_39AE21F6_82B6_4C0F_A98E_50AB2D88AEA6(bvm* V)
{
void* Pointer = be_malloc(V, sizeof(Drive_Types::File_Class));
return new (Pointer) Drive_Types::File_Class(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Initialize_39AE21F6_82B6_4C0F_A98E_50AB2D88AEA6, "+_p", "@");

void * Berry_File_Class_Initialize_09E7ED51_4B7E_48C1_8893_71AE2ADDB9AA(bvm* V, File* A_0)
{
void* Pointer = be_malloc(V, sizeof(Drive_Types::File_Class));
return new (Pointer) Drive_Types::File_Class(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Initialize_09E7ED51_4B7E_48C1_8893_71AE2ADDB9AA, "+_p", "@.");


// - - Destructors
void Berry_File_Class_Deinitialize_443A4FC5_47C0_4281_A248_3CFEA2E306E2(bvm* V, Xila_Namespace::Drive_Types::File_Class* I)
{
if (!I) { return; }
I->~File_Class();
be_free(V, I, sizeof(Drive_Types::File_Class));
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Deinitialize_443A4FC5_47C0_4281_A248_3CFEA2E306E2, "", "@.");


// - - Functions
int Berry_File_Class_write_FF6C33DF_3D26_4691_BAAE_FCCEA1F261FB(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_write_FF6C33DF_3D26_4691_BAAE_FCCEA1F261FB, "i", ".i");

int Berry_File_Class_write_EBEFDBE6_30B9_4236_A4EB_798389655D84(Xila_Namespace::Drive_Types::File_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_write_EBEFDBE6_30B9_4236_A4EB_798389655D84, "i", ".si");

int Berry_File_Class_available_A41FD296_F804_4ACC_B59D_7EDE3F095FBD(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_available_A41FD296_F804_4ACC_B59D_7EDE3F095FBD, "i", ".");

int Berry_File_Class_read_6D86F851_931C_4682_9D64_9E460889F64D(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_read_6D86F851_931C_4682_9D64_9E460889F64D, "i", ".");

int Berry_File_Class_peek_87770DF4_E1A5_453D_A190_E4A027F075ED(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_peek_87770DF4_E1A5_453D_A190_E4A027F075ED, "i", ".");

void Berry_File_Class_flush_5F839DAA_9A0A_4437_AA7F_F981D46DC9A9(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_flush_5F839DAA_9A0A_4437_AA7F_F981D46DC9A9, "", ".");

const char* Berry_File_Class_readBytes_9BE09C1F_D889_4CE4_88C1_3B9B3FA8928F(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
I->readBytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_readBytes_9BE09C1F_D889_4CE4_88C1_3B9B3FA8928F, "s", "@.i");

int Berry_File_Class_Write_012B088E_C161_4574_B5E7_58BE9362C5EE(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->Write((unsigned char)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Write_012B088E_C161_4574_B5E7_58BE9362C5EE, "i", ".i");

int Berry_File_Class_Write_9B670DE5_AEED_4349_B750_C8BA716E52C6(Xila_Namespace::Drive_Types::File_Class* I, const unsigned char* A_0, int A_1)
{
return (int)I->Write(A_0, (unsigned int)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Write_9B670DE5_AEED_4349_B750_C8BA716E52C6, "i", ".si");

int Berry_File_Class_Available_4901AF1C_4301_44FB_B9E8_3940CCFDB72E(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Available(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Available_4901AF1C_4301_44FB_B9E8_3940CCFDB72E, "i", ".");

int Berry_File_Class_Read_F971325D_C12B_4B35_9BEC_0893882F9F35(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Read(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_F971325D_C12B_4B35_9BEC_0893882F9F35, "i", ".");

int Berry_File_Class_Peek_F9A21E3F_B733_4684_8060_CDA60E9024D5(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Peek(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Peek_F9A21E3F_B733_4684_8060_CDA60E9024D5, "i", ".");

void Berry_File_Class_Flush_E4768B22_6A49_4721_9889_D1FB5764DE0A(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Flush(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Flush_E4768B22_6A49_4721_9889_D1FB5764DE0A, "", ".");

bool Berry_File_Class_Is_Valid_5068FC8D_7D27_4BA4_B225_CFF5F4E592BB(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Is_Valid(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Is_Valid_5068FC8D_7D27_4BA4_B225_CFF5F4E592BB, "b", ".");

const char* Berry_File_Class_Read_String_B05B5146_A335_4354_8176_004B2A89F1C6(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
char* S_0 = (char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_String(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_String_B05B5146_A335_4354_8176_004B2A89F1C6, "s", "@.i");

const unsigned char* Berry_File_Class_Read_Bytes_D49B4BAE_5004_434B_BE79_211EB1639D89(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, int A_1)
{
unsigned char* S_0 = (unsigned char*)Berry_Class::Get_Instance(V)->Buffer;
I->Read_Bytes(S_0, (A_1 > sizeof(Berry_Class::Buffer)) ? sizeof(Berry_Class::Buffer) : A_1); 
return S_0;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Read_Bytes_D49B4BAE_5004_434B_BE79_211EB1639D89, "s", "@.i");

bool Berry_File_Class_Seek_0D1820D7_CD6A_42F0_81C7_30DAB894A914(Xila_Namespace::Drive_Types::File_Class* I, int A_0, int A_1)
{
return I->Seek((unsigned int)A_0, (Seek_Mode_Type)A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Seek_0D1820D7_CD6A_42F0_81C7_30DAB894A914, "b", ".ii");

bool Berry_File_Class_Seek_E0EACD98_8940_407E_990D_1E4B476640D5(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return I->Seek((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Seek_E0EACD98_8940_407E_990D_1E4B476640D5, "b", ".i");

int Berry_File_Class_Copy_B9A87D01_8C02_4ED4_BCDB_855758D7808D(Xila_Namespace::Drive_Types::File_Class* I, ::Xila_Namespace::Drive_Types::File_Class* A_0)
{
return (int)I->Copy(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Copy_B9A87D01_8C02_4ED4_BCDB_855758D7808D, "i", "..");

int Berry_File_Class_Cut_E5B1F71D_57BC_4D6C_BA04_798BD70535DE(Xila_Namespace::Drive_Types::File_Class* I, ::Xila_Namespace::Drive_Types::File_Class* A_0)
{
return (int)I->Cut(*A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Cut_E5B1F71D_57BC_4D6C_BA04_798BD70535DE, "i", "..");

void Berry_File_Class_Close_825CDE11_2B5C_41A2_A99F_D4B162704E4D(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Close(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Close_825CDE11_2B5C_41A2_A99F_D4B162704E4D, "", ".");

bool Berry_File_Class_Is_Directory_BF8604F8_08F5_49B4_8F47_A43A58790ED6(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Is_Directory(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Is_Directory_BF8604F8_08F5_49B4_8F47_A43A58790ED6, "b", ".");

void * Berry_File_Class_Open_Next_File_1A8778E8_2B53_46C9_B12B_0D38DE398670(bvm* V, Xila_Namespace::Drive_Types::File_Class* I, bool A_0 = false, bool A_1 = false)
{
Xila_Namespace::Drive_Types::File_Class* R = (Xila_Namespace::Drive_Types::File_Class*) be_malloc(V, sizeof(Xila_Namespace::Drive_Types::File_Class));
 *R = I->Open_Next_File(A_0, A_1); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Open_Next_File_1A8778E8_2B53_46C9_B12B_0D38DE398670, "Drive.File_Type", "@.[bb");

void Berry_File_Class_Rewind_Directory_F554B7BD_5A82_4355_AB2F_46F230F07BAE(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Rewind_Directory(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Rewind_Directory_F554B7BD_5A82_4355_AB2F_46F230F07BAE, "", ".");

int Berry_File_Class_Get_Items_Count_385FC72C_609A_4E1D_AC93_6BE12E9E8576(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Items_Count(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Items_Count_385FC72C_609A_4E1D_AC93_6BE12E9E8576, "i", ".");

int Berry_File_Class_Get_Position_79F7ABFF_BC90_4B7F_BF85_CD6F743738A7(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Position(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Position_79F7ABFF_BC90_4B7F_BF85_CD6F743738A7, "i", ".");

int Berry_File_Class_Get_Size_047DD33D_F5B7_4636_89BA_D0869CF596B8(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Size(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Size_047DD33D_F5B7_4636_89BA_D0869CF596B8, "i", ".");

int Berry_File_Class_Get_Modification_Time_4A899300_8C4C_4F79_8D51_573B74658350(Xila_Namespace::Drive_Types::File_Class* I)
{
return (int)I->Get_Modification_Time(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Modification_Time_4A899300_8C4C_4F79_8D51_573B74658350, "i", ".");

const char* Berry_File_Class_Get_Path_FA7EA9B5_0FF2_4E7B_9BAB_83ADB5339F0E(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Path(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Path_FA7EA9B5_0FF2_4E7B_9BAB_83ADB5339F0E, "s", ".");

const char* Berry_File_Class_Get_Name_DDB84AC4_0D13_45A2_B0DD_57E452070D3E(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Name(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Name_DDB84AC4_0D13_45A2_B0DD_57E452070D3E, "s", ".");

const char* Berry_File_Class_Get_Extension_29850CF3_7C51_4362_A786_21A6C4B1C96B(Xila_Namespace::Drive_Types::File_Class* I)
{
return I->Get_Extension(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Get_Extension_29850CF3_7C51_4362_A786_21A6C4B1C96B, "s", ".");

int Berry_File_Class_Set_Buffer_Size_97905F33_F6CD_459E_8A4E_AD8123E6AEAE(Xila_Namespace::Drive_Types::File_Class* I, int A_0)
{
return (int)I->Set_Buffer_Size((unsigned int)A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_File_Class_Set_Buffer_Size_97905F33_F6CD_459E_8A4E_AD8123E6AEAE, "i", ".i");

// - - Operators

// - Berry declaration
/* @const_object_info_begin
class Berry_File_Type(scope:global, name:File_Type)
{
	_p, var
	init, ctype_func(Berry_File_Class_Initialize_39AE21F6_82B6_4C0F_A98E_50AB2D88AEA6)
	init, ctype_func(Berry_File_Class_Initialize_09E7ED51_4B7E_48C1_8893_71AE2ADDB9AA)
	deinit, ctype_func(Berry_File_Class_Deinitialize_443A4FC5_47C0_4281_A248_3CFEA2E306E2)
	write, ctype_func(Berry_File_Class_write_FF6C33DF_3D26_4691_BAAE_FCCEA1F261FB)
	write, ctype_func(Berry_File_Class_write_EBEFDBE6_30B9_4236_A4EB_798389655D84)
	available, ctype_func(Berry_File_Class_available_A41FD296_F804_4ACC_B59D_7EDE3F095FBD)
	read, ctype_func(Berry_File_Class_read_6D86F851_931C_4682_9D64_9E460889F64D)
	peek, ctype_func(Berry_File_Class_peek_87770DF4_E1A5_453D_A190_E4A027F075ED)
	flush, ctype_func(Berry_File_Class_flush_5F839DAA_9A0A_4437_AA7F_F981D46DC9A9)
	readBytes, ctype_func(Berry_File_Class_readBytes_9BE09C1F_D889_4CE4_88C1_3B9B3FA8928F)
	Write, ctype_func(Berry_File_Class_Write_012B088E_C161_4574_B5E7_58BE9362C5EE)
	Write, ctype_func(Berry_File_Class_Write_9B670DE5_AEED_4349_B750_C8BA716E52C6)
	Available, ctype_func(Berry_File_Class_Available_4901AF1C_4301_44FB_B9E8_3940CCFDB72E)
	Read, ctype_func(Berry_File_Class_Read_F971325D_C12B_4B35_9BEC_0893882F9F35)
	Peek, ctype_func(Berry_File_Class_Peek_F9A21E3F_B733_4684_8060_CDA60E9024D5)
	Flush, ctype_func(Berry_File_Class_Flush_E4768B22_6A49_4721_9889_D1FB5764DE0A)
	Is_Valid, ctype_func(Berry_File_Class_Is_Valid_5068FC8D_7D27_4BA4_B225_CFF5F4E592BB)
	Read_String, ctype_func(Berry_File_Class_Read_String_B05B5146_A335_4354_8176_004B2A89F1C6)
	Read_Bytes, ctype_func(Berry_File_Class_Read_Bytes_D49B4BAE_5004_434B_BE79_211EB1639D89)
	Seek, ctype_func(Berry_File_Class_Seek_0D1820D7_CD6A_42F0_81C7_30DAB894A914)
	Seek, ctype_func(Berry_File_Class_Seek_E0EACD98_8940_407E_990D_1E4B476640D5)
	Copy, ctype_func(Berry_File_Class_Copy_B9A87D01_8C02_4ED4_BCDB_855758D7808D)
	Cut, ctype_func(Berry_File_Class_Cut_E5B1F71D_57BC_4D6C_BA04_798BD70535DE)
	Close, ctype_func(Berry_File_Class_Close_825CDE11_2B5C_41A2_A99F_D4B162704E4D)
	Is_Directory, ctype_func(Berry_File_Class_Is_Directory_BF8604F8_08F5_49B4_8F47_A43A58790ED6)
	Open_Next_File, ctype_func(Berry_File_Class_Open_Next_File_1A8778E8_2B53_46C9_B12B_0D38DE398670)
	Rewind_Directory, ctype_func(Berry_File_Class_Rewind_Directory_F554B7BD_5A82_4355_AB2F_46F230F07BAE)
	Get_Items_Count, ctype_func(Berry_File_Class_Get_Items_Count_385FC72C_609A_4E1D_AC93_6BE12E9E8576)
	Get_Position, ctype_func(Berry_File_Class_Get_Position_79F7ABFF_BC90_4B7F_BF85_CD6F743738A7)
	Get_Size, ctype_func(Berry_File_Class_Get_Size_047DD33D_F5B7_4636_89BA_D0869CF596B8)
	Get_Modification_Time, ctype_func(Berry_File_Class_Get_Modification_Time_4A899300_8C4C_4F79_8D51_573B74658350)
	Get_Path, ctype_func(Berry_File_Class_Get_Path_FA7EA9B5_0FF2_4E7B_9BAB_83ADB5339F0E)
	Get_Name, ctype_func(Berry_File_Class_Get_Name_DDB84AC4_0D13_45A2_B0DD_57E452070D3E)
	Get_Extension, ctype_func(Berry_File_Class_Get_Extension_29850CF3_7C51_4362_A786_21A6C4B1C96B)
	Set_Buffer_Size, ctype_func(Berry_File_Class_Set_Buffer_Size_97905F33_F6CD_459E_8A4E_AD8123E6AEAE)

}
@const_object_info_end */


extern "C"
{
	#include "../generate/be_fixed_Berry_File_Type.h"
}
// - Functions
void * Berry_Drive_Class_Get_Size_46CF778F_9305_4463_A62E_760CE3A47A29(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Drive.Get_Size(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Size_46CF778F_9305_4463_A62E_760CE3A47A29, "Long_Integer_Type", "@");


int Berry_Drive_Class_Get_Type_1BA7EC4B_146A_4C02_A9D4_D690B0794C6D()
{
return (int)Drive.Get_Type(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Type_1BA7EC4B_146A_4C02_A9D4_D690B0794C6D, "i", "");


void * Berry_Drive_Class_Get_Total_Size_2EEDA639_B98D_493F_8EAE_7814A025D2A4(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Drive.Get_Total_Size(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Total_Size_2EEDA639_B98D_493F_8EAE_7814A025D2A4, "Long_Integer_Type", "@");


void * Berry_Drive_Class_Get_Used_Size_20A552C8_737F_4BFA_B98F_4ABF7AD4DEF5(bvm* V)
{
int64_t* R = (int64_t*) be_malloc(V, sizeof(int64_t));
 *R = Drive.Get_Used_Size(); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Used_Size_20A552C8_737F_4BFA_B98F_4ABF7AD4DEF5, "Long_Integer_Type", "@");


bool Berry_Drive_Class_Exists_49E12FAA_2427_4FBB_A458_DECD62891DB0(const char* A_0)
{
return Drive.Exists(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Exists_49E12FAA_2427_4FBB_A458_DECD62891DB0, "b", "s");


int Berry_Drive_Class_Make_Directory_2C4E46DA_BF2F_4524_A8F8_61C46E9FD685(const char* A_0)
{
return (int)Drive.Make_Directory(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Make_Directory_2C4E46DA_BF2F_4524_A8F8_61C46E9FD685, "i", "s");


int Berry_Drive_Class_Remove_Directory_1637C31E_E80D_4B9D_964A_72658309F511(const char* A_0)
{
return (int)Drive.Remove_Directory(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_Directory_1637C31E_E80D_4B9D_964A_72658309F511, "i", "s");


int Berry_Drive_Class_Remove_Directory_F9FBC0CB_922C_4742_9D7B_8FD7A8FC85D3(const char* A_0, bool A_1)
{
return (int)Drive.Remove_Directory(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_Directory_F9FBC0CB_922C_4742_9D7B_8FD7A8FC85D3, "i", "sb");


int Berry_Drive_Class_Remove_BC29D93A_8725_4419_9E2A_1514A88D6B92(const char* A_0)
{
return (int)Drive.Remove(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_BC29D93A_8725_4419_9E2A_1514A88D6B92, "i", "s");


void * Berry_Drive_Class_Open_52E0E52B_7E2F_48CF_B0C4_303A1A4842F1(bvm* V, const char* A_0, bool A_1 = false, bool A_2 = false, bool A_3 = false)
{
Xila_Namespace::Drive_Types::File_Class* R = (Xila_Namespace::Drive_Types::File_Class*) be_malloc(V, sizeof(Xila_Namespace::Drive_Types::File_Class));
 *R = Drive.Open(A_0, A_1, A_2, A_3); 
return R;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Open_52E0E52B_7E2F_48CF_B0C4_303A1A4842F1, "Drive.File_Type", "@s[bbb");


int Berry_Drive_Class_Remove_File_1C197165_3CA9_4BF0_B8A6_320B676C8F2F(const char* A_0)
{
return (int)Drive.Remove_File(A_0); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Remove_File_1C197165_3CA9_4BF0_B8A6_320B676C8F2F, "i", "s");


int Berry_Drive_Class_Rename_0FF7A251_03C2_4096_BC21_D0DF464D4914(const char* A_0, const char* A_1)
{
return (int)Drive.Rename(A_0, A_1); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Rename_0FF7A251_03C2_4096_BC21_D0DF464D4914, "i", "ss");


void Berry_Drive_Class_End_0D86E1FB_65E8_466E_B3F2_C989207B204C()
{
return Drive.End(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_End_0D86E1FB_65E8_466E_B3F2_C989207B204C, "", "");


int Berry_Drive_Class_Start_86BFD65A_0BF8_45FE_87C3_1888FDB7ADD6()
{
return (int)Drive.Start(); 
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Start_86BFD65A_0BF8_45FE_87C3_1888FDB7ADD6, "i", "");


void* Berry_Drive_Class_Get_Pointer()
{
	return (Module_Type*)&Drive;
}
BE_FUNC_CTYPE_DECLARE(Berry_Drive_Class_Get_Pointer, "c", "")

// - Berry declaration
/* @const_object_info_begin
module Drive (scope:global)
{
	Get_Size, ctype_func(Berry_Drive_Class_Get_Size_46CF778F_9305_4463_A62E_760CE3A47A29)
	Get_Type, ctype_func(Berry_Drive_Class_Get_Type_1BA7EC4B_146A_4C02_A9D4_D690B0794C6D)
	Get_Total_Size, ctype_func(Berry_Drive_Class_Get_Total_Size_2EEDA639_B98D_493F_8EAE_7814A025D2A4)
	Get_Used_Size, ctype_func(Berry_Drive_Class_Get_Used_Size_20A552C8_737F_4BFA_B98F_4ABF7AD4DEF5)
	Exists, ctype_func(Berry_Drive_Class_Exists_49E12FAA_2427_4FBB_A458_DECD62891DB0)
	Make_Directory, ctype_func(Berry_Drive_Class_Make_Directory_2C4E46DA_BF2F_4524_A8F8_61C46E9FD685)
	Remove_Directory, ctype_func(Berry_Drive_Class_Remove_Directory_1637C31E_E80D_4B9D_964A_72658309F511)
	Remove_Directory, ctype_func(Berry_Drive_Class_Remove_Directory_F9FBC0CB_922C_4742_9D7B_8FD7A8FC85D3)
	Remove, ctype_func(Berry_Drive_Class_Remove_BC29D93A_8725_4419_9E2A_1514A88D6B92)
	Open, ctype_func(Berry_Drive_Class_Open_52E0E52B_7E2F_48CF_B0C4_303A1A4842F1)
	Remove_File, ctype_func(Berry_Drive_Class_Remove_File_1C197165_3CA9_4BF0_B8A6_320B676C8F2F)
	Rename, ctype_func(Berry_Drive_Class_Rename_0FF7A251_03C2_4096_BC21_D0DF464D4914)
	End, ctype_func(Berry_Drive_Class_End_0D86E1FB_65E8_466E_B3F2_C989207B204C)
	Start, ctype_func(Berry_Drive_Class_Start_86BFD65A_0BF8_45FE_87C3_1888FDB7ADD6)
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