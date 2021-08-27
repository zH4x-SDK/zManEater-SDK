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

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetWidgetAsObjectiveIcon
struct AInWorldWidgetCreator_BP_C_GetWidgetAsObjectiveIcon_Params
{
	class UInWorldObjectiveIconsWidget_BP_C*           ObjectiveIconsWidget;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetDetectableComponent
struct AInWorldWidgetCreator_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetSonarWidget
struct AInWorldWidgetCreator_BP_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.HideInWorldWidget
struct AInWorldWidgetCreator_BP_C_HideInWorldWidget_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ShowInWorldWidget
struct AInWorldWidgetCreator_BP_C_ShowInWorldWidget_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.UserConstructionScript
struct AInWorldWidgetCreator_BP_C_UserConstructionScript_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ReceiveBeginPlay
struct AInWorldWidgetCreator_BP_C_ReceiveBeginPlay_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetTutManager
struct AInWorldWidgetCreator_BP_C_GetTutManager_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.OnTutorialObjectiveAdded_Event_1
struct AInWorldWidgetCreator_BP_C_OnTutorialObjectiveAdded_Event_1_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             TutorialEventId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_TutorialEvent                           EventData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.OnPingedByPlayerSonar
struct AInWorldWidgetCreator_BP_C_OnPingedByPlayerSonar_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.FirstBossEvent
struct AInWorldWidgetCreator_BP_C_FirstBossEvent_Params
{
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.SetActiveIndexFromObjective
struct AInWorldWidgetCreator_BP_C_SetActiveIndexFromObjective_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ExecuteUbergraph_InWorldWidgetCreator_BP
struct AInWorldWidgetCreator_BP_C_ExecuteUbergraph_InWorldWidgetCreator_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
