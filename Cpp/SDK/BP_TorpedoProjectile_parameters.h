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

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnSpinout
struct ABP_TorpedoProjectile_C_OnSpinout_Params
{
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.FindGrabbingRotation
struct ABP_TorpedoProjectile_C_FindGrabbingRotation_Params
{
	class AActor*                                      GrabbingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.SetVulnerableMIC
struct ABP_TorpedoProjectile_C_SetVulnerableMIC_Params
{
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveBeginPlay
struct ABP_TorpedoProjectile_C_ReceiveBeginPlay_Params
{
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveDestroyed
struct ABP_TorpedoProjectile_C_ReceiveDestroyed_Params
{
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.StopRot
struct ABP_TorpedoProjectile_C_StopRot_Params
{
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveTick
struct ABP_TorpedoProjectile_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnGrabbedBy
struct ABP_TorpedoProjectile_C_OnGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         GrabbedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GrabPointIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnEvaded
struct ABP_TorpedoProjectile_C_OnEvaded_Params
{
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnReleasedBy
struct ABP_TorpedoProjectile_C_OnReleasedBy_Params
{
	class AME_AnimalCharacter*                         ReleasingAnimal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIgnoreFlee;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bBrokeAway;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ExecuteUbergraph_BP_TorpedoProjectile
struct ABP_TorpedoProjectile_C_ExecuteUbergraph_BP_TorpedoProjectile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
