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

// Function GA_EVO_Shadow_Body_AOE_T2.GA_EVO_Shadow_Body_AOE_T2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_EVO_Shadow_Body_AOE_T2_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_EVO_Shadow_Body_AOE_T2.GA_EVO_Shadow_Body_AOE_T2_C.K2_ActivateAbility");

	UGA_EVO_Shadow_Body_AOE_T2_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_EVO_Shadow_Body_AOE_T2.GA_EVO_Shadow_Body_AOE_T2_C.ExecuteUbergraph_GA_EVO_Shadow_Body_AOE_T2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_EVO_Shadow_Body_AOE_T2_C::ExecuteUbergraph_GA_EVO_Shadow_Body_AOE_T2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_EVO_Shadow_Body_AOE_T2.GA_EVO_Shadow_Body_AOE_T2_C.ExecuteUbergraph_GA_EVO_Shadow_Body_AOE_T2");

	UGA_EVO_Shadow_Body_AOE_T2_C_ExecuteUbergraph_GA_EVO_Shadow_Body_AOE_T2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
