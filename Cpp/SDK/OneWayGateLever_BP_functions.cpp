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

// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDisplayLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AOneWayGateLever_BP_C::GetDisplayLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDisplayLevel");

	AOneWayGateLever_BP_C_GetDisplayLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AttackerLocation               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AOneWayGateLever_BP_C::GetDetectableLocation(const struct FVector& AttackerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableLocation");

	AOneWayGateLever_BP_C_GetDetectableLocation_Params params;
	params.AttackerLocation = AttackerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* AOneWayGateLever_BP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetSonarWidget");

	AOneWayGateLever_BP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AOneWayGateLever_BP_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.CanBeFocused");

	AOneWayGateLever_BP_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.CanBeLockedOnTo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AOneWayGateLever_BP_C::CanBeLockedOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.CanBeLockedOnTo");

	AOneWayGateLever_BP_C_CanBeLockedOnTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* AOneWayGateLever_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableComponent");

	AOneWayGateLever_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableComponentLocationOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AOneWayGateLever_BP_C::GetDetectableComponentLocationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetDetectableComponentLocationOffset");

	AOneWayGateLever_BP_C_GetDetectableComponentLocationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetFocusPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AOneWayGateLever_BP_C::GetFocusPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetFocusPriority");

	AOneWayGateLever_BP_C_GetFocusPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetFriendlyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText AOneWayGateLever_BP_C::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetFriendlyName");

	AOneWayGateLever_BP_C_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetMaxDistanceVisible
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AOneWayGateLever_BP_C::GetMaxDistanceVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.GetMaxDistanceVisible");

	AOneWayGateLever_BP_C_GetMaxDistanceVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnLeverComplete
// (Public, BlueprintCallable, BlueprintEvent)
void AOneWayGateLever_BP_C::OnLeverComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnLeverComplete");

	AOneWayGateLever_BP_C_OnLeverComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnFoundBySonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AOneWayGateLever_BP_C::OnFoundBySonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnFoundBySonar");

	AOneWayGateLever_BP_C_OnFoundBySonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AOneWayGateLever_BP_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnPingedByPlayerSonar");

	AOneWayGateLever_BP_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnPlayerFocused
// (Event, Public, BlueprintEvent)
void AOneWayGateLever_BP_C::OnPlayerFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.OnPlayerFocused");

	AOneWayGateLever_BP_C_OnPlayerFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AOneWayGateLever_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.ReceiveBeginPlay");

	AOneWayGateLever_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AOneWayGateLever_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	AOneWayGateLever_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.ExecuteUbergraph_OneWayGateLever_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOneWayGateLever_BP_C::ExecuteUbergraph_OneWayGateLever_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.ExecuteUbergraph_OneWayGateLever_BP");

	AOneWayGateLever_BP_C_ExecuteUbergraph_OneWayGateLever_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGateLever_BP.OneWayGateLever_BP_C.Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AOneWayGateLever_BP_C::Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGateLever_BP.OneWayGateLever_BP_C.Complete__DelegateSignature");

	AOneWayGateLever_BP_C_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
