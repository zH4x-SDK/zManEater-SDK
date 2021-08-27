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

// Function Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C.AddStat
struct UEvolution_Tooltip_ActiveAbility_BP_C_AddStat_Params
{
	struct FEvolutionDisplayStat                       DisplayStat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                StatColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C.SetData
struct UEvolution_Tooltip_ActiveAbility_BP_C_SetData_Params
{
	class UME_PlayerEvolution*                         EvolutionDefinition;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEvolutionDisplayStat>               DisplayStats;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        StatColors;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
