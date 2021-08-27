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

// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.ConstructTooltip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEvolutionData          EvolutionData                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           HideCost                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HideUpgrade                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEvolutionsPanel_BP_C::ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, bool HideCost, bool HideUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.ConstructTooltip");

	UEvolutionsPanel_BP_C_ConstructTooltip_Params params;
	params.Evolution = Evolution;
	params.EvolutionData = EvolutionData;
	params.HideCost = HideCost;
	params.HideUpgrade = HideUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.PlayGrowthAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void UEvolutionsPanel_BP_C::PlayGrowthAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.PlayGrowthAnimation");

	UEvolutionsPanel_BP_C_PlayGrowthAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.OnPanelOpen_BP
// (Event, Public, BlueprintEvent)
void UEvolutionsPanel_BP_C::OnPanelOpen_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.OnPanelOpen_BP");

	UEvolutionsPanel_BP_C_OnPanelOpen_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.ExecuteUbergraph_EvolutionsPanel_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolutionsPanel_BP_C::ExecuteUbergraph_EvolutionsPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.ExecuteUbergraph_EvolutionsPanel_BP");

	UEvolutionsPanel_BP_C_ExecuteUbergraph_EvolutionsPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
