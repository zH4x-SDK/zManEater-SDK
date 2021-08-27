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

// Function Evolution_Tooltip_BP.Evolution_Tooltip_BP_C.FormatTitleTextByRarity
struct UEvolution_Tooltip_BP_C_FormatTitleTextByRarity_Params
{
	Maneater_EEvolutionRarity                          EvolutionRarity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Evolution_Tooltip_BP.Evolution_Tooltip_BP_C.SetTooltipData
struct UEvolution_Tooltip_BP_C_SetTooltipData_Params
{
	struct FEvolutionData                              EvolutionData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UME_PlayerEvolution*                         Evolution;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableCost;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisableUpgrade;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEvolutionData                              CompareEvolutionData;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
