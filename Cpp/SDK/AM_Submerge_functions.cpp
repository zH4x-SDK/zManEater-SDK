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

// Function AM_Submerge.AM_Submerge_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)
void UAM_Submerge_C::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function AM_Submerge.AM_Submerge_C.K2_CommitExecute");

	UAM_Submerge_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AM_Submerge.AM_Submerge_C.ExecuteUbergraph_AM_Submerge
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAM_Submerge_C::ExecuteUbergraph_AM_Submerge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AM_Submerge.AM_Submerge_C.ExecuteUbergraph_AM_Submerge");

	UAM_Submerge_C_ExecuteUbergraph_AM_Submerge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
