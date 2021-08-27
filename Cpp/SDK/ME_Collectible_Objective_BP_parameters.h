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

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.SetMaxSharkSize
struct AME_Collectible_Objective_BP_C_SetMaxSharkSize_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ShowRegionTexture
struct AME_Collectible_Objective_BP_C_ShowRegionTexture_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.DisableCollectible
struct AME_Collectible_Objective_BP_C_DisableCollectible_Params
{
	bool                                               SetHidden_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.EnableCollectible
struct AME_Collectible_Objective_BP_C_EnableCollectible_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.SetWidgetIndex
struct AME_Collectible_Objective_BP_C_SetWidgetIndex_Params
{
	int                                                WidgetIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetSonarWidget
struct AME_Collectible_Objective_BP_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.CanBeFocused
struct AME_Collectible_Objective_BP_C_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.CanBeLockedOnTo
struct AME_Collectible_Objective_BP_C_CanBeLockedOnTo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetMaxDistanceVisible
struct AME_Collectible_Objective_BP_C_GetMaxDistanceVisible_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetDetectableComponentLocationOffset
struct AME_Collectible_Objective_BP_C_GetDetectableComponentLocationOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetDetectableComponent
struct AME_Collectible_Objective_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.UserConstructionScript
struct AME_Collectible_Objective_BP_C_UserConstructionScript_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ReceiveBeginPlay
struct AME_Collectible_Objective_BP_C_ReceiveBeginPlay_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ReceiveDestroyed
struct AME_Collectible_Objective_BP_C_ReceiveDestroyed_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.OnPingedByPlayerSonar
struct AME_Collectible_Objective_BP_C_OnPingedByPlayerSonar_Params
{
};

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ExecuteUbergraph_ME_Collectible_Objective_BP
struct AME_Collectible_Objective_BP_C_ExecuteUbergraph_ME_Collectible_Objective_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
