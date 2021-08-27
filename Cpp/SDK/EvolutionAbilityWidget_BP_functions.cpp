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

// Function EvolutionAbilityWidget_BP.EvolutionAbilityWidget_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolutionAbilityWidget_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionAbilityWidget_BP.EvolutionAbilityWidget_BP_C.SubscribeToEvents_BP");

	UEvolutionAbilityWidget_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionAbilityWidget_BP.EvolutionAbilityWidget_BP_C.OnGamePauseStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPaused                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEvolutionAbilityWidget_BP_C::OnGamePauseStateChanged(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionAbilityWidget_BP.EvolutionAbilityWidget_BP_C.OnGamePauseStateChanged");

	UEvolutionAbilityWidget_BP_C_OnGamePauseStateChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionAbilityWidget_BP.EvolutionAbilityWidget_BP_C.ExecuteUbergraph_EvolutionAbilityWidget_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolutionAbilityWidget_BP_C::ExecuteUbergraph_EvolutionAbilityWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionAbilityWidget_BP.EvolutionAbilityWidget_BP_C.ExecuteUbergraph_EvolutionAbilityWidget_BP");

	UEvolutionAbilityWidget_BP_C_ExecuteUbergraph_EvolutionAbilityWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
