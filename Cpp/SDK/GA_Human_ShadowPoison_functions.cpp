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

// Function GA_Human_ShadowPoison.GA_Human_ShadowPoison_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Human_ShadowPoison_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Human_ShadowPoison.GA_Human_ShadowPoison_C.K2_ActivateAbility");

	UGA_Human_ShadowPoison_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Human_ShadowPoison.GA_Human_ShadowPoison_C.ExecuteUbergraph_GA_Human_ShadowPoison
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Human_ShadowPoison_C::ExecuteUbergraph_GA_Human_ShadowPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Human_ShadowPoison.GA_Human_ShadowPoison_C.ExecuteUbergraph_GA_Human_ShadowPoison");

	UGA_Human_ShadowPoison_C_ExecuteUbergraph_GA_Human_ShadowPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
