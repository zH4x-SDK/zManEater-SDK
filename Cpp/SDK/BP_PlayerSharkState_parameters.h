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

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.GetClosestGrotto
struct ABP_PlayerSharkState_C_GetClosestGrotto_Params
{
	class ABP_PlayerGrotto_C*                          ClosestGrotto;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnWorldRegionChanged
struct ABP_PlayerSharkState_C_OnWorldRegionChanged_Params
{
	class AME_WorldRegionVolume*                       NewRegion;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnIncreasedGrowthStage
struct ABP_PlayerSharkState_C_OnIncreasedGrowthStage_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnGainedGrowthLevel
struct ABP_PlayerSharkState_C_OnGainedGrowthLevel_Params
{
	int                                                NewGrowthLevel;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnGainedEvolutionPoints_2
struct ABP_PlayerSharkState_C_OnGainedEvolutionPoints_2_Params
{
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.ReceiveBeginPlay
struct ABP_PlayerSharkState_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.BindOnInventoryChanged
struct ABP_PlayerSharkState_C_BindOnInventoryChanged_Params
{
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.InventoryChanged
struct ABP_PlayerSharkState_C_InventoryChanged_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpgrade;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.ExecuteUbergraph_BP_PlayerSharkState
struct ABP_PlayerSharkState_C_ExecuteUbergraph_BP_PlayerSharkState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
