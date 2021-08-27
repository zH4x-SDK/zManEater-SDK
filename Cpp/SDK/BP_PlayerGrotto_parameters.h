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

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.IsValidForFastTravel
struct ABP_PlayerGrotto_C_IsValidForFastTravel_Params
{
	bool                                               SpawnPoint;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.GetMapWidgetMaterial
struct ABP_PlayerGrotto_C_GetMapWidgetMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.GetMapWidgetEnabled
struct ABP_PlayerGrotto_C_GetMapWidgetEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.CreateSpawnPoint
struct ABP_PlayerGrotto_C_CreateSpawnPoint_Params
{
	class AActor*                                      NewSpawnPoint;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.FastTravelToGrotto
struct ABP_PlayerGrotto_C_FastTravelToGrotto_Params
{
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnDiscoveryStateChanged
struct ABP_PlayerGrotto_C_OnDiscoveryStateChanged_Params
{
	TEnumAsByte<Maneater_ELandmarkDiscoveryState>      NewState;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnWidgetMouseDown
struct ABP_PlayerGrotto_C_OnWidgetMouseDown_Params
{
	class UUserWidget*                                 Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.ReceivePostInitializeComponents
struct ABP_PlayerGrotto_C_ReceivePostInitializeComponents_Params
{
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnFastTravelSuccess
struct ABP_PlayerGrotto_C_OnFastTravelSuccess_Params
{
	float                                              TravelTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.ExecuteUbergraph_BP_PlayerGrotto
struct ABP_PlayerGrotto_C_ExecuteUbergraph_BP_PlayerGrotto_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
