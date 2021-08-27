// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ALL_Apex_Alligator_BP.ALL_Apex_Alligator_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AALL_Apex_Alligator_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ALL_Apex_Alligator_BP.ALL_Apex_Alligator_BP_C.ReceiveBeginPlay");

	AALL_Apex_Alligator_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ALL_Apex_Alligator_BP.ALL_Apex_Alligator_BP_C.ExecuteUbergraph_ALL_Apex_Alligator_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AALL_Apex_Alligator_BP_C::ExecuteUbergraph_ALL_Apex_Alligator_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALL_Apex_Alligator_BP.ALL_Apex_Alligator_BP_C.ExecuteUbergraph_ALL_Apex_Alligator_BP");

	AALL_Apex_Alligator_BP_C_ExecuteUbergraph_ALL_Apex_Alligator_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
