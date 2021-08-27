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

// Function InGameMenuView_BP.InGameMenuView_BP_C.SetPanel
struct UInGameMenuView_BP_C_SetPanel_Params
{
	bool                                               IsInfamy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEvolutions;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMap;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsQuestLog;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InGameMenuView_BP.InGameMenuView_BP_C.OpenEvolutionPanel_BP
struct UInGameMenuView_BP_C_OpenEvolutionPanel_BP_Params
{
};

// Function InGameMenuView_BP.InGameMenuView_BP_C.ExecuteUbergraph_InGameMenuView_BP
struct UInGameMenuView_BP_C_ExecuteUbergraph_InGameMenuView_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
