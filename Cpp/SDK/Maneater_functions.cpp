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

// Function Maneater.ManeaterAIFunctionLibrary.GetPawnAndAIController
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Out_Pawn                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*        Out_AIController               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterAIFunctionLibrary::STATIC_GetPawnAndAIController(class UObject* InObject, class APawn** Out_Pawn, class AME_AIController** Out_AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ManeaterAIFunctionLibrary.GetPawnAndAIController");

	UManeaterAIFunctionLibrary_GetPawnAndAIController_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out_Pawn != nullptr)
		*Out_Pawn = params.Out_Pawn;
	if (Out_AIController != nullptr)
		*Out_AIController = params.Out_AIController;

}


// Function Maneater.ME_AbilitySystemComponent.SpawnEmitter
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMEGameplayEffectParticleSystem GameplayEffectParticleSystem   (Parm, OutParm, NativeAccessSpecifierPublic)
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         AttachComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AbilitySystemComponent::SpawnEmitter(struct FMEGameplayEffectParticleSystem* GameplayEffectParticleSystem, class UParticleSystem* ParticleSystem, class USceneComponent* AttachComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AbilitySystemComponent.SpawnEmitter");

	UME_AbilitySystemComponent_SpawnEmitter_Params params;
	params.ParticleSystem = ParticleSystem;
	params.AttachComponent = AttachComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayEffectParticleSystem != nullptr)
		*GameplayEffectParticleSystem = params.GameplayEffectParticleSystem;

}


// Function Maneater.ME_AbilitySystemComponent.GetAttributeSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_AttributeSet*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AttributeSet* UME_AbilitySystemComponent::GetAttributeSet(class UClass* AttributeSetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AbilitySystemComponent.GetAttributeSet");

	UME_AbilitySystemComponent_GetAttributeSet_Params params;
	params.AttributeSetClass = AttributeSetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ActorDamageInterface.GetSizeLevel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_ActorDamageInterface::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ActorDamageInterface.GetSizeLevel");

	UME_ActorDamageInterface_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ActorDamageInterface.GetMaxHealth
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ActorDamageInterface::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ActorDamageInterface.GetMaxHealth");

	UME_ActorDamageInterface_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ActorDamageInterface.GetCurrentHealth
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ActorDamageInterface::GetCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ActorDamageInterface.GetCurrentHealth");

	UME_ActorDamageInterface_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AggroComponent.Timer_OnSuspicionCooledDown
// (Final, Native, Protected)
void UME_AggroComponent::Timer_OnSuspicionCooledDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AggroComponent.Timer_OnSuspicionCooledDown");

	UME_AggroComponent_Timer_OnSuspicionCooledDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AggroComponent.GetSuspicionLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_AggroComponent::GetSuspicionLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AggroComponent.GetSuspicionLevel");

	UME_AggroComponent_GetSuspicionLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AggroComponent.GetAlertState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_EAIThreatAlertState> UME_AggroComponent::GetAlertState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AggroComponent.GetAlertState");

	UME_AggroComponent_GetAlertState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AICombatInterface.CanAIAttackTarget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_AICombatInterface::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AICombatInterface.CanAIAttackTarget");

	UME_AICombatInterface_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AICombatInterface.AIAttackTarget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FAttackTarget           NewTarget                      (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UME_AICombatInterface::AIAttackTarget(const struct FAttackTarget& NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AICombatInterface.AIAttackTarget");

	UME_AICombatInterface_AIAttackTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.UseNearestPatrolPoint
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::UseNearestPatrolPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.UseNearestPatrolPoint");

	AME_AIController_UseNearestPatrolPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.UseAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::UseAbility(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.UseAbility");

	AME_AIController_UseAbility_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.TransferAlertKnowledge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::TransferAlertKnowledge(class AME_AIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.TransferAlertKnowledge");

	AME_AIController_TransferAlertKnowledge_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.TickThreatTimer
// (Final, Native, Public)
void AME_AIController::TickThreatTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.TickThreatTimer");

	AME_AIController_TickThreatTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetUseNearestPatrolPoint
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseNearest                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetUseNearestPatrolPoint(bool bUseNearest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetUseNearestPatrolPoint");

	AME_AIController_SetUseNearestPatrolPoint_Params params;
	params.bUseNearest = bUseNearest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetPatrolPlotter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATwAIPatrolPlotter*      InPatrolPlotter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetPatrolPlotter");

	AME_AIController_SetPatrolPlotter_Params params;
	params.InPatrolPlotter = InPatrolPlotter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetLeashLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLeashLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetLeashLocation(const struct FVector& InLeashLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetLeashLocation");

	AME_AIController_SetLeashLocation_Params params;
	params.InLeashLocation = InLeashLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetLeashActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSetActive                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetLeashActive(bool bSetActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetLeashActive");

	AME_AIController_SetLeashActive_Params params;
	params.bSetActive = bSetActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetCurrentDefinedPatrolIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPatrolIdx                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetCurrentDefinedPatrolIndex(int NewPatrolIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetCurrentDefinedPatrolIndex");

	AME_AIController_SetCurrentDefinedPatrolIndex_Params params;
	params.NewPatrolIdx = NewPatrolIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetBehaviorTreeEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetBehaviorTreeEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetBehaviorTreeEnabled");

	AME_AIController_SetBehaviorTreeEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.SetAlertState
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  AlertInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            millisecondDelayMax            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::SetAlertState(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* AlertInstigator, bool bForced, int millisecondDelayMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.SetAlertState");

	AME_AIController_SetAlertState_Params params;
	params.NewAlertState = NewAlertState;
	params.AlertInstigator = AlertInstigator;
	params.bForced = bForced;
	params.millisecondDelayMax = millisecondDelayMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnSuspicionIncreased
// (Final, Native, Protected)
// Parameters:
// float                          NewSuspicionLevel              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SuspicionInstigator            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::OnSuspicionIncreased(float NewSuspicionLevel, class AActor* SuspicionInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnSuspicionIncreased");

	AME_AIController_OnSuspicionIncreased_Params params;
	params.NewSuspicionLevel = NewSuspicionLevel;
	params.SuspicionInstigator = SuspicionInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnReturnedToLeash
// (Final, Native, Public, BlueprintCallable)
void AME_AIController::OnReturnedToLeash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnReturnedToLeash");

	AME_AIController_OnReturnedToLeash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnPlayerPawnStatusChanged
// (Native, Protected)
// Parameters:
// class AActor*                  PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::OnPlayerPawnStatusChanged(class AActor* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnPlayerPawnStatusChanged");

	AME_AIController_OnPlayerPawnStatusChanged_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnHeardNoise
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 NoiseOrigin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NoiseIntensity                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::OnHeardNoise(const struct FVector& NoiseOrigin, float NoiseIntensity, class AActor* NoiseInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnHeardNoise");

	AME_AIController_OnHeardNoise_Params params;
	params.NoiseOrigin = NoiseOrigin;
	params.NoiseIntensity = NoiseIntensity;
	params.NoiseInstigator = NoiseInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnDamagedPlayer
// (Final, Native, Public)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::OnDamagedPlayer(float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnDamagedPlayer");

	AME_AIController_OnDamagedPlayer_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnDamaged
// (Final, Native, Public)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::OnDamaged(float DamageAmount, class AActor* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnDamaged");

	AME_AIController_OnDamaged_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnCombatStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// Maneater_ECombatStatus         Status                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::OnCombatStatusChanged(Maneater_ECombatStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnCombatStatusChanged");

	AME_AIController_OnCombatStatusChanged_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.OnCombatCooldownExpired
// (Native, Protected)
void AME_AIController::OnCombatCooldownExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.OnCombatCooldownExpired");

	AME_AIController_OnCombatCooldownExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.NotifyPawnHit
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AME_AIController::NotifyPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.NotifyPawnHit");

	AME_AIController_NotifyPawnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.NotifyPawnDamaged
// (Native, Public)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::NotifyPawnDamaged(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.NotifyPawnDamaged");

	AME_AIController_NotifyPawnDamaged_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.MakeAIAudibleNoise
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Origin                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::MakeAIAudibleNoise(const struct FVector& Origin, float Intensity, class AActor* NoiseInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.MakeAIAudibleNoise");

	AME_AIController_MakeAIAudibleNoise_Params params;
	params.Origin = Origin;
	params.Intensity = Intensity;
	params.NoiseInstigator = NoiseInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.LookForThreats
// (Native, Public, BlueprintCallable)
void AME_AIController::LookForThreats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.LookForThreats");

	AME_AIController_LookForThreats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.IsPlayerInstigatedAlert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AlertInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::IsPlayerInstigatedAlert(class AActor* AlertInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.IsPlayerInstigatedAlert");

	AME_AIController_IsPlayerInstigatedAlert_Params params;
	params.AlertInstigator = AlertInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.IsOnNavmesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::IsOnNavmesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.IsOnNavmesh");

	AME_AIController_IsOnNavmesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.IsDormant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::IsDormant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.IsDormant");

	AME_AIController_IsDormant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.IsAlertedToPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::IsAlertedToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.IsAlertedToPlayer");

	AME_AIController_IsAlertedToPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.IncreaseSuspicion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SuspicionAmount                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  SuspcionInstigator             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::IncreaseSuspicion(float SuspicionAmount, class AActor* SuspcionInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.IncreaseSuspicion");

	AME_AIController_IncreaseSuspicion_Params params;
	params.SuspicionAmount = SuspicionAmount;
	params.SuspcionInstigator = SuspcionInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.GetTotalCombatPriority
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetTotalCombatPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetTotalCombatPriority");

	AME_AIController_GetTotalCombatPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetSuspicion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetSuspicion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetSuspicion");

	AME_AIController_GetSuspicion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetSightDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetSightDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetSightDistance");

	AME_AIController_GetSightDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetPawnAbilitySystemComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAbilitySystemComponent* AME_AIController::GetPawnAbilitySystemComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetPawnAbilitySystemComponent");

	AME_AIController_GetPawnAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetPatrolPlotter
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATwAIPatrolPlotter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATwAIPatrolPlotter* AME_AIController::GetPatrolPlotter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetPatrolPlotter");

	AME_AIController_GetPatrolPlotter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetLeashLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_AIController::GetLeashLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetLeashLocation");

	AME_AIController_GetLeashLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetLeashDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetLeashDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetLeashDistance");

	AME_AIController_GetLeashDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetLeashActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::GetLeashActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetLeashActive");

	AME_AIController_GetLeashActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetEnemy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AME_AIController::GetEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetEnemy");

	AME_AIController_GetEnemy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCurrentDefinedPatrolIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_AIController::GetCurrentDefinedPatrolIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCurrentDefinedPatrolIndex");

	AME_AIController_GetCurrentDefinedPatrolIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCurrentAlert
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_EAIThreatAlertState> AME_AIController::GetCurrentAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCurrentAlert");

	AME_AIController_GetCurrentAlert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCombatStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_ECombatStatus         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_ECombatStatus AME_AIController::GetCombatStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCombatStatus");

	AME_AIController_GetCombatStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCombatPriorityBuffs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetCombatPriorityBuffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCombatPriorityBuffs");

	AME_AIController_GetCombatPriorityBuffs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCombatPriority
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetCombatPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCombatPriority");

	AME_AIController_GetCombatPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCombatLockTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetCombatLockTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCombatLockTime");

	AME_AIController_GetCombatLockTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetCombatCooldownTime
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetCombatCooldownTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetCombatCooldownTime");

	AME_AIController_GetCombatCooldownTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetClosestEscapeVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMEEscapeVolume*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMEEscapeVolume* AME_AIController::GetClosestEscapeVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetClosestEscapeVolume");

	AME_AIController_GetClosestEscapeVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetBoatEscapeVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMEEscapeVolume*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMEEscapeVolume* AME_AIController::GetBoatEscapeVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetBoatEscapeVolume");

	AME_AIController_GetBoatEscapeVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetBaseSightDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetBaseSightDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetBaseSightDistance");

	AME_AIController_GetBaseSightDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.GetAbilityPriority
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AIController::GetAbilityPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.GetAbilityPriority");

	AME_AIController_GetAbilityPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.CancelAllAbilities
// (Final, Native, Public, BlueprintCallable)
void AME_AIController::CancelAllAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.CancelAllAbilities");

	AME_AIController_CancelAllAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::CancelAbility(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.CancelAbility");

	AME_AIController_CancelAbility_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.AttackTargetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FAttackTarget           NewTarget                      (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AIController::AttackTargetActor(const struct FAttackTarget& NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.AttackTargetActor");

	AME_AIController_AttackTargetActor_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIController.AlertStateChangedInternal
// (Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> OldAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EAIThreatAlertState> NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ChangeInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIController::AlertStateChangedInternal(TEnumAsByte<Maneater_EAIThreatAlertState> OldAlertState, TEnumAsByte<Maneater_EAIThreatAlertState> NewState, class AActor* ChangeInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.AlertStateChangedInternal");

	AME_AIController_AlertStateChangedInternal_Params params;
	params.OldAlertState = OldAlertState;
	params.NewState = NewState;
	params.ChangeInstigator = ChangeInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.AddCombatPriorityBuff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCombatPriorityBuff     CombatPriorityBuff             (Parm, NoDestructor, NativeAccessSpecifierPublic)
void AME_AIController::AddCombatPriorityBuff(const struct FCombatPriorityBuff& CombatPriorityBuff)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.AddCombatPriorityBuff");

	AME_AIController_AddCombatPriorityBuff_Params params;
	params.CombatPriorityBuff = CombatPriorityBuff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIController.AbilityEnded
// (Native, Public, HasOutParms)
// Parameters:
// struct FAbilityEndedData       AbilityData                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AME_AIController::AbilityEnded(const struct FAbilityEndedData& AbilityData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIController.AbilityEnded");

	AME_AIController_AbilityEnded_Params params;
	params.AbilityData = AbilityData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.UnregisterEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_AlertEvent*          AlertEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::UnregisterEvent(class UME_AlertEvent* AlertEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.UnregisterEvent");

	AME_AIDirector_UnregisterEvent_Params params;
	params.AlertEvent = AlertEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.UnregisterAllEvents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  LinkedActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::UnregisterAllEvents(class AActor* LinkedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.UnregisterAllEvents");

	AME_AIDirector_UnregisterAllEvents_Params params;
	params.LinkedActor = LinkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.RegisterEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_AlertEvent*          AlertEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::RegisterEvent(class UME_AlertEvent* AlertEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.RegisterEvent");

	AME_AIDirector_RegisterEvent_Params params;
	params.AlertEvent = AlertEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.OnEventPulse
// (Final, Native, Public)
// Parameters:
// class UME_AlertEvent*          AlertEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::OnEventPulse(class UME_AlertEvent* AlertEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.OnEventPulse");

	AME_AIDirector_OnEventPulse_Params params;
	params.AlertEvent = AlertEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.OnEndAbility
// (Final, Native, Public)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_GameplayAbility*     Ability                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::OnEndAbility(class AME_AIController* AIC, class UME_GameplayAbility* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.OnEndAbility");

	AME_AIDirector_OnEndAbility_Params params;
	params.AIC = AIC;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.NotifyIncomingAttack
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// float                          BaseIncomingAttackDistance     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsBite                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::NotifyIncomingAttack(float BaseIncomingAttackDistance, bool bIsBite)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.NotifyIncomingAttack");

	AME_AIDirector_NotifyIncomingAttack_Params params;
	params.BaseIncomingAttackDistance = BaseIncomingAttackDistance;
	params.bIsBite = bIsBite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.GetReleventWitnessEvents
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UME_AlertEvent_Witness*> out_WitnessAlerts              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::GetReleventWitnessEvents(class AME_AIController* AIC, TArray<class UME_AlertEvent_Witness*>* out_WitnessAlerts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.GetReleventWitnessEvents");

	AME_AIDirector_GetReleventWitnessEvents_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_WitnessAlerts != nullptr)
		*out_WitnessAlerts = params.out_WitnessAlerts;

}


// Function Maneater.ME_AIDirector.GetCombatManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_CombatManager*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_CombatManager* AME_AIDirector::GetCombatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.GetCombatManager");

	AME_AIDirector_GetCombatManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIDirector.ForceToAlertState
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  PawnClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::ForceToAlertState(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, const struct FVector& Origin, float Radius, class UClass* PawnClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.ForceToAlertState");

	AME_AIDirector_ForceToAlertState_Params params;
	params.NewAlertState = NewAlertState;
	params.Origin = Origin;
	params.Radius = Radius;
	params.PawnClass = PawnClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AIDirector.CreateAndRegisterWitnessEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  LinkedActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_AlertEvent_Witness*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AlertEvent_Witness* AME_AIDirector::CreateAndRegisterWitnessEvent(class AActor* LinkedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.CreateAndRegisterWitnessEvent");

	AME_AIDirector_CreateAndRegisterWitnessEvent_Params params;
	params.LinkedActor = LinkedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AIDirector.BroadcastNoise
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NoiseOrigin                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NoiseIntensity                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AIDirector::BroadcastNoise(const struct FVector& NoiseOrigin, float NoiseIntensity, class AActor* NoiseInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AIDirector.BroadcastNoise");

	AME_AIDirector_BroadcastNoise_Params params;
	params.NoiseOrigin = NoiseOrigin;
	params.NoiseIntensity = NoiseIntensity;
	params.NoiseInstigator = NoiseInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehicleMovementComponent.GetLocalVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_VehicleMovementComponent::GetLocalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehicleMovementComponent.GetLocalVelocity");

	UME_VehicleMovementComponent_GetLocalVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehicleMovementComponent.GetAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_VehicleMovementComponent::GetAngularVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehicleMovementComponent.GetAngularVelocity");

	UME_VehicleMovementComponent_GetAngularVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehicleMovementComponent.AddImpulse
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ImpulseLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ImpulseNormal                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_VehicleMovementComponent::AddImpulse(const struct FVector& Impulse, const struct FVector& ImpulseLocation, const struct FVector& ImpulseNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehicleMovementComponent.AddImpulse");

	UME_VehicleMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.ImpulseLocation = ImpulseLocation;
	params.ImpulseNormal = ImpulseNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AlertEvent.Timer_PeriodicPulse
// (Final, Native, Protected)
void UME_AlertEvent::Timer_PeriodicPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.Timer_PeriodicPulse");

	UME_AlertEvent_Timer_PeriodicPulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AlertEvent.Timer_Lifetime
// (Final, Native, Protected)
void UME_AlertEvent::Timer_Lifetime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.Timer_Lifetime");

	UME_AlertEvent_Timer_Lifetime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AlertEvent.SetEventLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InEventLocation                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AlertEvent::SetEventLocation(const struct FVector& InEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.SetEventLocation");

	UME_AlertEvent_SetEventLocation_Params params;
	params.InEventLocation = InEventLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AlertEvent.LinkActorToEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToLink                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AlertEvent::LinkActorToEvent(class AActor* ActorToLink)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.LinkActorToEvent");

	UME_AlertEvent_LinkActorToEvent_Params params;
	params.ActorToLink = ActorToLink;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AlertEvent.GetSuspicionAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_AlertEvent::GetSuspicionAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.GetSuspicionAmount");

	UME_AlertEvent_GetSuspicionAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AlertEvent.GetLinkedActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_AlertEvent::GetLinkedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.GetLinkedActor");

	UME_AlertEvent_GetLinkedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AlertEvent.GetEventLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_AlertEvent::GetEventLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.GetEventLocation");

	UME_AlertEvent_GetEventLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AlertEvent.CanProcessEvent
// (Native, Public, BlueprintCallable)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_AlertEvent::CanProcessEvent(class AME_AIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent.CanProcessEvent");

	UME_AlertEvent_CanProcessEvent_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AlertEvent_Witness.GetCachedVisiblePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_AlertEvent_Witness::GetCachedVisiblePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AlertEvent_Witness.GetCachedVisiblePoint");

	UME_AlertEvent_Witness_GetCachedVisiblePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAIController.OnGameplayTagRemoved
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer   TagsRemoved                    (Parm, NativeAccessSpecifierPublic)
void AME_CharacterAIController::OnGameplayTagRemoved(const struct FGameplayTagContainer& TagsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAIController.OnGameplayTagRemoved");

	AME_CharacterAIController_OnGameplayTagRemoved_Params params;
	params.TagsRemoved = TagsRemoved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterAIController.OnGameplayTagAdded
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (Parm, NativeAccessSpecifierPublic)
// float                          TagDuration                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_CharacterAIController::OnGameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAIController.OnGameplayTagAdded");

	AME_CharacterAIController_OnGameplayTagAdded_Params params;
	params.TagsAdded = TagsAdded;
	params.TagDuration = TagDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterAIController.OnForceStopMoving
// (Native, Protected, HasOutParms)
// Parameters:
// Maneater_EThreeStateSwitch     MovementState                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EThreeStateSwitch     RotationState                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_CharacterAIController::OnForceStopMoving(Maneater_EThreeStateSwitch MovementState, Maneater_EThreeStateSwitch RotationState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAIController.OnForceStopMoving");

	AME_CharacterAIController_OnForceStopMoving_Params params;
	params.MovementState = MovementState;
	params.RotationState = RotationState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalAIController.TriggerEvadeIfWithinRange
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalAIController::TriggerEvadeIfWithinRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalAIController.TriggerEvadeIfWithinRange");

	AME_AnimalAIController_TriggerEvadeIfWithinRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalAIController.TriggerEvade
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalAIController::TriggerEvade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalAIController.TriggerEvade");

	AME_AnimalAIController_TriggerEvade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalAIController.OnPreyGrabbed
// (Final, Native, Protected)
// Parameters:
// class AME_AnimalCharacter*     Grabber                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Prey                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AnimalAIController::OnPreyGrabbed(class AME_AnimalCharacter* Grabber, class AActor* Prey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalAIController.OnPreyGrabbed");

	AME_AnimalAIController_OnPreyGrabbed_Params params;
	params.Grabber = Grabber;
	params.Prey = Prey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.UpdateVulnerability
// (Final, Native, Private)
void AME_Character::UpdateVulnerability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.UpdateVulnerability");

	AME_Character_UpdateVulnerability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.StopVoice
// (Final, Native, Public, BlueprintCallable)
void AME_Character::StopVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.StopVoice");

	AME_Character_StopVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.StopAI
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 StopReason                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::StopAI(const struct FString& StopReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.StopAI");

	AME_Character_StopAI_Params params;
	params.StopReason = StopReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.SetRootMotionNonUniformTranslationScale
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 inRootMotionScale              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::SetRootMotionNonUniformTranslationScale(const struct FVector& inRootMotionScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.SetRootMotionNonUniformTranslationScale");

	AME_Character_SetRootMotionNonUniformTranslationScale_Params params;
	params.inRootMotionScale = inRootMotionScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.SetDesiredAnimDir
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EDirOctant            AnimDir                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::SetDesiredAnimDir(Maneater_EDirOctant AnimDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.SetDesiredAnimDir");

	AME_Character_SetDesiredAnimDir_Params params;
	params.AnimDir = AnimDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.SetDeathPhysics
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PhysicsBlendDuration           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPartialPhysics                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::SetDeathPhysics(float PhysicsBlendDuration, bool bPartialPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.SetDeathPhysics");

	AME_Character_SetDeathPhysics_Params params;
	params.PhysicsBlendDuration = PhysicsBlendDuration;
	params.bPartialPhysics = bPartialPhysics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.SetAIPatrolPlotter
// (Native, Public, BlueprintCallable)
// Parameters:
// class ATwAIPatrolPlotter*      InPatrolPlotter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.SetAIPatrolPlotter");

	AME_Character_SetAIPatrolPlotter_Params params;
	params.InPatrolPlotter = InPatrolPlotter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.RestartAI
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           bMaintainAggroInfo             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::RestartAI(bool bMaintainAggroInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.RestartAI");

	AME_Character_RestartAI_Params params;
	params.bMaintainAggroInfo = bMaintainAggroInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.PulseDynamicDialogueEvent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   DialogueEventName              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ArgumentValueNames             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::PulseDynamicDialogueEvent(struct FName* DialogueEventName, TArray<struct FString> ArgumentValueNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.PulseDynamicDialogueEvent");

	AME_Character_PulseDynamicDialogueEvent_Params params;
	params.ArgumentValueNames = ArgumentValueNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogueEventName != nullptr)
		*DialogueEventName = params.DialogueEventName;

}


// Function Maneater.ME_Character.ProcessRagdollImpactResponse
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       InstigatorPM                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     InstigatorComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::ProcessRagdollImpactResponse(class UPhysicalMaterial* InstigatorPM, class UPrimitiveComponent* InstigatorComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.ProcessRagdollImpactResponse");

	AME_Character_ProcessRagdollImpactResponse_Params params;
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


// Function Maneater.ME_Character.PostDynamicDialogueEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   DialogueEventName              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ArgumentValueNames             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::PostDynamicDialogueEvent(struct FName* DialogueEventName, TArray<struct FString>* ArgumentValueNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.PostDynamicDialogueEvent");

	AME_Character_PostDynamicDialogueEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogueEventName != nullptr)
		*DialogueEventName = params.DialogueEventName;
	if (ArgumentValueNames != nullptr)
		*ArgumentValueNames = params.ArgumentValueNames;

}


// Function Maneater.ME_Character.PlayVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_ECharacterVoiceEventType> VoiceType                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            VoicePriority                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::PlayVoice(TEnumAsByte<Maneater_ECharacterVoiceEventType> VoiceType, int VoicePriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.PlayVoice");

	AME_Character_PlayVoice_Params params;
	params.VoiceType = VoiceType;
	params.VoicePriority = VoicePriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.PlayFootstep
// (Native, Public, BlueprintCallable)
void AME_Character::PlayFootstep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.PlayFootstep");

	AME_Character_PlayFootstep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnStunArmorDepleted
// (Final, Native, Public)
void AME_Character::OnStunArmorDepleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnStunArmorDepleted");

	AME_Character_OnStunArmorDepleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnPlayerSharkGrowthLevelChanged
// (Native, Protected)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::OnPlayerSharkGrowthLevelChanged(int NewLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnPlayerSharkGrowthLevelChanged");

	AME_Character_OnPlayerSharkGrowthLevelChanged_Params params;
	params.NewLevel = NewLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnPhysicsVolumeChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnPhysicsVolumeChanged");

	AME_Character_OnPhysicsVolumeChanged_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnGameplayEffectRemoved
// (Native, Public, HasOutParms)
// Parameters:
// struct FActiveGameplayEffect   RemovedGameplayEffect          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AME_Character::OnGameplayEffectRemoved(const struct FActiveGameplayEffect& RemovedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnGameplayEffectRemoved");

	AME_Character_OnGameplayEffectRemoved_Params params;
	params.RemovedGameplayEffect = RemovedGameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnGameplayEffectApplied
// (Native, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec     SpecApplied                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::OnGameplayEffectApplied(class UAbilitySystemComponent* Source, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnGameplayEffectApplied");

	AME_Character_OnGameplayEffectApplied_Params params;
	params.Source = Source;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::OnDied(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnDied");

	AME_Character_OnDied_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.OnBump
// (Final, Native, Public)
void AME_Character::OnBump()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.OnBump");

	AME_Character_OnBump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.IsVulnerable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsVulnerable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsVulnerable");

	AME_Character_IsVulnerable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsUnderwater
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsUnderwater");

	AME_Character_IsUnderwater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsTagged
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsTagged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsTagged");

	AME_Character_IsTagged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsSilhouetted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsSilhouetted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsSilhouetted");

	AME_Character_IsSilhouetted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsPhysicalAnimationActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsPhysicalAnimationActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsPhysicalAnimationActive");

	AME_Character_IsPhysicalAnimationActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsPassenger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsPassenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsPassenger");

	AME_Character_IsPassenger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsInstigatingAnyAlerts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsInstigatingAnyAlerts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsInstigatingAnyAlerts");

	AME_Character_IsInstigatingAnyAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsDrowning
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsDrowning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsDrowning");

	AME_Character_IsDrowning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsCritVulnerable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsCritVulnerable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsCritVulnerable");

	AME_Character_IsCritVulnerable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsBeingThrashedByPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsBeingThrashedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsBeingThrashedByPlayer");

	AME_Character_IsBeingThrashedByPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsBeingThrashed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsBeingThrashed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsBeingThrashed");

	AME_Character_IsBeingThrashed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsAliveAndWell
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsAliveAndWell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsAliveAndWell");

	AME_Character_IsAliveAndWell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.IsAbilitySystemComponentSetUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::IsAbilitySystemComponentSetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.IsAbilitySystemComponentSetUp");

	AME_Character_IsAbilitySystemComponentSetUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.HasPassedVulnerabilityThreshold
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::HasPassedVulnerabilityThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.HasPassedVulnerabilityThreshold");

	AME_Character_HasPassedVulnerabilityThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetWasRecentlyBumped
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::GetWasRecentlyBumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetWasRecentlyBumped");

	AME_Character_GetWasRecentlyBumped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetVisionTypeAsDialogueString
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AME_Character::GetVisionTypeAsDialogueString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetVisionTypeAsDialogueString");

	AME_Character_GetVisionTypeAsDialogueString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetThrashEscapeDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator AME_Character::GetThrashEscapeDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetThrashEscapeDirection");

	AME_Character_GetThrashEscapeDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetRootMotionNonUniformTranslationScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_Character::GetRootMotionNonUniformTranslationScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetRootMotionNonUniformTranslationScale");

	AME_Character_GetRootMotionNonUniformTranslationScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetPassengerVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_VehiclePawn*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_VehiclePawn* AME_Character::GetPassengerVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetPassengerVehicle");

	AME_Character_GetPassengerVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetPassengerSeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_Character::GetPassengerSeat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetPassengerSeat");

	AME_Character_GetPassengerSeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetOriginalPhysicsAsset
// (Final, Native, Public)
// Parameters:
// class UPhysicsAsset*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPhysicsAsset* AME_Character::GetOriginalPhysicsAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetOriginalPhysicsAsset");

	AME_Character_GetOriginalPhysicsAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetNutritionData_BP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FNutrientChunkList      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FNutrientChunkList AME_Character::GetNutritionData_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetNutritionData_BP");

	AME_Character_GetNutritionData_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetMercunaObstacle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_MercunaObstacleComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_MercunaObstacleComponent* AME_Character::GetMercunaObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetMercunaObstacle");

	AME_Character_GetMercunaObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetMercunaNavigation
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_MercunaNavigationComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_MercunaNavigationComponent* AME_Character::GetMercunaNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetMercunaNavigation");

	AME_Character_GetMercunaNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetLocationAsDialogueString
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AME_Character::GetLocationAsDialogueString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetLocationAsDialogueString");

	AME_Character_GetLocationAsDialogueString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetHeadLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_Character::GetHeadLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetHeadLocation");

	AME_Character_GetHeadLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetFloorPhysicalMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UME_PhysicalMaterial*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_PhysicalMaterial* AME_Character::GetFloorPhysicalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetFloorPhysicalMaterial");

	AME_Character_GetFloorPhysicalMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetDesiredAnimDir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EDirOctant            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EDirOctant AME_Character::GetDesiredAnimDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetDesiredAnimDir");

	AME_Character_GetDesiredAnimDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetCollisionComponent
// (Native, Public)
// Parameters:
// class UCapsuleComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCapsuleComponent* AME_Character::GetCollisionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetCollisionComponent");

	AME_Character_GetCollisionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetCharacterVisionType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EVisionType           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EVisionType AME_Character::GetCharacterVisionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetCharacterVisionType");

	AME_Character_GetCharacterVisionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetAIPatrolPlotter
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATwAIPatrolPlotter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATwAIPatrolPlotter* AME_Character::GetAIPatrolPlotter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetAIPatrolPlotter");

	AME_Character_GetAIPatrolPlotter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.GetAbilitySystemComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_AbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AbilitySystemComponent* AME_Character::GetAbilitySystemComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.GetAbilitySystemComponent");

	AME_Character_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.Died
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayDeathAnimation            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Character::Died(class AController* Killer, bool bPlayDeathAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.Died");

	AME_Character_Died_Params params;
	params.Killer = Killer;
	params.bPlayDeathAnimation = bPlayDeathAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.Despawn
// (Native, Public, BlueprintCallable)
void AME_Character::Despawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.Despawn");

	AME_Character_Despawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.ClearAttachedProjectiles
// (Final, Native, Public, BlueprintCallable)
void AME_Character::ClearAttachedProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.ClearAttachedProjectiles");

	AME_Character_ClearAttachedProjectiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Character.CanVisionTypeSeeCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EVisionType           VisionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_Character::CanVisionTypeSeeCharacter(Maneater_EVisionType VisionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.CanVisionTypeSeeCharacter");

	AME_Character_CanVisionTypeSeeCharacter_Params params;
	params.VisionType = VisionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Character.BlendBackToDefault
// (Event, Public, BlueprintEvent)
void AME_Character::BlendBackToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Character.BlendBackToDefault");

	AME_Character_BlendBackToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.UseKnockbackRagdoll
// (Final, Native, Public)
void AME_AnimalCharacter::UseKnockbackRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.UseKnockbackRagdoll");

	AME_AnimalCharacter_UseKnockbackRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.UpdatePartialRagdoll
// (Final, Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AnimalCharacter::UpdatePartialRagdoll(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.UpdatePartialRagdoll");

	AME_AnimalCharacter_UpdatePartialRagdoll_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.UpdateJointBlendWeight
// (Final, Native, Public)
// Parameters:
// class USkeletalMeshComponent*  SKM                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PartialPhysicsBase             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AnimBlendMultiplier            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpeedPercent                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AnimalCharacter::UpdateJointBlendWeight(class USkeletalMeshComponent* SKM, const struct FName& BoneName, float PartialPhysicsBase, float AnimBlendMultiplier, float SpeedPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.UpdateJointBlendWeight");

	AME_AnimalCharacter_UpdateJointBlendWeight_Params params;
	params.SKM = SKM;
	params.BoneName = BoneName;
	params.PartialPhysicsBase = PartialPhysicsBase;
	params.AnimBlendMultiplier = AnimBlendMultiplier;
	params.SpeedPercent = SpeedPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.TryUseEvadeAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EComboDirection> InputDirection                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReversed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::TryUseEvadeAbility(TEnumAsByte<Maneater_EComboDirection> InputDirection, bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.TryUseEvadeAbility");

	AME_AnimalCharacter_TryUseEvadeAbility_Params params;
	params.InputDirection = InputDirection;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.StopThrashing
// (Final, Native, Public, BlueprintCallable)
void AME_AnimalCharacter::StopThrashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.StopThrashing");

	AME_AnimalCharacter_StopThrashing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.SetThreatLevel
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InstigatingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AnimalCharacter::SetThreatLevel(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.SetThreatLevel");

	AME_AnimalCharacter_SetThreatLevel_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.OnConsumedGrabPoint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FThrashGrabPoint        ConsumedGrabPoint              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AME_AnimalCharacter::OnConsumedGrabPoint(const struct FThrashGrabPoint& ConsumedGrabPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.OnConsumedGrabPoint");

	AME_AnimalCharacter_OnConsumedGrabPoint_Params params;
	params.ConsumedGrabPoint = ConsumedGrabPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.OnAbilityActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// Maneater_EME_CharacterAbility  Ability                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AnimalCharacter::OnAbilityActivated(Maneater_EME_CharacterAbility Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.OnAbilityActivated");

	AME_AnimalCharacter_OnAbilityActivated_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.ModifyStamina
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Change                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_AnimalCharacter::ModifyStamina(float Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.ModifyStamina");

	AME_AnimalCharacter_ModifyStamina_Params params;
	params.Change = Change;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.IsTransitioning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::IsTransitioning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.IsTransitioning");

	AME_AnimalCharacter_IsTransitioning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.IsThrashing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::IsThrashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.IsThrashing");

	AME_AnimalCharacter_IsThrashing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.IsLunging
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::IsLunging()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.IsLunging");

	AME_AnimalCharacter_IsLunging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.IsEvading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::IsEvading()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.IsEvading");

	AME_AnimalCharacter_IsEvading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.HasAnyStamina
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::HasAnyStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.HasAnyStamina");

	AME_AnimalCharacter_HasAnyStamina_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetThrashDecayPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetThrashDecayPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetThrashDecayPct");

	AME_AnimalCharacter_GetThrashDecayPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetThrashDamagePool
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetThrashDamagePool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetThrashDamagePool");

	AME_AnimalCharacter_GetThrashDamagePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetTailLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_AnimalCharacter::GetTailLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetTailLocation");

	AME_AnimalCharacter_GetTailLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetTailControlStrength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetTailControlStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetTailControlStrength");

	AME_AnimalCharacter_GetTailControlStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetPreyAttachBoneName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName AME_AnimalCharacter::GetPreyAttachBoneName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetPreyAttachBoneName");

	AME_AnimalCharacter_GetPreyAttachBoneName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetMaxMoveSpeed
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetMaxMoveSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetMaxMoveSpeed");

	AME_AnimalCharacter_GetMaxMoveSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetJawsLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_AnimalCharacter::GetJawsLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetJawsLocation");

	AME_AnimalCharacter_GetJawsLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetJawSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetJawSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetJawSize");

	AME_AnimalCharacter_GetJawSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetDrownSpeedModifier
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetDrownSpeedModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetDrownSpeedModifier");

	AME_AnimalCharacter_GetDrownSpeedModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetDrownSpeedBase
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetDrownSpeedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetDrownSpeedBase");

	AME_AnimalCharacter_GetDrownSpeedBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetCurrentSpeedPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetCurrentSpeedPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetCurrentSpeedPct");

	AME_AnimalCharacter_GetCurrentSpeedPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetBaseThrashDamage
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetBaseThrashDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetBaseThrashDamage");

	AME_AnimalCharacter_GetBaseThrashDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetBaseTailwhipDamage
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetBaseTailwhipDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetBaseTailwhipDamage");

	AME_AnimalCharacter_GetBaseTailwhipDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetBaseStrugglePower
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetBaseStrugglePower()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetBaseStrugglePower");

	AME_AnimalCharacter_GetBaseStrugglePower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetBaseStrikeDamage
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetBaseStrikeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetBaseStrikeDamage");

	AME_AnimalCharacter_GetBaseStrikeDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.GetBaseBiteDamage
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_AnimalCharacter::GetBaseBiteDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.GetBaseBiteDamage");

	AME_AnimalCharacter_GetBaseBiteDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.EndKnockbackRagdoll
// (Final, Native, Public)
void AME_AnimalCharacter::EndKnockbackRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.EndKnockbackRagdoll");

	AME_AnimalCharacter_EndKnockbackRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimalCharacter.ConsumePreyWhole
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ThrashablePrey                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::ConsumePreyWhole(class AActor* ThrashablePrey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.ConsumePreyWhole");

	AME_AnimalCharacter_ConsumePreyWhole_Params params;
	params.ThrashablePrey = ThrashablePrey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.CanGrabPrey
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ThrashablePrey                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::CanGrabPrey(class AActor* ThrashablePrey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.CanGrabPrey");

	AME_AnimalCharacter_CanGrabPrey_Params params;
	params.ThrashablePrey = ThrashablePrey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimalCharacter.CanEnterCombatMovement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_AnimalCharacter::CanEnterCombatMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimalCharacter.CanEnterCombatMovement");

	AME_AnimalCharacter_CanEnterCombatMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterMovementComponent.UpdateMercunaMovementProperties
// (Final, Native, Public, BlueprintCallable)
void UME_CharacterMovementComponent::UpdateMercunaMovementProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterMovementComponent.UpdateMercunaMovementProperties");

	UME_CharacterMovementComponent_UpdateMercunaMovementProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterMovementComponent.SetOverrideMercunaAcceleration
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 OverrideAcceleration           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CharacterMovementComponent::SetOverrideMercunaAcceleration(const struct FVector& OverrideAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterMovementComponent.SetOverrideMercunaAcceleration");

	UME_CharacterMovementComponent_SetOverrideMercunaAcceleration_Params params;
	params.OverrideAcceleration = OverrideAcceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterMovementComponent.GetMercunaAcceleration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_CharacterMovementComponent::GetMercunaAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterMovementComponent.GetMercunaAcceleration");

	UME_CharacterMovementComponent_GetMercunaAcceleration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterMovementComponent.GetLocalVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_CharacterMovementComponent::GetLocalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterMovementComponent.GetLocalVelocity");

	UME_CharacterMovementComponent_GetLocalVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterMovementComponent.AtSeaLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CharacterMovementComponent::AtSeaLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterMovementComponent.AtSeaLevel");

	UME_CharacterMovementComponent_AtSeaLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_Base.PlayLostLimbAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_ESkeletonGrabbableJoints LostJoint                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_Base::PlayLostLimbAnimation(Maneater_ESkeletonGrabbableJoints LostJoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_Base.PlayLostLimbAnimation");

	UME_AnimInstance_Base_PlayLostLimbAnimation_Params params;
	params.LostJoint = LostJoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_Base.PlayDeathAnimation
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_Base::PlayDeathAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_Base.PlayDeathAnimation");

	UME_AnimInstance_Base_PlayDeathAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_Base.K2_Reset
// (Event, Public, BlueprintEvent)
void UME_AnimInstance_Base::K2_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_Base.K2_Reset");

	UME_AnimInstance_Base_K2_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_Base.GetWhipshotRecoveryAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_Base::GetWhipshotRecoveryAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_Base.GetWhipshotRecoveryAnimation");

	UME_AnimInstance_Base_GetWhipshotRecoveryAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_Base.GetOwningCharacter
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_Character* UME_AnimInstance_Base::GetOwningCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_Base.GetOwningCharacter");

	UME_AnimInstance_Base_GetOwningCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_Base.GetIsMoving
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_AnimInstance_Base::GetIsMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_Base.GetIsMoving");

	UME_AnimInstance_Base_GetIsMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.SetForcedHipsLocation
// (Final, Native, Public, BlueprintCallable)
void UME_AnimInstance_HumanNPC::SetForcedHipsLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SetForcedHipsLocation");

	UME_AnimInstance_HumanNPC_SetForcedHipsLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponReferences
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           ValidSoft                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::SaveSoftWeaponReferences(bool* ValidSoft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponReferences");

	UME_AnimInstance_HumanNPC_SaveSoftWeaponReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidSoft != nullptr)
		*ValidSoft = params.ValidSoft;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponArrayReferences
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           ValidSoft                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::SaveSoftWeaponArrayReferences(bool* ValidSoft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponArrayReferences");

	UME_AnimInstance_HumanNPC_SaveSoftWeaponArrayReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidSoft != nullptr)
		*ValidSoft = params.ValidSoft;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftBlendSpaceReferences
// (Final, Native, Public, HasOutParms)
// Parameters:
// bool                           ValidSoft                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::SaveSoftBlendSpaceReferences(bool* ValidSoft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftBlendSpaceReferences");

	UME_AnimInstance_HumanNPC_SaveSoftBlendSpaceReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidSoft != nullptr)
		*ValidSoft = params.ValidSoft;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponReferences
// (Final, Native, Public)
void UME_AnimInstance_HumanNPC::SaveHardWeaponReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponReferences");

	UME_AnimInstance_HumanNPC_SaveHardWeaponReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponBlendspace
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UBlendSpace*             HardRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::SaveHardWeaponBlendspace(class UBlendSpace** HardRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponBlendspace");

	UME_AnimInstance_HumanNPC_SaveHardWeaponBlendspace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HardRef != nullptr)
		*HardRef = params.HardRef;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimationArray
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class UAnimMontage*>    HardArray                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::SaveHardWeaponAnimationArray(TArray<class UAnimMontage*>* HardArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimationArray");

	UME_AnimInstance_HumanNPC_SaveHardWeaponAnimationArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HardArray != nullptr)
		*HardArray = params.HardArray;

}


// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimation
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAnimSequence*           HardRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::SaveHardWeaponAnimation(class UAnimSequence** HardRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimation");

	UME_AnimInstance_HumanNPC_SaveHardWeaponAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HardRef != nullptr)
		*HardRef = params.HardRef;

}


// Function Maneater.ME_AnimInstance_HumanNPC.PlayPassengerHitReaction
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitImpulse                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::PlayPassengerHitReaction(const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& HitImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.PlayPassengerHitReaction");

	UME_AnimInstance_HumanNPC_PlayPassengerHitReaction_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitImpulse = HitImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.PlayGetupAnimation
// (Final, Native, Public)
// Parameters:
// bool                           ChestUp                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::PlayGetupAnimation(bool ChestUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.PlayGetupAnimation");

	UME_AnimInstance_HumanNPC_PlayGetupAnimation_Params params;
	params.ChestUp = ChestUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.PlayFiringMontage
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_HumanNPC::PlayFiringMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.PlayFiringMontage");

	UME_AnimInstance_HumanNPC_PlayFiringMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.PassengerHitReactionDelay
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::PassengerHitReactionDelay(class UAnimMontage* MontageToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.PassengerHitReactionDelay");

	UME_AnimInstance_HumanNPC_PassengerHitReactionDelay_Params params;
	params.MontageToPlay = MontageToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.LoadSoftWeaponAnimations
// (Final, Native, Public)
void UME_AnimInstance_HumanNPC::LoadSoftWeaponAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.LoadSoftWeaponAnimations");

	UME_AnimInstance_HumanNPC_LoadSoftWeaponAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.GetupAnimationBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::GetupAnimationBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.GetupAnimationBlendingOut");

	UME_AnimInstance_HumanNPC_GetupAnimationBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestUpGetupAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_HumanNPC::GetUninjuredChestUpGetupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestUpGetupAnimation");

	UME_AnimInstance_HumanNPC_GetUninjuredChestUpGetupAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestDownGetupAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_HumanNPC::GetUninjuredChestDownGetupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestDownGetupAnimation");

	UME_AnimInstance_HumanNPC_GetUninjuredChestDownGetupAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestUpGetupAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_HumanNPC::GetInjuredChestUpGetupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestUpGetupAnimation");

	UME_AnimInstance_HumanNPC_GetInjuredChestUpGetupAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestDownGetupAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* UME_AnimInstance_HumanNPC::GetInjuredChestDownGetupAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestDownGetupAnimation");

	UME_AnimInstance_HumanNPC_GetInjuredChestDownGetupAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.FiringMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::FiringMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.FiringMontageBlendingOut");

	UME_AnimInstance_HumanNPC_FiringMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_HumanNPC.CarryingWeaponRequiresAiming
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_AnimInstance_HumanNPC::CarryingWeaponRequiresAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.CarryingWeaponRequiresAiming");

	UME_AnimInstance_HumanNPC_CarryingWeaponRequiresAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_HumanNPC.AddSoftWeaponAnimationArray
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FSoftObjectPath> ArrayToLoad                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_HumanNPC::AddSoftWeaponAnimationArray(TArray<struct FSoftObjectPath>* ArrayToLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_HumanNPC.AddSoftWeaponAnimationArray");

	UME_AnimInstance_HumanNPC_AddSoftWeaponAnimationArray_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArrayToLoad != nullptr)
		*ArrayToLoad = params.ArrayToLoad;

}


// Function Maneater.ME_AnimInstance_PlayerShark.UpdateKnifingRotation
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FRotator                MeshRotation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                ActorRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UME_AnimInstance_PlayerShark::UpdateKnifingRotation(const struct FRotator& MeshRotation, const struct FRotator& ActorRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_PlayerShark.UpdateKnifingRotation");

	UME_AnimInstance_PlayerShark_UpdateKnifingRotation_Params params;
	params.MeshRotation = MeshRotation;
	params.ActorRotation = ActorRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_PlayerShark.SetCruisingWaterLine
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           SetTo                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AnimInstance_PlayerShark::SetCruisingWaterLine(bool SetTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_PlayerShark.SetCruisingWaterLine");

	UME_AnimInstance_PlayerShark_SetCruisingWaterLine_Params params;
	params.SetTo = SetTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_PlayerShark.GetOwningShark
// (Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_PlayerSharkCharacter* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_PlayerSharkCharacter* UME_AnimInstance_PlayerShark::GetOwningShark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_PlayerShark.GetOwningShark");

	UME_AnimInstance_PlayerShark_GetOwningShark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AnimInstance_PlayerShark.FloppingTakeOff
// (Final, Native, Public, BlueprintCallable)
void UME_AnimInstance_PlayerShark::FloppingTakeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_PlayerShark.FloppingTakeOff");

	UME_AnimInstance_PlayerShark_FloppingTakeOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AnimInstance_PlayerShark.FloppingLanding
// (Final, Native, Public, BlueprintCallable)
void UME_AnimInstance_PlayerShark::FloppingLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AnimInstance_PlayerShark.FloppingLanding");

	UME_AnimInstance_PlayerShark_FloppingLanding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AssetLoader.GetSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sEventName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMesh* AME_AssetLoader::GetSkeletalMesh(const struct FName& sEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetSkeletalMesh");

	AME_AssetLoader_GetSkeletalMesh_Params params;
	params.sEventName = sEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetParticleSystemList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FName>           EventNames                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> eActionMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UParticleSystem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UParticleSystem*> AME_AssetLoader::GetParticleSystemList(TArray<struct FName> EventNames, TEnumAsByte<Maneater_ECharacterActionMode> eActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetParticleSystemList");

	AME_AssetLoader_GetParticleSystemList_Params params;
	params.EventNames = EventNames;
	params.eActionMode = eActionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetParticleSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sEventName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> eActionMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystem* AME_AssetLoader::GetParticleSystem(const struct FName& sEventName, TEnumAsByte<Maneater_ECharacterActionMode> eActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetParticleSystem");

	AME_AssetLoader_GetParticleSystem_Params params;
	params.sEventName = sEventName;
	params.eActionMode = eActionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sEventName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* AME_AssetLoader::GetMaterial(const struct FName& sEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetMaterial");

	AME_AssetLoader_GetMaterial_Params params;
	params.sEventName = sEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetImpactEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sNameBase                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EPhysicalSurface> eSurfaceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImpactEffect           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FImpactEffect AME_AssetLoader::GetImpactEffect(const struct FName& sNameBase, TEnumAsByte<Engine_EPhysicalSurface> eSurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetImpactEffect");

	AME_AssetLoader_GetImpactEffect_Params params;
	params.sNameBase = sNameBase;
	params.eSurfaceType = eSurfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetEquippedEvolutionRowName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EEvolutionSlot        SlotType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString AME_AssetLoader::GetEquippedEvolutionRowName(Maneater_EEvolutionSlot SlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetEquippedEvolutionRowName");

	AME_AssetLoader_GetEquippedEvolutionRowName_Params params;
	params.SlotType = SlotType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetAudioEventWithSurface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sEventName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EPhysicalSurface> eSurfaceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* AME_AssetLoader::GetAudioEventWithSurface(const struct FName& sEventName, TEnumAsByte<Engine_EPhysicalSurface> eSurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetAudioEventWithSurface");

	AME_AssetLoader_GetAudioEventWithSurface_Params params;
	params.sEventName = sEventName;
	params.eSurfaceType = eSurfaceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetAudioEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sEventName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> eActionMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkAudioEvent* AME_AssetLoader::GetAudioEvent(const struct FName& sEventName, TEnumAsByte<Maneater_ECharacterActionMode> eActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetAudioEvent");

	AME_AssetLoader_GetAudioEvent_Params params;
	params.sEventName = sEventName;
	params.eActionMode = eActionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AssetLoader.GetAnimMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sEventName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> eActionMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimMontage* AME_AssetLoader::GetAnimMontage(const struct FName& sEventName, TEnumAsByte<Maneater_ECharacterActionMode> eActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AssetLoader.GetAnimMontage");

	AME_AssetLoader_GetAnimMontage_Params params;
	params.sEventName = sEventName;
	params.eActionMode = eActionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AudioEventManager.Trigger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ForceMode                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AudioEventManager::STATIC_Trigger(const struct FName& EventName, class UObject* WorldContextObject, int ForceMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.Trigger");

	UME_AudioEventManager_Trigger_Params params;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;
	params.ForceMode = ForceMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AudioEventManager.TickSwimAttenuation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           InCombat                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_AudioEventManager::STATIC_TickSwimAttenuation(bool InCombat, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.TickSwimAttenuation");

	UME_AudioEventManager_TickSwimAttenuation_Params params;
	params.InCombat = InCombat;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AudioEventManager.PostWhizzbyIfInRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Projectile                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AudioEventManager::STATIC_PostWhizzbyIfInRange(class UAkAudioEvent* Event, class AActor* Projectile, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.PostWhizzbyIfInRange");

	UME_AudioEventManager_PostWhizzbyIfInRange_Params params;
	params.Event = Event;
	params.Projectile = Projectile;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AudioEventManager.IsBankLoaded
// (Final, Native, Private)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_AudioEventManager::IsBankLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.IsBankLoaded");

	UME_AudioEventManager_IsBankLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AudioEventManager.GetAudioEventManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_AudioEventManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AudioEventManager* UME_AudioEventManager::STATIC_GetAudioEventManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.GetAudioEventManager");

	UME_AudioEventManager_GetAudioEventManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_AudioEventManager.DelayStartEx
// (Final, Native, Private)
void UME_AudioEventManager::DelayStartEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.DelayStartEx");

	UME_AudioEventManager_DelayStartEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_AudioEventManager.BankWaitCheckEx
// (Final, Native, Private)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_AudioEventManager::BankWaitCheckEx(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_AudioEventManager.BankWaitCheckEx");

	UME_AudioEventManager_BankWaitCheckEx_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableActor.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_ThrashableActor::OnDied(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableActor.OnDied");

	AME_ThrashableActor_OnDied_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableActor.GetCurrentHealth_Implementation
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_ThrashableActor::GetCurrentHealth_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableActor.GetCurrentHealth_Implementation");

	AME_ThrashableActor_GetCurrentHealth_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableActor.GetAbilitySystemComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_AbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AbilitySystemComponent* AME_ThrashableActor::GetAbilitySystemComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableActor.GetAbilitySystemComponent");

	AME_ThrashableActor_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SpawnPointActor.TriggerSpawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_SpawnPointActor::TriggerSpawn(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPointActor.TriggerSpawn");

	AME_SpawnPointActor_TriggerSpawn_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SpawnPointActor.GetCapsuleComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCapsuleComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCapsuleComponent* AME_SpawnPointActor::GetCapsuleComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPointActor.GetCapsuleComponent");

	AME_SpawnPointActor_GetCapsuleComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SpawnPointActor.CanSpawnAI
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_SpawnPointActor::CanSpawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPointActor.CanSpawnAI");

	AME_SpawnPointActor_CanSpawnAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BlueprintFunctionLibrary.SetPrimitiveMinDrawDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MinDrawDistance                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_BlueprintFunctionLibrary::STATIC_SetPrimitiveMinDrawDistance(class UPrimitiveComponent* PrimitiveComponent, float MinDrawDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BlueprintFunctionLibrary.SetPrimitiveMinDrawDistance");

	UME_BlueprintFunctionLibrary_SetPrimitiveMinDrawDistance_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.MinDrawDistance = MinDrawDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BlueprintFunctionLibrary.SetManeaterDefaultMinLOD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_BlueprintFunctionLibrary::STATIC_SetManeaterDefaultMinLOD(class UStaticMesh* StaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BlueprintFunctionLibrary.SetManeaterDefaultMinLOD");

	UME_BlueprintFunctionLibrary_SetManeaterDefaultMinLOD_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BlueprintFunctionLibrary.GetTriangleCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMesh*             StaticMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            LODIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_BlueprintFunctionLibrary::STATIC_GetTriangleCount(class UStaticMesh* StaticMesh, int LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BlueprintFunctionLibrary.GetTriangleCount");

	UME_BlueprintFunctionLibrary_GetTriangleCount_Params params;
	params.StaticMesh = StaticMesh;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BlueprintFunctionLibrary.EnableOutlineRendering
// (Final, Native, Static, Public, BlueprintCallable)
void UME_BlueprintFunctionLibrary::STATIC_EnableOutlineRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BlueprintFunctionLibrary.EnableOutlineRendering");

	UME_BlueprintFunctionLibrary_EnableOutlineRendering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BlueprintFunctionLibrary.DisableOutlineRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          InDuration                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_BlueprintFunctionLibrary::STATIC_DisableOutlineRendering(float InDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BlueprintFunctionLibrary.DisableOutlineRendering");

	UME_BlueprintFunctionLibrary_DisableOutlineRendering_Params params;
	params.InDuration = InDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehicleAIController.IsThreatUnderVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehicleAIController::IsThreatUnderVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehicleAIController.IsThreatUnderVehicle");

	AME_VehicleAIController_IsThreatUnderVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BoatAIController.OnTrackedAIDied
// (Final, Native, Protected)
// Parameters:
// class AME_AIController*        KilledAIC                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_BoatAIController::OnTrackedAIDied(class AME_AIController* KilledAIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BoatAIController.OnTrackedAIDied");

	AME_BoatAIController_OnTrackedAIDied_Params params;
	params.KilledAIC = KilledAIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.WallHit
// (Native, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::WallHit(class UPrimitiveComponent* MyComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.WallHit");

	AME_VehiclePawn_WallHit_Params params;
	params.MyComp = MyComp;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.Timer_EjectPassenger
// (Final, Native, Public)
// Parameters:
// int                            PassengerIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             EjectInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEjectingAllPassengers         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::Timer_EjectPassenger(int PassengerIndex, class AController* EjectInstigator, bool bEjectingAllPassengers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.Timer_EjectPassenger");

	AME_VehiclePawn_Timer_EjectPassenger_Params params;
	params.PassengerIndex = PassengerIndex;
	params.EjectInstigator = EjectInstigator;
	params.bEjectingAllPassengers = bEjectingAllPassengers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.Timer_AbandonPassenger
// (Final, Native, Public)
void AME_VehiclePawn::Timer_AbandonPassenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.Timer_AbandonPassenger");

	AME_VehiclePawn_Timer_AbandonPassenger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.Sink
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             SinkInstigator                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::Sink(class AController* SinkInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.Sink");

	AME_VehiclePawn_Sink_Params params;
	params.SinkInstigator = SinkInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.SetPassengerWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PassengerNum                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::SetPassengerWeapon(int PassengerNum, class UClass* NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.SetPassengerWeapon");

	AME_VehiclePawn_SetPassengerWeapon_Params params;
	params.PassengerNum = PassengerNum;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.SetPassengerThreatLevel
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InstigatingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::SetPassengerThreatLevel(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.SetPassengerThreatLevel");

	AME_VehiclePawn_SetPassengerThreatLevel_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.SetBossPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewPhaseNumber                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::SetBossPhase(int NewPhaseNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.SetBossPhase");

	AME_VehiclePawn_SetBossPhase_Params params;
	params.NewPhaseNumber = NewPhaseNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.SetAIPatrolPlotter
// (Native, Public, BlueprintCallable)
// Parameters:
// class ATwAIPatrolPlotter*      InPatrolPlotter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.SetAIPatrolPlotter");

	AME_VehiclePawn_SetAIPatrolPlotter_Params params;
	params.InPatrolPlotter = InPatrolPlotter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.RockBoat
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            NewRamVerticalIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RamForce                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RotationOfRam                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ForceNormal                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::RockBoat(int NewRamVerticalIndex, float RamForce, float RotationOfRam, const struct FVector& ForceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.RockBoat");

	AME_VehiclePawn_RockBoat_Params params;
	params.NewRamVerticalIndex = NewRamVerticalIndex;
	params.RamForce = RamForce;
	params.RotationOfRam = RotationOfRam;
	params.ForceNormal = ForceNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.RammedByAnimal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AME_PlayerSharkCharacter* RammingAnimal                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RamForce                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::RammedByAnimal(class AME_PlayerSharkCharacter* RammingAnimal, float RamForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.RammedByAnimal");

	AME_VehiclePawn_RammedByAnimal_Params params;
	params.RammingAnimal = RammingAnimal;
	params.RamForce = RamForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.OnVehicleEmptied
// (Event, Public, BlueprintEvent)
void AME_VehiclePawn::OnVehicleEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnVehicleEmptied");

	AME_VehiclePawn_OnVehicleEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnSink
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             SinkInstigator                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnSink(class AController* SinkInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnSink");

	AME_VehiclePawn_OnSink_Params params;
	params.SinkInstigator = SinkInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnPhysicsVolumeChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnPhysicsVolumeChanged");

	AME_VehiclePawn_OnPhysicsVolumeChanged_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnMeshComponentHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     SelfActor                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherPrimitive                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnMeshComponentHit(class UPrimitiveComponent* SelfActor, class AActor* OtherActor, class UPrimitiveComponent* OtherPrimitive, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnMeshComponentHit");

	AME_VehiclePawn_OnMeshComponentHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.OtherPrimitive = OtherPrimitive;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnKilledBySlamAttack
// (Final, Native, Public)
// Parameters:
// class AME_PlayerSharkCharacter* PlayerShark                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnKilledBySlamAttack(class AME_PlayerSharkCharacter* PlayerShark)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnKilledBySlamAttack");

	AME_VehiclePawn_OnKilledBySlamAttack_Params params;
	params.PlayerShark = PlayerShark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnGameplayEffectRemoved
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FActiveGameplayEffect   RemovedGameplayEffect          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnGameplayEffectRemoved(const struct FActiveGameplayEffect& RemovedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnGameplayEffectRemoved");

	AME_VehiclePawn_OnGameplayEffectRemoved_Params params;
	params.RemovedGameplayEffect = RemovedGameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnGameplayEffectApplied
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec     SpecApplied                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnGameplayEffectApplied(class UAbilitySystemComponent* Source, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnGameplayEffectApplied");

	AME_VehiclePawn_OnGameplayEffectApplied_Params params;
	params.Source = Source;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnDamageParticleEffectFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnDamageParticleEffectFinished(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnDamageParticleEffectFinished");

	AME_VehiclePawn_OnDamageParticleEffectFinished_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.OnBreakApart
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             BreakInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::OnBreakApart(class AController* BreakInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.OnBreakApart");

	AME_VehiclePawn_OnBreakApart_Params params;
	params.BreakInstigator = BreakInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.K2_InitEntity
// (Event, Public, BlueprintEvent)
void AME_VehiclePawn::K2_InitEntity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.K2_InitEntity");

	AME_VehiclePawn_K2_InitEntity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.IsBossVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::IsBossVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.IsBossVehicle");

	AME_VehiclePawn_IsBossVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.IsAbilitySystemComponentSetUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::IsAbilitySystemComponentSetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.IsAbilitySystemComponentSetUp");

	AME_VehiclePawn_IsAbilitySystemComponentSetUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.HasPilot
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::HasPilot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.HasPilot");

	AME_VehiclePawn_HasPilot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.HasAnyWeapons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::HasAnyWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.HasAnyWeapons");

	AME_VehiclePawn_HasAnyWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetRotationOfLocationAroundBoat
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 PointLocation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_VehiclePawn::GetRotationOfLocationAroundBoat(const struct FVector& PointLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetRotationOfLocationAroundBoat");

	AME_VehiclePawn_GetRotationOfLocationAroundBoat_Params params;
	params.PointLocation = PointLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetPassengerMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            PassengerIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* AME_VehiclePawn::GetPassengerMesh(int PassengerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetPassengerMesh");

	AME_VehiclePawn_GetPassengerMesh_Params params;
	params.PassengerIndex = PassengerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetMercunaObstacle
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_MercunaObstacleComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_MercunaObstacleComponent* AME_VehiclePawn::GetMercunaObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetMercunaObstacle");

	AME_VehiclePawn_GetMercunaObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetMercunaNavigation
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_MercunaNavigationComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_MercunaNavigationComponent* AME_VehiclePawn::GetMercunaNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetMercunaNavigation");

	AME_VehiclePawn_GetMercunaNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetHunterRank
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EHunterRank           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EHunterRank AME_VehiclePawn::GetHunterRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetHunterRank");

	AME_VehiclePawn_GetHunterRank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetAIPatrolPlotter
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATwAIPatrolPlotter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATwAIPatrolPlotter* AME_VehiclePawn::GetAIPatrolPlotter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetAIPatrolPlotter");

	AME_VehiclePawn_GetAIPatrolPlotter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.GetAbilitySystemComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_AbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AbilitySystemComponent* AME_VehiclePawn::GetAbilitySystemComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.GetAbilitySystemComponent");

	AME_VehiclePawn_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.FinishBreakApart
// (Final, Native, Public)
void AME_VehiclePawn::FinishBreakApart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.FinishBreakApart");

	AME_VehiclePawn_FinishBreakApart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.EnableBossPhaseTimer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::EnableBossPhaseTimer(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.EnableBossPhaseTimer");

	AME_VehiclePawn_EnableBossPhaseTimer_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.EjectPassenger
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PassengerIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             EjectInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_HumanCharacter*      EjectedPassenger               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EjectImpulse                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldRagdoll                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bJumpOff                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSpawnController               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEjectingAllPassengers         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::EjectPassenger(int PassengerIndex, class AController* EjectInstigator, class AME_HumanCharacter** EjectedPassenger, const struct FVector& EjectImpulse, bool bShouldRagdoll, bool bJumpOff, bool bSpawnController, bool bEjectingAllPassengers)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.EjectPassenger");

	AME_VehiclePawn_EjectPassenger_Params params;
	params.PassengerIndex = PassengerIndex;
	params.EjectInstigator = EjectInstigator;
	params.EjectImpulse = EjectImpulse;
	params.bShouldRagdoll = bShouldRagdoll;
	params.bJumpOff = bJumpOff;
	params.bSpawnController = bSpawnController;
	params.bEjectingAllPassengers = bEjectingAllPassengers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EjectedPassenger != nullptr)
		*EjectedPassenger = params.EjectedPassenger;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.EjectAllPassengers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             EjectInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::EjectAllPassengers(class AController* EjectInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.EjectAllPassengers");

	AME_VehiclePawn_EjectAllPassengers_Params params;
	params.EjectInstigator = EjectInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.BreakApart
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             BreakInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::BreakApart(class AController* BreakInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.BreakApart");

	AME_VehiclePawn_BreakApart_Params params;
	params.BreakInstigator = BreakInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_VehiclePawn.BossPhaseChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            NewPhaseNumber                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          PassengerRespawnDelay          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_VehiclePawn::BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.BossPhaseChanged");

	AME_VehiclePawn_BossPhaseChanged_Params params;
	params.NewPhaseNumber = NewPhaseNumber;
	params.PassengerRespawnDelay = PassengerRespawnDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_VehiclePawn.BoardPassenger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AME_HumanCharacter*      NewPassenger                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_VehiclePawn::BoardPassenger(class AME_HumanCharacter* NewPassenger)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_VehiclePawn.BoardPassenger");

	AME_VehiclePawn_BoardPassenger_Params params;
	params.NewPassenger = NewPassenger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BoatPawn.OnBossCinematicStarted
// (Event, Public, BlueprintEvent)
void AME_BoatPawn::OnBossCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BoatPawn.OnBossCinematicStarted");

	AME_BoatPawn_OnBossCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WorldLandmarkActor.SetDiscoveryState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewDiscoveryState              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_WorldLandmarkActor::SetDiscoveryState(TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewDiscoveryState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldLandmarkActor.SetDiscoveryState");

	AME_WorldLandmarkActor_SetDiscoveryState_Params params;
	params.NewDiscoveryState = NewDiscoveryState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WorldLandmarkActor.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)
void AME_WorldLandmarkActor::ReceivePostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldLandmarkActor.ReceivePostInitializeComponents");

	AME_WorldLandmarkActor_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WorldLandmarkActor.OnDiscoveryStateChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_WorldLandmarkActor::OnDiscoveryStateChanged(TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldLandmarkActor.OnDiscoveryStateChanged");

	AME_WorldLandmarkActor_OnDiscoveryStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BossBattleInfo.SetBattleState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EBossBattleState> NewBattleState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_BossBattleInfo::SetBattleState(TEnumAsByte<Maneater_EBossBattleState> NewBattleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossBattleInfo.SetBattleState");

	AME_BossBattleInfo_SetBattleState_Params params;
	params.NewBattleState = NewBattleState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BossBattleInfo.OnIntroCinematicEnd
// (Final, Native, Private)
void AME_BossBattleInfo::OnIntroCinematicEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossBattleInfo.OnIntroCinematicEnd");

	AME_BossBattleInfo_OnIntroCinematicEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BossBattleInfo.OnBountyChanged
// (Final, Native, Public)
// Parameters:
// unsigned char                  NewBountyLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  BountyChangeInstigator         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_BossBattleInfo::OnBountyChanged(unsigned char NewBountyLevel, class AActor* BountyChangeInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossBattleInfo.OnBountyChanged");

	AME_BossBattleInfo_OnBountyChanged_Params params;
	params.NewBountyLevel = NewBountyLevel;
	params.BountyChangeInstigator = BountyChangeInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BossBattleInfo.BossBattleEventInternal
// (Final, Native, Public)
// Parameters:
// class AME_AIController*        Boss                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EBossBattleEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_BossBattleInfo::BossBattleEventInternal(class AME_AIController* Boss, TEnumAsByte<Maneater_EBossBattleEvent> EventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossBattleInfo.BossBattleEventInternal");

	AME_BossBattleInfo_BossBattleEventInternal_Params params;
	params.Boss = Boss;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BossInterface.GetBossName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_BossInterface::GetBossName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossInterface.GetBossName");

	UME_BossInterface_GetBossName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BossInterface.GetBossHealthPct
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_BossInterface::GetBossHealthPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossInterface.GetBossHealthPct");

	UME_BossInterface_GetBossHealthPct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BossInterface.GetBossBattleInfo
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UME_BossInterface::GetBossBattleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BossInterface.GetBossBattleInfo");

	UME_BossInterface_GetBossBattleInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BountyManager.SetBountyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EBountyState          NewBountyState                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_BountyManager::SetBountyState(Maneater_EBountyState NewBountyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.SetBountyState");

	AME_BountyManager_SetBountyState_Params params;
	params.NewBountyState = NewBountyState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BountyManager.OnBossIntroFinished
// (Final, Native, Public, BlueprintCallable)
void AME_BountyManager::OnBossIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.OnBossIntroFinished");

	AME_BountyManager_OnBossIntroFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BountyManager.IsBountyActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_BountyManager::IsBountyActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.IsBountyActive");

	AME_BountyManager_IsBountyActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.IsBossActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_BountyManager::IsBossActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.IsBossActive");

	AME_BountyManager_IsBossActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetPendingBossVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_VehiclePawn*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_VehiclePawn* AME_BountyManager::GetPendingBossVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetPendingBossVehicle");

	AME_BountyManager_GetPendingBossVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetNumActiveDivers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_BountyManager::GetNumActiveDivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetNumActiveDivers");

	AME_BountyManager_GetNumActiveDivers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetMaxNumActiveDivers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_BountyManager::GetMaxNumActiveDivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetMaxNumActiveDivers");

	AME_BountyManager_GetMaxNumActiveDivers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetLastKillLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_BountyManager::GetLastKillLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetLastKillLocation");

	AME_BountyManager_GetLastKillLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetHunterControllers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AME_AIController*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AME_AIController*> AME_BountyManager::GetHunterControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetHunterControllers");

	AME_BountyManager_GetHunterControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetClosestBoatLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          out_DistanceSqr                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_BountyManager::GetClosestBoatLocation(const struct FVector& SourceLocation, float* out_DistanceSqr)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetClosestBoatLocation");

	AME_BountyManager_GetClosestBoatLocation_Params params;
	params.SourceLocation = SourceLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_DistanceSqr != nullptr)
		*out_DistanceSqr = params.out_DistanceSqr;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetBountyState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EBountyState          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EBountyState AME_BountyManager::GetBountyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetBountyState");

	AME_BountyManager_GetBountyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetBountyCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_BountyManager::GetBountyCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetBountyCenter");

	AME_BountyManager_GetBountyCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetBossVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_VehiclePawn*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_VehiclePawn* AME_BountyManager::GetBossVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetBossVehicle");

	AME_BountyManager_GetBossVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_BountyManager.GetActiveBossName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   BossFirstName                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FText                   BossLastName                   (Parm, OutParm, NativeAccessSpecifierPublic)
void AME_BountyManager::GetActiveBossName(struct FText* BossFirstName, struct FText* BossLastName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.GetActiveBossName");

	AME_BountyManager_GetActiveBossName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BossFirstName != nullptr)
		*BossFirstName = params.BossFirstName;
	if (BossLastName != nullptr)
		*BossLastName = params.BossLastName;

}


// Function Maneater.ME_BountyManager.DialogueCallback
// (Final, Native, Public)
// Parameters:
// AkAudio_EAkCallbackType        CallbackType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*         CallbackInfo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_BountyManager::DialogueCallback(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.DialogueCallback");

	AME_BountyManager_DialogueCallback_Params params;
	params.CallbackType = CallbackType;
	params.CallbackInfo = CallbackInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BountyManager.CleanUpAndDisable
// (Final, Native, Public, BlueprintCallable)
void AME_BountyManager::CleanUpAndDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BountyManager.CleanUpAndDisable");

	AME_BountyManager_CleanUpAndDisable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BuoyancyForceComponent.SetBasePrimitiveComp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_BuoyancyForceComponent::SetBasePrimitiveComp(class UPrimitiveComponent* PrimComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BuoyancyForceComponent.SetBasePrimitiveComp");

	UME_BuoyancyForceComponent_SetBasePrimitiveComp_Params params;
	params.PrimComp = PrimComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_BuoyancyForceComponent.GetBasePrimitiveComp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* UME_BuoyancyForceComponent::GetBasePrimitiveComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_BuoyancyForceComponent.GetBasePrimitiveComp");

	UME_BuoyancyForceComponent_GetBasePrimitiveComp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActionModeDependent           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CharacterAbilityHelper::TryActivateAbilityForTag(const struct FGameplayTag& GameplayTag, bool bActionModeDependent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForTag");

	UME_CharacterAbilityHelper_TryActivateAbilityForTag_Params params;
	params.GameplayTag = GameplayTag;
	params.bActionModeDependent = bActionModeDependent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CharacterAbilityHelper::TryActivateAbilityForHandle(const struct FGameplayAbilitySpecHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForHandle");

	UME_CharacterAbilityHelper_TryActivateAbilityForHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAbilityHelper.IsStumbled
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CharacterAbilityHelper::IsStumbled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.IsStumbled");

	UME_CharacterAbilityHelper_IsStumbled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAbilityHelper.GetAbilityIndexFromEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EME_CharacterAbility  AbilitySlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_CharacterAbilityHelper::GetAbilityIndexFromEnum(Maneater_EME_CharacterAbility AbilitySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.GetAbilityIndexFromEnum");

	UME_CharacterAbilityHelper_GetAbilityIndexFromEnum_Params params;
	params.AbilitySlot = AbilitySlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAbilityHelper.GetAbilityHandleFromEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EME_CharacterAbility  AbilitySlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayAbilitySpecHandle UME_CharacterAbilityHelper::GetAbilityHandleFromEnum(Maneater_EME_CharacterAbility AbilitySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.GetAbilityHandleFromEnum");

	UME_CharacterAbilityHelper_GetAbilityHandleFromEnum_Params params;
	params.AbilitySlot = AbilitySlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle Handle                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CharacterAbilityHelper::CancelAbilityForHandle(const struct FGameplayAbilitySpecHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForHandle");

	UME_CharacterAbilityHelper_CancelAbilityForHandle_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EME_CharacterAbility  CharacterAbilityEnum           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CharacterAbilityHelper::CancelAbilityForEnum(Maneater_EME_CharacterAbility CharacterAbilityEnum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForEnum");

	UME_CharacterAbilityHelper_CancelAbilityForEnum_Params params;
	params.CharacterAbilityEnum = CharacterAbilityEnum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterAbilityHelper.CanActivateAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CharacterAbilityHelper::CanActivateAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterAbilityHelper.CanActivateAbilities");

	UME_CharacterAbilityHelper_CanActivateAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.SetHealthToPercentage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CharacterFunctionLibrary::STATIC_SetHealthToPercentage(class AME_Character* TwChar, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.SetHealthToPercentage");

	UME_CharacterFunctionLibrary_SetHealthToPercentage_Params params;
	params.TwChar = TwChar;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CharacterFunctionLibrary.GetWalkMoveSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetWalkMoveSpeed(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetWalkMoveSpeed");

	UME_CharacterFunctionLibrary_GetWalkMoveSpeed_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetSwimMoveSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetSwimMoveSpeed(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetSwimMoveSpeed");

	UME_CharacterFunctionLibrary_GetSwimMoveSpeed_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetStaminaRegen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetStaminaRegen(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetStaminaRegen");

	UME_CharacterFunctionLibrary_GetStaminaRegen_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetStaminaMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetStaminaMax(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetStaminaMax");

	UME_CharacterFunctionLibrary_GetStaminaMax_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetStamina
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetStamina(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetStamina");

	UME_CharacterFunctionLibrary_GetStamina_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetSizeRatio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AME_Character*           Character1                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_Character*           Character2                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetSizeRatio(class AME_Character* Character1, class AME_Character* Character2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetSizeRatio");

	UME_CharacterFunctionLibrary_GetSizeRatio_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetSizeDifferential
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AME_Character*           Character1                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_Character*           Character2                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SizeDiffThresholdUp            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SizeDifferentialDown           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_ESizeDiff             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_ESizeDiff UME_CharacterFunctionLibrary::STATIC_GetSizeDifferential(class AME_Character* Character1, class AME_Character* Character2, float SizeDiffThresholdUp, float SizeDifferentialDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetSizeDifferential");

	UME_CharacterFunctionLibrary_GetSizeDifferential_Params params;
	params.Character1 = Character1;
	params.Character2 = Character2;
	params.SizeDiffThresholdUp = SizeDiffThresholdUp;
	params.SizeDifferentialDown = SizeDifferentialDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetSizeDelta
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetSizeDelta(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetSizeDelta");

	UME_CharacterFunctionLibrary_GetSizeDelta_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetSize
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetSize(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetSize");

	UME_CharacterFunctionLibrary_GetSize_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetMaxAcceleration
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetMaxAcceleration(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetMaxAcceleration");

	UME_CharacterFunctionLibrary_GetMaxAcceleration_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetHealthPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetHealthPercentage(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetHealthPercentage");

	UME_CharacterFunctionLibrary_GetHealthPercentage_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetHealthMax
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetHealthMax(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetHealthMax");

	UME_CharacterFunctionLibrary_GetHealthMax_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetHealth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_CharacterFunctionLibrary::STATIC_GetHealth(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetHealth");

	UME_CharacterFunctionLibrary_GetHealth_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetCharacterActionMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_Character*           TwChar                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_ECharacterActionMode> UME_CharacterFunctionLibrary::STATIC_GetCharacterActionMode(class AME_Character* TwChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetCharacterActionMode");

	UME_CharacterFunctionLibrary_GetCharacterActionMode_Params params;
	params.TwChar = TwChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CharacterFunctionLibrary.GetActorDamagableAttributeSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_AttributeSet*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AttributeSet* UME_CharacterFunctionLibrary::STATIC_GetActorDamagableAttributeSet(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CharacterFunctionLibrary.GetActorDamagableAttributeSet");

	UME_CharacterFunctionLibrary_GetActorDamagableAttributeSet_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CheatManager.ToggleCameraAttached
// (Final, Exec, Native, Protected)
void UME_CheatManager::ToggleCameraAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.ToggleCameraAttached");

	UME_CheatManager_ToggleCameraAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Debug_DumpAI
// (Final, Exec, Native, Public)
void UME_CheatManager::Debug_DumpAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Debug_DumpAI");

	UME_CheatManager_Debug_DumpAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Debug_DrawProgressBar
// (Final, Exec, Native, Static, Public)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ProgressReferenceActor         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ProgressPercent                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::STATIC_Debug_DrawProgressBar(class UWorld* World, class AActor* ProgressReferenceActor, float ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Debug_DrawProgressBar");

	UME_CheatManager_Debug_DrawProgressBar_Params params;
	params.World = World;
	params.ProgressReferenceActor = ProgressReferenceActor;
	params.ProgressPercent = ProgressPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_UnlockAchievement
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   AchievementName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_UnlockAchievement(const struct FName& AchievementName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_UnlockAchievement");

	UME_CheatManager_Cheat_UnlockAchievement_Params params;
	params.AchievementName = AchievementName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_TutorialSkipAhead
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_TutorialSkipAhead(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_TutorialSkipAhead");

	UME_CheatManager_Cheat_TutorialSkipAhead_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_TutorialNextStep
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_TutorialNextStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_TutorialNextStep");

	UME_CheatManager_Cheat_TutorialNextStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_TutorialAutoComplete
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_TutorialAutoComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_TutorialAutoComplete");

	UME_CheatManager_Cheat_TutorialAutoComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ToggleTODPause
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ToggleTODPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ToggleTODPause");

	UME_CheatManager_Cheat_ToggleTODPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ToggleKnifing
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ToggleKnifing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ToggleKnifing");

	UME_CheatManager_Cheat_ToggleKnifing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ToggleAI
// (Final, Exec, Native, Public)
// Parameters:
// Maneater_EThreeStateSwitch     bEnableAI                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_ToggleAI(Maneater_EThreeStateSwitch bEnableAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ToggleAI");

	UME_CheatManager_Cheat_ToggleAI_Params params;
	params.bEnableAI = bEnableAI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_Suicide
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_Suicide");

	UME_CheatManager_Cheat_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_StoryAdvanceTo
// (Final, Exec, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_StoryAdvanceTo(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_StoryAdvanceTo");

	UME_CheatManager_Cheat_StoryAdvanceTo_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SpawnAI
// (Final, Exec, Native, Protected)
// Parameters:
// struct FString                 AIName                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SpawnOffset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SpawnAI(const struct FString& AIName, float SpawnOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SpawnAI");

	UME_CheatManager_Cheat_SpawnAI_Params params;
	params.AIName = AIName;
	params.SpawnOffset = SpawnOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SlamDamageEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bTurnOn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SlamDamageEnabled(bool bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SlamDamageEnabled");

	UME_CheatManager_Cheat_SlamDamageEnabled_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ShowStoryCompleteWidget
// (Final, Exec, Native, Protected)
void UME_CheatManager::Cheat_ShowStoryCompleteWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ShowStoryCompleteWidget");

	UME_CheatManager_Cheat_ShowStoryCompleteWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetWalkMoveSpeed
// (Final, Exec, Native, Protected)
// Parameters:
// float                          NewWalkSpeed                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetWalkMoveSpeed(float NewWalkSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetWalkMoveSpeed");

	UME_CheatManager_Cheat_SetWalkMoveSpeed_Params params;
	params.NewWalkSpeed = NewWalkSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetTOD
// (Final, Exec, Native, Public)
// Parameters:
// float                          HourOfDay                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetTOD(float HourOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetTOD");

	UME_CheatManager_Cheat_SetTOD_Params params;
	params.HourOfDay = HourOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetSwimMoveSpeed
// (Final, Exec, Native, Protected)
// Parameters:
// float                          NewSwimSpeed                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetSwimMoveSpeed(float NewSwimSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetSwimMoveSpeed");

	UME_CheatManager_Cheat_SetSwimMoveSpeed_Params params;
	params.NewSwimSpeed = NewSwimSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetSharkMesh
// (Final, Exec, Native, Public)
// Parameters:
// int                            SharkMesh                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetSharkMesh(int SharkMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetSharkMesh");

	UME_CheatManager_Cheat_SetSharkMesh_Params params;
	params.SharkMesh = SharkMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetMaxAcceleration
// (Final, Exec, Native, Protected)
// Parameters:
// float                          NewMaxAcceleration             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetMaxAcceleration(float NewMaxAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetMaxAcceleration");

	UME_CheatManager_Cheat_SetMaxAcceleration_Params params;
	params.NewMaxAcceleration = NewMaxAcceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetLevel
// (Final, Exec, Native, Public)
// Parameters:
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetLevel");

	UME_CheatManager_Cheat_SetLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetKnifingZOffset
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetKnifingZOffset(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetKnifingZOffset");

	UME_CheatManager_Cheat_SetKnifingZOffset_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetEvolutionCharge
// (Final, Exec, Native, Public)
// Parameters:
// float                          ChargeAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetEvolutionCharge(float ChargeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetEvolutionCharge");

	UME_CheatManager_Cheat_SetEvolutionCharge_Params params;
	params.ChargeAmount = ChargeAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetCameraZOffset
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetCameraZOffset(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetCameraZOffset");

	UME_CheatManager_Cheat_SetCameraZOffset_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetCameraProbeSize
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetCameraProbeSize(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetCameraProbeSize");

	UME_CheatManager_Cheat_SetCameraProbeSize_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetCameraComplex
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bCollideComplex                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetCameraComplex(bool bCollideComplex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetCameraComplex");

	UME_CheatManager_Cheat_SetCameraComplex_Params params;
	params.bCollideComplex = bCollideComplex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetCameraArmLength
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetCameraArmLength(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetCameraArmLength");

	UME_CheatManager_Cheat_SetCameraArmLength_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_SetBossPhase
// (Final, Exec, Native, Public)
// Parameters:
// int                            NewPhaseNum                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_SetBossPhase(int NewPhaseNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_SetBossPhase");

	UME_CheatManager_Cheat_SetBossPhase_Params params;
	params.NewPhaseNum = NewPhaseNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ScareAI
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ScareAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ScareAI");

	UME_CheatManager_Cheat_ScareAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ResetSpeedCheats
// (Final, Exec, Native, Protected)
void UME_CheatManager::Cheat_ResetSpeedCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ResetSpeedCheats");

	UME_CheatManager_Cheat_ResetSpeedCheats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ResetObjective
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   ObjName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_ResetObjective(const struct FName& ObjName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ResetObjective");

	UME_CheatManager_Cheat_ResetObjective_Params params;
	params.ObjName = ObjName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ProgressObjective
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   ObjName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Increment                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_ProgressObjective(const struct FName& ObjName, int Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ProgressObjective");

	UME_CheatManager_Cheat_ProgressObjective_Params params;
	params.ObjName = ObjName;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_PlayStoryCinematic
// (Final, Exec, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_PlayStoryCinematic(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_PlayStoryCinematic");

	UME_CheatManager_Cheat_PlayStoryCinematic_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_PauseAndSetTOD
// (Final, Exec, Native, Public)
// Parameters:
// float                          HourOfDay                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_PauseAndSetTOD(float HourOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_PauseAndSetTOD");

	UME_CheatManager_Cheat_PauseAndSetTOD_Params params;
	params.HourOfDay = HourOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_OverrideBoatTurnSound
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_OverrideBoatTurnSound(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_OverrideBoatTurnSound");

	UME_CheatManager_Cheat_OverrideBoatTurnSound_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_OnePunch
// (Exec, Native, Public)
void UME_CheatManager::Cheat_OnePunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_OnePunch");

	UME_CheatManager_Cheat_OnePunch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteTickedObjectives
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ObjectivesCompleteTickedObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteTickedObjectives");

	UME_CheatManager_Cheat_ObjectivesCompleteTickedObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteTerrorizeObjectives
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ObjectivesCompleteTerrorizeObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteTerrorizeObjectives");

	UME_CheatManager_Cheat_ObjectivesCompleteTerrorizeObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompletePopControlObjectives
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ObjectivesCompletePopControlObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ObjectivesCompletePopControlObjectives");

	UME_CheatManager_Cheat_ObjectivesCompletePopControlObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteLandmarkObjectives
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ObjectivesCompleteLandmarkObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteLandmarkObjectives");

	UME_CheatManager_Cheat_ObjectivesCompleteLandmarkObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_NextBossPhase
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_NextBossPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_NextBossPhase");

	UME_CheatManager_Cheat_NextBossPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_LogSpawnEntityStates
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_LogSpawnEntityStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_LogSpawnEntityStates");

	UME_CheatManager_Cheat_LogSpawnEntityStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_LogObjectives
// (Final, Exec, Native, Public)
// Parameters:
// Maneater_EObjectiveType        Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EWorldRegion          Region                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_LogObjectives(Maneater_EObjectiveType Type, Maneater_EWorldRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_LogObjectives");

	UME_CheatManager_Cheat_LogObjectives_Params params;
	params.Type = Type;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_LogAIManagementStates
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_LogAIManagementStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_LogAIManagementStates");

	UME_CheatManager_Cheat_LogAIManagementStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_KillSchools
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_KillSchools()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_KillSchools");

	UME_CheatManager_Cheat_KillSchools_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_KillHumans
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_KillHumans()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_KillHumans");

	UME_CheatManager_Cheat_KillHumans_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_KillDivers
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_KillDivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_KillDivers");

	UME_CheatManager_Cheat_KillDivers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_KillBoats
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_KillBoats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_KillBoats");

	UME_CheatManager_Cheat_KillBoats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_KillAnimals
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_KillAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_KillAnimals");

	UME_CheatManager_Cheat_KillAnimals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_KillAll
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_KillAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_KillAll");

	UME_CheatManager_Cheat_KillAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_HideFromAI
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_HideFromAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_HideFromAI");

	UME_CheatManager_Cheat_HideFromAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_HandleLoadError
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_HandleLoadError()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_HandleLoadError");

	UME_CheatManager_Cheat_HandleLoadError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_Grow
// (Final, Exec, Native, Public)
// Parameters:
// int                            GrowthChange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_Grow(int GrowthChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_Grow");

	UME_CheatManager_Cheat_Grow_Params params;
	params.GrowthChange = GrowthChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_GrottosUnlock
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_GrottosUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_GrottosUnlock");

	UME_CheatManager_Cheat_GrottosUnlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_GottaGoFast
// (Exec, Native, Public)
void UME_CheatManager::Cheat_GottaGoFast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_GottaGoFast");

	UME_CheatManager_Cheat_GottaGoFast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_GiveNutrients
// (Final, Exec, Native, Public)
// Parameters:
// int                            Nutrients                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_GiveNutrients(int Nutrients, TEnumAsByte<Maneater_ENutrientType> NutrientType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_GiveNutrients");

	UME_CheatManager_Cheat_GiveNutrients_Params params;
	params.Nutrients = Nutrients;
	params.NutrientType = NutrientType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_GiveEvolutions
// (Final, Exec, Native, Public)
// Parameters:
// int                            Rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_GiveEvolutions(int Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_GiveEvolutions");

	UME_CheatManager_Cheat_GiveEvolutions_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ForceSaveGame
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ForceSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ForceSaveGame");

	UME_CheatManager_Cheat_ForceSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ForceReleasePrey
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ForceReleasePrey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ForceReleasePrey");

	UME_CheatManager_Cheat_ForceReleasePrey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_FindAllObjectives
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_FindAllObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_FindAllObjectives");

	UME_CheatManager_Cheat_FindAllObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_FastTravel
// (Final, Exec, Native, Public)
// Parameters:
// int                            RegionIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CheatManager::Cheat_FastTravel(int RegionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_FastTravel");

	UME_CheatManager_Cheat_FastTravel_Params params;
	params.RegionIndex = RegionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CheatManager.Cheat_EnableTargetLasers
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bTurnOn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_EnableTargetLasers(bool bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_EnableTargetLasers");

	UME_CheatManager_Cheat_EnableTargetLasers_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_EnableAIDebuggingStuff
// (Final, Exec, Native, Static, Protected)
void UME_CheatManager::STATIC_Cheat_EnableAIDebuggingStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_EnableAIDebuggingStuff");

	UME_CheatManager_Cheat_EnableAIDebuggingStuff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_Eject
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_Eject()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_Eject");

	UME_CheatManager_Cheat_Eject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_Dismember
// (Final, Exec, Native, Public)
// Parameters:
// int                            GrabPointIdx                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_Dismember(int GrabPointIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_Dismember");

	UME_CheatManager_Cheat_Dismember_Params params;
	params.GrabPointIdx = GrabPointIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_DiscoverObjectives
// (Final, Exec, Native, Public)
// Parameters:
// Maneater_EObjectiveType        Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EWorldRegion          Region                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_DiscoverObjectives(Maneater_EObjectiveType Type, Maneater_EWorldRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_DiscoverObjectives");

	UME_CheatManager_Cheat_DiscoverObjectives_Params params;
	params.Type = Type;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_DiscoverAllObjectives
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_DiscoverAllObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_DiscoverAllObjectives");

	UME_CheatManager_Cheat_DiscoverAllObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_DisableTutorial
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_DisableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_DisableTutorial");

	UME_CheatManager_Cheat_DisableTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_DemiGod
// (Exec, Native, Public)
void UME_CheatManager::Cheat_DemiGod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_DemiGod");

	UME_CheatManager_Cheat_DemiGod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_DebugGTWaves
// (Final, Exec, Native, Public)
// Parameters:
// int                            GridCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_DebugGTWaves(int GridCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_DebugGTWaves");

	UME_CheatManager_Cheat_DebugGTWaves_Params params;
	params.GridCount = GridCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_CompleteRegionObjectives
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 RegionName                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_CompleteRegionObjectives(const struct FString& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_CompleteRegionObjectives");

	UME_CheatManager_Cheat_CompleteRegionObjectives_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_CompleteObjective
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   ObjName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_CompleteObjective(const struct FName& ObjName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_CompleteObjective");

	UME_CheatManager_Cheat_CompleteObjective_Params params;
	params.ObjName = ObjName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BreakBoats
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_BreakBoats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BreakBoats");

	UME_CheatManager_Cheat_BreakBoats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BountyTriggerBounty
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_BountyTriggerBounty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BountyTriggerBounty");

	UME_CheatManager_Cheat_BountyTriggerBounty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BountyTriggerBoss
// (Final, Exec, Native, Public)
// Parameters:
// int                            BossIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_BountyTriggerBoss(int BossIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BountyTriggerBoss");

	UME_CheatManager_Cheat_BountyTriggerBoss_Params params;
	params.BossIndex = BossIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BountySetInfamyLevel
// (Final, Exec, Native, Public)
// Parameters:
// int                            InfamyLevel                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_BountySetInfamyLevel(int InfamyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BountySetInfamyLevel");

	UME_CheatManager_Cheat_BountySetInfamyLevel_Params params;
	params.InfamyLevel = InfamyLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BountyEndBounty
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_BountyEndBounty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BountyEndBounty");

	UME_CheatManager_Cheat_BountyEndBounty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BountyEnableBountySystem
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_BountyEnableBountySystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BountyEnableBountySystem");

	UME_CheatManager_Cheat_BountyEnableBountySystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_BountyDisableBountySystem
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_BountyDisableBountySystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_BountyDisableBountySystem");

	UME_CheatManager_Cheat_BountyDisableBountySystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ApplyTag
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_ApplyTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ApplyTag");

	UME_CheatManager_Cheat_ApplyTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_ApplyNutrientMultiplier
// (Final, Exec, Native, Protected)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_ApplyNutrientMultiplier(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_ApplyNutrientMultiplier");

	UME_CheatManager_Cheat_ApplyNutrientMultiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AlertAI
// (Final, Exec, Native, Public)
// Parameters:
// float                          AlertRadius                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AlertAI(float AlertRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AlertAI");

	UME_CheatManager_Cheat_AlertAI_Params params;
	params.AlertRadius = AlertRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AIVision
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bTurnOn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AIVision(bool bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AIVision");

	UME_CheatManager_Cheat_AIVision_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AITargeting
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bTurnOn                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AITargeting(bool bTurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AITargeting");

	UME_CheatManager_Cheat_AITargeting_Params params;
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AdvanceStoryEvent
// (Final, Exec, Native, Protected)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AdvanceStoryEvent(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AdvanceStoryEvent");

	UME_CheatManager_Cheat_AdvanceStoryEvent_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AdjustWalkMoveSpeed
// (Final, Exec, Native, Protected)
// Parameters:
// float                          WalkMultiplier                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AdjustWalkMoveSpeed(float WalkMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AdjustWalkMoveSpeed");

	UME_CheatManager_Cheat_AdjustWalkMoveSpeed_Params params;
	params.WalkMultiplier = WalkMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AdjustSwimMoveSpeed
// (Final, Exec, Native, Protected)
// Parameters:
// float                          SwimMultiplier                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AdjustSwimMoveSpeed(float SwimMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AdjustSwimMoveSpeed");

	UME_CheatManager_Cheat_AdjustSwimMoveSpeed_Params params;
	params.SwimMultiplier = SwimMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AdjustMaxAcceleration
// (Final, Exec, Native, Protected)
// Parameters:
// float                          MaxAccelerationMultiplier      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::Cheat_AdjustMaxAcceleration(float MaxAccelerationMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AdjustMaxAcceleration");

	UME_CheatManager_Cheat_AdjustMaxAcceleration_Params params;
	params.MaxAccelerationMultiplier = MaxAccelerationMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.Cheat_AbandonVehicle
// (Final, Exec, Native, Public)
void UME_CheatManager::Cheat_AbandonVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.Cheat_AbandonVehicle");

	UME_CheatManager_Cheat_AbandonVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CheatManager.AudioTrigger
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Event                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ForceMode                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_CheatManager::AudioTrigger(const struct FString& Event, int ForceMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CheatManager.AudioTrigger");

	UME_CheatManager_AudioTrigger_Params params;
	params.Event = Event;
	params.ForceMode = ForceMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CombatManager.IsInCombat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_CombatManager::IsInCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CombatManager.IsInCombat");

	UME_CombatManager_IsInCombat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.MEControlSchemes.GetControlSchemes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FText> UMEControlSchemes::GetControlSchemes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEControlSchemes.GetControlSchemes");

	UMEControlSchemes_GetControlSchemes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.MEControlSchemes.GetControlSchemeDefault
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMEControlSchemes*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMEControlSchemes* UMEControlSchemes::STATIC_GetControlSchemeDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEControlSchemes.GetControlSchemeDefault");

	UMEControlSchemes_GetControlSchemeDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.MEControlSchemes.GetControlSchemeAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMEControlScheme        ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FMEControlScheme UMEControlSchemes::GetControlSchemeAtIndex(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEControlSchemes.GetControlSchemeAtIndex");

	UMEControlSchemes_GetControlSchemeAtIndex_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.MEControlSchemes.GetAxisForScheme
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMEControlScheme        Scheme                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAxisBindingSaveData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FAxisBindingSaveData> UMEControlSchemes::GetAxisForScheme(const struct FMEControlScheme& Scheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEControlSchemes.GetAxisForScheme");

	UMEControlSchemes_GetAxisForScheme_Params params;
	params.Scheme = Scheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.MEControlSchemes.GetActionsForScheme
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMEControlScheme        Scheme                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FActionBindingSaveData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FActionBindingSaveData> UMEControlSchemes::GetActionsForScheme(const struct FMEControlScheme& Scheme)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEControlSchemes.GetActionsForScheme");

	UMEControlSchemes_GetActionsForScheme_Params params;
	params.Scheme = Scheme;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.MEControlSchemes.ApplyControlScheme
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEControlSchemes::ApplyControlScheme(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEControlSchemes.ApplyControlScheme");

	UMEControlSchemes_ApplyControlScheme_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CreatureSchoolPawn.SetAIPatrolPlotter
// (Native, Public, BlueprintCallable)
// Parameters:
// class ATwAIPatrolPlotter*      InPatrolPlotter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_CreatureSchoolPawn::SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CreatureSchoolPawn.SetAIPatrolPlotter");

	AME_CreatureSchoolPawn_SetAIPatrolPlotter_Params params;
	params.InPatrolPlotter = InPatrolPlotter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CreatureSchoolPawn.OnGameplayEffectRemoved
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FActiveGameplayEffect   RemovedGameplayEffect          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AME_CreatureSchoolPawn::OnGameplayEffectRemoved(const struct FActiveGameplayEffect& RemovedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CreatureSchoolPawn.OnGameplayEffectRemoved");

	AME_CreatureSchoolPawn_OnGameplayEffectRemoved_Params params;
	params.RemovedGameplayEffect = RemovedGameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_CreatureSchoolPawn.IsAbilitySystemComponentSetUp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_CreatureSchoolPawn::IsAbilitySystemComponentSetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CreatureSchoolPawn.IsAbilitySystemComponentSetUp");

	AME_CreatureSchoolPawn_IsAbilitySystemComponentSetUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CreatureSchoolPawn.GetAIPatrolPlotter
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ATwAIPatrolPlotter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATwAIPatrolPlotter* AME_CreatureSchoolPawn::GetAIPatrolPlotter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CreatureSchoolPawn.GetAIPatrolPlotter");

	AME_CreatureSchoolPawn_GetAIPatrolPlotter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_CreatureSchoolPawn.GetAbilitySystemComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_AbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AbilitySystemComponent* AME_CreatureSchoolPawn::GetAbilitySystemComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_CreatureSchoolPawn.GetAbilitySystemComponent");

	AME_CreatureSchoolPawn_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DestructibleActor.UpdateOctree
// (Final, Native, Protected)
// Parameters:
// bool                           bAffectsNavigation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_DestructibleActor::UpdateOctree(bool bAffectsNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.UpdateOctree");

	AME_DestructibleActor_UpdateOctree_Params params;
	params.bAffectsNavigation = bAffectsNavigation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DestructibleActor.PostRenderForBP
// (Event, Public, BlueprintEvent)
void AME_DestructibleActor::PostRenderForBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.PostRenderForBP");

	AME_DestructibleActor_PostRenderForBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DestructibleActor.PlayerDamagedBreakable
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_DestructibleActor::PlayerDamagedBreakable(float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.PlayerDamagedBreakable");

	AME_DestructibleActor_PlayerDamagedBreakable_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DestructibleActor.OnComponentFractured
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitDirection                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_DestructibleActor::OnComponentFractured(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.OnComponentFractured");

	AME_DestructibleActor_OnComponentFractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DestructibleActor.IsDestroyed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_DestructibleActor::IsDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.IsDestroyed");

	AME_DestructibleActor_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DestructibleActor.GetCurrentHealth_Implementation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_DestructibleActor::GetCurrentHealth_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.GetCurrentHealth_Implementation");

	AME_DestructibleActor_GetCurrentHealth_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DestructibleActor.CanDamageBreakable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_DestructibleActor::CanDamageBreakable(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DestructibleActor.CanDamageBreakable");

	AME_DestructibleActor_CanDamageBreakable_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueFunctionLibrary.TwPlaySubtitledAkEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*              SearchTable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_DialogueFunctionLibrary::STATIC_TwPlaySubtitledAkEvent(struct FString* EventName, class AActor* Actor, class UDataTable* SearchTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueFunctionLibrary.TwPlaySubtitledAkEvent");

	UME_DialogueFunctionLibrary_TwPlaySubtitledAkEvent_Params params;
	params.Actor = Actor;
	params.SearchTable = SearchTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EventName != nullptr)
		*EventName = params.EventName;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueFunctionLibrary.TwPlayDialogueAkEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              SearchTable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_DialogueFunctionLibrary::STATIC_TwPlayDialogueAkEvent(class UDataTable* SearchTable, class UAkAudioEvent* AkEvent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueFunctionLibrary.TwPlayDialogueAkEvent");

	UME_DialogueFunctionLibrary_TwPlayDialogueAkEvent_Params params;
	params.SearchTable = SearchTable;
	params.AkEvent = AkEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     DialogueToPlay                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                  WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_DialogueFunctionLibrary::STATIC_PlayDialogueFile(const struct FDataTableRowHandle& DialogueToPlay, class AActor* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueFile");

	UME_DialogueFunctionLibrary_PlayDialogueFile_Params params;
	params.DialogueToPlay = DialogueToPlay;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueAkEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     DialogueToPlay                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_DialogueFunctionLibrary::STATIC_PlayDialogueAkEvent(const struct FDataTableRowHandle& DialogueToPlay, class UAkAudioEvent* AkEvent, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueAkEvent");

	UME_DialogueFunctionLibrary_PlayDialogueAkEvent_Params params;
	params.DialogueToPlay = DialogueToPlay;
	params.AkEvent = AkEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueSystem.ShowSubtitle
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   DialogueText                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TimeSeconds                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_DialogueSystem::ShowSubtitle(const struct FText& DialogueText, float Duration, float TimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.ShowSubtitle");

	UME_DialogueSystem_ShowSubtitle_Params params;
	params.DialogueText = DialogueText;
	params.Duration = Duration;
	params.TimeSeconds = TimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueSystem.SequencerDialogueCallback
// (Final, Native, Public)
// Parameters:
// AkAudio_EAkCallbackType        CallbackType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*         CallbackInfo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::SequencerDialogueCallback(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.SequencerDialogueCallback");

	UME_DialogueSystem_SequencerDialogueCallback_Params params;
	params.CallbackType = CallbackType;
	params.CallbackInfo = CallbackInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DialogueSystem.PostDynamicDialogue
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   DialogueEventName              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Speaker                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FString>         ArgumentValueNames             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::PostDynamicDialogue(struct FName* DialogueEventName, class AActor* Speaker, TArray<struct FString>* ArgumentValueNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.PostDynamicDialogue");

	UME_DialogueSystem_PostDynamicDialogue_Params params;
	params.Speaker = Speaker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogueEventName != nullptr)
		*DialogueEventName = params.DialogueEventName;
	if (ArgumentValueNames != nullptr)
		*ArgumentValueNames = params.ArgumentValueNames;

}


// Function Maneater.ME_DialogueSystem.PlayExternalDialogueFile
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Filename                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ShowSubtitle                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   DialogueText                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UME_DialogueSystem::PlayExternalDialogueFile(struct FName* EventName, struct FString* Filename, class AActor* WorldContext, bool ShowSubtitle, const struct FText& DialogueText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.PlayExternalDialogueFile");

	UME_DialogueSystem_PlayExternalDialogueFile_Params params;
	params.WorldContext = WorldContext;
	params.ShowSubtitle = ShowSubtitle;
	params.DialogueText = DialogueText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EventName != nullptr)
		*EventName = params.EventName;
	if (Filename != nullptr)
		*Filename = params.Filename;

}


// Function Maneater.ME_DialogueSystem.InitDialogueSystem
// (Final, Native, Public)
// Parameters:
// class AME_GameMode*            OwningGameMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::InitDialogueSystem(class AME_GameMode* OwningGameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.InitDialogueSystem");

	UME_DialogueSystem_InitDialogueSystem_Params params;
	params.OwningGameMode = OwningGameMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DialogueSystem.GetOnDialogueSystemCallbackDelegate
// (Final, Native, Public)
// Parameters:
// struct FScriptMulticastDelegate ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NativeAccessSpecifierPublic)
struct FScriptMulticastDelegate UME_DialogueSystem::GetOnDialogueSystemCallbackDelegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.GetOnDialogueSystemCallbackDelegate");

	UME_DialogueSystem_GetOnDialogueSystemCallbackDelegate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_DialogueSystem.EndStateCooldown
// (Final, Native, Public)
// Parameters:
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::EndStateCooldown(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.EndStateCooldown");

	UME_DialogueSystem_EndStateCooldown_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DialogueSystem.DynamicDialogueCallback
// (Final, Native, Public)
// Parameters:
// AkAudio_EAkCallbackType        CallbackType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*         CallbackInfo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::DynamicDialogueCallback(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.DynamicDialogueCallback");

	UME_DialogueSystem_DynamicDialogueCallback_Params params;
	params.CallbackType = CallbackType;
	params.CallbackInfo = CallbackInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DialogueSystem.DialogueCallback
// (Final, Native, Public)
// Parameters:
// AkAudio_EAkCallbackType        CallbackType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*         CallbackInfo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::DialogueCallback(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.DialogueCallback");

	UME_DialogueSystem_DialogueCallback_Params params;
	params.CallbackType = CallbackType;
	params.CallbackInfo = CallbackInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DialogueSystem.AddAudioDialogueMapping
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            AkPlayingId                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   DialogueText                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          TimeSeconds                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DialogueSystem::AddAudioDialogueMapping(int AkPlayingId, const struct FText& DialogueText, float TimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DialogueSystem.AddAudioDialogueMapping");

	UME_DialogueSystem_AddAudioDialogueMapping_Params params;
	params.AkPlayingId = AkPlayingId;
	params.DialogueText = DialogueText;
	params.TimeSeconds = TimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SignificanceHandlerInterface.HandleSignificanceChange
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSignificant                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SignificanceHandlerInterface::HandleSignificanceChange(bool bIsSignificant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SignificanceHandlerInterface.HandleSignificanceChange");

	UME_SignificanceHandlerInterface_HandleSignificanceChange_Params params;
	params.bIsSignificant = bIsSignificant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_DistanceSignificanceComponent.HandleSignificanceChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSignificant                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_DistanceSignificanceComponent::HandleSignificanceChange(bool bIsSignificant)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_DistanceSignificanceComponent.HandleSignificanceChange");

	UME_DistanceSignificanceComponent_HandleSignificanceChange_Params params;
	params.bIsSignificant = bIsSignificant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ExplosionActor.GetExplosionRadius
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_ExplosionActor::GetExplosionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ExplosionActor.GetExplosionRadius");

	AME_ExplosionActor_GetExplosionRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_FogOverrideVolume.ActorOverlapped
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_FogOverrideVolume::ActorOverlapped(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_FogOverrideVolume.ActorOverlapped");

	AME_FogOverrideVolume_ActorOverlapped_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_FogOverrideVolume.ActorEndOverlap
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_FogOverrideVolume::ActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_FogOverrideVolume.ActorEndOverlap");

	AME_FogOverrideVolume_ActorEndOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameInstance.UpdateFoliageShadowMaterialParametersCallback
// (Final, Native, Public)
void UME_GameInstance::UpdateFoliageShadowMaterialParametersCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.UpdateFoliageShadowMaterialParametersCallback");

	UME_GameInstance_UpdateFoliageShadowMaterialParametersCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameInstance.TriggerNarratorEventEx
// (Final, Native, Protected)
void UME_GameInstance::TriggerNarratorEventEx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.TriggerNarratorEventEx");

	UME_GameInstance_TriggerNarratorEventEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameInstance.TriggerNarratorEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameInstance::STATIC_TriggerNarratorEvent(const struct FName& Name, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.TriggerNarratorEvent");

	UME_GameInstance_TriggerNarratorEvent_Params params;
	params.Name = Name;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameInstance.StreamContentAtLocationForCinematic
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameInstance::StreamContentAtLocationForCinematic(const struct FVector& Location, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.StreamContentAtLocationForCinematic");

	UME_GameInstance_StreamContentAtLocationForCinematic_Params params;
	params.Location = Location;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameInstance.SetSelectedSaveSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LocalUserIdx                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameInstance::SetSelectedSaveSlot(int LocalUserIdx, int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.SetSelectedSaveSlot");

	UME_GameInstance_SetSelectedSaveSlot_Params params;
	params.LocalUserIdx = LocalUserIdx;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameInstance.GetSelectedSaveSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LocalUserIdx                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameInstance::GetSelectedSaveSlot(int LocalUserIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.GetSelectedSaveSlot");

	UME_GameInstance_GetSelectedSaveSlot_Params params;
	params.LocalUserIdx = LocalUserIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameInstance.FlushPendingSaveObjects
// (Final, Native, Public, BlueprintCallable)
void UME_GameInstance::FlushPendingSaveObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameInstance.FlushPendingSaveObjects");

	UME_GameInstance_FlushPendingSaveObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.SuppressNextAudioPause
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::STATIC_SuppressNextAudioPause(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.SuppressNextAudioPause");

	AME_GameMode_SuppressNextAudioPause_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.StartStoryCinematicSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   CinematicsDataTableRowName     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::StartStoryCinematicSequence(const struct FName& CinematicsDataTableRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.StartStoryCinematicSequence");

	AME_GameMode_StartStoryCinematicSequence_Params params;
	params.CinematicsDataTableRowName = CinematicsDataTableRowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.StartCinematic
// (Final, Native, Public)
void AME_GameMode::StartCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.StartCinematic");

	AME_GameMode_StartCinematic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.ShowLoadingScreen
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DistanceStreamLocation         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   RequiredLevelName              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::ShowLoadingScreen(const struct FVector& DistanceStreamLocation, const struct FName& RequiredLevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.ShowLoadingScreen");

	AME_GameMode_ShowLoadingScreen_Params params;
	params.DistanceStreamLocation = DistanceStreamLocation;
	params.RequiredLevelName = RequiredLevelName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.SetWaterPoisoned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPoisoned                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::SetWaterPoisoned(bool bPoisoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.SetWaterPoisoned");

	AME_GameMode_SetWaterPoisoned_Params params;
	params.bPoisoned = bPoisoned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.SetNoCameraFadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           SetTo                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::SetNoCameraFadeIn(bool SetTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.SetNoCameraFadeIn");

	AME_GameMode_SetNoCameraFadeIn_Params params;
	params.SetTo = SetTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.SetAutoReEnableControls
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           UseAutoReEnable                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::SetAutoReEnableControls(bool UseAutoReEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.SetAutoReEnableControls");

	AME_GameMode_SetAutoReEnableControls_Params params;
	params.UseAutoReEnable = UseAutoReEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.SetAutoFadeIn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           UseAutoFadeIn                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            CameraStartingColor            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          BlendDelay                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::SetAutoFadeIn(bool UseAutoFadeIn, const struct FLinearColor& CameraStartingColor, float BlendTime, float BlendDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.SetAutoFadeIn");

	AME_GameMode_SetAutoFadeIn_Params params;
	params.UseAutoFadeIn = UseAutoFadeIn;
	params.CameraStartingColor = CameraStartingColor;
	params.BlendTime = BlendTime;
	params.BlendDelay = BlendDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.RespawnPlayer
// (Final, Native, Public, BlueprintCallable)
void AME_GameMode::RespawnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.RespawnPlayer");

	AME_GameMode_RespawnPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.RequestTravelToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AME_PlayerSharkCharacter* PlayerSharkCharacter           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSkipLoadScreen                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSetCameraRotation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::RequestTravelToLocation(const struct FVector& Location, const struct FRotator& Rotation, class AME_PlayerSharkCharacter* PlayerSharkCharacter, bool bSkipLoadScreen, bool bSetCameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.RequestTravelToLocation");

	AME_GameMode_RequestTravelToLocation_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.PlayerSharkCharacter = PlayerSharkCharacter;
	params.bSkipLoadScreen = bSkipLoadScreen;
	params.bSetCameraRotation = bSetCameraRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.RemoveLoadingScreen
// (Final, Native, Public, BlueprintCallable)
void AME_GameMode::RemoveLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.RemoveLoadingScreen");

	AME_GameMode_RemoveLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.PlayCinematicPauseAllEvent
// (Final, Native, Public)
void AME_GameMode::PlayCinematicPauseAllEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.PlayCinematicPauseAllEvent");

	AME_GameMode_PlayCinematicPauseAllEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.PauseSunPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPause                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::PauseSunPosition(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.PauseSunPosition");

	AME_GameMode_PauseSunPosition_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.OnHuntCommanderEjected
// (Final, Native, Public)
// Parameters:
// class AController*             EjectInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_HumanCharacter*      Pilot                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::OnHuntCommanderEjected(class AController* EjectInstigator, class AME_HumanCharacter* Pilot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.OnHuntCommanderEjected");

	AME_GameMode_OnHuntCommanderEjected_Params params;
	params.EjectInstigator = EjectInstigator;
	params.Pilot = Pilot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.OnCinematicCameraCut
// (Final, Native, Public)
// Parameters:
// class UCameraComponent*        CameraComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::OnCinematicCameraCut(class UCameraComponent* CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.OnCinematicCameraCut");

	AME_GameMode_OnCinematicCameraCut_Params params;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_GameMode::OnActorSpawned(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.OnActorSpawned");

	AME_GameMode_OnActorSpawned_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.LoadCinematic
// (Final, Native, Public)
void AME_GameMode::LoadCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.LoadCinematic");

	AME_GameMode_LoadCinematic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.IsWaterPoisoned
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_GameMode::IsWaterPoisoned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.IsWaterPoisoned");

	AME_GameMode_IsWaterPoisoned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetTutorialManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_TutorialManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_TutorialManager* AME_GameMode::GetTutorialManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetTutorialManager");

	AME_GameMode_GetTutorialManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetSonarManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_SonarManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_SonarManager* AME_GameMode::GetSonarManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetSonarManager");

	AME_GameMode_GetSonarManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetRegionStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FWorldRegionState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FWorldRegionState> AME_GameMode::GetRegionStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetRegionStates");

	AME_GameMode_GetRegionStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetRegionState
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            RegionIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWorldRegionState       State                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_GameMode::GetRegionState(int RegionIndex, struct FWorldRegionState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetRegionState");

	AME_GameMode_GetRegionState_Params params;
	params.RegionIndex = RegionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetRegionPopulation
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            RegionIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_GameMode::GetRegionPopulation(int RegionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetRegionPopulation");

	AME_GameMode_GetRegionPopulation_Params params;
	params.RegionIndex = RegionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetPlayerObjectiveManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_PlayerObjectiveManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_PlayerObjectiveManager* AME_GameMode::GetPlayerObjectiveManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetPlayerObjectiveManager");

	AME_GameMode_GetPlayerObjectiveManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetDialogueSystem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_DialogueSystem*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_DialogueSystem* AME_GameMode::GetDialogueSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetDialogueSystem");

	AME_GameMode_GetDialogueSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetBountyManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AME_BountyManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_BountyManager* AME_GameMode::GetBountyManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetBountyManager");

	AME_GameMode_GetBountyManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetAssetLoader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_AssetLoader*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_AssetLoader* AME_GameMode::GetAssetLoader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetAssetLoader");

	AME_GameMode_GetAssetLoader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.GetAIDirector
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_AIDirector*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_AIDirector* AME_GameMode::GetAIDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.GetAIDirector");

	AME_GameMode_GetAIDirector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameMode.EnableCinematicMode
// (Final, Native, Public, BlueprintCallable)
void AME_GameMode::EnableCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.EnableCinematicMode");

	AME_GameMode_EnableCinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.DisableCinematicMode
// (Final, Native, Public, BlueprintCallable)
void AME_GameMode::DisableCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.DisableCinematicMode");

	AME_GameMode_DisableCinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.CleanupCinematic
// (Final, Native, Public)
void AME_GameMode::CleanupCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.CleanupCinematic");

	AME_GameMode_CleanupCinematic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.CinematicLoaded
// (Final, Native, Public)
void AME_GameMode::CinematicLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.CinematicLoaded");

	AME_GameMode_CinematicLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.CinematicFinishedStartPlaying
// (Final, Native, Public, BlueprintCallable)
void AME_GameMode::CinematicFinishedStartPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.CinematicFinishedStartPlaying");

	AME_GameMode_CinematicFinishedStartPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameMode.CinematicFinished
// (Final, Native, Public)
void AME_GameMode::CinematicFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameMode.CinematicFinished");

	AME_GameMode_CinematicFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_Montage.MontageStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_Montage::MontageStarted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_Montage.MontageStarted");

	UME_GameplayAbility_Montage_MontageStarted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_Montage.MontageEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_Montage::MontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_Montage.MontageEnded");

	UME_GameplayAbility_Montage_MontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_MontageSequence.MontageStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_MontageSequence::MontageStarted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_MontageSequence.MontageStarted");

	UME_GameplayAbility_MontageSequence_MontageStarted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_MontageSequence.MontageEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_MontageSequence::MontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_MontageSequence.MontageEnded");

	UME_GameplayAbility_MontageSequence_MontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_MontageSequence.GetMontageInstanceByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMontageInstance*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMontageInstance* UME_GameplayAbility_MontageSequence::GetMontageInstanceByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_MontageSequence.GetMontageInstanceByIndex");

	UME_GameplayAbility_MontageSequence_GetMontageInstanceByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMontageInstance*        out_MontageInstance            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameplayAbility_MontageSequence::GetCurrentMontageInstance(class UMontageInstance** out_MontageInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageInstance");

	UME_GameplayAbility_MontageSequence_GetCurrentMontageInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (out_MontageInstance != nullptr)
		*out_MontageInstance = params.out_MontageInstance;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameplayAbility_MontageSequence::GetCurrentMontageIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageIndex");

	UME_GameplayAbility_MontageSequence_GetCurrentMontageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageStarted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_WildlifeDirectionalLunge::MontageStarted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageStarted");

	UME_GameplayAbility_WildlifeDirectionalLunge_MontageStarted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_WildlifeDirectionalLunge::MontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageEnded");

	UME_GameplayAbility_WildlifeDirectionalLunge_MontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayAbility_WildlifeLunge.CheckOwnerPosition
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                          DropFocusRange                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayAbility_WildlifeLunge::CheckOwnerPosition(const struct FGameplayAbilityActorInfo& ActorInfo, float DropFocusRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayAbility_WildlifeLunge.CheckOwnerPosition");

	UME_GameplayAbility_WildlifeLunge_CheckOwnerPosition_Params params;
	params.ActorInfo = ActorInfo;
	params.DropFocusRange = DropFocusRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.ToggleWorldRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnableRendering               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_ToggleWorldRendering(class UObject* Context, bool bEnableRendering)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ToggleWorldRendering");

	UME_GameplayStatics_ToggleWorldRendering_Params params;
	params.Context = Context;
	params.bEnableRendering = bEnableRendering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.TestPreyAttachment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  PreyActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_TestPreyAttachment(class AME_AnimalCharacter* GrabbingAnimal, class AActor* PreyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.TestPreyAttachment");

	UME_GameplayStatics_TestPreyAttachment_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.PreyActor = PreyActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.SpawnAIAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  SpawnClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                SpawnRotation                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bPersistent                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_ESpawnActorCollisionHandlingMethod PawnCollision                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_AIController* UME_GameplayStatics::STATIC_SpawnAIAtLocation(class AActor* WorldContextActor, class UClass* SpawnClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, bool bPersistent, Engine_ESpawnActorCollisionHandlingMethod PawnCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.SpawnAIAtLocation");

	UME_GameplayStatics_SpawnAIAtLocation_Params params;
	params.WorldContextActor = WorldContextActor;
	params.SpawnClass = SpawnClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.bPersistent = bPersistent;
	params.PawnCollision = PawnCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.SpawnAIAtActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                  SpawnClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseActorRotation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPersistent                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Engine_ESpawnActorCollisionHandlingMethod PawnCollision                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_AIController* UME_GameplayStatics::STATIC_SpawnAIAtActor(class AActor* WorldContextActor, class UClass* SpawnClass, class AActor* Actor, bool bUseActorRotation, bool bPersistent, Engine_ESpawnActorCollisionHandlingMethod PawnCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.SpawnAIAtActor");

	UME_GameplayStatics_SpawnAIAtActor_Params params;
	params.WorldContextActor = WorldContextActor;
	params.SpawnClass = SpawnClass;
	params.Actor = Actor;
	params.bUseActorRotation = bUseActorRotation;
	params.bPersistent = bPersistent;
	params.PawnCollision = PawnCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.ShowTutorialPopup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   TutorialLabel                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_ShowTutorialPopup(const struct FName& TutorialLabel, class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ShowTutorialPopup");

	UME_GameplayStatics_ShowTutorialPopup_Params params;
	params.TutorialLabel = TutorialLabel;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.SetTimeOfDaySpeedScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          NewScale                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ContextActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_SetTimeOfDaySpeedScale(float NewScale, class AActor* ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.SetTimeOfDaySpeedScale");

	UME_GameplayStatics_SetTimeOfDaySpeedScale_Params params;
	params.NewScale = NewScale;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.SetTimeOfDay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          TimeOfDay                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ContextActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_SetTimeOfDay(float TimeOfDay, class AActor* ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.SetTimeOfDay");

	UME_GameplayStatics_SetTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.SetKeyForAxis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    Binding                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AxisScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGamepad                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_SetKeyForAxis(const struct FName& ActionName, const struct FKey& Binding, float AxisScale, bool bGamepad, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.SetKeyForAxis");

	UME_GameplayStatics_SetKeyForAxis_Params params;
	params.ActionName = ActionName;
	params.Binding = Binding;
	params.AxisScale = AxisScale;
	params.bGamepad = bGamepad;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.SetKeyForAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    Binding                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            BindIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Rebuild                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_SetKeyForAction(const struct FName& ActionName, const struct FKey& Binding, int BindIndex, class UObject* Context, bool Rebuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.SetKeyForAction");

	UME_GameplayStatics_SetKeyForAction_Params params;
	params.ActionName = ActionName;
	params.Binding = Binding;
	params.BindIndex = BindIndex;
	params.Context = Context;
	params.Rebuild = Rebuild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.ResolveAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UME_GameplayStatics::STATIC_ResolveAsset(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ResolveAsset");

	UME_GameplayStatics_ResolveAsset_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.ReadPixelsFromRenderTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  RT                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>          OutPixelBuffer                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_ReadPixelsFromRenderTarget(class UTextureRenderTarget2D* RT, TArray<struct FColor>* OutPixelBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ReadPixelsFromRenderTarget");

	UME_GameplayStatics_ReadPixelsFromRenderTarget_Params params;
	params.RT = RT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPixelBuffer != nullptr)
		*OutPixelBuffer = params.OutPixelBuffer;

}


// Function Maneater.ME_GameplayStatics.ProjectPointToSurface
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ProjectionPoint                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_ProjectPointToSurface(class UObject* Context, struct FVector* ProjectionPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ProjectPointToSurface");

	UME_GameplayStatics_ProjectPointToSurface_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProjectionPoint != nullptr)
		*ProjectionPoint = params.ProjectionPoint;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.ProcessImpactResponse
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPhysicalMaterial*       InstigatorPM                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*         Instigator                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     Receiver                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAttachToReceiver              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   AttachPoint                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EPhysicalSurface> ReceivingSurfaceOverride       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ForceWorldRotation             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImpactResponseInstance ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FImpactResponseInstance UME_GameplayStatics::STATIC_ProcessImpactResponse(class UPhysicalMaterial* InstigatorPM, class USceneComponent* Instigator, class UPrimitiveComponent* Receiver, const struct FVector& HitLocation, const struct FVector& HitNormal, bool bAttachToReceiver, const struct FName& AttachPoint, TEnumAsByte<Engine_EPhysicalSurface> ReceivingSurfaceOverride, bool ForceWorldRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ProcessImpactResponse");

	UME_GameplayStatics_ProcessImpactResponse_Params params;
	params.InstigatorPM = InstigatorPM;
	params.Instigator = Instigator;
	params.Receiver = Receiver;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.bAttachToReceiver = bAttachToReceiver;
	params.AttachPoint = AttachPoint;
	params.ReceivingSurfaceOverride = ReceivingSurfaceOverride;
	params.ForceWorldRotation = ForceWorldRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.KeyIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    InKey                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_KeyIsValid(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.KeyIsValid");

	UME_GameplayStatics_KeyIsValid_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsWaypointed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsWaypointed(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsWaypointed");

	UME_GameplayStatics_IsWaypointed_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsWatchingCinematic
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsWatchingCinematic(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsWatchingCinematic");

	UME_GameplayStatics_IsWatchingCinematic_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlayingPrologue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlayingPrologue(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlayingPrologue");

	UME_GameplayStatics_IsPlayingPrologue_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlayerOnLand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlayerOnLand(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlayerOnLand");

	UME_GameplayStatics_IsPlayerOnLand_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlayerLookingAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TestLocation                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TestAngle                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlayerLookingAtLocation(class UObject* WorldContextObject, const struct FVector& TestLocation, float TestAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlayerLookingAtLocation");

	UME_GameplayStatics_IsPlayerLookingAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TestLocation = TestLocation;
	params.TestAngle = TestAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlayerInRangeOfLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TestLocation                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RangeVal                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlayerInRangeOfLocation(class UObject* WorldContextObject, const struct FVector& TestLocation, float RangeVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlayerInRangeOfLocation");

	UME_GameplayStatics_IsPlayerInRangeOfLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TestLocation = TestLocation;
	params.RangeVal = RangeVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlayerInGrotto
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlayerInGrotto(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlayerInGrotto");

	UME_GameplayStatics_IsPlayerInGrotto_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlayerCameraUnderwater
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlayerCameraUnderwater(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlayerCameraUnderwater");

	UME_GameplayStatics_IsPlayerCameraUnderwater_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlatformWinGDK
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlatformWinGDK()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlatformWinGDK");

	UME_GameplayStatics_IsPlatformWinGDK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsPlatformWindows
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsPlatformWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsPlatformWindows");

	UME_GameplayStatics_IsPlatformWindows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IsInWorldMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameplayStatics::STATIC_IsInWorldMap(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IsInWorldMap");

	UME_GameplayStatics_IsInWorldMap_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.IntPointToFVector2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FIntPoint>       Input                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>       Output                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_IntPointToFVector2D(TArray<struct FIntPoint> Input, TArray<struct FVector2D>* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.IntPointToFVector2D");

	UME_GameplayStatics_IntPointToFVector2D_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function Maneater.ME_GameplayStatics.GetWorldUnitScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetWorldUnitScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldUnitScale");

	UME_GameplayStatics_GetWorldUnitScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetWorldSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextActor              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_WorldSettings*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_WorldSettings* UME_GameplayStatics::STATIC_GetWorldSettings(class AActor* WorldContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldSettings");

	UME_GameplayStatics_GetWorldSettings_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetWorldRegionStates
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWorldRegionState> RegionStates                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetWorldRegionStates(class UObject* WorldContextObject, TArray<struct FWorldRegionState>* RegionStates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldRegionStates");

	UME_GameplayStatics_GetWorldRegionStates_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionStates != nullptr)
		*RegionStates = params.RegionStates;

}


// Function Maneater.ME_GameplayStatics.GetWorldRegionStateFromObjective
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerObjective*     Obj                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWorldRegionState       RegionState                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetWorldRegionStateFromObjective(class UObject* WorldContextObject, class UME_PlayerObjective* Obj, struct FWorldRegionState* RegionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldRegionStateFromObjective");

	UME_GameplayStatics_GetWorldRegionStateFromObjective_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionState != nullptr)
		*RegionState = params.RegionState;

}


// Function Maneater.ME_GameplayStatics.GetWorldRegionState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InRegionIndex                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWorldRegionState       RegionState                    (Parm, OutParm, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetWorldRegionState(class UObject* WorldContextObject, int InRegionIndex, struct FWorldRegionState* RegionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldRegionState");

	UME_GameplayStatics_GetWorldRegionState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InRegionIndex = InRegionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionState != nullptr)
		*RegionState = params.RegionState;

}


// Function Maneater.ME_GameplayStatics.GetWorldRegionData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_WorldRegionData*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_WorldRegionData* UME_GameplayStatics::STATIC_GetWorldRegionData(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldRegionData");

	UME_GameplayStatics_GetWorldRegionData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetWorldLocationAtUVCoord
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Bounds                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               UVCoord                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_GameplayStatics::STATIC_GetWorldLocationAtUVCoord(class AActor* Bounds, const struct FVector2D& UVCoord)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldLocationAtUVCoord");

	UME_GameplayStatics_GetWorldLocationAtUVCoord_Params params;
	params.Bounds = Bounds;
	params.UVCoord = UVCoord;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetWorldBoundsActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_GameplayStatics::STATIC_GetWorldBoundsActor(class AActor* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWorldBoundsActor");

	UME_GameplayStatics_GetWorldBoundsActor_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetWaterDepthAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  WorldContextActor              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetWaterDepthAtLocation(const struct FVector& InLocation, class AActor* WorldContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWaterDepthAtLocation");

	UME_GameplayStatics_GetWaterDepthAtLocation_Params params;
	params.InLocation = InLocation;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetWaterDepth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetWaterDepth(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetWaterDepth");

	UME_GameplayStatics_GetWaterDepth_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetUVsAtWorldLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Bounds                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                Texture                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UME_GameplayStatics::STATIC_GetUVsAtWorldLocation(class AActor* Bounds, const struct FVector& Location, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetUVsAtWorldLocation");

	UME_GameplayStatics_GetUVsAtWorldLocation_Params params;
	params.Bounds = Bounds;
	params.Location = Location;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetTutorialManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_TutorialManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_TutorialManager* UME_GameplayStatics::STATIC_GetTutorialManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetTutorialManager");

	UME_GameplayStatics_GetTutorialManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetTimeofDaySpeedScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ContextActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetTimeofDaySpeedScale(class AActor* ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetTimeofDaySpeedScale");

	UME_GameplayStatics_GetTimeofDaySpeedScale_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetTimeofDayNoContext
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ContextActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetTimeofDayNoContext(class AActor* ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetTimeofDayNoContext");

	UME_GameplayStatics_GetTimeofDayNoContext_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetTimeofDay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ContextActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetTimeofDay(class AActor* ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetTimeofDay");

	UME_GameplayStatics_GetTimeofDay_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetSpawnPool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SpawnPool*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SpawnPool* UME_GameplayStatics::STATIC_GetSpawnPool(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetSpawnPool");

	UME_GameplayStatics_GetSpawnPool_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetSpawnManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_SpawnManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_SpawnManager* UME_GameplayStatics::STATIC_GetSpawnManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetSpawnManager");

	UME_GameplayStatics_GetSpawnManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetSonarManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_SonarManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_SonarManager* UME_GameplayStatics::STATIC_GetSonarManager(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetSonarManager");

	UME_GameplayStatics_GetSonarManager_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetSilhouetteColor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  SilhouetteActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EOutlineColor         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EOutlineColor UME_GameplayStatics::STATIC_GetSilhouetteColor(class AActor* SilhouetteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetSilhouetteColor");

	UME_GameplayStatics_GetSilhouetteColor_Params params;
	params.SilhouetteActor = SilhouetteActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetRegionName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EWorldRegion          Region                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreLocalization            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_GameplayStatics::STATIC_GetRegionName(Maneater_EWorldRegion Region, bool bIgnoreLocalization)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetRegionName");

	UME_GameplayStatics_GetRegionName_Params params;
	params.Region = Region;
	params.bIgnoreLocalization = bIgnoreLocalization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetRegionIndexforVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AME_WorldRegionVolume*   RegionVolume                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameplayStatics::STATIC_GetRegionIndexforVolume(class AME_WorldRegionVolume* RegionVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetRegionIndexforVolume");

	UME_GameplayStatics_GetRegionIndexforVolume_Params params;
	params.RegionVolume = RegionVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetRegionFromName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   RegionName                     (Parm, NativeAccessSpecifierPublic)
// Maneater_EWorldRegion          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EWorldRegion UME_GameplayStatics::STATIC_GetRegionFromName(const struct FText& RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetRegionFromName");

	UME_GameplayStatics_GetRegionFromName_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetPMFromComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPhysicalMaterial* UME_GameplayStatics::STATIC_GetPMFromComponent(class USceneComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetPMFromComponent");

	UME_GameplayStatics_GetPMFromComponent_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetPlayerSharkState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_PlayerSharkState*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_PlayerSharkState* UME_GameplayStatics::STATIC_GetPlayerSharkState(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetPlayerSharkState");

	UME_GameplayStatics_GetPlayerSharkState_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetPlayerSharkPawn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_PlayerSharkCharacter* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_PlayerSharkCharacter* UME_GameplayStatics::STATIC_GetPlayerSharkPawn(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetPlayerSharkPawn");

	UME_GameplayStatics_GetPlayerSharkPawn_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetPlayerBounty
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bAsDollars                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetPlayerBounty(class UObject* WorldContextObject, bool bAsDollars)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetPlayerBounty");

	UME_GameplayStatics_GetPlayerBounty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bAsDollars = bAsDollars;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetPersistentLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevel*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevel* UME_GameplayStatics::STATIC_GetPersistentLevel(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetPersistentLevel");

	UME_GameplayStatics_GetPersistentLevel_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetOceanPhysicsVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_OceanPhysicsVolume*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_OceanPhysicsVolume* UME_GameplayStatics::STATIC_GetOceanPhysicsVolume(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetOceanPhysicsVolume");

	UME_GameplayStatics_GetOceanPhysicsVolume_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetOceanManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_OceanManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_OceanManager* UME_GameplayStatics::STATIC_GetOceanManager(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetOceanManager");

	UME_GameplayStatics_GetOceanManager_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetObjectiveSpawnManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_ObjectiveSpawnManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_ObjectiveSpawnManager* UME_GameplayStatics::STATIC_GetObjectiveSpawnManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetObjectiveSpawnManager");

	UME_GameplayStatics_GetObjectiveSpawnManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetObjectiveManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_PlayerObjectiveManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_PlayerObjectiveManager* UME_GameplayStatics::STATIC_GetObjectiveManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetObjectiveManager");

	UME_GameplayStatics_GetObjectiveManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetManeaterGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_GameMode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_GameMode* UME_GameplayStatics::STATIC_GetManeaterGameMode(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetManeaterGameMode");

	UME_GameplayStatics_GetManeaterGameMode_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetLocalViewPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_GameplayStatics::STATIC_GetLocalViewPosition(class AActor* ContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetLocalViewPosition");

	UME_GameplayStatics_GetLocalViewPosition_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetLocalizedGrowthName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> GrowthStage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_GameplayStatics::STATIC_GetLocalizedGrowthName(TEnumAsByte<Maneater_EPlayerGrowthStage> GrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetLocalizedGrowthName");

	UME_GameplayStatics_GetLocalizedGrowthName_Params params;
	params.GrowthStage = GrowthStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetLastRenderTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetLastRenderTime(class UPrimitiveComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetLastRenderTime");

	UME_GameplayStatics_GetLastRenderTime_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetLandscapeResolution
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ALandscape*              Landscape                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UME_GameplayStatics::STATIC_GetLandscapeResolution(class ALandscape* Landscape)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetLandscapeResolution");

	UME_GameplayStatics_GetLandscapeResolution_Params params;
	params.Landscape = Landscape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetLandscape
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ALandscape*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ALandscape* UME_GameplayStatics::STATIC_GetLandscape(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetLandscape");

	UME_GameplayStatics_GetLandscape_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetKeysForAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AxisScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>            Bindings                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetKeysForAction(const struct FName& ActionName, float AxisScale, TArray<struct FKey>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetKeysForAction");

	UME_GameplayStatics_GetKeysForAction_Params params;
	params.ActionName = ActionName;
	params.AxisScale = AxisScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bindings != nullptr)
		*Bindings = params.Bindings;

}


// Function Maneater.ME_GameplayStatics.GetKeyFriendlyName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    InKey                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_GameplayStatics::STATIC_GetKeyFriendlyName(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetKeyFriendlyName");

	UME_GameplayStatics_GetKeyFriendlyName_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetDialogueSystem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_DialogueSystem*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_DialogueSystem* UME_GameplayStatics::STATIC_GetDialogueSystem(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetDialogueSystem");

	UME_GameplayStatics_GetDialogueSystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 InObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UME_GameplayStatics::STATIC_GetDefaultObject(class UObject* InObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetDefaultObject");

	UME_GameplayStatics_GetDefaultObject_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetCurrentMapName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UME_GameplayStatics::STATIC_GetCurrentMapName(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetCurrentMapName");

	UME_GameplayStatics_GetCurrentMapName_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetCurrentBossFight
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextActor              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_BossBattleInfo*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_BossBattleInfo* UME_GameplayStatics::STATIC_GetCurrentBossFight(class AActor* WorldContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetCurrentBossFight");

	UME_GameplayStatics_GetCurrentBossFight_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetClassDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UME_GameplayStatics::STATIC_GetClassDefaultObject(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetClassDefaultObject");

	UME_GameplayStatics_GetClassDefaultObject_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetCameraWaterDepth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameplayStatics::STATIC_GetCameraWaterDepth(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetCameraWaterDepth");

	UME_GameplayStatics_GetCameraWaterDepth_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetBountyManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_BountyManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_BountyManager* UME_GameplayStatics::STATIC_GetBountyManager(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetBountyManager");

	UME_GameplayStatics_GetBountyManager_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetAssetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bIncludePath                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UME_GameplayStatics::STATIC_GetAssetName(bool bIncludePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAssetName");

	UME_GameplayStatics_GetAssetName_Params params;
	params.bIncludePath = bIncludePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetAssetMapName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UME_GameplayStatics::STATIC_GetAssetMapName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAssetMapName");

	UME_GameplayStatics_GetAssetMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetAssetLoader
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AssetLoader*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_AssetLoader* UME_GameplayStatics::STATIC_GetAssetLoader(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAssetLoader");

	UME_GameplayStatics_GetAssetLoader_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetAllThrashablePawns
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APawn*>           ThrashableList                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllThrashablePawns(class AActor* WorldContextActor, TArray<class APawn*>* ThrashableList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllThrashablePawns");

	UME_GameplayStatics_GetAllThrashablePawns_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ThrashableList != nullptr)
		*ThrashableList = params.ThrashableList;

}


// Function Maneater.ME_GameplayStatics.GetAllThrashableActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ThrashableList                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllThrashableActors(class UObject* WorldContext, TArray<class AActor*>* ThrashableList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllThrashableActors");

	UME_GameplayStatics_GetAllThrashableActors_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ThrashableList != nullptr)
		*ThrashableList = params.ThrashableList;

}


// Function Maneater.ME_GameplayStatics.GetAllPingableActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          PingableList                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllPingableActors(class UObject* WorldContext, TArray<class AActor*>* PingableList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllPingableActors");

	UME_GameplayStatics_GetAllPingableActors_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PingableList != nullptr)
		*PingableList = params.PingableList;

}


// Function Maneater.ME_GameplayStatics.GetAllLivingHumans
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AME_HumanCharacter*> HumanList                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllLivingHumans(class AActor* WorldContextObject, TArray<class AME_HumanCharacter*>* HumanList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllLivingHumans");

	UME_GameplayStatics_GetAllLivingHumans_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HumanList != nullptr)
		*HumanList = params.HumanList;

}


// Function Maneater.ME_GameplayStatics.GetAllLivingCharacters
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AME_Character*>   CharacterList                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllLivingCharacters(class AActor* WorldContextActor, TArray<class AME_Character*>* CharacterList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllLivingCharacters");

	UME_GameplayStatics_GetAllLivingCharacters_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CharacterList != nullptr)
		*CharacterList = params.CharacterList;

}


// Function Maneater.ME_GameplayStatics.GetAllLivingAnimals
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AME_AnimalCharacter*> AnimalList                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllLivingAnimals(class AActor* WorldContextActor, TArray<class AME_AnimalCharacter*>* AnimalList)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllLivingAnimals");

	UME_GameplayStatics_GetAllLivingAnimals_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalList != nullptr)
		*AnimalList = params.AnimalList;

}


// Function Maneater.ME_GameplayStatics.GetAllChildrenOfClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FName>           IgnoredClasses                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllChildrenOfClass(class UClass* InParent, TArray<struct FName> IgnoredClasses)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllChildrenOfClass");

	UME_GameplayStatics_GetAllChildrenOfClass_Params params;
	params.InParent = InParent;
	params.IgnoredClasses = IgnoredClasses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.GetAllAxisInputs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputAxisKeyMapping> AxisInputs                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllAxisInputs(TArray<struct FInputAxisKeyMapping>* AxisInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllAxisInputs");

	UME_GameplayStatics_GetAllAxisInputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AxisInputs != nullptr)
		*AxisInputs = params.AxisInputs;

}


// Function Maneater.ME_GameplayStatics.GetAllAIControllers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AME_AIController*> ControllerList                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSortByDistance                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllAIControllers(class AActor* WorldContextActor, TArray<class AME_AIController*>* ControllerList, bool bSortByDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllAIControllers");

	UME_GameplayStatics_GetAllAIControllers_Params params;
	params.WorldContextActor = WorldContextActor;
	params.bSortByDistance = bSortByDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ControllerList != nullptr)
		*ControllerList = params.ControllerList;

}


// Function Maneater.ME_GameplayStatics.GetAllActionInputs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputActionKeyMapping> ActionInputs                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetAllActionInputs(TArray<struct FInputActionKeyMapping>* ActionInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAllActionInputs");

	UME_GameplayStatics_GetAllActionInputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionInputs != nullptr)
		*ActionInputs = params.ActionInputs;

}


// Function Maneater.ME_GameplayStatics.GetAIDirector
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIDirector*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_AIDirector* UME_GameplayStatics::STATIC_GetAIDirector(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetAIDirector");

	UME_GameplayStatics_GetAIDirector_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.GetActionsForKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKey                    InKey                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputAxisKeyMapping> OutAxisMappings                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputActionKeyMapping> OutActionMappings              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_GetActionsForKey(const struct FKey& InKey, TArray<struct FInputAxisKeyMapping>* OutAxisMappings, TArray<struct FInputActionKeyMapping>* OutActionMappings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.GetActionsForKey");

	UME_GameplayStatics_GetActionsForKey_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAxisMappings != nullptr)
		*OutAxisMappings = params.OutAxisMappings;
	if (OutActionMappings != nullptr)
		*OutActionMappings = params.OutActionMappings;

}


// Function Maneater.ME_GameplayStatics.FVector2DToIntPoint
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector2D>       Input                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FIntPoint>       Output                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_FVector2DToIntPoint(TArray<struct FVector2D> Input, TArray<struct FIntPoint>* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.FVector2DToIntPoint");

	UME_GameplayStatics_FVector2DToIntPoint_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function Maneater.ME_GameplayStatics.FormatGameplayText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   TextToFormat                   (Parm, NativeAccessSpecifierPublic)
// TArray<struct FRichTextActionMapping> ActionBinds                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_GameplayStatics::STATIC_FormatGameplayText(const struct FText& TextToFormat, TArray<struct FRichTextActionMapping> ActionBinds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.FormatGameplayText");

	UME_GameplayStatics_FormatGameplayText_Params params;
	params.TextToFormat = TextToFormat;
	params.ActionBinds = ActionBinds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.ForceDespawnAllProxBombs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_ForceDespawnAllProxBombs(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ForceDespawnAllProxBombs");

	UME_GameplayStatics_ForceDespawnAllProxBombs_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.ForceDespawnAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_ForceDespawnAI(class AME_AIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.ForceDespawnAI");

	UME_GameplayStatics_ForceDespawnAI_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.FindSlopeRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 FloorNormal                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                CurrentRotation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UME_GameplayStatics::STATIC_FindSlopeRotation(const struct FVector& FloorNormal, const struct FRotator& CurrentRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.FindSlopeRotation");

	UME_GameplayStatics_FindSlopeRotation_Params params;
	params.FloorNormal = FloorNormal;
	params.CurrentRotation = CurrentRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.FFloatIntervalToFVector2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFloatIntervalBP        Input                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UME_GameplayStatics::STATIC_FFloatIntervalToFVector2D(const struct FFloatIntervalBP& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.FFloatIntervalToFVector2D");

	UME_GameplayStatics_FFloatIntervalToFVector2D_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.DrawArrowOnActor
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FColor                  Color                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ArrowLength                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_DrawArrowOnActor(class AActor* Actor, const struct FRotator& Direction, const struct FColor& Color, float ArrowLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.DrawArrowOnActor");

	UME_GameplayStatics_DrawArrowOnActor_Params params;
	params.Actor = Actor;
	params.Direction = Direction;
	params.Color = Color;
	params.ArrowLength = ArrowLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameplayStatics.CreateRenderTarget2DNoHDR
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UME_GameplayStatics::STATIC_CreateRenderTarget2DNoHDR(class UObject* WorldContextObject, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.CreateRenderTarget2DNoHDR");

	UME_GameplayStatics_CreateRenderTarget2DNoHDR_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameplayStatics.AttachCinematicEvolutionMeshes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*      SkeletalMeshActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameplayStatics::STATIC_AttachCinematicEvolutionMeshes(class ASkeletalMeshActor* SkeletalMeshActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameplayStatics.AttachCinematicEvolutionMeshes");

	UME_GameplayStatics_AttachCinematicEvolutionMeshes_Params params;
	params.SkeletalMeshActor = SkeletalMeshActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetVSyncType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  OwnerWorld                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetVSyncType(class UWorld* OwnerWorld, int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetVSyncType");

	UME_GameUserSettings_SetVSyncType_Params params;
	params.OwnerWorld = OwnerWorld;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetShowFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewShowFrameRate              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetShowFrameRate(bool bNewShowFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetShowFrameRate");

	UME_GameUserSettings_SetShowFrameRate_Params params;
	params.bNewShowFrameRate = bNewShowFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetShadowsOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  OwnerWorld                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetShadowsOn(class UWorld* OwnerWorld, int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetShadowsOn");

	UME_GameUserSettings_SetShadowsOn_Params params;
	params.OwnerWorld = OwnerWorld;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetOceanQualityLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            QualityLevel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetOceanQualityLevel(int QualityLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetOceanQualityLevel");

	UME_GameUserSettings_SetOceanQualityLevel_Params params;
	params.QualityLevel = QualityLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetLastActiveUserId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetLastActiveUserId(const struct FString& userId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetLastActiveUserId");

	UME_GameUserSettings_SetLastActiveUserId_Params params;
	params.userId = userId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetGlobalQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetGlobalQuality(int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetGlobalQuality");

	UME_GameUserSettings_SetGlobalQuality_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetDefaultFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InFOV                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetDefaultFOV(float InFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetDefaultFOV");

	UME_GameUserSettings_SetDefaultFOV_Params params;
	params.InFOV = InFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  OwnerWorld                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetBrightness(class UWorld* OwnerWorld, int Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetBrightness");

	UME_GameUserSettings_SetBrightness_Params params;
	params.OwnerWorld = OwnerWorld;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.SetAntiAliasingType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  OwnerWorld                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_GameUserSettings::SetAntiAliasingType(class UWorld* OwnerWorld, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.SetAntiAliasingType");

	UME_GameUserSettings_SetAntiAliasingType_Params params;
	params.OwnerWorld = OwnerWorld;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_GameUserSettings.GetVSyncType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameUserSettings::GetVSyncType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetVSyncType");

	UME_GameUserSettings_GetVSyncType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetShowFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameUserSettings::GetShowFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetShowFrameRate");

	UME_GameUserSettings_GetShowFrameRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetShadowsOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_GameUserSettings::GetShadowsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetShadowsOn");

	UME_GameUserSettings_GetShadowsOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetOceanQualityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameUserSettings::GetOceanQualityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetOceanQualityLevel");

	UME_GameUserSettings_GetOceanQualityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetManeaterUserSettings
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UME_GameUserSettings*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_GameUserSettings* UME_GameUserSettings::STATIC_GetManeaterUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetManeaterUserSettings");

	UME_GameUserSettings_GetManeaterUserSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetLastActiveUserId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UME_GameUserSettings::GetLastActiveUserId()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetLastActiveUserId");

	UME_GameUserSettings_GetLastActiveUserId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetGlobalQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameUserSettings::GetGlobalQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetGlobalQuality");

	UME_GameUserSettings_GetGlobalQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetDefaultFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_GameUserSettings::GetDefaultFOV()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetDefaultFOV");

	UME_GameUserSettings_GetDefaultFOV_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameUserSettings::GetBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetBrightness");

	UME_GameUserSettings_GetBrightness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_GameUserSettings.GetAntiAliasingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_GameUserSettings::GetAntiAliasingType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_GameUserSettings.GetAntiAliasingType");

	UME_GameUserSettings_GetAntiAliasingType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_Grotto.StreamingLevelLoaded
// (Final, Native, Public)
void AME_Grotto::StreamingLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Grotto.StreamingLevelLoaded");

	AME_Grotto_StreamingLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Grotto.SetInactive
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Grotto::SetInactive(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Grotto.SetInactive");

	AME_Grotto_SetInactive_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Grotto.OnGrottSpaceExited
// (Event, Public, BlueprintEvent)
void AME_Grotto::OnGrottSpaceExited()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Grotto.OnGrottSpaceExited");

	AME_Grotto_OnGrottSpaceExited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Grotto.OnGrottSpaceEntered
// (Event, Public, BlueprintEvent)
void AME_Grotto::OnGrottSpaceEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Grotto.OnGrottSpaceEntered");

	AME_Grotto_OnGrottSpaceEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Grotto.Activate
// (Final, Native, Public)
// Parameters:
// class AActor*                  OverlappedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Grotto::Activate(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Grotto.Activate");

	AME_Grotto_Activate_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanAIController.GetStateAsDialogueString
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 State                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_HumanAIController::GetStateAsDialogueString(struct FString* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanAIController.GetStateAsDialogueString");

	AME_HumanAIController_GetStateAsDialogueString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function Maneater.ME_HumanCharacter.TryUpdateChatter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_HumanCharacter::TryUpdateChatter(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.TryUpdateChatter");

	AME_HumanCharacter_TryUpdateChatter_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.SetThreatLevel
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InstigatingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_HumanCharacter::SetThreatLevel(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.SetThreatLevel");

	AME_HumanCharacter_SetThreatLevel_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.SetIsPassenger
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewPassengerStatus            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_VehiclePawn*         NewVehicle                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeCollision               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            SeatIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_HumanCharacter::SetIsPassenger(bool bNewPassengerStatus, class AME_VehiclePawn* NewVehicle, bool bChangeCollision, int SeatIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.SetIsPassenger");

	AME_HumanCharacter_SetIsPassenger_Params params;
	params.bNewPassengerStatus = bNewPassengerStatus;
	params.NewVehicle = NewVehicle;
	params.bChangeCollision = bChangeCollision;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.PostRandomDialogueEvent
// (Final, Native, Public, BlueprintCallable)
void AME_HumanCharacter::PostRandomDialogueEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.PostRandomDialogueEvent");

	AME_HumanCharacter_PostRandomDialogueEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.GetupPawn_UseSnapshot
// (Final, Native, Public)
void AME_HumanCharacter::GetupPawn_UseSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.GetupPawn_UseSnapshot");

	AME_HumanCharacter_GetupPawn_UseSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.GetupPawn_TriggerAnimation
// (Final, Native, Public)
void AME_HumanCharacter::GetupPawn_TriggerAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.GetupPawn_TriggerAnimation");

	AME_HumanCharacter_GetupPawn_TriggerAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.GetupPawn_SetupActor
// (Final, Native, Public)
void AME_HumanCharacter::GetupPawn_SetupActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.GetupPawn_SetupActor");

	AME_HumanCharacter_GetupPawn_SetupActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.GetupPawn_MoveActor
// (Final, Native, Public)
void AME_HumanCharacter::GetupPawn_MoveActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.GetupPawn_MoveActor");

	AME_HumanCharacter_GetupPawn_MoveActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.GetStateAsDialogueString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 State                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_HumanCharacter::GetStateAsDialogueString(struct FString* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.GetStateAsDialogueString");

	AME_HumanCharacter_GetStateAsDialogueString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;

}


// Function Maneater.ME_HumanCharacter.EjectIfPassenger
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*             EjectInstigator                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldRagdoll                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EjectImpulse                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_HumanCharacter::EjectIfPassenger(class AController* EjectInstigator, bool bShouldRagdoll, const struct FVector& EjectImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.EjectIfPassenger");

	AME_HumanCharacter_EjectIfPassenger_Params params;
	params.EjectInstigator = EjectInstigator;
	params.bShouldRagdoll = bShouldRagdoll;
	params.EjectImpulse = EjectImpulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_HumanCharacter.ChatterUpdateEvent_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            TotalLimbs                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DestroyedLimbs                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           isGrabbed                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           wasBumped                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bWasForced                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_HumanCharacter::ChatterUpdateEvent_BP(int TotalLimbs, int DestroyedLimbs, bool isGrabbed, bool wasBumped, bool bWasForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.ChatterUpdateEvent_BP");

	AME_HumanCharacter_ChatterUpdateEvent_BP_Params params;
	params.TotalLimbs = TotalLimbs;
	params.DestroyedLimbs = DestroyedLimbs;
	params.isGrabbed = isGrabbed;
	params.wasBumped = wasBumped;
	params.bWasForced = bWasForced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.BleedOutTimer
// (Final, Native, Public)
void AME_HumanCharacter::BleedOutTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.BleedOutTimer");

	AME_HumanCharacter_BleedOutTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.AbandonVehicleFinished
// (Final, Native, Public, BlueprintCallable)
void AME_HumanCharacter::AbandonVehicleFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.AbandonVehicleFinished");

	AME_HumanCharacter_AbandonVehicleFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.AbandonVehicle
// (Final, Native, Public)
void AME_HumanCharacter::AbandonVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.AbandonVehicle");

	AME_HumanCharacter_AbandonVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanCharacter.AbandonIfPassenger
// (Final, Native, Public)
void AME_HumanCharacter::AbandonIfPassenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanCharacter.AbandonIfPassenger");

	AME_HumanCharacter_AbandonIfPassenger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanBeachgoerAIController.SetFleeingPath
// (Final, Native, Public, BlueprintCallable)
void AME_HumanBeachgoerAIController::SetFleeingPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanBeachgoerAIController.SetFleeingPath");

	AME_HumanBeachgoerAIController_SetFleeingPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_HumanBeachgoerAIController.FleeingAfterDelay
// (Final, Native, Public)
void AME_HumanBeachgoerAIController::FleeingAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_HumanBeachgoerAIController.FleeingAfterDelay");

	AME_HumanBeachgoerAIController_FleeingAfterDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SharkCharacter.GetDorsalFinLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AME_SharkCharacter::GetDorsalFinLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SharkCharacter.GetDorsalFinLocation");

	AME_SharkCharacter_GetDorsalFinLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.ZeroOutStats
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::ZeroOutStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ZeroOutStats");

	AME_PlayerSharkCharacter_ZeroOutStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.UpdateGrowthAssets
// (Final, Native, Public, HasOutParms)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::UpdateGrowthAssets(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.UpdateGrowthAssets");

	AME_PlayerSharkCharacter_UpdateGrowthAssets_Params params;
	params.OldGrowthStage = OldGrowthStage;
	params.NewGrowthStage = NewGrowthStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.TryUseLungeAbility
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::TryUseLungeAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.TryUseLungeAbility");

	AME_PlayerSharkCharacter_TryUseLungeAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.TryCancelBite
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::TryCancelBite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.TryCancelBite");

	AME_PlayerSharkCharacter_TryCancelBite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationStarted_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ECharacterActionMode> ActionMode                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::TailWhipTimeDilationStarted_BP(TEnumAsByte<Maneater_ECharacterActionMode> ActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationStarted_BP");

	AME_PlayerSharkCharacter_TailWhipTimeDilationStarted_BP_Params params;
	params.ActionMode = ActionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationEnded_BP
// (Event, Public, BlueprintEvent)
void AME_PlayerSharkCharacter::TailWhipTimeDilationEnded_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationEnded_BP");

	AME_PlayerSharkCharacter_TailWhipTimeDilationEnded_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.StopAnimationsOnLandfall
// (Final, Native, Public)
void AME_PlayerSharkCharacter::StopAnimationsOnLandfall()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.StopAnimationsOnLandfall");

	AME_PlayerSharkCharacter_StopAnimationsOnLandfall_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.SetWantsToLeaveKnifing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bWantsToLeave                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::SetWantsToLeaveKnifing(bool bWantsToLeave)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.SetWantsToLeaveKnifing");

	AME_PlayerSharkCharacter_SetWantsToLeaveKnifing_Params params;
	params.bWantsToLeave = bWantsToLeave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.SetTagged
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bNewIsTagged                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::SetTagged(bool bNewIsTagged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.SetTagged");

	AME_PlayerSharkCharacter_SetTagged_Params params;
	params.bNewIsTagged = bNewIsTagged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.SetCameraRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::SetCameraRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.SetCameraRotation");

	AME_PlayerSharkCharacter_SetCameraRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.SetActorAndCameraRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// Engine_ETeleportType           Teleport                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkCharacter::SetActorAndCameraRotation(const struct FRotator& NewRotation, Engine_ETeleportType Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.SetActorAndCameraRotation");

	AME_PlayerSharkCharacter_SetActorAndCameraRotation_Params params;
	params.NewRotation = NewRotation;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.RefreshAttachedMeshes
// (Final, Native, Public)
void AME_PlayerSharkCharacter::RefreshAttachedMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.RefreshAttachedMeshes");

	AME_PlayerSharkCharacter_RefreshAttachedMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.PlayWaterReEntryAnimation
// (Final, Native, Public, HasDefaults)
// Parameters:
// float                          EntryAngleDot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          VelocityAngleDot               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                FlatEntryRotator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           PerfectEntry                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsCruisingWaterLine            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::PlayWaterReEntryAnimation(float EntryAngleDot, float VelocityAngleDot, const struct FRotator& FlatEntryRotator, bool PerfectEntry, bool IsCruisingWaterLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.PlayWaterReEntryAnimation");

	AME_PlayerSharkCharacter_PlayWaterReEntryAnimation_Params params;
	params.EntryAngleDot = EntryAngleDot;
	params.VelocityAngleDot = VelocityAngleDot;
	params.FlatEntryRotator = FlatEntryRotator;
	params.PerfectEntry = PerfectEntry;
	params.IsCruisingWaterLine = IsCruisingWaterLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.PlayWaterBreachFX
// (Final, Native, Public)
void AME_PlayerSharkCharacter::PlayWaterBreachFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.PlayWaterBreachFX");

	AME_PlayerSharkCharacter_PlayWaterBreachFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.PlayAudioEvent
// (Final, Native, Public)
// Parameters:
// class UAkAudioEvent*           AudioEvent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::PlayAudioEvent(class UAkAudioEvent* AudioEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.PlayAudioEvent");

	AME_PlayerSharkCharacter_PlayAudioEvent_Params params;
	params.AudioEvent = AudioEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.OnTimeDilationStarted
// (Final, Native, Public)
void AME_PlayerSharkCharacter::OnTimeDilationStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.OnTimeDilationStarted");

	AME_PlayerSharkCharacter_OnTimeDilationStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.OnTimeDilationEnded
// (Final, Native, Public)
void AME_PlayerSharkCharacter::OnTimeDilationEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.OnTimeDilationEnded");

	AME_PlayerSharkCharacter_OnTimeDilationEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.OnEvolutionAbilityCharged
// (Final, Native, Public)
void AME_PlayerSharkCharacter::OnEvolutionAbilityCharged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.OnEvolutionAbilityCharged");

	AME_PlayerSharkCharacter_OnEvolutionAbilityCharged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChangedEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bCinematicMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::OnCinematicModeChangedEvent(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChangedEvent");

	AME_PlayerSharkCharacter_OnCinematicModeChangedEvent_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChanged
// (Final, Native, Public)
// Parameters:
// bool                           bCinematicMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChanged");

	AME_PlayerSharkCharacter_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.OnAttackAbilityMeleeHit_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGameplayAbility*        AttackAbility                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::OnAttackAbilityMeleeHit_BP(class UGameplayAbility* AttackAbility, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.OnAttackAbilityMeleeHit_BP");

	AME_PlayerSharkCharacter_OnAttackAbilityMeleeHit_BP_Params params;
	params.AttackAbility = AttackAbility;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.NotifyDirectorOfAttack
// (Final, Native, Protected, BlueprintCallable)
void AME_PlayerSharkCharacter::NotifyDirectorOfAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.NotifyDirectorOfAttack");

	AME_PlayerSharkCharacter_NotifyDirectorOfAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.LerpSharkMaterialParam
// (Final, Native, Public)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ParamValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          fLerpTime                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::LerpSharkMaterialParam(const struct FString& ParamName, float ParamValue, float fLerpTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.LerpSharkMaterialParam");

	AME_PlayerSharkCharacter_LerpSharkMaterialParam_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;
	params.fLerpTime = fLerpTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.KnifingStateChanged_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           NewKnifingState                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::KnifingStateChanged_BP(bool NewKnifingState, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.KnifingStateChanged_BP");

	AME_PlayerSharkCharacter_KnifingStateChanged_BP_Params params;
	params.NewKnifingState = NewKnifingState;
	params.ChangeContext = ChangeContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.IsSprinting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkCharacter::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.IsSprinting");

	AME_PlayerSharkCharacter_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.IsMotherShark
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkCharacter::IsMotherShark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.IsMotherShark");

	AME_PlayerSharkCharacter_IsMotherShark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.IsInputDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkCharacter::IsInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.IsInputDisabled");

	AME_PlayerSharkCharacter_IsInputDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.IsCapableOfFastTravel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  DestGrotto                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EFastTravelReturn> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_EFastTravelReturn> AME_PlayerSharkCharacter::IsCapableOfFastTravel(class AActor* DestGrotto)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.IsCapableOfFastTravel");

	AME_PlayerSharkCharacter_IsCapableOfFastTravel_Params params;
	params.DestGrotto = DestGrotto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GrowthStageUpdated
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::GrowthStageUpdated(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GrowthStageUpdated");

	AME_PlayerSharkCharacter_GrowthStageUpdated_Params params;
	params.OldGrowthStage = OldGrowthStage;
	params.NewGrowthStage = NewGrowthStage;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.GrowthStageChanged
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::GrowthStageChanged(TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GrowthStageChanged");

	AME_PlayerSharkCharacter_GrowthStageChanged_Params params;
	params.NewGrowthStage = NewGrowthStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.GrowthLevelChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewGrowthLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::GrowthLevelChanged(int NewGrowthLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GrowthLevelChanged");

	AME_PlayerSharkCharacter_GrowthLevelChanged_Params params;
	params.NewGrowthLevel = NewGrowthLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.GibLastVictim
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::GibLastVictim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GibLastVictim");

	AME_PlayerSharkCharacter_GibLastVictim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.GetPlayerTargetingSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerTargetingSystem* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_PlayerTargetingSystem* AME_PlayerSharkCharacter::GetPlayerTargetingSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetPlayerTargetingSystem");

	AME_PlayerSharkCharacter_GetPlayerTargetingSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetPlayerSharkMovement
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UME_PlayerSharkMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_PlayerSharkMovementComponent* AME_PlayerSharkCharacter::GetPlayerSharkMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetPlayerSharkMovement");

	AME_PlayerSharkCharacter_GetPlayerSharkMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetPlayerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_PlayerSharkCharacter::GetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetPlayerLevel");

	AME_PlayerSharkCharacter_GetPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetGrowthStageScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_PlayerSharkCharacter::GetGrowthStageScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetGrowthStageScale");

	AME_PlayerSharkCharacter_GetGrowthStageScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetGrowthStage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_EPlayerGrowthStage> AME_PlayerSharkCharacter::GetGrowthStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetGrowthStage");

	AME_PlayerSharkCharacter_GetGrowthStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetCurrentLockOnTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AME_PlayerSharkCharacter::GetCurrentLockOnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetCurrentLockOnTarget");

	AME_PlayerSharkCharacter_GetCurrentLockOnTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetCurrentFocusedTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* AME_PlayerSharkCharacter::GetCurrentFocusedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetCurrentFocusedTarget");

	AME_PlayerSharkCharacter_GetCurrentFocusedTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetCastAnimInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UME_AnimInstance_PlayerShark* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_AnimInstance_PlayerShark* AME_PlayerSharkCharacter::GetCastAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetCastAnimInstance");

	AME_PlayerSharkCharacter_GetCastAnimInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GetAttachedEvolutionMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EEvolutionSlot        EvolutionSlot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* AME_PlayerSharkCharacter::GetAttachedEvolutionMesh(Maneater_EEvolutionSlot EvolutionSlot, int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GetAttachedEvolutionMesh");

	AME_PlayerSharkCharacter_GetAttachedEvolutionMesh_Params params;
	params.EvolutionSlot = EvolutionSlot;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.GenericWaterlineSplash
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Particles                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::GenericWaterlineSplash(class UParticleSystem* Particles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GenericWaterlineSplash");

	AME_PlayerSharkCharacter_GenericWaterlineSplash_Params params;
	params.Particles = Particles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.GenericAttachedParticleTrail
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Particles                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ELimbBoneName> LimbName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::GenericAttachedParticleTrail(class UParticleSystem* Particles, TEnumAsByte<Maneater_ELimbBoneName> LimbName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.GenericAttachedParticleTrail");

	AME_PlayerSharkCharacter_GenericAttachedParticleTrail_Params params;
	params.Particles = Particles;
	params.LimbName = LimbName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.ForceKnifingEntryAngle
// (Event, Public, BlueprintEvent)
void AME_PlayerSharkCharacter::ForceKnifingEntryAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ForceKnifingEntryAngle");

	AME_PlayerSharkCharacter_ForceKnifingEntryAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.ExitKnifingUnderwater
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::ExitKnifingUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ExitKnifingUnderwater");

	AME_PlayerSharkCharacter_ExitKnifingUnderwater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.EvolutionAbilityActivatedEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// Maneater_EEvolutionSetType     SetType                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::EvolutionAbilityActivatedEvent(Maneater_EEvolutionSetType SetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.EvolutionAbilityActivatedEvent");

	AME_PlayerSharkCharacter_EvolutionAbilityActivatedEvent_Params params;
	params.SetType = SetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.EnterKnifingFromUnderwater
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::EnterKnifingFromUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.EnterKnifingFromUnderwater");

	AME_PlayerSharkCharacter_EnterKnifingFromUnderwater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.EnterKnifingFromBreach
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::EnterKnifingFromBreach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.EnterKnifingFromBreach");

	AME_PlayerSharkCharacter_EnterKnifingFromBreach_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.EndWhipshotSlomo
// (Final, Native, Public)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PageCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::EndWhipshotSlomo(int idx, int PageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.EndWhipshotSlomo");

	AME_PlayerSharkCharacter_EndWhipshotSlomo_Params params;
	params.idx = idx;
	params.PageCount = PageCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.ChunkLastVictim
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkCharacter::ChunkLastVictim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ChunkLastVictim");

	AME_PlayerSharkCharacter_ChunkLastVictim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.AttemptFastTravel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Dest                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkCharacter::AttemptFastTravel(class AActor* Dest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.AttemptFastTravel");

	AME_PlayerSharkCharacter_AttemptFastTravel_Params params;
	params.Dest = Dest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkCharacter.ApplyEvolutionMaterial
// (Final, Native, Public)
void AME_PlayerSharkCharacter::ApplyEvolutionMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ApplyEvolutionMaterial");

	AME_PlayerSharkCharacter_ApplyEvolutionMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkCharacter.ActivateMutagenScale
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UParticleSystem*         ParticleToPlay                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   SocketToAttach                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::ActivateMutagenScale(class UParticleSystem* ParticleToPlay, struct FName* SocketToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ActivateMutagenScale");

	AME_PlayerSharkCharacter_ActivateMutagenScale_Params params;
	params.ParticleToPlay = ParticleToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SocketToAttach != nullptr)
		*SocketToAttach = params.SocketToAttach;

}


// Function Maneater.ME_PlayerSharkCharacter.ActionModeUpdated_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ECharacterActionMode> NewActionMode                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkCharacter::ActionModeUpdated_BP(TEnumAsByte<Maneater_ECharacterActionMode> NewActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkCharacter.ActionModeUpdated_BP");

	AME_PlayerSharkCharacter_ActionModeUpdated_BP_Params params;
	params.NewActionMode = NewActionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_InventoryActor.SetSharkEvolutionVisuals
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TMap<Maneater_EEvolutionSlot, class UME_PlayerEvolution*> EquippedEvolutionMap           (Parm, OutParm, NativeAccessSpecifierPublic)
void AME_InventoryActor::SetSharkEvolutionVisuals(TMap<Maneater_EEvolutionSlot, class UME_PlayerEvolution*>* EquippedEvolutionMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_InventoryActor.SetSharkEvolutionVisuals");

	AME_InventoryActor_SetSharkEvolutionVisuals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EquippedEvolutionMap != nullptr)
		*EquippedEvolutionMap = params.EquippedEvolutionMap;

}


// Function Maneater.ME_InventoryActor.SetPlayerSharkCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AME_PlayerSharkCharacter* Character                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_InventoryActor::SetPlayerSharkCharacter(class AME_PlayerSharkCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_InventoryActor.SetPlayerSharkCharacter");

	AME_InventoryActor_SetPlayerSharkCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_InWorldWidgetCreator.SetActiveIndexFromObjective
// (Event, Public, BlueprintEvent)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_InWorldWidgetCreator::SetActiveIndexFromObjective(class UME_PlayerObjective* PlayerObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_InWorldWidgetCreator.SetActiveIndexFromObjective");

	AME_InWorldWidgetCreator_SetActiveIndexFromObjective_Params params;
	params.PlayerObjective = PlayerObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_InWorldWidgetCreator.OnViewControllerVisibilityChanged
// (Final, Native, Public)
// Parameters:
// UMG_ESlateVisibility           ControllerVisibility           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_InWorldWidgetCreator::OnViewControllerVisibilityChanged(UMG_ESlateVisibility ControllerVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_InWorldWidgetCreator.OnViewControllerVisibilityChanged");

	AME_InWorldWidgetCreator_OnViewControllerVisibilityChanged_Params params;
	params.ControllerVisibility = ControllerVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_LandmarkObjective.OnDiscoveredSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewDiscoveredSetting          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_LandmarkObjective::OnDiscoveredSet(bool bNewDiscoveredSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_LandmarkObjective.OnDiscoveredSet");

	AME_LandmarkObjective_OnDiscoveredSet_Params params;
	params.bNewDiscoveredSetting = bNewDiscoveredSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_LandmarkObjective.GetAssociatedSign
// (Event, Public, BlueprintEvent)
// Parameters:
// class AME_DestructibleActor*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_DestructibleActor* AME_LandmarkObjective::GetAssociatedSign()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_LandmarkObjective.GetAssociatedSign");

	AME_LandmarkObjective_GetAssociatedSign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.ShouldClampToEdgeOfMap
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_MapWidgetInterface::ShouldClampToEdgeOfMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.ShouldClampToEdgeOfMap");

	UME_MapWidgetInterface_ShouldClampToEdgeOfMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.OnWidgetMouseDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UME_MapWidgetInterface::OnWidgetMouseDown(class UUserWidget* Widget, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.OnWidgetMouseDown");

	UME_MapWidgetInterface_OnWidgetMouseDown_Params params;
	params.Widget = Widget;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_MapWidgetInterface.GetMapWidgetVisibility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UME_MapWidgetInterface::GetMapWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapWidgetVisibility");

	UME_MapWidgetInterface_GetMapWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapWidgetSize
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UME_MapWidgetInterface::GetMapWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapWidgetSize");

	UME_MapWidgetInterface_GetMapWidgetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapWidgetPriority
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_MapWidgetInterface::GetMapWidgetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapWidgetPriority");

	UME_MapWidgetInterface_GetMapWidgetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapWidgetMaterial
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* UME_MapWidgetInterface::GetMapWidgetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapWidgetMaterial");

	UME_MapWidgetInterface_GetMapWidgetMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapWidgetIcon
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UME_MapWidgetInterface::GetMapWidgetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapWidgetIcon");

	UME_MapWidgetInterface_GetMapWidgetIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapWidgetEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_MapWidgetInterface::GetMapWidgetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapWidgetEnabled");

	UME_MapWidgetInterface_GetMapWidgetEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapDisplayName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_MapWidgetInterface::GetMapDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapDisplayName");

	UME_MapWidgetInterface_GetMapDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MapWidgetInterface.GetMapDescriptionText
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_MapWidgetInterface::GetMapDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MapWidgetInterface.GetMapDescriptionText");

	UME_MapWidgetInterface_GetMapDescriptionText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MercunaNavOctree.IsBoatOctree
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_MercunaNavOctree::IsBoatOctree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MercunaNavOctree.IsBoatOctree");

	AME_MercunaNavOctree_IsBoatOctree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_MercunaNavVolume.IsBoatVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_MercunaNavVolume::IsBoatVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_MercunaNavVolume.IsBoatVolume");

	AME_MercunaNavVolume_IsBoatVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ObjectiveConditionBase.ConditionIsValid
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_ObjectiveConditionBase::ConditionIsValid(class AActor* WorldContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ObjectiveConditionBase.ConditionIsValid");

	UME_ObjectiveConditionBase_ConditionIsValid_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_OceanManager.IsUnderwater
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InLocation                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_OceanManager::IsUnderwater(const struct FVector& InLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanManager.IsUnderwater");

	AME_OceanManager_IsUnderwater_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_OceanManager.GetWaveModulationAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_OceanManager::GetWaveModulationAtLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanManager.GetWaveModulationAtLocation");

	AME_OceanManager_GetWaveModulationAtLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_OceanManager.GetFluidHeightRT
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* AME_OceanManager::GetFluidHeightRT(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanManager.GetFluidHeightRT");

	AME_OceanManager_GetFluidHeightRT_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_OceanManager.CauseFluidDisturbance
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DisturbanceOrigin              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DisturbanceRadius              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DisturbanceIntensity           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EFluidEffectType      EffectType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_OceanManager::CauseFluidDisturbance(const struct FVector& DisturbanceOrigin, float DisturbanceRadius, float DisturbanceIntensity, Maneater_EFluidEffectType EffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanManager.CauseFluidDisturbance");

	AME_OceanManager_CauseFluidDisturbance_Params params;
	params.DisturbanceOrigin = DisturbanceOrigin;
	params.DisturbanceRadius = DisturbanceRadius;
	params.DisturbanceIntensity = DisturbanceIntensity;
	params.EffectType = EffectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowSize
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NewSize                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_OceanSurfaceParticleSystemComponent::SetWakeLowSize(float NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowSize");

	UME_OceanSurfaceParticleSystemComponent_SetWakeLowSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_OceanSurfaceParticleSystemComponent::SetWakeLowColor(const struct FVector& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowColor");

	UME_OceanSurfaceParticleSystemComponent_SetWakeLowColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowAlpha
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NewAlpha                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_OceanSurfaceParticleSystemComponent::SetWakeLowAlpha(float NewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowAlpha");

	UME_OceanSurfaceParticleSystemComponent_SetWakeLowAlpha_Params params;
	params.NewAlpha = NewAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowSize
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_OceanSurfaceParticleSystemComponent::GetWakeLowSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowSize");

	UME_OceanSurfaceParticleSystemComponent_GetWakeLowSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowColor
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_OceanSurfaceParticleSystemComponent::GetWakeLowColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowColor");

	UME_OceanSurfaceParticleSystemComponent_GetWakeLowColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowAlpha
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_OceanSurfaceParticleSystemComponent::GetWakeLowAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowAlpha");

	UME_OceanSurfaceParticleSystemComponent_GetWakeLowAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.StartAttackCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          CooldownDuration               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_WeaponComponent::StartAttackCooldown(float CooldownDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.StartAttackCooldown");

	UME_WeaponComponent_StartAttackCooldown_Params params;
	params.CooldownDuration = CooldownDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WeaponComponent.SetShowLaserPointer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowPointer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bResetTargeting                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          CustomLockOnStartTime          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_WeaponComponent::SetShowLaserPointer(bool bShowPointer, bool bResetTargeting, float CustomLockOnStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.SetShowLaserPointer");

	UME_WeaponComponent_SetShowLaserPointer_Params params;
	params.bShowPointer = bShowPointer;
	params.bResetTargeting = bResetTargeting;
	params.CustomLockOnStartTime = CustomLockOnStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WeaponComponent.ResetLaserTargeting
// (Final, Native, Public, BlueprintCallable)
void UME_WeaponComponent::ResetLaserTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.ResetLaserTargeting");

	UME_WeaponComponent_ResetLaserTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WeaponComponent.PerformFire
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 AimDirection                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bViaAnimNotify                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_WeaponComponent::PerformFire(const struct FVector& AimDirection, bool bViaAnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.PerformFire");

	UME_WeaponComponent_PerformFire_Params params;
	params.AimDirection = AimDirection;
	params.bViaAnimNotify = bViaAnimNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WeaponComponent.OnMeleeAttackCooldownTimerFinished
// (Final, Native, Private)
void UME_WeaponComponent::OnMeleeAttackCooldownTimerFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.OnMeleeAttackCooldownTimerFinished");

	UME_WeaponComponent_OnMeleeAttackCooldownTimerFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WeaponComponent.IsCooldownActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_WeaponComponent::IsCooldownActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.IsCooldownActive");

	UME_WeaponComponent_IsCooldownActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.HasLaserLock
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_WeaponComponent::HasLaserLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.HasLaserLock");

	UME_WeaponComponent_HasLaserLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.HasLaser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_WeaponComponent::HasLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.HasLaser");

	UME_WeaponComponent_HasLaser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.GetWeapon
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Owner                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_WeaponComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_WeaponComponent* UME_WeaponComponent::STATIC_GetWeapon(class USkeletalMeshComponent* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.GetWeapon");

	UME_WeaponComponent_GetWeapon_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.GetTargetedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AME_Character*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_Character* UME_WeaponComponent::GetTargetedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.GetTargetedActor");

	UME_WeaponComponent_GetTargetedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.GetLaserAimDir
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_WeaponComponent::GetLaserAimDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.GetLaserAimDir");

	UME_WeaponComponent_GetLaserAimDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WeaponComponent.Fire
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 AimDirection                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bViaAnimNotify                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_WeaponComponent::Fire(const struct FVector& AimDirection, bool bViaAnimNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.Fire");

	UME_WeaponComponent_Fire_Params params;
	params.AimDirection = AimDirection;
	params.bViaAnimNotify = bViaAnimNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WeaponComponent.Drop
// (Final, Native, Public, BlueprintCallable)
void UME_WeaponComponent::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WeaponComponent.Drop");

	UME_WeaponComponent_Drop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PathRequestQueue.DecayQueue
// (Final, Native, Private)
void UME_PathRequestQueue::DecayQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PathRequestQueue.DecayQueue");

	UME_PathRequestQueue_DecayQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PhysicalImpactResponse.GetManeaterGameMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AME_GameMode*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_GameMode* UME_PhysicalImpactResponse::GetManeaterGameMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PhysicalImpactResponse.GetManeaterGameMode");

	UME_PhysicalImpactResponse_GetManeaterGameMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PhysicalImpactResponse.GetImpactEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EPhysicalSurface> ImpactingSurface               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUnderwater                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bScrape                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FImpactEffect           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FImpactEffect UME_PhysicalImpactResponse::GetImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactingSurface, bool bUnderwater, bool bScrape)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PhysicalImpactResponse.GetImpactEffects");

	UME_PhysicalImpactResponse_GetImpactEffects_Params params;
	params.ImpactingSurface = ImpactingSurface;
	params.bUnderwater = bUnderwater;
	params.bScrape = bScrape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerEvolution.GetDisplayStatsForEvolution
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          EffectiveLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EEvolutionRarity      eRarity                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEvolutionDisplayStat> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FEvolutionDisplayStat> UME_PlayerEvolution::STATIC_GetDisplayStatsForEvolution(float EffectiveLevel, class UME_PlayerEvolution* Evolution, Maneater_EEvolutionRarity eRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerEvolution.GetDisplayStatsForEvolution");

	UME_PlayerEvolution_GetDisplayStatsForEvolution_Params params;
	params.EffectiveLevel = EffectiveLevel;
	params.Evolution = Evolution;
	params.eRarity = eRarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.SetObjectiveState
// (Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EObjectiveState       NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTriggeredFromLoad             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerObjective::SetObjectiveState(Maneater_EObjectiveState NewState, bool bTriggeredFromLoad, class AActor* WorldContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.SetObjectiveState");

	UME_PlayerObjective_SetObjectiveState_Params params;
	params.NewState = NewState;
	params.bTriggeredFromLoad = bTriggeredFromLoad;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjective.OnGateActivated
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActivatedGate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerObjective::OnGateActivated(class AActor* ActivatedGate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.OnGateActivated");

	UME_PlayerObjective_OnGateActivated_Params params;
	params.ActivatedGate = ActivatedGate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjective.IsStoryObjective
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_PlayerObjective::IsStoryObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.IsStoryObjective");

	UME_PlayerObjective_IsStoryObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.IsComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_PlayerObjective::IsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.IsComplete");

	UME_PlayerObjective_IsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.IsAssociatedWithActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_PlayerObjective::IsAssociatedWithActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.IsAssociatedWithActor");

	UME_PlayerObjective_IsAssociatedWithActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.InitObjectiveFromSave
// (Native, Public)
void UME_PlayerObjective::InitObjectiveFromSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.InitObjectiveFromSave");

	UME_PlayerObjective_InitObjectiveFromSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjective.GetTotalProgressPoints
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_PlayerObjective::GetTotalProgressPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetTotalProgressPoints");

	UME_PlayerObjective_GetTotalProgressPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetSubtitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_PlayerObjective::GetSubtitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetSubtitleText");

	UME_PlayerObjective_GetSubtitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetShortObjectiveDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_PlayerObjective::GetShortObjectiveDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetShortObjectiveDescription");

	UME_PlayerObjective_GetShortObjectiveDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetProgressText
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_PlayerObjective::GetProgressText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetProgressText");

	UME_PlayerObjective_GetProgressText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetObjectiveType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EObjectiveType        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EObjectiveType UME_PlayerObjective::GetObjectiveType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetObjectiveType");

	UME_PlayerObjective_GetObjectiveType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetObjectiveState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EObjectiveState       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EObjectiveState UME_PlayerObjective::GetObjectiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetObjectiveState");

	UME_PlayerObjective_GetObjectiveState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetObjectiveRewardsHandle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FDataTableRowHandle UME_PlayerObjective::GetObjectiveRewardsHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetObjectiveRewardsHandle");

	UME_PlayerObjective_GetObjectiveRewardsHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetObjectiveName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_PlayerObjective::GetObjectiveName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetObjectiveName");

	UME_PlayerObjective_GetObjectiveName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetObjectiveImage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UME_PlayerObjective::GetObjectiveImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetObjectiveImage");

	UME_PlayerObjective_GetObjectiveImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetObjectiveDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_PlayerObjective::GetObjectiveDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetObjectiveDescription");

	UME_PlayerObjective_GetObjectiveDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetMapLocators
// (Event, Public, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FVector> UME_PlayerObjective::GetMapLocators()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetMapLocators");

	UME_PlayerObjective_GetMapLocators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetCurrentProgressPoints
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_PlayerObjective::GetCurrentProgressPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetCurrentProgressPoints");

	UME_PlayerObjective_GetCurrentProgressPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetCompletionPercentage
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_PlayerObjective::GetCompletionPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetCompletionPercentage");

	UME_PlayerObjective_GetCompletionPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.GetAssignedRegion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EWorldRegion          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EWorldRegion UME_PlayerObjective::GetAssignedRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.GetAssignedRegion");

	UME_PlayerObjective_GetAssignedRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjective.Cheat_ResetObjective
// (Native, Public)
void UME_PlayerObjective::Cheat_ResetObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.Cheat_ResetObjective");

	UME_PlayerObjective_Cheat_ResetObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjective.Cheat_ProgressObjective
// (Native, Public)
// Parameters:
// int                            Increment                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerObjective::Cheat_ProgressObjective(int Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.Cheat_ProgressObjective");

	UME_PlayerObjective_Cheat_ProgressObjective_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjective.Cheat_LogObjective
// (Native, Public)
void UME_PlayerObjective::Cheat_LogObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.Cheat_LogObjective");

	UME_PlayerObjective_Cheat_LogObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjective.Cheat_CompleteObjective
// (Native, Public)
void UME_PlayerObjective::Cheat_CompleteObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjective.Cheat_CompleteObjective");

	UME_PlayerObjective_Cheat_CompleteObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveGrotto.GetAssociatedGrotto
// (Final, Native, Public)
void UME_PlayerObjectiveGrotto::GetAssociatedGrotto()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveGrotto.GetAssociatedGrotto");

	UME_PlayerObjectiveGrotto_GetAssociatedGrotto_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.TutorialFinished
// (Final, Native, Public)
void AME_PlayerObjectiveManager::TutorialFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.TutorialFinished");

	AME_PlayerObjectiveManager_TutorialFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.SetObjectState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  FoundActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EObjectiveProgressState eState                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::SetObjectState(class AActor* FoundActor, Maneater_EObjectiveProgressState eState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.SetObjectState");

	AME_PlayerObjectiveManager_SetObjectState_Params params;
	params.FoundActor = FoundActor;
	params.eState = eState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.SetCustomObjectiveState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EObjectiveState       NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  AssociatedActor                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::SetCustomObjectiveState(Maneater_EObjectiveState NewState, class AActor* AssociatedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.SetCustomObjectiveState");

	AME_PlayerObjectiveManager_SetCustomObjectiveState_Params params;
	params.NewState = NewState;
	params.AssociatedActor = AssociatedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.OnRegionChanged
// (Final, Native, Protected)
// Parameters:
// Maneater_EWorldRegion          Region                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              RegionIcon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::OnRegionChanged(Maneater_EWorldRegion Region, class UTexture2D* RegionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.OnRegionChanged");

	AME_PlayerObjectiveManager_OnRegionChanged_Params params;
	params.Region = Region;
	params.RegionIcon = RegionIcon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.OnPlayerLevelChanged
// (Final, Native, Public)
// Parameters:
// int                            NewGrowthLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::OnPlayerLevelChanged(int NewGrowthLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.OnPlayerLevelChanged");

	AME_PlayerObjectiveManager_OnPlayerLevelChanged_Params params;
	params.NewGrowthLevel = NewGrowthLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.OnInfamyRankUp
// (Final, Native, Public)
// Parameters:
// int                            Rank                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::OnInfamyRankUp(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.OnInfamyRankUp");

	AME_PlayerObjectiveManager_OnInfamyRankUp_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.OnGrowthStageChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::OnGrowthStageChanged(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.OnGrowthStageChanged");

	AME_PlayerObjectiveManager_OnGrowthStageChanged_Params params;
	params.OldGrowthStage = OldGrowthStage;
	params.NewGrowthStage = NewGrowthStage;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.OnGrottoEntered
// (Final, Native, Public)
// Parameters:
// class AME_Grotto*              ME_Grotto                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::OnGrottoEntered(class AME_Grotto* ME_Grotto)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.OnGrottoEntered");

	AME_PlayerObjectiveManager_OnGrottoEntered_Params params;
	params.ME_Grotto = ME_Grotto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.OnGateActivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActivatedGate                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::OnGateActivated(class AActor* ActivatedGate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.OnGateActivated");

	AME_PlayerObjectiveManager_OnGateActivated_Params params;
	params.ActivatedGate = ActivatedGate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.ObjectUnloaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  UnloadedActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::ObjectUnloaded(class AActor* UnloadedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.ObjectUnloaded");

	AME_PlayerObjectiveManager_ObjectUnloaded_Params params;
	params.UnloadedActor = UnloadedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.ObjectLoaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  LoadedActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::ObjectLoaded(class AActor* LoadedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.ObjectLoaded");

	AME_PlayerObjectiveManager_ObjectLoaded_Params params;
	params.LoadedActor = LoadedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.LandmarkObjectBitten
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  LandmarkActor                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::LandmarkObjectBitten(class AActor* LandmarkActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.LandmarkObjectBitten");

	AME_PlayerObjectiveManager_LandmarkObjectBitten_Params params;
	params.LandmarkActor = LandmarkActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.GetStoryConditionStatus
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FConditionStatus> ConditionResults               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::GetStoryConditionStatus(TArray<struct FConditionStatus>* ConditionResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetStoryConditionStatus");

	AME_PlayerObjectiveManager_GetStoryConditionStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConditionResults != nullptr)
		*ConditionResults = params.ConditionResults;

}


// Function Maneater.ME_PlayerObjectiveManager.GetRegionPercentComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EWorldRegion          Region                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_PlayerObjectiveManager::GetRegionPercentComplete(Maneater_EWorldRegion Region)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetRegionPercentComplete");

	AME_PlayerObjectiveManager_GetRegionPercentComplete_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjectiveManager.GetObjectState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  FoundActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EObjectiveProgressState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EObjectiveProgressState AME_PlayerObjectiveManager::GetObjectState(class AActor* FoundActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetObjectState");

	AME_PlayerObjectiveManager_GetObjectState_Params params;
	params.FoundActor = FoundActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjectiveManager.GetObjectiveFromActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SearchingActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EObjectiveType        FilterType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerObjective*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_PlayerObjective* AME_PlayerObjectiveManager::GetObjectiveFromActor(class AActor* SearchingActor, Maneater_EObjectiveType FilterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetObjectiveFromActor");

	AME_PlayerObjectiveManager_GetObjectiveFromActor_Params params;
	params.SearchingActor = SearchingActor;
	params.FilterType = FilterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjectiveManager.GetObjectiveByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   SearchName                     (Parm, NativeAccessSpecifierPublic)
// class UME_PlayerObjective*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_PlayerObjective* AME_PlayerObjectiveManager::GetObjectiveByName(const struct FText& SearchName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetObjectiveByName");

	AME_PlayerObjectiveManager_GetObjectiveByName_Params params;
	params.SearchName = SearchName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjectiveManager.GetGamePercentComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_PlayerObjectiveManager::GetGamePercentComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetGamePercentComplete");

	AME_PlayerObjectiveManager_GetGamePercentComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjectiveManager.GetCurrentStoryIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_PlayerObjectiveManager::GetCurrentStoryIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.GetCurrentStoryIndex");

	AME_PlayerObjectiveManager_GetCurrentStoryIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerObjectiveManager.DelayedBossFightAvailableBroadcast
// (Final, Native, Private)
// Parameters:
// class UME_PlayerObjectiveBoss* BossObjective                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::DelayedBossFightAvailableBroadcast(class UME_PlayerObjectiveBoss* BossObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.DelayedBossFightAvailableBroadcast");

	AME_PlayerObjectiveManager_DelayedBossFightAvailableBroadcast_Params params;
	params.BossObjective = BossObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.CheckNextStoryEvent
// (Final, Native, Public)
void AME_PlayerObjectiveManager::CheckNextStoryEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.CheckNextStoryEvent");

	AME_PlayerObjectiveManager_CheckNextStoryEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.Cheat_ResetObjective
// (Final, Native, Public)
// Parameters:
// struct FName                   ObjName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::Cheat_ResetObjective(const struct FName& ObjName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.Cheat_ResetObjective");

	AME_PlayerObjectiveManager_Cheat_ResetObjective_Params params;
	params.ObjName = ObjName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.Cheat_ProgressObjective
// (Final, Native, Public)
// Parameters:
// struct FName                   ObjName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Increment                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::Cheat_ProgressObjective(const struct FName& ObjName, int Increment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.Cheat_ProgressObjective");

	AME_PlayerObjectiveManager_Cheat_ProgressObjective_Params params;
	params.ObjName = ObjName;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.Cheat_CompleteObjective
// (Final, Native, Public)
// Parameters:
// struct FName                   ObjName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerObjectiveManager::Cheat_CompleteObjective(const struct FName& ObjName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.Cheat_CompleteObjective");

	AME_PlayerObjectiveManager_Cheat_CompleteObjective_Params params;
	params.ObjName = ObjName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerObjectiveManager.AdvanceToNextStoryEvent
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerObjectiveManager::AdvanceToNextStoryEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerObjectiveManager.AdvanceToNextStoryEvent");

	AME_PlayerObjectiveManager_AdvanceToNextStoryEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkController.SetHUDVisibilityChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkController::SetHUDVisibilityChanged(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.SetHUDVisibilityChanged");

	AME_PlayerSharkController_SetHUDVisibilityChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkController.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)
void AME_PlayerSharkController::ReceivePostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.ReceivePostInitializeComponents");

	AME_PlayerSharkController_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkController.OnRevealMap
// (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 MapLocation                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkController::OnRevealMap(const struct FVector& MapLocation, float Radius, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.OnRevealMap");

	AME_PlayerSharkController_OnRevealMap_Params params;
	params.MapLocation = MapLocation;
	params.Radius = Radius;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkController.OnPossessedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AME_PlayerSharkCharacter* PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkController::OnPossessedPawn(class AME_PlayerSharkCharacter* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.OnPossessedPawn");

	AME_PlayerSharkController_OnPossessedPawn_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkController.OnPlayerDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AME_PlayerSharkCharacter* PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkController::OnPlayerDied(class AME_PlayerSharkCharacter* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.OnPlayerDied");

	AME_PlayerSharkController_OnPlayerDied_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkController.IsCinematicMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkController::IsCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.IsCinematicMode");

	AME_PlayerSharkController_IsCinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkController.GetKeysForAction
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputActionKeyMapping> Bindings                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkController::GetKeysForAction(const struct FName& ActionName, TArray<struct FInputActionKeyMapping>* Bindings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkController.GetKeysForAction");

	AME_PlayerSharkController_GetKeysForAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bindings != nullptr)
		*Bindings = params.Bindings;

}


// Function Maneater.ME_PlayerSharkMovementComponent.SetCrusingWaterLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewCrusingWaterline           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerSharkMovementComponent::SetCrusingWaterLine(bool bNewCrusingWaterline, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkMovementComponent.SetCrusingWaterLine");

	UME_PlayerSharkMovementComponent_SetCrusingWaterLine_Params params;
	params.bNewCrusingWaterline = bNewCrusingWaterline;
	params.ChangeContext = ChangeContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetWaypoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_WaypointMarker*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AME_WaypointMarker* AME_PlayerSharkState::SetWaypoint(class AActor* TargetActor, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetWaypoint");

	AME_PlayerSharkState_SetWaypoint_Params params;
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.SetStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EPersistentStatType> StatToModify                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetStat(TEnumAsByte<Maneater_EPersistentStatType> StatToModify, int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetStat");

	AME_PlayerSharkState_SetStat_Params params;
	params.StatToModify = StatToModify;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetSlottedEvolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EEvolutionSlot        EvolutionSlot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*     Evolution                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::SetSlottedEvolution(Maneater_EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetSlottedEvolution");

	AME_PlayerSharkState_SetSlottedEvolution_Params params;
	params.EvolutionSlot = EvolutionSlot;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.SetRespawnLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewRespawnLocation             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                NewRespawnRotation             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bSaveGame                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetRespawnLocation(const struct FVector& NewRespawnLocation, const struct FRotator& NewRespawnRotation, bool bSaveGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetRespawnLocation");

	AME_PlayerSharkState_SetRespawnLocation_Params params;
	params.NewRespawnLocation = NewRespawnLocation;
	params.NewRespawnRotation = NewRespawnRotation;
	params.bSaveGame = bSaveGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetNewEvolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsNewEvolution                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetNewEvolution(class UME_PlayerEvolution* Evolution, bool bIsNewEvolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetNewEvolution");

	AME_PlayerSharkState_SetNewEvolution_Params params;
	params.Evolution = Evolution;
	params.bIsNewEvolution = bIsNewEvolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetInventoryEvolutionEquipped
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EEvolutionSlot        AssignedSlot                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetInventoryEvolutionEquipped(class UME_PlayerEvolution* Evolution, Maneater_EEvolutionSlot AssignedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetInventoryEvolutionEquipped");

	AME_PlayerSharkState_SetInventoryEvolutionEquipped_Params params;
	params.Evolution = Evolution;
	params.AssignedSlot = AssignedSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetHasNewEvolutionAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAvailable                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetHasNewEvolutionAvailable(bool bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetHasNewEvolutionAvailable");

	AME_PlayerSharkState_SetHasNewEvolutionAvailable_Params params;
	params.bAvailable = bAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetGrowthStage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetGrowthStage(TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetGrowthStage");

	AME_PlayerSharkState_SetGrowthStage_Params params;
	params.NewGrowthStage = NewGrowthStage;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.SetGrowthLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewGrowthLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ForceGrowth                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCauseGameSave                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::SetGrowthLevel(int NewGrowthLevel, bool ForceGrowth, bool bCauseGameSave, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.SetGrowthLevel");

	AME_PlayerSharkState_SetGrowthLevel_Params params;
	params.NewGrowthLevel = NewGrowthLevel;
	params.ForceGrowth = ForceGrowth;
	params.bCauseGameSave = bCauseGameSave;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.RemoveWaypoint
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkState::RemoveWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.RemoveWaypoint");

	AME_PlayerSharkState_RemoveWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.RemoveInventoryEvolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerEvolution*     ToBeRemovedEvolution           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::RemoveInventoryEvolution(class UME_PlayerEvolution* ToBeRemovedEvolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.RemoveInventoryEvolution");

	AME_PlayerSharkState_RemoveInventoryEvolution_Params params;
	params.ToBeRemovedEvolution = ToBeRemovedEvolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.ReceiveBountyChange
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          NewBountyDollars               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  BountyChangeInstigator         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::ReceiveBountyChange(float NewBountyDollars, class AActor* BountyChangeInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.ReceiveBountyChange");

	AME_PlayerSharkState_ReceiveBountyChange_Params params;
	params.NewBountyDollars = NewBountyDollars;
	params.BountyChangeInstigator = BountyChangeInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.PurchaseInventoryEvolutionUpgrade
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::PurchaseInventoryEvolutionUpgrade(class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.PurchaseInventoryEvolutionUpgrade");

	AME_PlayerSharkState_PurchaseInventoryEvolutionUpgrade_Params params;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.OnWorldRegionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AME_WorldRegionVolume*   NewRegion                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::OnWorldRegionChanged(class AME_WorldRegionVolume* NewRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.OnWorldRegionChanged");

	AME_PlayerSharkState_OnWorldRegionChanged_Params params;
	params.NewRegion = NewRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.OnPlayerBountyChanged
// (Final, Native, Public)
// Parameters:
// float                          NewBountyDollars               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  BountyChangeInstigator         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::OnPlayerBountyChanged(float NewBountyDollars, class AActor* BountyChangeInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.OnPlayerBountyChanged");

	AME_PlayerSharkState_OnPlayerBountyChanged_Params params;
	params.NewBountyDollars = NewBountyDollars;
	params.BountyChangeInstigator = BountyChangeInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.OnNutrientsChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            NutrientDelta                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::OnNutrientsChanged(int NutrientDelta, TEnumAsByte<Maneater_ENutrientType> NutrientType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.OnNutrientsChanged");

	AME_PlayerSharkState_OnNutrientsChanged_Params params;
	params.NutrientDelta = NutrientDelta;
	params.NutrientType = NutrientType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.OnIncreasedGrowthStage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::OnIncreasedGrowthStage(TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.OnIncreasedGrowthStage");

	AME_PlayerSharkState_OnIncreasedGrowthStage_Params params;
	params.NewGrowthStage = NewGrowthStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.OnGainedGrowthLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            NewGrowthLevel                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::OnGainedGrowthLevel(int NewGrowthLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.OnGainedGrowthLevel");

	AME_PlayerSharkState_OnGainedGrowthLevel_Params params;
	params.NewGrowthLevel = NewGrowthLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.ModifyStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EPersistentStatType> StatToModify                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ValueChange                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_PlayerSharkState::ModifyStat(TEnumAsByte<Maneater_EPersistentStatType> StatToModify, int ValueChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.ModifyStat");

	AME_PlayerSharkState_ModifyStat_Params params;
	params.StatToModify = StatToModify;
	params.ValueChange = ValueChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.ModifyNutrients
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> NutrientToModify               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ValueChange                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::ModifyNutrients(TEnumAsByte<Maneater_ENutrientType> NutrientToModify, int ValueChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.ModifyNutrients");

	AME_PlayerSharkState_ModifyNutrients_Params params;
	params.NutrientToModify = NutrientToModify;
	params.ValueChange = ValueChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.ModifyGrowthStage
// (Final, Native, Public)
// Parameters:
// int                            GrowthChange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::ModifyGrowthStage(int GrowthChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.ModifyGrowthStage");

	AME_PlayerSharkState_ModifyGrowthStage_Params params;
	params.GrowthChange = GrowthChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.ModifyGrowthLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GrowthLevelChange              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::ModifyGrowthLevel(int GrowthLevelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.ModifyGrowthLevel");

	AME_PlayerSharkState_ModifyGrowthLevel_Params params;
	params.GrowthLevelChange = GrowthLevelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.LevelUpRequiresGrowth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewGrowthLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::LevelUpRequiresGrowth(int NewGrowthLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.LevelUpRequiresGrowth");

	AME_PlayerSharkState_LevelUpRequiresGrowth_Params params;
	params.NewGrowthLevel = NewGrowthLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.IsInstigatingAnyAlerts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::IsInstigatingAnyAlerts()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.IsInstigatingAnyAlerts");

	AME_PlayerSharkState_IsInstigatingAnyAlerts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.IsGrowthStageAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::IsGrowthStageAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.IsGrowthStageAvailable");

	AME_PlayerSharkState_IsGrowthStageAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.IsEvolutionEquip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::IsEvolutionEquip(class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.IsEvolutionEquip");

	AME_PlayerSharkState_IsEvolutionEquip_Params params;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetSlottedEvolution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionSlot        EvolutionSlot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_PlayerEvolution* AME_PlayerSharkState::GetSlottedEvolution(Maneater_EEvolutionSlot EvolutionSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetSlottedEvolution");

	AME_PlayerSharkState_GetSlottedEvolution_Params params;
	params.EvolutionSlot = EvolutionSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetNumberOfSetItemsEquippedByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionSetType     eType                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_PlayerSharkState::GetNumberOfSetItemsEquippedByType(Maneater_EEvolutionSetType eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetNumberOfSetItemsEquippedByType");

	AME_PlayerSharkState_GetNumberOfSetItemsEquippedByType_Params params;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetMinGrowthLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_PlayerSharkState::GetMinGrowthLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetMinGrowthLevel");

	AME_PlayerSharkState_GetMinGrowthLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetMaxGrowthLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AME_PlayerSharkState::GetMaxGrowthLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetMaxGrowthLevel");

	AME_PlayerSharkState_GetMaxGrowthLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetInventoryEvolutions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UME_PlayerEvolution*> Evolutions                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EEvolutionSlot        SlotTypeFilter                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::GetInventoryEvolutions(TArray<class UME_PlayerEvolution*>* Evolutions, Maneater_EEvolutionSlot SlotTypeFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetInventoryEvolutions");

	AME_PlayerSharkState_GetInventoryEvolutions_Params params;
	params.SlotTypeFilter = SlotTypeFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Evolutions != nullptr)
		*Evolutions = params.Evolutions;

}


// Function Maneater.ME_PlayerSharkState.GetInventoryEvolutionData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEvolutionData          OutEvolutionData               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::GetInventoryEvolutionData(class UME_PlayerEvolution* Evolution, struct FEvolutionData* OutEvolutionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetInventoryEvolutionData");

	AME_PlayerSharkState_GetInventoryEvolutionData_Params params;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutEvolutionData != nullptr)
		*OutEvolutionData = params.OutEvolutionData;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetHasNewEvolutionAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::GetHasNewEvolutionAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetHasNewEvolutionAvailable");

	AME_PlayerSharkState_GetHasNewEvolutionAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetGrowthPct
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bRelativeToNextStage           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AME_PlayerSharkState::GetGrowthPct(bool bRelativeToNextStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetGrowthPct");

	AME_PlayerSharkState_GetGrowthPct_Params params;
	params.bRelativeToNextStage = bRelativeToNextStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetEvolutionSetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionSetType     eType                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText AME_PlayerSharkState::GetEvolutionSetName(Maneater_EEvolutionSetType eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetEvolutionSetName");

	AME_PlayerSharkState_GetEvolutionSetName_Params params;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetEvolutionsBelongingToSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionSetType     eType                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UME_PlayerEvolution*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UME_PlayerEvolution*> AME_PlayerSharkState::GetEvolutionsBelongingToSet(Maneater_EEvolutionSetType eType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetEvolutionsBelongingToSet");

	AME_PlayerSharkState_GetEvolutionsBelongingToSet_Params params;
	params.eType = eType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.GetDisplayStatsForEvolutionSetBonus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionSetType     eType                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NumEquip                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEvolutionDisplayStat> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FEvolutionDisplayStat> AME_PlayerSharkState::GetDisplayStatsForEvolutionSetBonus(Maneater_EEvolutionSetType eType, int NumEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.GetDisplayStatsForEvolutionSetBonus");

	AME_PlayerSharkState_GetDisplayStatsForEvolutionSetBonus_Params params;
	params.eType = eType;
	params.NumEquip = NumEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.DeductNutrientCost
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEvolutionUpgradeCost   UpgradeCost                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::DeductNutrientCost(const struct FEvolutionUpgradeCost& UpgradeCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.DeductNutrientCost");

	AME_PlayerSharkState_DeductNutrientCost_Params params;
	params.UpgradeCost = UpgradeCost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.CheckAndGrantPlayerEntitlements
// (Final, Native, Public, BlueprintCallable)
void AME_PlayerSharkState::CheckAndGrantPlayerEntitlements()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.CheckAndGrantPlayerEntitlements");

	AME_PlayerSharkState_CheckAndGrantPlayerEntitlements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerSharkState.CanPurchaseEvolutionUpgrade
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEvolutionUpgradePrice  UpgradePrice                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::CanPurchaseEvolutionUpgrade(const struct FEvolutionUpgradePrice& UpgradePrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.CanPurchaseEvolutionUpgrade");

	AME_PlayerSharkState_CanPurchaseEvolutionUpgrade_Params params;
	params.UpgradePrice = UpgradePrice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.CanAffordEvolutionCost
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEvolutionUpgradeCost   UpgradeCost                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::CanAffordEvolutionCost(const struct FEvolutionUpgradeCost& UpgradeCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.CanAffordEvolutionCost");

	AME_PlayerSharkState_CanAffordEvolutionCost_Params params;
	params.UpgradeCost = UpgradeCost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.AddInventoryEvolution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerEvolution*     NewEvolution                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EEvolutionRarity      Rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_PlayerSharkState::AddInventoryEvolution(class UME_PlayerEvolution* NewEvolution, Maneater_EEvolutionRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.AddInventoryEvolution");

	AME_PlayerSharkState_AddInventoryEvolution_Params params;
	params.NewEvolution = NewEvolution;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerSharkState.AcceptGrowthStageAtGrotto
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> PlayerGrowthStage              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_PlayerSharkState::AcceptGrowthStageAtGrotto(TEnumAsByte<Maneater_EPlayerGrowthStage> PlayerGrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerSharkState.AcceptGrowthStageAtGrotto");

	AME_PlayerSharkState_AcceptGrowthStageAtGrotto_Params params;
	params.PlayerGrowthStage = PlayerGrowthStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerTargetingSystem.SetShowSilhouette
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PingTarget                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EOutlineColor         ForcedOutlineColor             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerTargetingSystem::SetShowSilhouette(class AActor* PingTarget, bool bShow, Maneater_EOutlineColor ForcedOutlineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.SetShowSilhouette");

	UME_PlayerTargetingSystem_SetShowSilhouette_Params params;
	params.PingTarget = PingTarget;
	params.bShow = bShow;
	params.ForcedOutlineColor = ForcedOutlineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerTargetingSystem.RemovePotentialTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerTargetingSystem::RemovePotentialTarget(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.RemovePotentialTarget");

	UME_PlayerTargetingSystem_RemovePotentialTarget_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerTargetingSystem.GetSoftLockOnTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_PlayerTargetingSystem::GetSoftLockOnTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetSoftLockOnTargetLocation");

	UME_PlayerTargetingSystem_GetSoftLockOnTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetLockOnTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_PlayerTargetingSystem::GetLockOnTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetLockOnTargetLocation");

	UME_PlayerTargetingSystem_GetLockOnTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetFocusedTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_PlayerTargetingSystem::GetFocusedTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetFocusedTargetLocation");

	UME_PlayerTargetingSystem_GetFocusedTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetCurrentWhipShotTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_PlayerTargetingSystem::GetCurrentWhipShotTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetCurrentWhipShotTarget");

	UME_PlayerTargetingSystem_GetCurrentWhipShotTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetCurrentSoftLockOnTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_PlayerTargetingSystem::GetCurrentSoftLockOnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetCurrentSoftLockOnTarget");

	UME_PlayerTargetingSystem_GetCurrentSoftLockOnTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetCurrentLockOnTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_PlayerTargetingSystem::GetCurrentLockOnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetCurrentLockOnTarget");

	UME_PlayerTargetingSystem_GetCurrentLockOnTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_PlayerTargetingSystem::GetCurrentFocusedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedTarget");

	UME_PlayerTargetingSystem_GetCurrentFocusedTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedObjectiveTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_PlayerTargetingSystem::GetCurrentFocusedObjectiveTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedObjectiveTarget");

	UME_PlayerTargetingSystem_GetCurrentFocusedObjectiveTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_PlayerTargetingSystem.AddPotentialTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyWhipshotTarget            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsObjectiveTarget             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_PlayerTargetingSystem::AddPotentialTarget(class AActor* Actor, bool bOnlyWhipshotTarget, bool bIsObjectiveTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerTargetingSystem.AddPotentialTarget");

	UME_PlayerTargetingSystem_AddPotentialTarget_Params params;
	params.Actor = Actor;
	params.bOnlyWhipshotTarget = bOnlyWhipshotTarget;
	params.bIsObjectiveTarget = bIsObjectiveTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_PlayerUIAvatarActor.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)
void AME_PlayerUIAvatarActor::ReceivePostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_PlayerUIAvatarActor.ReceivePostInitializeComponents");

	AME_PlayerUIAvatarActor_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Projectile.OnPhysicsVolumeChanged
// (Final, Native, Public)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Projectile::OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Projectile.OnPhysicsVolumeChanged");

	AME_Projectile_OnPhysicsVolumeChanged_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_Projectile.OnHitActor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_Projectile::OnHitActor(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_Projectile.OnHitActor");

	AME_Projectile_OnHitActor_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveObjectBase.SetDirty
// (Final, Native, Public, BlueprintCallable)
void UME_SaveObjectBase::SetDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveObjectBase.SetDirty");

	UME_SaveObjectBase_SetDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveObjectBase.SetClean
// (Final, Native, Public, BlueprintCallable)
void UME_SaveObjectBase::SetClean()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveObjectBase.SetClean");

	UME_SaveObjectBase_SetClean_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveObjectBase.IsDirty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveObjectBase::IsDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveObjectBase.IsDirty");

	UME_SaveObjectBase_IsDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.SetTigerSkinEvolutionRarity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EEvolutionRarity      eRarity                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveGameObject::SetTigerSkinEvolutionRarity(Maneater_EEvolutionRarity eRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.SetTigerSkinEvolutionRarity");

	UME_SaveGameObject_SetTigerSkinEvolutionRarity_Params params;
	params.eRarity = eRarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveGameObject.SaveObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToSave                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                  GameWorld                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveGameObject::SaveObject(class UObject* ObjectToSave, class UWorld* GameWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.SaveObject");

	UME_SaveGameObject_SaveObject_Params params;
	params.ObjectToSave = ObjectToSave;
	params.GameWorld = GameWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.SaveActorWithTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToSave                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveGameObject::SaveActorWithTransform(class AActor* ActorToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.SaveActorWithTransform");

	UME_SaveGameObject_SaveActorWithTransform_Params params;
	params.ActorToSave = ActorToSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.RemoveSavedObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToRemove                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveGameObject::RemoveSavedObject(class UObject* ObjectToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.RemoveSavedObject");

	UME_SaveGameObject_RemoveSavedObject_Params params;
	params.ObjectToRemove = ObjectToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.LoadObjectProperties
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToLoad                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWorld*                  GameWorld                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOnlyClassMustMatch            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveGameObject::LoadObjectProperties(class UObject* ObjectToLoad, class UWorld* GameWorld, bool bOnlyClassMustMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.LoadObjectProperties");

	UME_SaveGameObject_LoadObjectProperties_Params params;
	params.ObjectToLoad = ObjectToLoad;
	params.GameWorld = GameWorld;
	params.bOnlyClassMustMatch = bOnlyClassMustMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.LoadAllObjectsOfClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ClassToLoad                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UObject*> UME_SaveGameObject::LoadAllObjectsOfClass(class UClass* ClassToLoad, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.LoadAllObjectsOfClass");

	UME_SaveGameObject_LoadAllObjectsOfClass_Params params;
	params.ClassToLoad = ClassToLoad;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.LoadAllActorsWithTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ClassToLoad                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class AActor*> UME_SaveGameObject::LoadAllActorsWithTransform(class UClass* ClassToLoad, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.LoadAllActorsWithTransform");

	UME_SaveGameObject_LoadAllActorsWithTransform_Params params;
	params.ClassToLoad = ClassToLoad;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.LoadActorWithTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActorName                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UME_SaveGameObject::LoadActorWithTransform(const struct FString& ActorName, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.LoadActorWithTransform");

	UME_SaveGameObject_LoadActorWithTransform_Params params;
	params.ActorName = ActorName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveGameObject.GetTigerSkinEvolutionRarity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EEvolutionRarity      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EEvolutionRarity UME_SaveGameObject::GetTigerSkinEvolutionRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveGameObject.GetTigerSkinEvolutionRarity");

	UME_SaveGameObject_GetTigerSkinEvolutionRarity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.SetTutorialPopupEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetTutorialPopupEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetTutorialPopupEnabled");

	UME_SaveProfileObject_SetTutorialPopupEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetSubtitlesEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetSubtitlesEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetSubtitlesEnabled");

	UME_SaveProfileObject_SetSubtitlesEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetSfxVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetSfxVolume(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetSfxVolume");

	UME_SaveProfileObject_SetSfxVolume_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetRightStickSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Sensitivity                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetRightStickSensitivity(float Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetRightStickSensitivity");

	UME_SaveProfileObject_SetRightStickSensitivity_Params params;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetRaytracingQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Quality                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetRaytracingQuality(int Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetRaytracingQuality");

	UME_SaveProfileObject_SetRaytracingQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetNarratorVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetNarratorVolume(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetNarratorVolume");

	UME_SaveProfileObject_SetNarratorVolume_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetMusicVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetMusicVolume(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetMusicVolume");

	UME_SaveProfileObject_SetMusicVolume_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetMouseSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Sensitivity                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetMouseSensitivity(float Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetMouseSensitivity");

	UME_SaveProfileObject_SetMouseSensitivity_Params params;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetMasterVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetMasterVolume(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetMasterVolume");

	UME_SaveProfileObject_SetMasterVolume_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetLeftStickSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Sensitivity                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetLeftStickSensitivity(float Sensitivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetLeftStickSensitivity");

	UME_SaveProfileObject_SetLeftStickSensitivity_Params params;
	params.Sensitivity = Sensitivity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetInvertMouseYEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetInvertMouseYEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetInvertMouseYEnabled");

	UME_SaveProfileObject_SetInvertMouseYEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetInvertMouseY
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetInvertMouseY(bool Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetInvertMouseY");

	UME_SaveProfileObject_SetInvertMouseY_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetInvertGamepadYEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetInvertGamepadYEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetInvertGamepadYEnabled");

	UME_SaveProfileObject_SetInvertGamepadYEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetInvertGamepadY
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetInvertGamepadY(bool Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetInvertGamepadY");

	UME_SaveProfileObject_SetInvertGamepadY_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetDialogVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetDialogVolume(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetDialogVolume");

	UME_SaveProfileObject_SetDialogVolume_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetControlScheme
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetControlScheme(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetControlScheme");

	UME_SaveProfileObject_SetControlScheme_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.SetControllerVibrationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::SetControllerVibrationEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.SetControllerVibrationEnabled");

	UME_SaveProfileObject_SetControllerVibrationEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.IsMouseYInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::IsMouseYInverted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.IsMouseYInverted");

	UME_SaveProfileObject_IsMouseYInverted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.IsInvertMouseYEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::IsInvertMouseYEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.IsInvertMouseYEnabled");

	UME_SaveProfileObject_IsInvertMouseYEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.IsInvertGamepadYEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::IsInvertGamepadYEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.IsInvertGamepadYEnabled");

	UME_SaveProfileObject_IsInvertGamepadYEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.IsGamepadYInverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::IsGamepadYInverted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.IsGamepadYInverted");

	UME_SaveProfileObject_IsGamepadYInverted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetTutorialPopupEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::GetTutorialPopupEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetTutorialPopupEnabled");

	UME_SaveProfileObject_GetTutorialPopupEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetSubtitlesEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::GetSubtitlesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetSubtitlesEnabled");

	UME_SaveProfileObject_GetSubtitlesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetSfxVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetSfxVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetSfxVolume");

	UME_SaveProfileObject_GetSfxVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetRightStickSensitivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetRightStickSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetRightStickSensitivity");

	UME_SaveProfileObject_GetRightStickSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetRaytracingQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_SaveProfileObject::GetRaytracingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetRaytracingQuality");

	UME_SaveProfileObject_GetRaytracingQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetNarratorVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetNarratorVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetNarratorVolume");

	UME_SaveProfileObject_GetNarratorVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMusicVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMusicVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMusicVolume");

	UME_SaveProfileObject_GetMusicVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMouseSensitivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMouseSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMouseSensitivity");

	UME_SaveProfileObject_GetMouseSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMinStickSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMinStickSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMinStickSensitivity");

	UME_SaveProfileObject_GetMinStickSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMinMouseSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMinMouseSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMinMouseSensitivity");

	UME_SaveProfileObject_GetMinMouseSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMaxStickSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMaxStickSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMaxStickSensitivity");

	UME_SaveProfileObject_GetMaxStickSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMaxMouseSensitivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMaxMouseSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMaxMouseSensitivity");

	UME_SaveProfileObject_GetMaxMouseSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetMasterVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetMasterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetMasterVolume");

	UME_SaveProfileObject_GetMasterVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetLeftStickSensitivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetLeftStickSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetLeftStickSensitivity");

	UME_SaveProfileObject_GetLeftStickSensitivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetDialogVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SaveProfileObject::GetDialogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetDialogVolume");

	UME_SaveProfileObject_GetDialogVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetControlScheme
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_SaveProfileObject::GetControlScheme()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetControlScheme");

	UME_SaveProfileObject_GetControlScheme_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.GetControllerVibrationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveProfileObject::GetControllerVibrationEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.GetControllerVibrationEnabled");

	UME_SaveProfileObject_GetControllerVibrationEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.DEV_SetBoostType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SaveProfileObject::DEV_SetBoostType(unsigned char idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.DEV_SetBoostType");

	UME_SaveProfileObject_DEV_SetBoostType_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveProfileObject.DEV_GetBoostType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UME_SaveProfileObject::DEV_GetBoostType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.DEV_GetBoostType");

	UME_SaveProfileObject_DEV_GetBoostType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveProfileObject.ApplyAudioSettings
// (Final, Native, Public, BlueprintCallable)
void UME_SaveProfileObject::ApplyAudioSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveProfileObject.ApplyAudioSettings");

	UME_SaveProfileObject_ApplyAudioSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveProfileData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveSystemStatics::STATIC_SaveCurrentlyActiveProfileData(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveProfileData");

	UME_SaveSystemStatics_SaveCurrentlyActiveProfileData_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveGameToSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceFlush                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveSystemStatics::STATIC_SaveCurrentlyActiveGameToSlot(class UObject* WorldContextObject, bool bForceFlush)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveGameToSlot");

	UME_SaveSystemStatics_SaveCurrentlyActiveGameToSlot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bForceFlush = bForceFlush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.PeekSaveGameSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveGameObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SaveGameObject* UME_SaveSystemStatics::STATIC_PeekSaveGameSlot(int Slot, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.PeekSaveGameSlot");

	UME_SaveSystemStatics_PeekSaveGameSlot_Params params;
	params.Slot = Slot;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.LoadSaveGameSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveGameObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SaveGameObject* UME_SaveSystemStatics::STATIC_LoadSaveGameSlot(int Slot, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.LoadSaveGameSlot");

	UME_SaveSystemStatics_LoadSaveGameSlot_Params params;
	params.Slot = Slot;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.LoadProfileData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObjet              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveProfileObject*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SaveProfileObject* UME_SaveSystemStatics::STATIC_LoadProfileData(class UObject* WorldContextObjet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.LoadProfileData");

	UME_SaveSystemStatics_LoadProfileData_Params params;
	params.WorldContextObjet = WorldContextObjet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.GetSaveName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UME_SaveSystemStatics::STATIC_GetSaveName(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.GetSaveName");

	UME_SaveSystemStatics_GetSaveName_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.GetSaveGameInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveGameObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SaveGameObject* UME_SaveSystemStatics::STATIC_GetSaveGameInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.GetSaveGameInstance");

	UME_SaveSystemStatics_GetSaveGameInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.GetSavedProfileTimeStamp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FDateTime UME_SaveSystemStatics::STATIC_GetSavedProfileTimeStamp(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.GetSavedProfileTimeStamp");

	UME_SaveSystemStatics_GetSavedProfileTimeStamp_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.GetSavedProfileDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UME_SaveSystemStatics::STATIC_GetSavedProfileDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.GetSavedProfileDir");

	UME_SaveSystemStatics_GetSavedProfileDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.GetProfileSaveInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveProfileObject*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SaveProfileObject* UME_SaveSystemStatics::STATIC_GetProfileSaveInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.GetProfileSaveInstance");

	UME_SaveSystemStatics_GetProfileSaveInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.GetPreviouslyLoadedSaveSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_SaveSystemStatics::STATIC_GetPreviouslyLoadedSaveSlot(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.GetPreviouslyLoadedSaveSlot");

	UME_SaveSystemStatics_GetPreviouslyLoadedSaveSlot_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.DestroySaveGameInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveSystemStatics::STATIC_DestroySaveGameInstance(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.DestroySaveGameInstance");

	UME_SaveSystemStatics_DestroySaveGameInstance_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.DeleteSaveGameSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveSystemStatics::STATIC_DeleteSaveGameSlot(int Slot, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.DeleteSaveGameSlot");

	UME_SaveSystemStatics_DeleteSaveGameSlot_Params params;
	params.Slot = Slot;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SaveSystemStatics.CurrentPlayerDoesSlotHaveSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SaveSystemStatics::STATIC_CurrentPlayerDoesSlotHaveSave(int Slot, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SaveSystemStatics.CurrentPlayerDoesSlotHaveSave");

	UME_SaveSystemStatics_CurrentPlayerDoesSlotHaveSave_Params params;
	params.Slot = Slot;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SignificanceEntity.PostSignificance
// (Native, Public)
// Parameters:
// class UObject*                 SignificanceObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OldSignificance                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewSignificance                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUnregistered                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_SignificanceEntity::PostSignificance(class UObject* SignificanceObject, float OldSignificance, float NewSignificance, bool bUnregistered)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SignificanceEntity.PostSignificance");

	UME_SignificanceEntity_PostSignificance_Params params;
	params.SignificanceObject = SignificanceObject;
	params.OldSignificance = OldSignificance;
	params.NewSignificance = NewSignificance;
	params.bUnregistered = bUnregistered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SignificanceEntity.CalculateSignificance
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 SignificanceObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              ViewPoint                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SignificanceEntity::CalculateSignificance(class UObject* SignificanceObject, const struct FTransform& ViewPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SignificanceEntity.CalculateSignificance");

	UME_SignificanceEntity_CalculateSignificance_Params params;
	params.SignificanceObject = SignificanceObject;
	params.ViewPoint = ViewPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.OnPlayerFocused
// (Native, Event, Public, BlueprintEvent)
void UME_SonarDetectableInterface::OnPlayerFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.OnPlayerFocused");

	UME_SonarDetectableInterface_OnPlayerFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SonarDetectableInterface.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UME_SonarDetectableInterface::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.OnPingedByPlayerSonar");

	UME_SonarDetectableInterface_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SonarDetectableInterface.OnFoundBySonar
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UME_SonarDetectableInterface::OnFoundBySonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.OnFoundBySonar");

	UME_SonarDetectableInterface_OnFoundBySonar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SonarDetectableInterface.GetSonarWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetComponent* UME_SonarDetectableInterface::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetSonarWidget");

	UME_SonarDetectableInterface_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetMaxDistanceVisible
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_SonarDetectableInterface::GetMaxDistanceVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetMaxDistanceVisible");

	UME_SonarDetectableInterface_GetMaxDistanceVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetFriendlyName
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UME_SonarDetectableInterface::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetFriendlyName");

	UME_SonarDetectableInterface_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetFocusPriority
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_SonarDetectableInterface::GetFocusPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetFocusPriority");

	UME_SonarDetectableInterface_GetFocusPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetDisplayLevel
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UME_SonarDetectableInterface::GetDisplayLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetDisplayLevel");

	UME_SonarDetectableInterface_GetDisplayLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetDetectableLocation
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AttackerLocation               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_SonarDetectableInterface::GetDetectableLocation(const struct FVector& AttackerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetDetectableLocation");

	UME_SonarDetectableInterface_GetDetectableLocation_Params params;
	params.AttackerLocation = AttackerLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetDetectableComponentLocationOffset
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UME_SonarDetectableInterface::GetDetectableComponentLocationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetDetectableComponentLocationOffset");

	UME_SonarDetectableInterface_GetDetectableComponentLocationOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.GetDetectableComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* UME_SonarDetectableInterface::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.GetDetectableComponent");

	UME_SonarDetectableInterface_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.CanBeLockedOnTo
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SonarDetectableInterface::CanBeLockedOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.CanBeLockedOnTo");

	UME_SonarDetectableInterface_CanBeLockedOnTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarDetectableInterface.CanBeFocused
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SonarDetectableInterface::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarDetectableInterface.CanBeFocused");

	UME_SonarDetectableInterface_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SonarManager.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bCinematicMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_SonarManager::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SonarManager.OnCinematicModeChanged");

	AME_SonarManager_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SpawnManagerBase.AISpawned
// (Native, Public, BlueprintCallable)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_SpawnManagerBase::AISpawned(class AME_AIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnManagerBase.AISpawned");

	AME_SpawnManagerBase_AISpawned_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SpawnlistCondition.ConditionIsValid
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WorldContextActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SpawnlistCondition::ConditionIsValid(class AActor* WorldContextActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnlistCondition.ConditionIsValid");

	UME_SpawnlistCondition_ConditionIsValid_Params params;
	params.WorldContextActor = WorldContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SpawnPoolEntity.ResetEntity
// (Native, Public)
void UME_SpawnPoolEntity::ResetEntity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPoolEntity.ResetEntity");

	UME_SpawnPoolEntity_ResetEntity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SpawnPoolEntity.IsExemptFromPool
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SpawnPoolEntity::IsExemptFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPoolEntity.IsExemptFromPool");

	UME_SpawnPoolEntity_IsExemptFromPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SpawnPoolEntity.IsDespawning
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_SpawnPoolEntity::IsDespawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPoolEntity.IsDespawning");

	UME_SpawnPoolEntity_IsDespawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_SpawnPoolEntity.InitEntity
// (Native, Public, BlueprintCallable)
void UME_SpawnPoolEntity::InitEntity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPoolEntity.InitEntity");

	UME_SpawnPoolEntity_InitEntity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_SpawnPoolEntity.EntityDespawned
// (Native, Public)
void UME_SpawnPoolEntity::EntityDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_SpawnPoolEntity.EntityDespawned");

	UME_SpawnPoolEntity_EntityDespawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnWhipShotImpact
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   WhipInstigator                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnWhipShotImpact(class APawn* WhipInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnWhipShotImpact");

	UME_ThrashableInterface_OnWhipShotImpact_Params params;
	params.WhipInstigator = WhipInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnWhipShotEnd
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class APawn*                   WhipInstigator                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 EndVelocity                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           GrabbedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnWhipShotEnd(class APawn* WhipInstigator, const struct FVector& EndVelocity, bool GrabbedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnWhipShotEnd");

	UME_ThrashableInterface_OnWhipShotEnd_Params params;
	params.WhipInstigator = WhipInstigator;
	params.EndVelocity = EndVelocity;
	params.GrabbedActor = GrabbedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnWhipShotBegin
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class APawn*                   WhipInstigator                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WhipVelocity                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnWhipShotBegin(class APawn* WhipInstigator, const struct FVector& WhipVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnWhipShotBegin");

	UME_ThrashableInterface_OnWhipShotBegin_Params params;
	params.WhipInstigator = WhipInstigator;
	params.WhipVelocity = WhipVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnReleasedBy
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ReleasingAnimal                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIgnoreFlee                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bBrokeAway                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnReleasedBy(class AME_AnimalCharacter* ReleasingAnimal, bool bIgnoreFlee, bool bBrokeAway)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnReleasedBy");

	UME_ThrashableInterface_OnReleasedBy_Params params;
	params.ReleasingAnimal = ReleasingAnimal;
	params.bIgnoreFlee = bIgnoreFlee;
	params.bBrokeAway = bBrokeAway;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnGrabPointDamagedVFX
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FThrashGrabPoint        GrabPoint                      (Parm, NativeAccessSpecifierPublic)
// float                          DamageToApply                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DamageNormal                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DamageLocation                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnGrabPointDamagedVFX(const struct FThrashGrabPoint& GrabPoint, float DamageToApply, const struct FVector& DamageNormal, const struct FVector& DamageLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnGrabPointDamagedVFX");

	UME_ThrashableInterface_OnGrabPointDamagedVFX_Params params;
	params.GrabPoint = GrabPoint;
	params.DamageToApply = DamageToApply;
	params.DamageNormal = DamageNormal;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnGrabPointDamaged
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FThrashGrabPoint        GrabPoint                      (Parm, NativeAccessSpecifierPublic)
// float                          DamageToApply                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EPhysicalSurface> PhysSurface                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     DamagedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     InstigatingComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DamageNormal                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 DamageLocation                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnGrabPointDamaged(const struct FThrashGrabPoint& GrabPoint, float DamageToApply, TEnumAsByte<Engine_EPhysicalSurface> PhysSurface, class UPrimitiveComponent* DamagedComponent, class AActor* DamageInstigator, class UPrimitiveComponent* InstigatingComponent, const struct FVector& DamageNormal, const struct FVector& DamageLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnGrabPointDamaged");

	UME_ThrashableInterface_OnGrabPointDamaged_Params params;
	params.GrabPoint = GrabPoint;
	params.DamageToApply = DamageToApply;
	params.PhysSurface = PhysSurface;
	params.DamagedComponent = DamagedComponent;
	params.DamageInstigator = DamageInstigator;
	params.InstigatingComponent = InstigatingComponent;
	params.DamageNormal = DamageNormal;
	params.DamageLocation = DamageLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnGrabPointConsumed
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ConsumingAnimal                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FThrashGrabPoint        ConsumedGrabPoint              (Parm, NativeAccessSpecifierPublic)
// struct FName                   GoreCapBoneName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnGrabPointConsumed");

	UME_ThrashableInterface_OnGrabPointConsumed_Params params;
	params.ConsumingAnimal = ConsumingAnimal;
	params.ConsumedGrabPoint = ConsumedGrabPoint;
	params.GoreCapBoneName = GoreCapBoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnGrabPointChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     GrabbedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GrabPointIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnGrabPointChanged(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnGrabPointChanged");

	UME_ThrashableInterface_OnGrabPointChanged_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.GrabbedComponent = GrabbedComponent;
	params.GrabPointIndex = GrabPointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnGrabbedBy
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     GrabbedComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            GrabPointIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnGrabbedBy");

	UME_ThrashableInterface_OnGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.GrabbedComponent = GrabbedComponent;
	params.GrabPointIndex = GrabPointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.OnConsumedWhole
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ConsumingAnimal                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::OnConsumedWhole(class AME_AnimalCharacter* ConsumingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.OnConsumedWhole");

	UME_ThrashableInterface_OnConsumedWhole_Params params;
	params.ConsumingAnimal = ConsumingAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_ThrashableInterface.MoveActorToMeshPositionOnRelease
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_ThrashableInterface::MoveActorToMeshPositionOnRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.MoveActorToMeshPositionOnRelease");

	UME_ThrashableInterface_MoveActorToMeshPositionOnRelease_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipshotSpinning
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ThrashableInterface::GetWhipshotSpinning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipshotSpinning");

	UME_ThrashableInterface_GetWhipshotSpinning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipshotRotationSpeed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ThrashableInterface::GetWhipshotRotationSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipshotRotationSpeed");

	UME_ThrashableInterface_GetWhipshotRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipshotRolling
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ThrashableInterface::GetWhipshotRolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipshotRolling");

	UME_ThrashableInterface_GetWhipshotRolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipShotMovementClass
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UME_ThrashableInterface::GetWhipShotMovementClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipShotMovementClass");

	UME_ThrashableInterface_GetWhipShotMovementClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipshotLandClearance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ThrashableInterface::GetWhipshotLandClearance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipshotLandClearance");

	UME_ThrashableInterface_GetWhipshotLandClearance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipShotImpactEffect
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UClass* UME_ThrashableInterface::GetWhipShotImpactEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipShotImpactEffect");

	UME_ThrashableInterface_GetWhipShotImpactEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipShotFlightType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EMECustomMovementMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_EMECustomMovementMode> UME_ThrashableInterface::GetWhipShotFlightType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipShotFlightType");

	UME_ThrashableInterface_GetWhipShotFlightType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetWhipShotFlightParticleEffect
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystem* UME_ThrashableInterface::GetWhipShotFlightParticleEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetWhipShotFlightParticleEffect");

	UME_ThrashableInterface_GetWhipShotFlightParticleEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetThrashableMesh
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMeshComponent* UME_ThrashableInterface::GetThrashableMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetThrashableMesh");

	UME_ThrashableInterface_GetThrashableMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetSize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UME_ThrashableInterface::GetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetSize");

	UME_ThrashableInterface_GetSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.GetGrabPoints
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FThrashGrabPoint> GrabPoints                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UME_ThrashableInterface::GetGrabPoints(class AME_AnimalCharacter* GrabbingAnimal, TArray<struct FThrashGrabPoint>* GrabPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.GetGrabPoints");

	UME_ThrashableInterface_GetGrabPoints_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GrabPoints != nullptr)
		*GrabPoints = params.GrabPoints;

}


// Function Maneater.ME_ThrashableInterface.CanBeWhipShot
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_ThrashableInterface::CanBeWhipShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.CanBeWhipShot");

	UME_ThrashableInterface_CanBeWhipShot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.CanBeGrabbedBy
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_ThrashableInterface::CanBeGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.CanBeGrabbedBy");

	UME_ThrashableInterface_CanBeGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_ThrashableInterface.CanBeConsumedWholeBy
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UME_ThrashableInterface::CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_ThrashableInterface.CanBeConsumedWholeBy");

	UME_ThrashableInterface_CanBeConsumedWholeBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TimeofDayInfo.SetTimeOfDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewHourOfDay                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TimeofDayInfo::SetTimeOfDay(float NewHourOfDay, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeofDayInfo.SetTimeOfDay");

	AME_TimeofDayInfo_SetTimeOfDay_Params params;
	params.NewHourOfDay = NewHourOfDay;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeofDayInfo.SetPauseState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewPause                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TimeofDayInfo::SetPauseState(bool bNewPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeofDayInfo.SetPauseState");

	AME_TimeofDayInfo_SetPauseState_Params params;
	params.bNewPause = bNewPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeofDayInfo.GetPauseState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TimeofDayInfo::GetPauseState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeofDayInfo.GetPauseState");

	AME_TimeofDayInfo_GetPauseState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TimeOfDayWorldActor.UpdateTimeOfDayCubemaps
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          InTimeOfDay                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TimeOfDayWorldActor::UpdateTimeOfDayCubemaps(float InTimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.UpdateTimeOfDayCubemaps");

	AME_TimeOfDayWorldActor_UpdateTimeOfDayCubemaps_Params params;
	params.InTimeOfDay = InTimeOfDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TriggerStartNightTime
// (Event, Protected, BlueprintEvent)
void AME_TimeOfDayWorldActor::TriggerStartNightTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TriggerStartNightTime");

	AME_TimeOfDayWorldActor_TriggerStartNightTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TriggerStartDayTime
// (Event, Protected, BlueprintEvent)
void AME_TimeOfDayWorldActor::TriggerStartDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TriggerStartDayTime");

	AME_TimeOfDayWorldActor_TriggerStartDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TriggerForceChangeTime
// (Event, Protected, BlueprintEvent)
void AME_TimeOfDayWorldActor::TriggerForceChangeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TriggerForceChangeTime");

	AME_TimeOfDayWorldActor_TriggerForceChangeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TriggerFogBelowWater
// (Event, Protected, BlueprintEvent)
void AME_TimeOfDayWorldActor::TriggerFogBelowWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TriggerFogBelowWater");

	AME_TimeOfDayWorldActor_TriggerFogBelowWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TriggerFogAboveWater
// (Event, Protected, BlueprintEvent)
void AME_TimeOfDayWorldActor::TriggerFogAboveWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TriggerFogAboveWater");

	AME_TimeOfDayWorldActor_TriggerFogAboveWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TickFogTransition
// (Final, Native, Protected, BlueprintCallable)
void AME_TimeOfDayWorldActor::TickFogTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TickFogTransition");

	AME_TimeOfDayWorldActor_TickFogTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.TickDayNightTransition
// (Final, Native, Protected, BlueprintCallable)
void AME_TimeOfDayWorldActor::TickDayNightTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.TickDayNightTransition");

	AME_TimeOfDayWorldActor_TickDayNightTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.OnNewFogVolumeEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EFogState> PlayerFogOverride              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TimeOfDayWorldActor::OnNewFogVolumeEntered(TEnumAsByte<Maneater_EFogState> PlayerFogOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.OnNewFogVolumeEntered");

	AME_TimeOfDayWorldActor_OnNewFogVolumeEntered_Params params;
	params.PlayerFogOverride = PlayerFogOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.IsDaytime
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TimeOfDayWorldActor::IsDaytime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.IsDaytime");

	AME_TimeOfDayWorldActor_IsDaytime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TimeOfDayWorldActor.InitTODActor
// (Final, Native, Protected, BlueprintCallable)
void AME_TimeOfDayWorldActor::InitTODActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.InitTODActor");

	AME_TimeOfDayWorldActor_InitTODActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.InitTimeOfDaySettings
// (Final, Native, Protected, BlueprintCallable)
void AME_TimeOfDayWorldActor::InitTimeOfDaySettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.InitTimeOfDaySettings");

	AME_TimeOfDayWorldActor_InitTimeOfDaySettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TimeOfDayWorldActor.InitFogSettings
// (Final, Native, Protected, BlueprintCallable)
void AME_TimeOfDayWorldActor::InitFogSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TimeOfDayWorldActor.InitFogSettings");

	AME_TimeOfDayWorldActor_InitFogSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TorpedoProjectile.SetCanBeGrabbed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanGrab                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TorpedoProjectile::SetCanBeGrabbed(bool bCanGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TorpedoProjectile.SetCanBeGrabbed");

	AME_TorpedoProjectile_SetCanBeGrabbed_Params params;
	params.bCanGrab = bCanGrab;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TorpedoProjectile.OnHomingLost
// (Event, Public, BlueprintEvent)
void AME_TorpedoProjectile::OnHomingLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TorpedoProjectile.OnHomingLost");

	AME_TorpedoProjectile_OnHomingLost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TorpedoProjectile.OnEvaded
// (Event, Public, BlueprintEvent)
void AME_TorpedoProjectile::OnEvaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TorpedoProjectile.OnEvaded");

	AME_TorpedoProjectile_OnEvaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.TriggerNarratorInitialProgressEvent
// (Final, Native, Private)
void AME_TutorialManager::TriggerNarratorInitialProgressEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.TriggerNarratorInitialProgressEvent");

	AME_TutorialManager_TriggerNarratorInitialProgressEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.ShouldShowInGamePopupWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_ETutorialPopupID> PopupId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TutorialManager::ShouldShowInGamePopupWidget(TEnumAsByte<Maneater_ETutorialPopupID> PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.ShouldShowInGamePopupWidget");

	AME_TutorialManager_ShouldShowInGamePopupWidget_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.RequestInGamePopupWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_ETutorialPopupID> PopupId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TutorialManager::RequestInGamePopupWidget(TEnumAsByte<Maneater_ETutorialPopupID> PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.RequestInGamePopupWidget");

	AME_TutorialManager_RequestInGamePopupWidget_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.PushHudTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TutorialManager::PushHudTip(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.PushHudTip");

	AME_TutorialManager_PushHudTip_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnWhipShotPerformed
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TutorialManager::OnWhipShotPerformed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnWhipShotPerformed");

	AME_TutorialManager_OnWhipShotPerformed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnTailwhipPerformed
// (Final, Native, Public)
void AME_TutorialManager::OnTailwhipPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnTailwhipPerformed");

	AME_TutorialManager_OnTailwhipPerformed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnPlayerConsumedPrey
// (Final, Native, Public)
// Parameters:
// class AME_AnimalCharacter*     Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Prey                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TutorialManager::OnPlayerConsumedPrey(class AME_AnimalCharacter* Player, class AActor* Prey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnPlayerConsumedPrey");

	AME_TutorialManager_OnPlayerConsumedPrey_Params params;
	params.Player = Player;
	params.Prey = Prey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnLungePerformed
// (Final, Native, Public)
void AME_TutorialManager::OnLungePerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnLungePerformed");

	AME_TutorialManager_OnLungePerformed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnKnifingStateChanged
// (Final, Native, Public)
// Parameters:
// bool                           NewKnifingState                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TutorialManager::OnKnifingStateChanged(bool NewKnifingState, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnKnifingStateChanged");

	AME_TutorialManager_OnKnifingStateChanged_Params params;
	params.NewKnifingState = NewKnifingState;
	params.ChangeContext = ChangeContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnKnifingJumpPerformed
// (Final, Native, Public)
void AME_TutorialManager::OnKnifingJumpPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnKnifingJumpPerformed");

	AME_TutorialManager_OnKnifingJumpPerformed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnEvolutionEquipped
// (Final, Native, Public)
// Parameters:
// Maneater_EEvolutionSlot        EvolutionSlot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TutorialManager::OnEvolutionEquipped(Maneater_EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnEvolutionEquipped");

	AME_TutorialManager_OnEvolutionEquipped_Params params;
	params.EvolutionSlot = EvolutionSlot;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.OnBreachPerformed
// (Final, Native, Public)
void AME_TutorialManager::OnBreachPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.OnBreachPerformed");

	AME_TutorialManager_OnBreachPerformed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.IsTutorialPartTwoComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TutorialManager::IsTutorialPartTwoComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.IsTutorialPartTwoComplete");

	AME_TutorialManager_IsTutorialPartTwoComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.IsTutorialPartOneComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TutorialManager::IsTutorialPartOneComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.IsTutorialPartOneComplete");

	AME_TutorialManager_IsTutorialPartOneComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TutorialManager::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.IsEnabled");

	AME_TutorialManager_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.IncrementObjective
// (Final, Native, Public)
// Parameters:
// bool                           ForceShowDelayedStep           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_TutorialManager::IncrementObjective(bool ForceShowDelayedStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.IncrementObjective");

	AME_TutorialManager_IncrementObjective_Params params;
	params.ForceShowDelayedStep = ForceShowDelayedStep;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.GetCurrentTutorialIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Maneater_ETutorialEventId> AME_TutorialManager::GetCurrentTutorialIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.GetCurrentTutorialIndex");

	AME_TutorialManager_GetCurrentTutorialIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.DelayedShowInvertedControlsPopup
// (Final, Native, Private)
void AME_TutorialManager::DelayedShowInvertedControlsPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.DelayedShowInvertedControlsPopup");

	AME_TutorialManager_DelayedShowInvertedControlsPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.DelayedIncrementObjective
// (Final, Native, Private)
void AME_TutorialManager::DelayedIncrementObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.DelayedIncrementObjective");

	AME_TutorialManager_DelayedIncrementObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_TutorialManager.CreateInGamePopupWidget
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<Maneater_ETutorialPopupID> PopupId                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_TutorialManager::CreateInGamePopupWidget(TEnumAsByte<Maneater_ETutorialPopupID> PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.CreateInGamePopupWidget");

	AME_TutorialManager_CreateInGamePopupWidget_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_TutorialManager.ClearHudTip
// (Final, Native, Public, BlueprintCallable)
void AME_TutorialManager::ClearHudTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_TutorialManager.ClearHudTip");

	AME_TutorialManager_ClearHudTip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WhipshotMovementComponent.OnWhipShotVictimImpact
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     SelfActor                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*     OtherPrimitive                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UME_WhipshotMovementComponent::OnWhipShotVictimImpact(class UPrimitiveComponent* SelfActor, class AActor* OtherActor, class UPrimitiveComponent* OtherPrimitive, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WhipshotMovementComponent.OnWhipShotVictimImpact");

	UME_WhipshotMovementComponent_OnWhipShotVictimImpact_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.OtherPrimitive = OtherPrimitive;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WorldMapWidget.LoadSavedRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UME_WorldMapWidget::LoadSavedRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldMapWidget.LoadSavedRenderTarget");

	UME_WorldMapWidget_LoadSavedRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WorldRegionVolume.PointIsWithinRegion
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AME_WorldRegionVolume::PointIsWithinRegion(const struct FVector& Point, float SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldRegionVolume.PointIsWithinRegion");

	AME_WorldRegionVolume_PointIsWithinRegion_Params params;
	params.Point = Point;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Maneater.ME_WorldSettings.UpdateWorldCapture
// (Final, Native, Public)
void AME_WorldSettings::UpdateWorldCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldSettings.UpdateWorldCapture");

	AME_WorldSettings_UpdateWorldCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WorldSettings.OnImpactParticleComplete
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_WorldSettings::OnImpactParticleComplete(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldSettings.OnImpactParticleComplete");

	AME_WorldSettings_OnImpactParticleComplete_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.ME_WorldSettings.OnImpactAudioComplete
// (Final, Native, Private)
// Parameters:
// AkAudio_EAkCallbackType        CallbackType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*         CallbackInfo                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AME_WorldSettings::OnImpactAudioComplete(AkAudio_EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.ME_WorldSettings.OnImpactAudioComplete");

	AME_WorldSettings_OnImpactAudioComplete_Params params;
	params.CallbackType = CallbackType;
	params.CallbackInfo = CallbackInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTDecorator_CanSpawnDiver.OnTrackedAIChange
// (Final, Native, Protected)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTDecorator_CanSpawnDiver::OnTrackedAIChange(class AME_AIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTDecorator_CanSpawnDiver.OnTrackedAIChange");

	UMEBTDecorator_CanSpawnDiver_OnTrackedAIChange_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTDecorator_CombatState.OnCombatStateChanged
// (Final, Native, Protected)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_ECombatStatus         PrevStatus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTDecorator_CombatState::OnCombatStateChanged(class AME_AIController* AIC, Maneater_ECombatStatus PrevStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTDecorator_CombatState.OnCombatStateChanged");

	UMEBTDecorator_CombatState_OnCombatStateChanged_Params params;
	params.AIC = AIC;
	params.PrevStatus = PrevStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTDecorator_TimeSinceLastSpawn.OnNewSpawn
// (Final, Native, Protected)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTDecorator_TimeSinceLastSpawn::OnNewSpawn(class AME_AIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTDecorator_TimeSinceLastSpawn.OnNewSpawn");

	UMEBTDecorator_TimeSinceLastSpawn_OnNewSpawn_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTTask_AbilityBase.OnAbilityFinished
// (Final, Native, Public)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTreeComponent*  OwnerComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTTask_AbilityBase::OnAbilityFinished(const struct FGameplayAbilitySpecHandle& AbilityHandle, class UBehaviorTreeComponent* OwnerComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTTask_AbilityBase.OnAbilityFinished");

	UMEBTTask_AbilityBase_OnAbilityFinished_Params params;
	params.AbilityHandle = AbilityHandle;
	params.OwnerComp = OwnerComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTTask_MoveTo.OnRequestIdUpdated
// (Final, Native, Private)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIRequestID            UpdatedRequestId               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTTask_MoveTo::OnRequestIdUpdated(class AME_AIController* AIC, const struct FAIRequestID& UpdatedRequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTTask_MoveTo.OnRequestIdUpdated");

	UMEBTTask_MoveTo_OnRequestIdUpdated_Params params;
	params.AIC = AIC;
	params.UpdatedRequestId = UpdatedRequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTTask_PlayCustomAnimations.OnMontageComplete
// (Final, Native, Protected)
void UMEBTTask_PlayCustomAnimations::OnMontageComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTTask_PlayCustomAnimations.OnMontageComplete");

	UMEBTTask_PlayCustomAnimations_OnMontageComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTTask_SpawnAI.OnSpawnComplete
// (Final, Native, Private)
// Parameters:
// class AME_BoatAIController*    AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTTask_SpawnAI::OnSpawnComplete(class AME_BoatAIController* AIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTTask_SpawnAI.OnSpawnComplete");

	UMEBTTask_SpawnAI_OnSpawnComplete_Params params;
	params.AIC = AIC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.MEBTTask_VehicleMoveTo.OnRequestIdUpdated
// (Final, Native, Private)
// Parameters:
// class AME_AIController*        AIC                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIRequestID            UpdatedRequestId               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMEBTTask_VehicleMoveTo::OnRequestIdUpdated(class AME_AIController* AIC, const struct FAIRequestID& UpdatedRequestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.MEBTTask_VehicleMoveTo.OnRequestIdUpdated");

	UMEBTTask_VehicleMoveTo_OnRequestIdUpdated_Params params;
	params.AIC = AIC;
	params.UpdatedRequestId = UpdatedRequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.OvodusButton.UpdateCursorOverlaps
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGeometry               AllottedGeometry               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOvodusButton::UpdateCursorOverlaps(const struct FGeometry& AllottedGeometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.OvodusButton.UpdateCursorOverlaps");

	UOvodusButton_UpdateCursorOverlaps_Params params;
	params.AllottedGeometry = AllottedGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.OvodusButton.SetAdvancedHitTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              InTexture                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOvodusButton::SetAdvancedHitTexture(class UTexture2D* InTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.OvodusButton.SetAdvancedHitTexture");

	UOvodusButton_SetAdvancedHitTexture_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Maneater.OvodusButton.SetAdvancedHitAlpha
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InAlpha                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOvodusButton::SetAdvancedHitAlpha(int InAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Maneater.OvodusButton.SetAdvancedHitAlpha");

	UOvodusButton_SetAdvancedHitAlpha_Params params;
	params.InAlpha = InAlpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
