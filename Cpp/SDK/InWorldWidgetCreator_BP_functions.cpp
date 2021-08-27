// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetWidgetAsObjectiveIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInWorldObjectiveIconsWidget_BP_C* ObjectiveIconsWidget           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInWorldWidgetCreator_BP_C::GetWidgetAsObjectiveIcon(class UInWorldObjectiveIconsWidget_BP_C** ObjectiveIconsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetWidgetAsObjectiveIcon");

	AInWorldWidgetCreator_BP_C_GetWidgetAsObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ObjectiveIconsWidget != nullptr)
		*ObjectiveIconsWidget = params.ObjectiveIconsWidget;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* AInWorldWidgetCreator_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetDetectableComponent");

	AInWorldWidgetCreator_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* AInWorldWidgetCreator_BP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetSonarWidget");

	AInWorldWidgetCreator_BP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.HideInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::HideInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.HideInWorldWidget");

	AInWorldWidgetCreator_BP_C_HideInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ShowInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::ShowInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ShowInWorldWidget");

	AInWorldWidgetCreator_BP_C_ShowInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.UserConstructionScript");

	AInWorldWidgetCreator_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ReceiveBeginPlay");

	AInWorldWidgetCreator_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetTutManager
// (BlueprintCallable, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::GetTutManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.GetTutManager");

	AInWorldWidgetCreator_BP_C_GetTutManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.OnTutorialObjectiveAdded_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FME_TutorialEvent       EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AInWorldWidgetCreator_BP_C::OnTutorialObjectiveAdded_Event_1(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.OnTutorialObjectiveAdded_Event_1");

	AInWorldWidgetCreator_BP_C_OnTutorialObjectiveAdded_Event_1_Params params;
	params.TutorialEventId = TutorialEventId;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.OnPingedByPlayerSonar");

	AInWorldWidgetCreator_BP_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.FirstBossEvent
// (BlueprintCallable, BlueprintEvent)
void AInWorldWidgetCreator_BP_C::FirstBossEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.FirstBossEvent");

	AInWorldWidgetCreator_BP_C_FirstBossEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.SetActiveIndexFromObjective
// (Event, Public, BlueprintEvent)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInWorldWidgetCreator_BP_C::SetActiveIndexFromObjective(class UME_PlayerObjective* PlayerObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.SetActiveIndexFromObjective");

	AInWorldWidgetCreator_BP_C_SetActiveIndexFromObjective_Params params;
	params.PlayerObjective = PlayerObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ExecuteUbergraph_InWorldWidgetCreator_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInWorldWidgetCreator_BP_C::ExecuteUbergraph_InWorldWidgetCreator_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C.ExecuteUbergraph_InWorldWidgetCreator_BP");

	AInWorldWidgetCreator_BP_C_ExecuteUbergraph_InWorldWidgetCreator_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
