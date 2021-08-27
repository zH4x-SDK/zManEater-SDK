#pragma once

// Name: ManEater, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C.SetCategoryName
struct UEvolution_Tooltip_Stat_Category_BP_C_SetCategoryName_Params
{
	Maneater_EEvolutionProcType                        ProcType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C.AddStat
struct UEvolution_Tooltip_Stat_Category_BP_C_AddStat_Params
{
	struct FEvolutionDisplayStat                       DisplayStat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                StatColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
