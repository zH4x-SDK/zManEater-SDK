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

// Function Evolution_Tooltip_UpgradeCost_BP.Evolution_Tooltip_UpgradeCost_BP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEvolutionUpgradePrice  UpgradePrice                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Maneater_EPlayerGrowthStage> MinAgeTier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HideCost                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEvolution_Tooltip_UpgradeCost_BP_C::SetData(const struct FEvolutionUpgradePrice& UpgradePrice, TEnumAsByte<Maneater_EPlayerGrowthStage> MinAgeTier, bool ShouldHide, bool HideCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_UpgradeCost_BP.Evolution_Tooltip_UpgradeCost_BP_C.SetData");

	UEvolution_Tooltip_UpgradeCost_BP_C_SetData_Params params;
	params.UpgradePrice = UpgradePrice;
	params.MinAgeTier = MinAgeTier;
	params.ShouldHide = ShouldHide;
	params.HideCost = HideCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
