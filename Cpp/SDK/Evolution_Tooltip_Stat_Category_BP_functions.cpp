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

// Function Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C.SetCategoryName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// Maneater_EEvolutionProcType    ProcType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolution_Tooltip_Stat_Category_BP_C::SetCategoryName(Maneater_EEvolutionProcType ProcType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C.SetCategoryName");

	UEvolution_Tooltip_Stat_Category_BP_C_SetCategoryName_Params params;
	params.ProcType = ProcType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C.AddStat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEvolutionDisplayStat   DisplayStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            StatColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolution_Tooltip_Stat_Category_BP_C::AddStat(const struct FEvolutionDisplayStat& DisplayStat, const struct FLinearColor& StatColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C.AddStat");

	UEvolution_Tooltip_Stat_Category_BP_C_AddStat_Params params;
	params.DisplayStat = DisplayStat;
	params.StatColor = StatColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
