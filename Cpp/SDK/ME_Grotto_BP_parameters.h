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

// Function ME_Grotto_BP.ME_Grotto_BP_C.GetDetectableComponent
struct AME_Grotto_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.SetWidgetIndex
struct AME_Grotto_BP_C_SetWidgetIndex_Params
{
	int                                                WidgetIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.GetSonarWidget
struct AME_Grotto_BP_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.HideInWorldIcon
struct AME_Grotto_BP_C_HideInWorldIcon_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.ShowInWorldIcon
struct AME_Grotto_BP_C_ShowInWorldIcon_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.TutorialTriggered
struct AME_Grotto_BP_C_TutorialTriggered_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             TutorialEventId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_TutorialEvent                           EventData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.ReceiveBeginPlay
struct AME_Grotto_BP_C_ReceiveBeginPlay_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.OnGrottSpaceEntered
struct AME_Grotto_BP_C_OnGrottSpaceEntered_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.OnGrottSpaceExited
struct AME_Grotto_BP_C_OnGrottSpaceExited_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.LoadingScreenComplete
struct AME_Grotto_BP_C_LoadingScreenComplete_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.BindLoadingScreenComplete
struct AME_Grotto_BP_C_BindLoadingScreenComplete_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.OnPingedByPlayerSonar
struct AME_Grotto_BP_C_OnPingedByPlayerSonar_Params
{
};

// Function ME_Grotto_BP.ME_Grotto_BP_C.ExecuteUbergraph_ME_Grotto_BP
struct AME_Grotto_BP_C_ExecuteUbergraph_ME_Grotto_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
