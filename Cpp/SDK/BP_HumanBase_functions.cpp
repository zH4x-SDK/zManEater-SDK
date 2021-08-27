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

// Function BP_HumanBase.BP_HumanBase_C.BlendMeshRelativeT
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_HumanBase_C::BlendMeshRelativeT()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.BlendMeshRelativeT");

	ABP_HumanBase_C_BlendMeshRelativeT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HumanBase.BP_HumanBase_C.GetGetupAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimMontage* ABP_HumanBase_C::GetGetupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.GetGetupAnimation");

	ABP_HumanBase_C_GetGetupAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HumanBase.BP_HumanBase_C.CastAnimBP
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::CastAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.CastAnimBP");

	ABP_HumanBase_C_CastAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.DebugVisibleThreatLoc
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::DebugVisibleThreatLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.DebugVisibleThreatLoc");

	ABP_HumanBase_C_DebugVisibleThreatLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.StartAIDebugTimers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::StartAIDebugTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.StartAIDebugTimers");

	ABP_HumanBase_C_StartAIDebugTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.DebugLastSawThreatLoc
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::DebugLastSawThreatLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.DebugLastSawThreatLoc");

	ABP_HumanBase_C_DebugLastSawThreatLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_HumanBase_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.GetSizeLevel");

	ABP_HumanBase_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HumanBase.BP_HumanBase_C.GetThrashableSize
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::GetThrashableSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.GetThrashableSize");

	ABP_HumanBase_C_GetThrashableSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.GetAlertState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> AlertState                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AlertLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::GetAlertState(TEnumAsByte<Maneater_EAIThreatAlertState>* AlertState, float* AlertLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.GetAlertState");

	ABP_HumanBase_C_GetAlertState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AlertState != nullptr)
		*AlertState = params.AlertState;
	if (AlertLevel != nullptr)
		*AlertLevel = params.AlertLevel;

}


// Function BP_HumanBase.BP_HumanBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.UserConstructionScript");

	ABP_HumanBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__FinishedFunc
// (BlueprintEvent)
void ABP_HumanBase_C::BlendFromWaterRagdoll__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__FinishedFunc");

	ABP_HumanBase_C_BlendFromWaterRagdoll__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__UpdateFunc
// (BlueprintEvent)
void ABP_HumanBase_C::BlendFromWaterRagdoll__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__UpdateFunc");

	ABP_HumanBase_C_BlendFromWaterRagdoll__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc
// (BlueprintEvent)
void ABP_HumanBase_C::BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc");

	ABP_HumanBase_C_BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ABP_HumanBase_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.Timeline_1__FinishedFunc");

	ABP_HumanBase_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ABP_HumanBase_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.Timeline_1__UpdateFunc");

	ABP_HumanBase_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4");

	ABP_HumanBase_C_OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4");

	ABP_HumanBase_C_OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4");

	ABP_HumanBase_C_OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4");

	ABP_HumanBase_C_OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4");

	ABP_HumanBase_C_OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.BlendBackToDefault
// (Event, Public, BlueprintEvent)
void ABP_HumanBase_C::BlendBackToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.BlendBackToDefault");

	ABP_HumanBase_C_BlendBackToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.ProcessRagdollImpactResponse
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       InstigatorPM                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InstigatorComp                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::ProcessRagdollImpactResponse(class UPhysicalMaterial* InstigatorPM, class UPrimitiveComponent* InstigatorComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.ProcessRagdollImpactResponse");

	ABP_HumanBase_C_ProcessRagdollImpactResponse_Params params;
	params.InstigatorPM = InstigatorPM;
	params.InstigatorComp = InstigatorComp;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.ChatterUpdateEvent_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TotalLimbs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DestroyedLimbs                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isGrabbed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           wasBumped                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bWasForced                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HumanBase_C::ChatterUpdateEvent_BP(int TotalLimbs, int DestroyedLimbs, bool isGrabbed, bool wasBumped, bool bWasForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.ChatterUpdateEvent_BP");

	ABP_HumanBase_C_ChatterUpdateEvent_BP_Params params;
	params.TotalLimbs = TotalLimbs;
	params.DestroyedLimbs = DestroyedLimbs;
	params.isGrabbed = isGrabbed;
	params.wasBumped = wasBumped;
	params.bWasForced = bWasForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             OldController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::ReceiveUnpossessed(class AController* OldController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.ReceiveUnpossessed");

	ABP_HumanBase_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.ReceivePossessed");

	ABP_HumanBase_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_HumanBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.ReceiveBeginPlay");

	ABP_HumanBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.GameplayTagRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_HumanBase_C::GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.GameplayTagRemoved");

	ABP_HumanBase_C_GameplayTagRemoved_Params params;
	params.TagsAdded = TagsAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.GameplayTagAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TagDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.GameplayTagAdded");

	ABP_HumanBase_C_GameplayTagAdded_Params params;
	params.TagsAdded = TagsAdded;
	params.TagDuration = TagDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.BlendOutComplete
// (BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::BlendOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.BlendOutComplete");

	ABP_HumanBase_C_BlendOutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.StopBlend
// (BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::StopBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.StopBlend");

	ABP_HumanBase_C_StopBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.StopGetup
// (BlueprintCallable, BlueprintEvent)
void ABP_HumanBase_C::StopGetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.StopGetup");

	ABP_HumanBase_C_StopGetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HumanBase.BP_HumanBase_C.ExecuteUbergraph_BP_HumanBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HumanBase_C::ExecuteUbergraph_BP_HumanBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanBase.BP_HumanBase_C.ExecuteUbergraph_BP_HumanBase");

	ABP_HumanBase_C_ExecuteUbergraph_BP_HumanBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
