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

// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.ConstructTooltip
struct UEvolutionsPanel_BP_C_ConstructTooltip_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEvolutionData                              EvolutionData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               HideCost;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HideUpgrade;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.PlayGrowthAnimation
struct UEvolutionsPanel_BP_C_PlayGrowthAnimation_Params
{
};

// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.OnPanelOpen_BP
struct UEvolutionsPanel_BP_C_OnPanelOpen_BP_Params
{
};

// Function EvolutionsPanel_BP.EvolutionsPanel_BP_C.ExecuteUbergraph_EvolutionsPanel_BP
struct UEvolutionsPanel_BP_C_ExecuteUbergraph_EvolutionsPanel_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
