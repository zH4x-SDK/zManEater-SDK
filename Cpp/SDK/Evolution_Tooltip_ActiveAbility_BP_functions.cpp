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

// Function Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C.AddStat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEvolutionDisplayStat   DisplayStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            StatColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolution_Tooltip_ActiveAbility_BP_C::AddStat(const struct FEvolutionDisplayStat& DisplayStat, const struct FLinearColor& StatColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C.AddStat");

	UEvolution_Tooltip_ActiveAbility_BP_C_AddStat_Params params;
	params.DisplayStat = DisplayStat;
	params.StatColor = StatColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C.SetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     EvolutionDefinition            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEvolutionDisplayStat> DisplayStats                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FLinearColor>    StatColors                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UEvolution_Tooltip_ActiveAbility_BP_C::SetData(class UME_PlayerEvolution* EvolutionDefinition, TArray<struct FEvolutionDisplayStat>* DisplayStats, TArray<struct FLinearColor>* StatColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C.SetData");

	UEvolution_Tooltip_ActiveAbility_BP_C_SetData_Params params;
	params.EvolutionDefinition = EvolutionDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayStats != nullptr)
		*DisplayStats = params.DisplayStats;
	if (StatColors != nullptr)
		*StatColors = params.StatColors;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
