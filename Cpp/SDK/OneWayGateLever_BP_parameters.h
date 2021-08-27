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

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDisplayLevel
struct AOneWayGateLever_BP_C_GetDisplayLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableLocation
struct AOneWayGateLever_BP_C_GetDetectableLocation_Params
{
	struct FVector                                     AttackerLocation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetSonarWidget
struct AOneWayGateLever_BP_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.CanBeFocused
struct AOneWayGateLever_BP_C_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.CanBeLockedOnTo
struct AOneWayGateLever_BP_C_CanBeLockedOnTo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableComponent
struct AOneWayGateLever_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableComponentLocationOffset
struct AOneWayGateLever_BP_C_GetDetectableComponentLocationOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetFocusPriority
struct AOneWayGateLever_BP_C_GetFocusPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetFriendlyName
struct AOneWayGateLever_BP_C_GetFriendlyName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetMaxDistanceVisible
struct AOneWayGateLever_BP_C_GetMaxDistanceVisible_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnLeverComplete
struct AOneWayGateLever_BP_C_OnLeverComplete_Params
{
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnFoundBySonar
struct AOneWayGateLever_BP_C_OnFoundBySonar_Params
{
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnPingedByPlayerSonar
struct AOneWayGateLever_BP_C_OnPingedByPlayerSonar_Params
{
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnPlayerFocused
struct AOneWayGateLever_BP_C_OnPlayerFocused_Params
{
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.ReceiveBeginPlay
struct AOneWayGateLever_BP_C_ReceiveBeginPlay_Params
{
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
struct AOneWayGateLever_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.ExecuteUbergraph_OneWayGateLever_BP
struct AOneWayGateLever_BP_C_ExecuteUbergraph_OneWayGateLever_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.Complete__DelegateSignature
struct AOneWayGateLever_BP_C_Complete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
