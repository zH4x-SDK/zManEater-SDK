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

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.SetWidgetIndex
struct ABP_WhippableDecorationBase_C_SetWidgetIndex_Params
{
	int                                                WidgetIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeFocused
struct ABP_WhippableDecorationBase_C_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeLockedOnTo
struct ABP_WhippableDecorationBase_C_CanBeLockedOnTo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetDetectableComponent
struct ABP_WhippableDecorationBase_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetDetectableComponentLocationOffset
struct ABP_WhippableDecorationBase_C_GetDetectableComponentLocationOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetFocusPriority
struct ABP_WhippableDecorationBase_C_GetFocusPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetFriendlyName
struct ABP_WhippableDecorationBase_C_GetFriendlyName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetMaxDistanceVisible
struct ABP_WhippableDecorationBase_C_GetMaxDistanceVisible_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetSonarWidget
struct ABP_WhippableDecorationBase_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetWhipShotImpactEffect
struct ABP_WhippableDecorationBase_C_GetWhipShotImpactEffect_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeConsumedWholeBy
struct ABP_WhippableDecorationBase_C_CanBeConsumedWholeBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetSizeLevel
struct ABP_WhippableDecorationBase_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.ReceiveBeginPlay
struct ABP_WhippableDecorationBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.OnGrabbedBy
struct ABP_WhippableDecorationBase_C_OnGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         GrabbedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GrabPointIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.ExecuteUbergraph_BP_WhippableDecorationBase
struct ABP_WhippableDecorationBase_C_ExecuteUbergraph_BP_WhippableDecorationBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
