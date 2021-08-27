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

// Function GA_Smash_Emerge.GA_Smash_Emerge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Smash_Emerge_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Smash_Emerge.GA_Smash_Emerge_C.K2_ActivateAbility");

	UGA_Smash_Emerge_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Smash_Emerge.GA_Smash_Emerge_C.ExecuteUbergraph_GA_Smash_Emerge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Smash_Emerge_C::ExecuteUbergraph_GA_Smash_Emerge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Smash_Emerge.GA_Smash_Emerge_C.ExecuteUbergraph_GA_Smash_Emerge");

	UGA_Smash_Emerge_C_ExecuteUbergraph_GA_Smash_Emerge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
