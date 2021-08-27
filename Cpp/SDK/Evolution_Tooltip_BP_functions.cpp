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

// Function Evolution_Tooltip_BP.Evolution_Tooltip_BP_C.FormatTitleTextByRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// Maneater_EEvolutionRarity      EvolutionRarity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolution_Tooltip_BP_C::FormatTitleTextByRarity(Maneater_EEvolutionRarity EvolutionRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_BP.Evolution_Tooltip_BP_C.FormatTitleTextByRarity");

	UEvolution_Tooltip_BP_C_FormatTitleTextByRarity_Params params;
	params.EvolutionRarity = EvolutionRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Evolution_Tooltip_BP.Evolution_Tooltip_BP_C.SetTooltipData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEvolutionData          EvolutionData                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UME_PlayerEvolution*     Evolution                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           DisableCost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DisableUpgrade                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEvolutionData          CompareEvolutionData           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UEvolution_Tooltip_BP_C::SetTooltipData(const struct FEvolutionData& EvolutionData, class UME_PlayerEvolution* Evolution, bool DisableCost, bool DisableUpgrade, const struct FEvolutionData& CompareEvolutionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_BP.Evolution_Tooltip_BP_C.SetTooltipData");

	UEvolution_Tooltip_BP_C_SetTooltipData_Params params;
	params.EvolutionData = EvolutionData;
	params.Evolution = Evolution;
	params.DisableCost = DisableCost;
	params.DisableUpgrade = DisableUpgrade;
	params.CompareEvolutionData = CompareEvolutionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
