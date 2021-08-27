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

// Function BP_BodyBagNC.BP_BodyBagNC_C.GetSonarWidget
struct ABP_BodyBagNC_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.GetDetectableComponent
struct ABP_BodyBagNC_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeGrabbedBy
struct ABP_BodyBagNC_C_CanBeGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.GetWhipShotFlightType
struct ABP_BodyBagNC_C_GetWhipShotFlightType_Params
{
	TEnumAsByte<Maneater_EMECustomMovementMode>        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeWhipShot
struct ABP_BodyBagNC_C_CanBeWhipShot_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.GetWhipShotImpactEffect
struct ABP_BodyBagNC_C_GetWhipShotImpactEffect_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.DisableBodyBagPhysics
struct ABP_BodyBagNC_C_DisableBodyBagPhysics_Params
{
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeConsumedWholeBy
struct ABP_BodyBagNC_C_CanBeConsumedWholeBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.UserConstructionScript
struct ABP_BodyBagNC_C_UserConstructionScript_Params
{
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.ReceiveBeginPlay
struct ABP_BodyBagNC_C_ReceiveBeginPlay_Params
{
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.OnPhysicsChanged
struct ABP_BodyBagNC_C_OnPhysicsChanged_Params
{
	bool                                               bNewPhysicsEnabled;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.OnGrabbedBy
struct ABP_BodyBagNC_C_OnGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         GrabbedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GrabPointIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BodyBagNC.BP_BodyBagNC_C.ExecuteUbergraph_BP_BodyBagNC
struct ABP_BodyBagNC_C_ExecuteUbergraph_BP_BodyBagNC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
