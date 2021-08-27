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

// Function BP_HumanBase.BP_HumanBase_C.BlendMeshRelativeT
struct ABP_HumanBase_C_BlendMeshRelativeT_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HumanBase.BP_HumanBase_C.GetGetupAnimation
struct ABP_HumanBase_C_GetGetupAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.CastAnimBP
struct ABP_HumanBase_C_CastAnimBP_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.DebugVisibleThreatLoc
struct ABP_HumanBase_C_DebugVisibleThreatLoc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.StartAIDebugTimers
struct ABP_HumanBase_C_StartAIDebugTimers_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.DebugLastSawThreatLoc
struct ABP_HumanBase_C_DebugLastSawThreatLoc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.GetSizeLevel
struct ABP_HumanBase_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.GetThrashableSize
struct ABP_HumanBase_C_GetThrashableSize_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.GetAlertState
struct ABP_HumanBase_C_GetAlertState_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          AlertState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlertLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.UserConstructionScript
struct ABP_HumanBase_C_UserConstructionScript_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__FinishedFunc
struct ABP_HumanBase_C_BlendFromWaterRagdoll__FinishedFunc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__UpdateFunc
struct ABP_HumanBase_C_BlendFromWaterRagdoll__UpdateFunc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc
struct ABP_HumanBase_C_BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.Timeline_1__FinishedFunc
struct ABP_HumanBase_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.Timeline_1__UpdateFunc
struct ABP_HumanBase_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4
struct ABP_HumanBase_C_OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4
struct ABP_HumanBase_C_OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4
struct ABP_HumanBase_C_OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4
struct ABP_HumanBase_C_OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4
struct ABP_HumanBase_C_OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.BlendBackToDefault
struct ABP_HumanBase_C_BlendBackToDefault_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.ProcessRagdollImpactResponse
struct ABP_HumanBase_C_ProcessRagdollImpactResponse_Params
{
	class UPhysicalMaterial*                           InstigatorPM;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InstigatorComp;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.ChatterUpdateEvent_BP
struct ABP_HumanBase_C_ChatterUpdateEvent_BP_Params
{
	int                                                TotalLimbs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DestroyedLimbs;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isGrabbed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               wasBumped;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bWasForced;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HumanBase.BP_HumanBase_C.ReceiveUnpossessed
struct ABP_HumanBase_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.ReceivePossessed
struct ABP_HumanBase_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.ReceiveBeginPlay
struct ABP_HumanBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.GameplayTagRemoved
struct ABP_HumanBase_C_GameplayTagRemoved_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HumanBase.BP_HumanBase_C.GameplayTagAdded
struct ABP_HumanBase_C_GameplayTagAdded_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TagDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HumanBase.BP_HumanBase_C.BlendOutComplete
struct ABP_HumanBase_C_BlendOutComplete_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.StopBlend
struct ABP_HumanBase_C_StopBlend_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.StopGetup
struct ABP_HumanBase_C_StopGetup_Params
{
};

// Function BP_HumanBase.BP_HumanBase_C.ExecuteUbergraph_BP_HumanBase
struct ABP_HumanBase_C_ExecuteUbergraph_BP_HumanBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
