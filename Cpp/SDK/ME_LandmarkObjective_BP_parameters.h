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

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetAssociatedSign
struct AME_LandmarkObjective_BP_C_GetAssociatedSign_Params
{
	class AME_DestructibleActor*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ToggleIsActive
struct AME_LandmarkObjective_BP_C_ToggleIsActive_Params
{
	bool                                               IsActive_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SetWidgetIndex
struct AME_LandmarkObjective_BP_C_SetWidgetIndex_Params
{
	int                                                WidgetIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetSonarWidget
struct AME_LandmarkObjective_BP_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.HideInWorldWidget
struct AME_LandmarkObjective_BP_C_HideInWorldWidget_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ShowInWorldWidget
struct AME_LandmarkObjective_BP_C_ShowInWorldWidget_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetDetectableComponent
struct AME_LandmarkObjective_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.CanBeFocused
struct AME_LandmarkObjective_BP_C_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.UserConstructionScript
struct AME_LandmarkObjective_BP_C_UserConstructionScript_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.Timeline_0__FinishedFunc
struct AME_LandmarkObjective_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.Timeline_0__UpdateFunc
struct AME_LandmarkObjective_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnPlayerFocused
struct AME_LandmarkObjective_BP_C_OnPlayerFocused_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.PlayCinematic
struct AME_LandmarkObjective_BP_C_PlayCinematic_Params
{
	struct FName                                       ObjectiveName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.LandmarkCineTriggered
struct AME_LandmarkObjective_BP_C_LandmarkCineTriggered_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.TutorialTriggered
struct AME_LandmarkObjective_BP_C_TutorialTriggered_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             TutorialEventId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_TutorialEvent                           EventData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.BindTutorialTriggered
struct AME_LandmarkObjective_BP_C_BindTutorialTriggered_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SetWidgets
struct AME_LandmarkObjective_BP_C_SetWidgets_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnPingedByPlayerSonar
struct AME_LandmarkObjective_BP_C_OnPingedByPlayerSonar_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnDiscoveredSet
struct AME_LandmarkObjective_BP_C_OnDiscoveredSet_Params
{
	bool                                               bNewDiscoveredSetting;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ReceiveBeginPlay
struct AME_LandmarkObjective_BP_C_ReceiveBeginPlay_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.BindSignFractured
struct AME_LandmarkObjective_BP_C_BindSignFractured_Params
{
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SignFractured
struct AME_LandmarkObjective_BP_C_SignFractured_Params
{
	struct FVector                                     HitPoint;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ExecuteUbergraph_ME_LandmarkObjective_BP
struct AME_LandmarkObjective_BP_C_ExecuteUbergraph_ME_LandmarkObjective_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
