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

// Function ME_Grotto_BP.ME_Grotto_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* AME_Grotto_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.GetDetectableComponent");

	AME_Grotto_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Grotto_BP.ME_Grotto_BP_C.SetWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_Grotto_BP_C::SetWidgetIndex(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.SetWidgetIndex");

	AME_Grotto_BP_C_SetWidgetIndex_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* AME_Grotto_BP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.GetSonarWidget");

	AME_Grotto_BP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Grotto_BP.ME_Grotto_BP_C.HideInWorldIcon
// (Public, BlueprintCallable, BlueprintEvent)
void AME_Grotto_BP_C::HideInWorldIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.HideInWorldIcon");

	AME_Grotto_BP_C_HideInWorldIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.ShowInWorldIcon
// (Public, BlueprintCallable, BlueprintEvent)
void AME_Grotto_BP_C::ShowInWorldIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.ShowInWorldIcon");

	AME_Grotto_BP_C_ShowInWorldIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.TutorialTriggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FME_TutorialEvent       EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AME_Grotto_BP_C::TutorialTriggered(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.TutorialTriggered");

	AME_Grotto_BP_C_TutorialTriggered_Params params;
	params.TutorialEventId = TutorialEventId;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AME_Grotto_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.ReceiveBeginPlay");

	AME_Grotto_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.OnGrottSpaceEntered
// (Event, Public, BlueprintEvent)
void AME_Grotto_BP_C::OnGrottSpaceEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.OnGrottSpaceEntered");

	AME_Grotto_BP_C_OnGrottSpaceEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.OnGrottSpaceExited
// (Event, Public, BlueprintEvent)
void AME_Grotto_BP_C::OnGrottSpaceExited()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.OnGrottSpaceExited");

	AME_Grotto_BP_C_OnGrottSpaceExited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.LoadingScreenComplete
// (BlueprintCallable, BlueprintEvent)
void AME_Grotto_BP_C::LoadingScreenComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.LoadingScreenComplete");

	AME_Grotto_BP_C_LoadingScreenComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.BindLoadingScreenComplete
// (BlueprintCallable, BlueprintEvent)
void AME_Grotto_BP_C::BindLoadingScreenComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.BindLoadingScreenComplete");

	AME_Grotto_BP_C_BindLoadingScreenComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AME_Grotto_BP_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.OnPingedByPlayerSonar");

	AME_Grotto_BP_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Grotto_BP.ME_Grotto_BP_C.ExecuteUbergraph_ME_Grotto_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_Grotto_BP_C::ExecuteUbergraph_ME_Grotto_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Grotto_BP.ME_Grotto_BP_C.ExecuteUbergraph_ME_Grotto_BP");

	AME_Grotto_BP_C_ExecuteUbergraph_ME_Grotto_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
