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

// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetAssociatedSign
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_DestructibleActor*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AME_DestructibleActor* AME_LandmarkObjective_BP_C::GetAssociatedSign()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetAssociatedSign");

	AME_LandmarkObjective_BP_C_GetAssociatedSign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ToggleIsActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AME_LandmarkObjective_BP_C::ToggleIsActive(bool IsActive_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ToggleIsActive");

	AME_LandmarkObjective_BP_C_ToggleIsActive_Params params;
	params.IsActive_ = IsActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SetWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_LandmarkObjective_BP_C::SetWidgetIndex(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SetWidgetIndex");

	AME_LandmarkObjective_BP_C_SetWidgetIndex_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* AME_LandmarkObjective_BP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetSonarWidget");

	AME_LandmarkObjective_BP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.HideInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::HideInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.HideInWorldWidget");

	AME_LandmarkObjective_BP_C_HideInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ShowInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::ShowInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ShowInWorldWidget");

	AME_LandmarkObjective_BP_C_ShowInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* AME_LandmarkObjective_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.GetDetectableComponent");

	AME_LandmarkObjective_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AME_LandmarkObjective_BP_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.CanBeFocused");

	AME_LandmarkObjective_BP_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.UserConstructionScript");

	AME_LandmarkObjective_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AME_LandmarkObjective_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.Timeline_0__FinishedFunc");

	AME_LandmarkObjective_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AME_LandmarkObjective_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.Timeline_0__UpdateFunc");

	AME_LandmarkObjective_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnPlayerFocused
// (Event, Public, BlueprintEvent)
void AME_LandmarkObjective_BP_C::OnPlayerFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnPlayerFocused");

	AME_LandmarkObjective_BP_C_OnPlayerFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.PlayCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ObjectiveName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_LandmarkObjective_BP_C::PlayCinematic(const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.PlayCinematic");

	AME_LandmarkObjective_BP_C_PlayCinematic_Params params;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.LandmarkCineTriggered
// (BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::LandmarkCineTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.LandmarkCineTriggered");

	AME_LandmarkObjective_BP_C_LandmarkCineTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.TutorialTriggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FME_TutorialEvent       EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AME_LandmarkObjective_BP_C::TutorialTriggered(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.TutorialTriggered");

	AME_LandmarkObjective_BP_C_TutorialTriggered_Params params;
	params.TutorialEventId = TutorialEventId;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.BindTutorialTriggered
// (BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::BindTutorialTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.BindTutorialTriggered");

	AME_LandmarkObjective_BP_C_BindTutorialTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SetWidgets
// (BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::SetWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SetWidgets");

	AME_LandmarkObjective_BP_C_SetWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnPingedByPlayerSonar");

	AME_LandmarkObjective_BP_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnDiscoveredSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewDiscoveredSetting          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AME_LandmarkObjective_BP_C::OnDiscoveredSet(bool bNewDiscoveredSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.OnDiscoveredSet");

	AME_LandmarkObjective_BP_C_OnDiscoveredSet_Params params;
	params.bNewDiscoveredSetting = bNewDiscoveredSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AME_LandmarkObjective_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ReceiveBeginPlay");

	AME_LandmarkObjective_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.BindSignFractured
// (BlueprintCallable, BlueprintEvent)
void AME_LandmarkObjective_BP_C::BindSignFractured()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.BindSignFractured");

	AME_LandmarkObjective_BP_C_BindSignFractured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SignFractured
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_LandmarkObjective_BP_C::SignFractured(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.SignFractured");

	AME_LandmarkObjective_BP_C_SignFractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ExecuteUbergraph_ME_LandmarkObjective_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_LandmarkObjective_BP_C::ExecuteUbergraph_ME_LandmarkObjective_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_LandmarkObjective_BP.ME_LandmarkObjective_BP_C.ExecuteUbergraph_ME_LandmarkObjective_BP");

	AME_LandmarkObjective_BP_C_ExecuteUbergraph_ME_LandmarkObjective_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
