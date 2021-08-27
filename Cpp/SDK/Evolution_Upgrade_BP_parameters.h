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

// Function Evolution_Upgrade_BP.Evolution_Upgrade_BP_C.ConstructTooltip
struct UEvolution_Upgrade_BP_C_ConstructTooltip_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEvolutionData                              EvolutionData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEvolutionData                              UpgradedEvolutionData;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Evolution_Upgrade_BP.Evolution_Upgrade_BP_C.ExecuteUbergraph_Evolution_Upgrade_BP
struct UEvolution_Upgrade_BP_C_ExecuteUbergraph_Evolution_Upgrade_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
