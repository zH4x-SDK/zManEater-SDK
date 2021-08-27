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

// Function Maneater.ManeaterAIFunctionLibrary.GetPawnAndAIController
struct UManeaterAIFunctionLibrary_GetPawnAndAIController_Params
{
	class UObject*                                     InObject;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Out_Pawn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIController*                            Out_AIController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AbilitySystemComponent.SpawnEmitter
struct UME_AbilitySystemComponent_SpawnEmitter_Params
{
	struct FMEGameplayEffectParticleSystem             GameplayEffectParticleSystem;                              // (Parm, OutParm, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleSystem;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AbilitySystemComponent.GetAttributeSet
struct UME_AbilitySystemComponent_GetAttributeSet_Params
{
	class UClass*                                      AttributeSetClass;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AttributeSet*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ActorDamageInterface.GetSizeLevel
struct UME_ActorDamageInterface_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ActorDamageInterface.GetMaxHealth
struct UME_ActorDamageInterface_GetMaxHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ActorDamageInterface.GetCurrentHealth
struct UME_ActorDamageInterface_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AggroComponent.Timer_OnSuspicionCooledDown
struct UME_AggroComponent_Timer_OnSuspicionCooledDown_Params
{
};

// Function Maneater.ME_AggroComponent.GetSuspicionLevel
struct UME_AggroComponent_GetSuspicionLevel_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AggroComponent.GetAlertState
struct UME_AggroComponent_GetAlertState_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AICombatInterface.CanAIAttackTarget
struct UME_AICombatInterface_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AICombatInterface.AIAttackTarget
struct UME_AICombatInterface_AIAttackTarget_Params
{
	struct FAttackTarget                               NewTarget;                                                 // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.UseNearestPatrolPoint
struct AME_AIController_UseNearestPatrolPoint_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.UseAbility
struct AME_AIController_UseAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.TransferAlertKnowledge
struct AME_AIController_TransferAlertKnowledge_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.TickThreatTimer
struct AME_AIController_TickThreatTimer_Params
{
};

// Function Maneater.ME_AIController.SetUseNearestPatrolPoint
struct AME_AIController_SetUseNearestPatrolPoint_Params
{
	bool                                               bUseNearest;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.SetPatrolPlotter
struct AME_AIController_SetPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          InPatrolPlotter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.SetLeashLocation
struct AME_AIController_SetLeashLocation_Params
{
	struct FVector                                     InLeashLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.SetLeashActive
struct AME_AIController_SetLeashActive_Params
{
	bool                                               bSetActive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.SetCurrentDefinedPatrolIndex
struct AME_AIController_SetCurrentDefinedPatrolIndex_Params
{
	int                                                NewPatrolIdx;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.SetBehaviorTreeEnabled
struct AME_AIController_SetBehaviorTreeEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.SetAlertState
struct AME_AIController_SetAlertState_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AlertInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForced;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                millisecondDelayMax;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnSuspicionIncreased
struct AME_AIController_OnSuspicionIncreased_Params
{
	float                                              NewSuspicionLevel;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SuspicionInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnReturnedToLeash
struct AME_AIController_OnReturnedToLeash_Params
{
};

// Function Maneater.ME_AIController.OnPlayerPawnStatusChanged
struct AME_AIController_OnPlayerPawnStatusChanged_Params
{
	class AActor*                                      PlayerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnHeardNoise
struct AME_AIController_OnHeardNoise_Params
{
	struct FVector                                     NoiseOrigin;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoiseIntensity;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NoiseInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnDamagedPlayer
struct AME_AIController_OnDamagedPlayer_Params
{
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnDamaged
struct AME_AIController_OnDamaged_Params
{
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnCombatStatusChanged
struct AME_AIController_OnCombatStatusChanged_Params
{
	Maneater_ECombatStatus                             Status;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.OnCombatCooldownExpired
struct AME_AIController_OnCombatCooldownExpired_Params
{
};

// Function Maneater.ME_AIController.NotifyPawnHit
struct AME_AIController_NotifyPawnHit_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.NotifyPawnDamaged
struct AME_AIController_NotifyPawnDamaged_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.MakeAIAudibleNoise
struct AME_AIController_MakeAIAudibleNoise_Params
{
	struct FVector                                     Origin;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NoiseInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.LookForThreats
struct AME_AIController_LookForThreats_Params
{
};

// Function Maneater.ME_AIController.IsPlayerInstigatedAlert
struct AME_AIController_IsPlayerInstigatedAlert_Params
{
	class AActor*                                      AlertInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.IsOnNavmesh
struct AME_AIController_IsOnNavmesh_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.IsDormant
struct AME_AIController_IsDormant_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.IsAlertedToPlayer
struct AME_AIController_IsAlertedToPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.IncreaseSuspicion
struct AME_AIController_IncreaseSuspicion_Params
{
	float                                              SuspicionAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SuspcionInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetTotalCombatPriority
struct AME_AIController_GetTotalCombatPriority_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetSuspicion
struct AME_AIController_GetSuspicion_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetSightDistance
struct AME_AIController_GetSightDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetPawnAbilitySystemComponent
struct AME_AIController_GetPawnAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetPatrolPlotter
struct AME_AIController_GetPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetLeashLocation
struct AME_AIController_GetLeashLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetLeashDistance
struct AME_AIController_GetLeashDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetLeashActive
struct AME_AIController_GetLeashActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetEnemy
struct AME_AIController_GetEnemy_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCurrentDefinedPatrolIndex
struct AME_AIController_GetCurrentDefinedPatrolIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCurrentAlert
struct AME_AIController_GetCurrentAlert_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCombatStatus
struct AME_AIController_GetCombatStatus_Params
{
	Maneater_ECombatStatus                             ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCombatPriorityBuffs
struct AME_AIController_GetCombatPriorityBuffs_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCombatPriority
struct AME_AIController_GetCombatPriority_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCombatLockTime
struct AME_AIController_GetCombatLockTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetCombatCooldownTime
struct AME_AIController_GetCombatCooldownTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetClosestEscapeVolume
struct AME_AIController_GetClosestEscapeVolume_Params
{
	class AMEEscapeVolume*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetBoatEscapeVolume
struct AME_AIController_GetBoatEscapeVolume_Params
{
	class AMEEscapeVolume*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetBaseSightDistance
struct AME_AIController_GetBaseSightDistance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.GetAbilityPriority
struct AME_AIController_GetAbilityPriority_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.CancelAllAbilities
struct AME_AIController_CancelAllAbilities_Params
{
};

// Function Maneater.ME_AIController.CancelAbility
struct AME_AIController_CancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.AttackTargetActor
struct AME_AIController_AttackTargetActor_Params
{
	struct FAttackTarget                               NewTarget;                                                 // (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.AlertStateChangedInternal
struct AME_AIController_AlertStateChangedInternal_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          OldAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ChangeInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.AddCombatPriorityBuff
struct AME_AIController_AddCombatPriorityBuff_Params
{
	struct FCombatPriorityBuff                         CombatPriorityBuff;                                        // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIController.AbilityEnded
struct AME_AIController_AbilityEnded_Params
{
	struct FAbilityEndedData                           AbilityData;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.UnregisterEvent
struct AME_AIDirector_UnregisterEvent_Params
{
	class UME_AlertEvent*                              AlertEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.UnregisterAllEvents
struct AME_AIDirector_UnregisterAllEvents_Params
{
	class AActor*                                      LinkedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.RegisterEvent
struct AME_AIDirector_RegisterEvent_Params
{
	class UME_AlertEvent*                              AlertEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.OnEventPulse
struct AME_AIDirector_OnEventPulse_Params
{
	class UME_AlertEvent*                              AlertEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.OnEndAbility
struct AME_AIDirector_OnEndAbility_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_GameplayAbility*                         Ability;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.NotifyIncomingAttack
struct AME_AIDirector_NotifyIncomingAttack_Params
{
	float                                              BaseIncomingAttackDistance;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBite;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.GetReleventWitnessEvents
struct AME_AIDirector_GetReleventWitnessEvents_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_AlertEvent_Witness*>              out_WitnessAlerts;                                         // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.GetCombatManager
struct AME_AIDirector_GetCombatManager_Params
{
	class UME_CombatManager*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.ForceToAlertState
struct AME_AIDirector_ForceToAlertState_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PawnClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.CreateAndRegisterWitnessEvent
struct AME_AIDirector_CreateAndRegisterWitnessEvent_Params
{
	class AActor*                                      LinkedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AlertEvent_Witness*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AIDirector.BroadcastNoise
struct AME_AIDirector_BroadcastNoise_Params
{
	struct FVector                                     NoiseOrigin;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NoiseIntensity;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      NoiseInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehicleMovementComponent.GetLocalVelocity
struct UME_VehicleMovementComponent_GetLocalVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehicleMovementComponent.GetAngularVelocity
struct UME_VehicleMovementComponent_GetAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehicleMovementComponent.AddImpulse
struct UME_VehicleMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpulseLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ImpulseNormal;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent.Timer_PeriodicPulse
struct UME_AlertEvent_Timer_PeriodicPulse_Params
{
};

// Function Maneater.ME_AlertEvent.Timer_Lifetime
struct UME_AlertEvent_Timer_Lifetime_Params
{
};

// Function Maneater.ME_AlertEvent.SetEventLocation
struct UME_AlertEvent_SetEventLocation_Params
{
	struct FVector                                     InEventLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent.LinkActorToEvent
struct UME_AlertEvent_LinkActorToEvent_Params
{
	class AActor*                                      ActorToLink;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent.GetSuspicionAmount
struct UME_AlertEvent_GetSuspicionAmount_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent.GetLinkedActor
struct UME_AlertEvent_GetLinkedActor_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent.GetEventLocation
struct UME_AlertEvent_GetEventLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent.CanProcessEvent
struct UME_AlertEvent_CanProcessEvent_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AlertEvent_Witness.GetCachedVisiblePoint
struct UME_AlertEvent_Witness_GetCachedVisiblePoint_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAIController.OnGameplayTagRemoved
struct AME_CharacterAIController_OnGameplayTagRemoved_Params
{
	struct FGameplayTagContainer                       TagsRemoved;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAIController.OnGameplayTagAdded
struct AME_CharacterAIController_OnGameplayTagAdded_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (Parm, NativeAccessSpecifierPublic)
	float                                              TagDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAIController.OnForceStopMoving
struct AME_CharacterAIController_OnForceStopMoving_Params
{
	Maneater_EThreeStateSwitch                         MovementState;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EThreeStateSwitch                         RotationState;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalAIController.TriggerEvadeIfWithinRange
struct AME_AnimalAIController_TriggerEvadeIfWithinRange_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalAIController.TriggerEvade
struct AME_AnimalAIController_TriggerEvade_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalAIController.OnPreyGrabbed
struct AME_AnimalAIController_OnPreyGrabbed_Params
{
	class AME_AnimalCharacter*                         Grabber;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Prey;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.UpdateVulnerability
struct AME_Character_UpdateVulnerability_Params
{
};

// Function Maneater.ME_Character.StopVoice
struct AME_Character_StopVoice_Params
{
};

// Function Maneater.ME_Character.StopAI
struct AME_Character_StopAI_Params
{
	struct FString                                     StopReason;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.SetRootMotionNonUniformTranslationScale
struct AME_Character_SetRootMotionNonUniformTranslationScale_Params
{
	struct FVector                                     inRootMotionScale;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.SetDesiredAnimDir
struct AME_Character_SetDesiredAnimDir_Params
{
	Maneater_EDirOctant                                AnimDir;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.SetDeathPhysics
struct AME_Character_SetDeathPhysics_Params
{
	float                                              PhysicsBlendDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPartialPhysics;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.SetAIPatrolPlotter
struct AME_Character_SetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          InPatrolPlotter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.RestartAI
struct AME_Character_RestartAI_Params
{
	bool                                               bMaintainAggroInfo;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.PulseDynamicDialogueEvent
struct AME_Character_PulseDynamicDialogueEvent_Params
{
	struct FName                                       DialogueEventName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ArgumentValueNames;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.ProcessRagdollImpactResponse
struct AME_Character_ProcessRagdollImpactResponse_Params
{
	class UPhysicalMaterial*                           InstigatorPM;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         InstigatorComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.PostDynamicDialogueEvent
struct AME_Character_PostDynamicDialogueEvent_Params
{
	struct FName                                       DialogueEventName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ArgumentValueNames;                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.PlayVoice
struct AME_Character_PlayVoice_Params
{
	TEnumAsByte<Maneater_ECharacterVoiceEventType>     VoiceType;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VoicePriority;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.PlayFootstep
struct AME_Character_PlayFootstep_Params
{
};

// Function Maneater.ME_Character.OnStunArmorDepleted
struct AME_Character_OnStunArmorDepleted_Params
{
};

// Function Maneater.ME_Character.OnPlayerSharkGrowthLevelChanged
struct AME_Character_OnPlayerSharkGrowthLevelChanged_Params
{
	int                                                NewLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.OnPhysicsVolumeChanged
struct AME_Character_OnPhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.OnGameplayEffectRemoved
struct AME_Character_OnGameplayEffectRemoved_Params
{
	struct FActiveGameplayEffect                       RemovedGameplayEffect;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.OnGameplayEffectApplied
struct AME_Character_OnGameplayEffectApplied_Params
{
	class UAbilitySystemComponent*                     Source;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                         SpecApplied;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.OnDied
struct AME_Character_OnDied_Params
{
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.OnBump
struct AME_Character_OnBump_Params
{
};

// Function Maneater.ME_Character.IsVulnerable
struct AME_Character_IsVulnerable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsUnderwater
struct AME_Character_IsUnderwater_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsTagged
struct AME_Character_IsTagged_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsSilhouetted
struct AME_Character_IsSilhouetted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsPhysicalAnimationActive
struct AME_Character_IsPhysicalAnimationActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsPassenger
struct AME_Character_IsPassenger_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsInstigatingAnyAlerts
struct AME_Character_IsInstigatingAnyAlerts_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsDrowning
struct AME_Character_IsDrowning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsCritVulnerable
struct AME_Character_IsCritVulnerable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsBeingThrashedByPlayer
struct AME_Character_IsBeingThrashedByPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsBeingThrashed
struct AME_Character_IsBeingThrashed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsAliveAndWell
struct AME_Character_IsAliveAndWell_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.IsAbilitySystemComponentSetUp
struct AME_Character_IsAbilitySystemComponentSetUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.HasPassedVulnerabilityThreshold
struct AME_Character_HasPassedVulnerabilityThreshold_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetWasRecentlyBumped
struct AME_Character_GetWasRecentlyBumped_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetVisionTypeAsDialogueString
struct AME_Character_GetVisionTypeAsDialogueString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetThrashEscapeDirection
struct AME_Character_GetThrashEscapeDirection_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetRootMotionNonUniformTranslationScale
struct AME_Character_GetRootMotionNonUniformTranslationScale_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetPassengerVehicle
struct AME_Character_GetPassengerVehicle_Params
{
	class AME_VehiclePawn*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetPassengerSeat
struct AME_Character_GetPassengerSeat_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetOriginalPhysicsAsset
struct AME_Character_GetOriginalPhysicsAsset_Params
{
	class UPhysicsAsset*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetNutritionData_BP
struct AME_Character_GetNutritionData_BP_Params
{
	struct FNutrientChunkList                          ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetMercunaObstacle
struct AME_Character_GetMercunaObstacle_Params
{
	class UME_MercunaObstacleComponent*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetMercunaNavigation
struct AME_Character_GetMercunaNavigation_Params
{
	class UME_MercunaNavigationComponent*              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetLocationAsDialogueString
struct AME_Character_GetLocationAsDialogueString_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetHeadLocation
struct AME_Character_GetHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetFloorPhysicalMaterial
struct AME_Character_GetFloorPhysicalMaterial_Params
{
	class UME_PhysicalMaterial*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetDesiredAnimDir
struct AME_Character_GetDesiredAnimDir_Params
{
	Maneater_EDirOctant                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetCollisionComponent
struct AME_Character_GetCollisionComponent_Params
{
	class UCapsuleComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetCharacterVisionType
struct AME_Character_GetCharacterVisionType_Params
{
	Maneater_EVisionType                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetAIPatrolPlotter
struct AME_Character_GetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.GetAbilitySystemComponent
struct AME_Character_GetAbilitySystemComponent_Params
{
	class UME_AbilitySystemComponent*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.Died
struct AME_Character_Died_Params
{
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayDeathAnimation;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.Despawn
struct AME_Character_Despawn_Params
{
};

// Function Maneater.ME_Character.ClearAttachedProjectiles
struct AME_Character_ClearAttachedProjectiles_Params
{
};

// Function Maneater.ME_Character.CanVisionTypeSeeCharacter
struct AME_Character_CanVisionTypeSeeCharacter_Params
{
	Maneater_EVisionType                               VisionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Character.BlendBackToDefault
struct AME_Character_BlendBackToDefault_Params
{
};

// Function Maneater.ME_AnimalCharacter.UseKnockbackRagdoll
struct AME_AnimalCharacter_UseKnockbackRagdoll_Params
{
};

// Function Maneater.ME_AnimalCharacter.UpdatePartialRagdoll
struct AME_AnimalCharacter_UpdatePartialRagdoll_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.UpdateJointBlendWeight
struct AME_AnimalCharacter_UpdateJointBlendWeight_Params
{
	class USkeletalMeshComponent*                      SKM;                                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PartialPhysicsBase;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimBlendMultiplier;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpeedPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.TryUseEvadeAbility
struct AME_AnimalCharacter_TryUseEvadeAbility_Params
{
	TEnumAsByte<Maneater_EComboDirection>              InputDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReversed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.StopThrashing
struct AME_AnimalCharacter_StopThrashing_Params
{
};

// Function Maneater.ME_AnimalCharacter.SetThreatLevel
struct AME_AnimalCharacter_SetThreatLevel_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InstigatingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.OnConsumedGrabPoint
struct AME_AnimalCharacter_OnConsumedGrabPoint_Params
{
	struct FThrashGrabPoint                            ConsumedGrabPoint;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.OnAbilityActivated
struct AME_AnimalCharacter_OnAbilityActivated_Params
{
	Maneater_EME_CharacterAbility                      Ability;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.ModifyStamina
struct AME_AnimalCharacter_ModifyStamina_Params
{
	float                                              Change;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.IsTransitioning
struct AME_AnimalCharacter_IsTransitioning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.IsThrashing
struct AME_AnimalCharacter_IsThrashing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.IsLunging
struct AME_AnimalCharacter_IsLunging_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.IsEvading
struct AME_AnimalCharacter_IsEvading_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.HasAnyStamina
struct AME_AnimalCharacter_HasAnyStamina_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetThrashDecayPct
struct AME_AnimalCharacter_GetThrashDecayPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetThrashDamagePool
struct AME_AnimalCharacter_GetThrashDamagePool_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetTailLocation
struct AME_AnimalCharacter_GetTailLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetTailControlStrength
struct AME_AnimalCharacter_GetTailControlStrength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetPreyAttachBoneName
struct AME_AnimalCharacter_GetPreyAttachBoneName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetMaxMoveSpeed
struct AME_AnimalCharacter_GetMaxMoveSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetJawsLocation
struct AME_AnimalCharacter_GetJawsLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetJawSize
struct AME_AnimalCharacter_GetJawSize_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetDrownSpeedModifier
struct AME_AnimalCharacter_GetDrownSpeedModifier_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetDrownSpeedBase
struct AME_AnimalCharacter_GetDrownSpeedBase_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetCurrentSpeedPct
struct AME_AnimalCharacter_GetCurrentSpeedPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetBaseThrashDamage
struct AME_AnimalCharacter_GetBaseThrashDamage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetBaseTailwhipDamage
struct AME_AnimalCharacter_GetBaseTailwhipDamage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetBaseStrugglePower
struct AME_AnimalCharacter_GetBaseStrugglePower_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetBaseStrikeDamage
struct AME_AnimalCharacter_GetBaseStrikeDamage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.GetBaseBiteDamage
struct AME_AnimalCharacter_GetBaseBiteDamage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.EndKnockbackRagdoll
struct AME_AnimalCharacter_EndKnockbackRagdoll_Params
{
};

// Function Maneater.ME_AnimalCharacter.ConsumePreyWhole
struct AME_AnimalCharacter_ConsumePreyWhole_Params
{
	class AActor*                                      ThrashablePrey;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.CanGrabPrey
struct AME_AnimalCharacter_CanGrabPrey_Params
{
	class AActor*                                      ThrashablePrey;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimalCharacter.CanEnterCombatMovement
struct AME_AnimalCharacter_CanEnterCombatMovement_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterMovementComponent.UpdateMercunaMovementProperties
struct UME_CharacterMovementComponent_UpdateMercunaMovementProperties_Params
{
};

// Function Maneater.ME_CharacterMovementComponent.SetOverrideMercunaAcceleration
struct UME_CharacterMovementComponent_SetOverrideMercunaAcceleration_Params
{
	struct FVector                                     OverrideAcceleration;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterMovementComponent.GetMercunaAcceleration
struct UME_CharacterMovementComponent_GetMercunaAcceleration_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterMovementComponent.GetLocalVelocity
struct UME_CharacterMovementComponent_GetLocalVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterMovementComponent.AtSeaLevel
struct UME_CharacterMovementComponent_AtSeaLevel_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_Base.PlayLostLimbAnimation
struct UME_AnimInstance_Base_PlayLostLimbAnimation_Params
{
	Maneater_ESkeletonGrabbableJoints                  LostJoint;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_Base.PlayDeathAnimation
struct UME_AnimInstance_Base_PlayDeathAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_Base.K2_Reset
struct UME_AnimInstance_Base_K2_Reset_Params
{
};

// Function Maneater.ME_AnimInstance_Base.GetWhipshotRecoveryAnimation
struct UME_AnimInstance_Base_GetWhipshotRecoveryAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_Base.GetOwningCharacter
struct UME_AnimInstance_Base_GetOwningCharacter_Params
{
	class AME_Character*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_Base.GetIsMoving
struct UME_AnimInstance_Base_GetIsMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.SetForcedHipsLocation
struct UME_AnimInstance_HumanNPC_SetForcedHipsLocation_Params
{
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponReferences
struct UME_AnimInstance_HumanNPC_SaveSoftWeaponReferences_Params
{
	bool                                               ValidSoft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftWeaponArrayReferences
struct UME_AnimInstance_HumanNPC_SaveSoftWeaponArrayReferences_Params
{
	bool                                               ValidSoft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveSoftBlendSpaceReferences
struct UME_AnimInstance_HumanNPC_SaveSoftBlendSpaceReferences_Params
{
	bool                                               ValidSoft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponReferences
struct UME_AnimInstance_HumanNPC_SaveHardWeaponReferences_Params
{
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponBlendspace
struct UME_AnimInstance_HumanNPC_SaveHardWeaponBlendspace_Params
{
	class UBlendSpace*                                 HardRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimationArray
struct UME_AnimInstance_HumanNPC_SaveHardWeaponAnimationArray_Params
{
	TArray<class UAnimMontage*>                        HardArray;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.SaveHardWeaponAnimation
struct UME_AnimInstance_HumanNPC_SaveHardWeaponAnimation_Params
{
	class UAnimSequence*                               HardRef;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.PlayPassengerHitReaction
struct UME_AnimInstance_HumanNPC_PlayPassengerHitReaction_Params
{
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitImpulse;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.PlayGetupAnimation
struct UME_AnimInstance_HumanNPC_PlayGetupAnimation_Params
{
	bool                                               ChestUp;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.PlayFiringMontage
struct UME_AnimInstance_HumanNPC_PlayFiringMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.PassengerHitReactionDelay
struct UME_AnimInstance_HumanNPC_PassengerHitReactionDelay_Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.LoadSoftWeaponAnimations
struct UME_AnimInstance_HumanNPC_LoadSoftWeaponAnimations_Params
{
};

// Function Maneater.ME_AnimInstance_HumanNPC.GetupAnimationBlendingOut
struct UME_AnimInstance_HumanNPC_GetupAnimationBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestUpGetupAnimation
struct UME_AnimInstance_HumanNPC_GetUninjuredChestUpGetupAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.GetUninjuredChestDownGetupAnimation
struct UME_AnimInstance_HumanNPC_GetUninjuredChestDownGetupAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestUpGetupAnimation
struct UME_AnimInstance_HumanNPC_GetInjuredChestUpGetupAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.GetInjuredChestDownGetupAnimation
struct UME_AnimInstance_HumanNPC_GetInjuredChestDownGetupAnimation_Params
{
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.FiringMontageBlendingOut
struct UME_AnimInstance_HumanNPC_FiringMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.CarryingWeaponRequiresAiming
struct UME_AnimInstance_HumanNPC_CarryingWeaponRequiresAiming_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_HumanNPC.AddSoftWeaponAnimationArray
struct UME_AnimInstance_HumanNPC_AddSoftWeaponAnimationArray_Params
{
	TArray<struct FSoftObjectPath>                     ArrayToLoad;                                               // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_PlayerShark.UpdateKnifingRotation
struct UME_AnimInstance_PlayerShark_UpdateKnifingRotation_Params
{
	struct FRotator                                    MeshRotation;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ActorRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_PlayerShark.SetCruisingWaterLine
struct UME_AnimInstance_PlayerShark_SetCruisingWaterLine_Params
{
	bool                                               SetTo;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_PlayerShark.GetOwningShark
struct UME_AnimInstance_PlayerShark_GetOwningShark_Params
{
	class AME_PlayerSharkCharacter*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AnimInstance_PlayerShark.FloppingTakeOff
struct UME_AnimInstance_PlayerShark_FloppingTakeOff_Params
{
};

// Function Maneater.ME_AnimInstance_PlayerShark.FloppingLanding
struct UME_AnimInstance_PlayerShark_FloppingLanding_Params
{
};

// Function Maneater.ME_AssetLoader.GetSkeletalMesh
struct AME_AssetLoader_GetSkeletalMesh_Params
{
	struct FName                                       sEventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetParticleSystemList
struct AME_AssetLoader_GetParticleSystemList_Params
{
	TArray<struct FName>                               EventNames;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         eActionMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystem*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetParticleSystem
struct AME_AssetLoader_GetParticleSystem_Params
{
	struct FName                                       sEventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         eActionMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetMaterial
struct AME_AssetLoader_GetMaterial_Params
{
	struct FName                                       sEventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetImpactEffect
struct AME_AssetLoader_GetImpactEffect_Params
{
	struct FName                                       sNameBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               eSurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactEffect                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetEquippedEvolutionRowName
struct AME_AssetLoader_GetEquippedEvolutionRowName_Params
{
	Maneater_EEvolutionSlot                            SlotType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetAudioEventWithSurface
struct AME_AssetLoader_GetAudioEventWithSurface_Params
{
	struct FName                                       sEventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               eSurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetAudioEvent
struct AME_AssetLoader_GetAudioEvent_Params
{
	struct FName                                       sEventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         eActionMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AssetLoader.GetAnimMontage
struct AME_AssetLoader_GetAnimMontage_Params
{
	struct FName                                       sEventName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         eActionMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AudioEventManager.Trigger
struct UME_AudioEventManager_Trigger_Params
{
	struct FName                                       EventName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForceMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AudioEventManager.TickSwimAttenuation
struct UME_AudioEventManager_TickSwimAttenuation_Params
{
	bool                                               InCombat;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AudioEventManager.PostWhizzbyIfInRange
struct UME_AudioEventManager_PostWhizzbyIfInRange_Params
{
	class UAkAudioEvent*                               Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Projectile;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AudioEventManager.IsBankLoaded
struct UME_AudioEventManager_IsBankLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AudioEventManager.GetAudioEventManager
struct UME_AudioEventManager_GetAudioEventManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AudioEventManager*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_AudioEventManager.DelayStartEx
struct UME_AudioEventManager_DelayStartEx_Params
{
};

// Function Maneater.ME_AudioEventManager.BankWaitCheckEx
struct UME_AudioEventManager_BankWaitCheckEx_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableActor.OnDied
struct AME_ThrashableActor_OnDied_Params
{
	class AController*                                 Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableActor.GetCurrentHealth_Implementation
struct AME_ThrashableActor_GetCurrentHealth_Implementation_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableActor.GetAbilitySystemComponent
struct AME_ThrashableActor_GetAbilitySystemComponent_Params
{
	class UME_AbilitySystemComponent*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnPointActor.TriggerSpawn
struct AME_SpawnPointActor_TriggerSpawn_Params
{
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnPointActor.GetCapsuleComponent
struct AME_SpawnPointActor_GetCapsuleComponent_Params
{
	class UCapsuleComponent*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnPointActor.CanSpawnAI
struct AME_SpawnPointActor_CanSpawnAI_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BlueprintFunctionLibrary.SetPrimitiveMinDrawDistance
struct UME_BlueprintFunctionLibrary_SetPrimitiveMinDrawDistance_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDrawDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BlueprintFunctionLibrary.SetManeaterDefaultMinLOD
struct UME_BlueprintFunctionLibrary_SetManeaterDefaultMinLOD_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BlueprintFunctionLibrary.GetTriangleCount
struct UME_BlueprintFunctionLibrary_GetTriangleCount_Params
{
	class UStaticMesh*                                 StaticMesh;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LODIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BlueprintFunctionLibrary.EnableOutlineRendering
struct UME_BlueprintFunctionLibrary_EnableOutlineRendering_Params
{
};

// Function Maneater.ME_BlueprintFunctionLibrary.DisableOutlineRendering
struct UME_BlueprintFunctionLibrary_DisableOutlineRendering_Params
{
	float                                              InDuration;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehicleAIController.IsThreatUnderVehicle
struct AME_VehicleAIController_IsThreatUnderVehicle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BoatAIController.OnTrackedAIDied
struct AME_BoatAIController_OnTrackedAIDied_Params
{
	class AME_AIController*                            KilledAIC;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.WallHit
struct AME_VehiclePawn_WallHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.Timer_EjectPassenger
struct AME_VehiclePawn_Timer_EjectPassenger_Params
{
	int                                                PassengerIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EjectInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEjectingAllPassengers;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.Timer_AbandonPassenger
struct AME_VehiclePawn_Timer_AbandonPassenger_Params
{
};

// Function Maneater.ME_VehiclePawn.Sink
struct AME_VehiclePawn_Sink_Params
{
	class AController*                                 SinkInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.SetPassengerWeapon
struct AME_VehiclePawn_SetPassengerWeapon_Params
{
	int                                                PassengerNum;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.SetPassengerThreatLevel
struct AME_VehiclePawn_SetPassengerThreatLevel_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InstigatingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.SetBossPhase
struct AME_VehiclePawn_SetBossPhase_Params
{
	int                                                NewPhaseNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.SetAIPatrolPlotter
struct AME_VehiclePawn_SetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          InPatrolPlotter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.RockBoat
struct AME_VehiclePawn_RockBoat_Params
{
	int                                                NewRamVerticalIndex;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RamForce;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationOfRam;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ForceNormal;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.RammedByAnimal
struct AME_VehiclePawn_RammedByAnimal_Params
{
	class AME_PlayerSharkCharacter*                    RammingAnimal;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RamForce;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnVehicleEmptied
struct AME_VehiclePawn_OnVehicleEmptied_Params
{
};

// Function Maneater.ME_VehiclePawn.OnSink
struct AME_VehiclePawn_OnSink_Params
{
	class AController*                                 SinkInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnPhysicsVolumeChanged
struct AME_VehiclePawn_OnPhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnMeshComponentHit
struct AME_VehiclePawn_OnMeshComponentHit_Params
{
	class UPrimitiveComponent*                         SelfActor;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherPrimitive;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnKilledBySlamAttack
struct AME_VehiclePawn_OnKilledBySlamAttack_Params
{
	class AME_PlayerSharkCharacter*                    PlayerShark;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnGameplayEffectRemoved
struct AME_VehiclePawn_OnGameplayEffectRemoved_Params
{
	struct FActiveGameplayEffect                       RemovedGameplayEffect;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnGameplayEffectApplied
struct AME_VehiclePawn_OnGameplayEffectApplied_Params
{
	class UAbilitySystemComponent*                     Source;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpec                         SpecApplied;                                               // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                              // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnDamageParticleEffectFinished
struct AME_VehiclePawn_OnDamageParticleEffectFinished_Params
{
	class UParticleSystemComponent*                    PSystem;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.OnBreakApart
struct AME_VehiclePawn_OnBreakApart_Params
{
	class AController*                                 BreakInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.K2_InitEntity
struct AME_VehiclePawn_K2_InitEntity_Params
{
};

// Function Maneater.ME_VehiclePawn.IsBossVehicle
struct AME_VehiclePawn_IsBossVehicle_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.IsAbilitySystemComponentSetUp
struct AME_VehiclePawn_IsAbilitySystemComponentSetUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.HasPilot
struct AME_VehiclePawn_HasPilot_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.HasAnyWeapons
struct AME_VehiclePawn_HasAnyWeapons_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetRotationOfLocationAroundBoat
struct AME_VehiclePawn_GetRotationOfLocationAroundBoat_Params
{
	struct FVector                                     PointLocation;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetPassengerMesh
struct AME_VehiclePawn_GetPassengerMesh_Params
{
	int                                                PassengerIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetMercunaObstacle
struct AME_VehiclePawn_GetMercunaObstacle_Params
{
	class UME_MercunaObstacleComponent*                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetMercunaNavigation
struct AME_VehiclePawn_GetMercunaNavigation_Params
{
	class UME_MercunaNavigationComponent*              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetHunterRank
struct AME_VehiclePawn_GetHunterRank_Params
{
	Maneater_EHunterRank                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetAIPatrolPlotter
struct AME_VehiclePawn_GetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.GetAbilitySystemComponent
struct AME_VehiclePawn_GetAbilitySystemComponent_Params
{
	class UME_AbilitySystemComponent*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.FinishBreakApart
struct AME_VehiclePawn_FinishBreakApart_Params
{
};

// Function Maneater.ME_VehiclePawn.EnableBossPhaseTimer
struct AME_VehiclePawn_EnableBossPhaseTimer_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.EjectPassenger
struct AME_VehiclePawn_EjectPassenger_Params
{
	int                                                PassengerIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 EjectInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_HumanCharacter*                          EjectedPassenger;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EjectImpulse;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldRagdoll;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJumpOff;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnController;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEjectingAllPassengers;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.EjectAllPassengers
struct AME_VehiclePawn_EjectAllPassengers_Params
{
	class AController*                                 EjectInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.BreakApart
struct AME_VehiclePawn_BreakApart_Params
{
	class AController*                                 BreakInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.BossPhaseChanged
struct AME_VehiclePawn_BossPhaseChanged_Params
{
	int                                                NewPhaseNumber;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PassengerRespawnDelay;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_VehiclePawn.BoardPassenger
struct AME_VehiclePawn_BoardPassenger_Params
{
	class AME_HumanCharacter*                          NewPassenger;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BoatPawn.OnBossCinematicStarted
struct AME_BoatPawn_OnBossCinematicStarted_Params
{
};

// Function Maneater.ME_WorldLandmarkActor.SetDiscoveryState
struct AME_WorldLandmarkActor_SetDiscoveryState_Params
{
	TEnumAsByte<Maneater_ELandmarkDiscoveryState>      NewDiscoveryState;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WorldLandmarkActor.ReceivePostInitializeComponents
struct AME_WorldLandmarkActor_ReceivePostInitializeComponents_Params
{
};

// Function Maneater.ME_WorldLandmarkActor.OnDiscoveryStateChanged
struct AME_WorldLandmarkActor_OnDiscoveryStateChanged_Params
{
	TEnumAsByte<Maneater_ELandmarkDiscoveryState>      NewState;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BossBattleInfo.SetBattleState
struct AME_BossBattleInfo_SetBattleState_Params
{
	TEnumAsByte<Maneater_EBossBattleState>             NewBattleState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BossBattleInfo.OnIntroCinematicEnd
struct AME_BossBattleInfo_OnIntroCinematicEnd_Params
{
};

// Function Maneater.ME_BossBattleInfo.OnBountyChanged
struct AME_BossBattleInfo_OnBountyChanged_Params
{
	unsigned char                                      NewBountyLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      BountyChangeInstigator;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BossBattleInfo.BossBattleEventInternal
struct AME_BossBattleInfo_BossBattleEventInternal_Params
{
	class AME_AIController*                            Boss;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EBossBattleEvent>             EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BossInterface.GetBossName
struct UME_BossInterface_GetBossName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BossInterface.GetBossHealthPct
struct UME_BossInterface_GetBossHealthPct_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BossInterface.GetBossBattleInfo
struct UME_BossInterface_GetBossBattleInfo_Params
{
};

// Function Maneater.ME_BountyManager.SetBountyState
struct AME_BountyManager_SetBountyState_Params
{
	Maneater_EBountyState                              NewBountyState;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.OnBossIntroFinished
struct AME_BountyManager_OnBossIntroFinished_Params
{
};

// Function Maneater.ME_BountyManager.IsBountyActive
struct AME_BountyManager_IsBountyActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.IsBossActive
struct AME_BountyManager_IsBossActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetPendingBossVehicle
struct AME_BountyManager_GetPendingBossVehicle_Params
{
	class AME_VehiclePawn*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetNumActiveDivers
struct AME_BountyManager_GetNumActiveDivers_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetMaxNumActiveDivers
struct AME_BountyManager_GetMaxNumActiveDivers_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetLastKillLocation
struct AME_BountyManager_GetLastKillLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetHunterControllers
struct AME_BountyManager_GetHunterControllers_Params
{
	TArray<class AME_AIController*>                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetClosestBoatLocation
struct AME_BountyManager_GetClosestBoatLocation_Params
{
	struct FVector                                     SourceLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              out_DistanceSqr;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetBountyState
struct AME_BountyManager_GetBountyState_Params
{
	Maneater_EBountyState                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetBountyCenter
struct AME_BountyManager_GetBountyCenter_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetBossVehicle
struct AME_BountyManager_GetBossVehicle_Params
{
	class AME_VehiclePawn*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.GetActiveBossName
struct AME_BountyManager_GetActiveBossName_Params
{
	struct FText                                       BossFirstName;                                             // (Parm, OutParm, NativeAccessSpecifierPublic)
	struct FText                                       BossLastName;                                              // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.DialogueCallback
struct AME_BountyManager_DialogueCallback_Params
{
	AkAudio_EAkCallbackType                            CallbackType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkCallbackInfo*                             CallbackInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BountyManager.CleanUpAndDisable
struct AME_BountyManager_CleanUpAndDisable_Params
{
};

// Function Maneater.ME_BuoyancyForceComponent.SetBasePrimitiveComp
struct UME_BuoyancyForceComponent_SetBasePrimitiveComp_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_BuoyancyForceComponent.GetBasePrimitiveComp
struct UME_BuoyancyForceComponent_GetBasePrimitiveComp_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForTag
struct UME_CharacterAbilityHelper_TryActivateAbilityForTag_Params
{
	struct FGameplayTag                                GameplayTag;                                               // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActionModeDependent;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.TryActivateAbilityForHandle
struct UME_CharacterAbilityHelper_TryActivateAbilityForHandle_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.IsStumbled
struct UME_CharacterAbilityHelper_IsStumbled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.GetAbilityIndexFromEnum
struct UME_CharacterAbilityHelper_GetAbilityIndexFromEnum_Params
{
	Maneater_EME_CharacterAbility                      AbilitySlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.GetAbilityHandleFromEnum
struct UME_CharacterAbilityHelper_GetAbilityHandleFromEnum_Params
{
	Maneater_EME_CharacterAbility                      AbilitySlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForHandle
struct UME_CharacterAbilityHelper_CancelAbilityForHandle_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                    // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.CancelAbilityForEnum
struct UME_CharacterAbilityHelper_CancelAbilityForEnum_Params
{
	Maneater_EME_CharacterAbility                      CharacterAbilityEnum;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterAbilityHelper.CanActivateAbilities
struct UME_CharacterAbilityHelper_CanActivateAbilities_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.SetHealthToPercentage
struct UME_CharacterFunctionLibrary_SetHealthToPercentage_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetWalkMoveSpeed
struct UME_CharacterFunctionLibrary_GetWalkMoveSpeed_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetSwimMoveSpeed
struct UME_CharacterFunctionLibrary_GetSwimMoveSpeed_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetStaminaRegen
struct UME_CharacterFunctionLibrary_GetStaminaRegen_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetStaminaMax
struct UME_CharacterFunctionLibrary_GetStaminaMax_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetStamina
struct UME_CharacterFunctionLibrary_GetStamina_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetSizeRatio
struct UME_CharacterFunctionLibrary_GetSizeRatio_Params
{
	class AME_Character*                               Character1;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_Character*                               Character2;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetSizeDifferential
struct UME_CharacterFunctionLibrary_GetSizeDifferential_Params
{
	class AME_Character*                               Character1;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_Character*                               Character2;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeDiffThresholdUp;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SizeDifferentialDown;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_ESizeDiff                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetSizeDelta
struct UME_CharacterFunctionLibrary_GetSizeDelta_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetSize
struct UME_CharacterFunctionLibrary_GetSize_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetMaxAcceleration
struct UME_CharacterFunctionLibrary_GetMaxAcceleration_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetHealthPercentage
struct UME_CharacterFunctionLibrary_GetHealthPercentage_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetHealthMax
struct UME_CharacterFunctionLibrary_GetHealthMax_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetHealth
struct UME_CharacterFunctionLibrary_GetHealth_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetCharacterActionMode
struct UME_CharacterFunctionLibrary_GetCharacterActionMode_Params
{
	class AME_Character*                               TwChar;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CharacterFunctionLibrary.GetActorDamagableAttributeSet
struct UME_CharacterFunctionLibrary_GetActorDamagableAttributeSet_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_AttributeSet*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.ToggleCameraAttached
struct UME_CheatManager_ToggleCameraAttached_Params
{
};

// Function Maneater.ME_CheatManager.Debug_DumpAI
struct UME_CheatManager_Debug_DumpAI_Params
{
};

// Function Maneater.ME_CheatManager.Debug_DrawProgressBar
struct UME_CheatManager_Debug_DrawProgressBar_Params
{
	class UWorld*                                      World;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ProgressReferenceActor;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProgressPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_UnlockAchievement
struct UME_CheatManager_Cheat_UnlockAchievement_Params
{
	struct FName                                       AchievementName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_TutorialSkipAhead
struct UME_CheatManager_Cheat_TutorialSkipAhead_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_TutorialNextStep
struct UME_CheatManager_Cheat_TutorialNextStep_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_TutorialAutoComplete
struct UME_CheatManager_Cheat_TutorialAutoComplete_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ToggleTODPause
struct UME_CheatManager_Cheat_ToggleTODPause_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ToggleKnifing
struct UME_CheatManager_Cheat_ToggleKnifing_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ToggleAI
struct UME_CheatManager_Cheat_ToggleAI_Params
{
	Maneater_EThreeStateSwitch                         bEnableAI;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_Suicide
struct UME_CheatManager_Cheat_Suicide_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_StoryAdvanceTo
struct UME_CheatManager_Cheat_StoryAdvanceTo_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SpawnAI
struct UME_CheatManager_Cheat_SpawnAI_Params
{
	struct FString                                     AIName;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpawnOffset;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SlamDamageEnabled
struct UME_CheatManager_Cheat_SlamDamageEnabled_Params
{
	bool                                               bTurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_ShowStoryCompleteWidget
struct UME_CheatManager_Cheat_ShowStoryCompleteWidget_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_SetWalkMoveSpeed
struct UME_CheatManager_Cheat_SetWalkMoveSpeed_Params
{
	float                                              NewWalkSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetTOD
struct UME_CheatManager_Cheat_SetTOD_Params
{
	float                                              HourOfDay;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetSwimMoveSpeed
struct UME_CheatManager_Cheat_SetSwimMoveSpeed_Params
{
	float                                              NewSwimSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetSharkMesh
struct UME_CheatManager_Cheat_SetSharkMesh_Params
{
	int                                                SharkMesh;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetMaxAcceleration
struct UME_CheatManager_Cheat_SetMaxAcceleration_Params
{
	float                                              NewMaxAcceleration;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetLevel
struct UME_CheatManager_Cheat_SetLevel_Params
{
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetKnifingZOffset
struct UME_CheatManager_Cheat_SetKnifingZOffset_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetEvolutionCharge
struct UME_CheatManager_Cheat_SetEvolutionCharge_Params
{
	float                                              ChargeAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetCameraZOffset
struct UME_CheatManager_Cheat_SetCameraZOffset_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetCameraProbeSize
struct UME_CheatManager_Cheat_SetCameraProbeSize_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetCameraComplex
struct UME_CheatManager_Cheat_SetCameraComplex_Params
{
	bool                                               bCollideComplex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetCameraArmLength
struct UME_CheatManager_Cheat_SetCameraArmLength_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_SetBossPhase
struct UME_CheatManager_Cheat_SetBossPhase_Params
{
	int                                                NewPhaseNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_ScareAI
struct UME_CheatManager_Cheat_ScareAI_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ResetSpeedCheats
struct UME_CheatManager_Cheat_ResetSpeedCheats_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ResetObjective
struct UME_CheatManager_Cheat_ResetObjective_Params
{
	struct FName                                       ObjName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_ProgressObjective
struct UME_CheatManager_Cheat_ProgressObjective_Params
{
	struct FName                                       ObjName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Increment;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_PlayStoryCinematic
struct UME_CheatManager_Cheat_PlayStoryCinematic_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_PauseAndSetTOD
struct UME_CheatManager_Cheat_PauseAndSetTOD_Params
{
	float                                              HourOfDay;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_OverrideBoatTurnSound
struct UME_CheatManager_Cheat_OverrideBoatTurnSound_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_OnePunch
struct UME_CheatManager_Cheat_OnePunch_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteTickedObjectives
struct UME_CheatManager_Cheat_ObjectivesCompleteTickedObjectives_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteTerrorizeObjectives
struct UME_CheatManager_Cheat_ObjectivesCompleteTerrorizeObjectives_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompletePopControlObjectives
struct UME_CheatManager_Cheat_ObjectivesCompletePopControlObjectives_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ObjectivesCompleteLandmarkObjectives
struct UME_CheatManager_Cheat_ObjectivesCompleteLandmarkObjectives_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_NextBossPhase
struct UME_CheatManager_Cheat_NextBossPhase_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_LogSpawnEntityStates
struct UME_CheatManager_Cheat_LogSpawnEntityStates_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_LogObjectives
struct UME_CheatManager_Cheat_LogObjectives_Params
{
	Maneater_EObjectiveType                            Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EWorldRegion                              Region;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_LogAIManagementStates
struct UME_CheatManager_Cheat_LogAIManagementStates_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_KillSchools
struct UME_CheatManager_Cheat_KillSchools_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_KillHumans
struct UME_CheatManager_Cheat_KillHumans_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_KillDivers
struct UME_CheatManager_Cheat_KillDivers_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_KillBoats
struct UME_CheatManager_Cheat_KillBoats_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_KillAnimals
struct UME_CheatManager_Cheat_KillAnimals_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_KillAll
struct UME_CheatManager_Cheat_KillAll_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_HideFromAI
struct UME_CheatManager_Cheat_HideFromAI_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_HandleLoadError
struct UME_CheatManager_Cheat_HandleLoadError_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_Grow
struct UME_CheatManager_Cheat_Grow_Params
{
	int                                                GrowthChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_GrottosUnlock
struct UME_CheatManager_Cheat_GrottosUnlock_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_GottaGoFast
struct UME_CheatManager_Cheat_GottaGoFast_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_GiveNutrients
struct UME_CheatManager_Cheat_GiveNutrients_Params
{
	int                                                Nutrients;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_GiveEvolutions
struct UME_CheatManager_Cheat_GiveEvolutions_Params
{
	int                                                Rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_ForceSaveGame
struct UME_CheatManager_Cheat_ForceSaveGame_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ForceReleasePrey
struct UME_CheatManager_Cheat_ForceReleasePrey_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_FindAllObjectives
struct UME_CheatManager_Cheat_FindAllObjectives_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_FastTravel
struct UME_CheatManager_Cheat_FastTravel_Params
{
	int                                                RegionIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_EnableTargetLasers
struct UME_CheatManager_Cheat_EnableTargetLasers_Params
{
	bool                                               bTurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_EnableAIDebuggingStuff
struct UME_CheatManager_Cheat_EnableAIDebuggingStuff_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_Eject
struct UME_CheatManager_Cheat_Eject_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_Dismember
struct UME_CheatManager_Cheat_Dismember_Params
{
	int                                                GrabPointIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_DiscoverObjectives
struct UME_CheatManager_Cheat_DiscoverObjectives_Params
{
	Maneater_EObjectiveType                            Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EWorldRegion                              Region;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_DiscoverAllObjectives
struct UME_CheatManager_Cheat_DiscoverAllObjectives_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_DisableTutorial
struct UME_CheatManager_Cheat_DisableTutorial_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_DemiGod
struct UME_CheatManager_Cheat_DemiGod_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_DebugGTWaves
struct UME_CheatManager_Cheat_DebugGTWaves_Params
{
	int                                                GridCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_CompleteRegionObjectives
struct UME_CheatManager_Cheat_CompleteRegionObjectives_Params
{
	struct FString                                     RegionName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_CompleteObjective
struct UME_CheatManager_Cheat_CompleteObjective_Params
{
	struct FName                                       ObjName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_BreakBoats
struct UME_CheatManager_Cheat_BreakBoats_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_BountyTriggerBounty
struct UME_CheatManager_Cheat_BountyTriggerBounty_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_BountyTriggerBoss
struct UME_CheatManager_Cheat_BountyTriggerBoss_Params
{
	int                                                BossIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_BountySetInfamyLevel
struct UME_CheatManager_Cheat_BountySetInfamyLevel_Params
{
	int                                                InfamyLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_BountyEndBounty
struct UME_CheatManager_Cheat_BountyEndBounty_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_BountyEnableBountySystem
struct UME_CheatManager_Cheat_BountyEnableBountySystem_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_BountyDisableBountySystem
struct UME_CheatManager_Cheat_BountyDisableBountySystem_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ApplyTag
struct UME_CheatManager_Cheat_ApplyTag_Params
{
};

// Function Maneater.ME_CheatManager.Cheat_ApplyNutrientMultiplier
struct UME_CheatManager_Cheat_ApplyNutrientMultiplier_Params
{
	float                                              Multiplier;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AlertAI
struct UME_CheatManager_Cheat_AlertAI_Params
{
	float                                              AlertRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AIVision
struct UME_CheatManager_Cheat_AIVision_Params
{
	bool                                               bTurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AITargeting
struct UME_CheatManager_Cheat_AITargeting_Params
{
	bool                                               bTurnOn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AdvanceStoryEvent
struct UME_CheatManager_Cheat_AdvanceStoryEvent_Params
{
	int                                                Amount;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AdjustWalkMoveSpeed
struct UME_CheatManager_Cheat_AdjustWalkMoveSpeed_Params
{
	float                                              WalkMultiplier;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AdjustSwimMoveSpeed
struct UME_CheatManager_Cheat_AdjustSwimMoveSpeed_Params
{
	float                                              SwimMultiplier;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AdjustMaxAcceleration
struct UME_CheatManager_Cheat_AdjustMaxAcceleration_Params
{
	float                                              MaxAccelerationMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CheatManager.Cheat_AbandonVehicle
struct UME_CheatManager_Cheat_AbandonVehicle_Params
{
};

// Function Maneater.ME_CheatManager.AudioTrigger
struct UME_CheatManager_AudioTrigger_Params
{
	struct FString                                     Event;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ForceMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CombatManager.IsInCombat
struct UME_CombatManager_IsInCombat_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEControlSchemes.GetControlSchemes
struct UMEControlSchemes_GetControlSchemes_Params
{
	TArray<struct FText>                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEControlSchemes.GetControlSchemeDefault
struct UMEControlSchemes_GetControlSchemeDefault_Params
{
	class UMEControlSchemes*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEControlSchemes.GetControlSchemeAtIndex
struct UMEControlSchemes_GetControlSchemeAtIndex_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMEControlScheme                            ReturnValue;                                               // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.MEControlSchemes.GetAxisForScheme
struct UMEControlSchemes_GetAxisForScheme_Params
{
	struct FMEControlScheme                            Scheme;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAxisBindingSaveData>                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEControlSchemes.GetActionsForScheme
struct UMEControlSchemes_GetActionsForScheme_Params
{
	struct FMEControlScheme                            Scheme;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FActionBindingSaveData>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEControlSchemes.ApplyControlScheme
struct UMEControlSchemes_ApplyControlScheme_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CreatureSchoolPawn.SetAIPatrolPlotter
struct AME_CreatureSchoolPawn_SetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          InPatrolPlotter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CreatureSchoolPawn.OnGameplayEffectRemoved
struct AME_CreatureSchoolPawn_OnGameplayEffectRemoved_Params
{
	struct FActiveGameplayEffect                       RemovedGameplayEffect;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CreatureSchoolPawn.IsAbilitySystemComponentSetUp
struct AME_CreatureSchoolPawn_IsAbilitySystemComponentSetUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CreatureSchoolPawn.GetAIPatrolPlotter
struct AME_CreatureSchoolPawn_GetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_CreatureSchoolPawn.GetAbilitySystemComponent
struct AME_CreatureSchoolPawn_GetAbilitySystemComponent_Params
{
	class UME_AbilitySystemComponent*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DestructibleActor.UpdateOctree
struct AME_DestructibleActor_UpdateOctree_Params
{
	bool                                               bAffectsNavigation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DestructibleActor.PostRenderForBP
struct AME_DestructibleActor_PostRenderForBP_Params
{
};

// Function Maneater.ME_DestructibleActor.PlayerDamagedBreakable
struct AME_DestructibleActor_PlayerDamagedBreakable_Params
{
	float                                              DamageAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DestructibleActor.OnComponentFractured
struct AME_DestructibleActor_OnComponentFractured_Params
{
	struct FVector                                     HitPoint;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitDirection;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DestructibleActor.IsDestroyed
struct AME_DestructibleActor_IsDestroyed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DestructibleActor.GetCurrentHealth_Implementation
struct AME_DestructibleActor_GetCurrentHealth_Implementation_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DestructibleActor.CanDamageBreakable
struct AME_DestructibleActor_CanDamageBreakable_Params
{
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueFunctionLibrary.TwPlaySubtitledAkEvent
struct UME_DialogueFunctionLibrary_TwPlaySubtitledAkEvent_Params
{
	struct FString                                     EventName;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  SearchTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueFunctionLibrary.TwPlayDialogueAkEvent
struct UME_DialogueFunctionLibrary_TwPlayDialogueAkEvent_Params
{
	class UDataTable*                                  SearchTable;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueFile
struct UME_DialogueFunctionLibrary_PlayDialogueFile_Params
{
	struct FDataTableRowHandle                         DialogueToPlay;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueFunctionLibrary.PlayDialogueAkEvent
struct UME_DialogueFunctionLibrary_PlayDialogueAkEvent_Params
{
	struct FDataTableRowHandle                         DialogueToPlay;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.ShowSubtitle
struct UME_DialogueSystem_ShowSubtitle_Params
{
	struct FText                                       DialogueText;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.SequencerDialogueCallback
struct UME_DialogueSystem_SequencerDialogueCallback_Params
{
	AkAudio_EAkCallbackType                            CallbackType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkCallbackInfo*                             CallbackInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.PostDynamicDialogue
struct UME_DialogueSystem_PostDynamicDialogue_Params
{
	struct FName                                       DialogueEventName;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Speaker;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ArgumentValueNames;                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.PlayExternalDialogueFile
struct UME_DialogueSystem_PlayExternalDialogueFile_Params
{
	struct FName                                       EventName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShowSubtitle;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DialogueText;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.InitDialogueSystem
struct UME_DialogueSystem_InitDialogueSystem_Params
{
	class AME_GameMode*                                OwningGameMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.GetOnDialogueSystemCallbackDelegate
struct UME_DialogueSystem_GetOnDialogueSystemCallbackDelegate_Params
{
	struct FScriptMulticastDelegate                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.EndStateCooldown
struct UME_DialogueSystem_EndStateCooldown_Params
{
	struct FName                                       StateName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.DynamicDialogueCallback
struct UME_DialogueSystem_DynamicDialogueCallback_Params
{
	AkAudio_EAkCallbackType                            CallbackType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkCallbackInfo*                             CallbackInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.DialogueCallback
struct UME_DialogueSystem_DialogueCallback_Params
{
	AkAudio_EAkCallbackType                            CallbackType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkCallbackInfo*                             CallbackInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DialogueSystem.AddAudioDialogueMapping
struct UME_DialogueSystem_AddAudioDialogueMapping_Params
{
	int                                                AkPlayingId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DialogueText;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              TimeSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SignificanceHandlerInterface.HandleSignificanceChange
struct UME_SignificanceHandlerInterface_HandleSignificanceChange_Params
{
	bool                                               bIsSignificant;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_DistanceSignificanceComponent.HandleSignificanceChange
struct UME_DistanceSignificanceComponent_HandleSignificanceChange_Params
{
	bool                                               bIsSignificant;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ExplosionActor.GetExplosionRadius
struct AME_ExplosionActor_GetExplosionRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_FogOverrideVolume.ActorOverlapped
struct AME_FogOverrideVolume_ActorOverlapped_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_FogOverrideVolume.ActorEndOverlap
struct AME_FogOverrideVolume_ActorEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameInstance.UpdateFoliageShadowMaterialParametersCallback
struct UME_GameInstance_UpdateFoliageShadowMaterialParametersCallback_Params
{
};

// Function Maneater.ME_GameInstance.TriggerNarratorEventEx
struct UME_GameInstance_TriggerNarratorEventEx_Params
{
};

// Function Maneater.ME_GameInstance.TriggerNarratorEvent
struct UME_GameInstance_TriggerNarratorEvent_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameInstance.StreamContentAtLocationForCinematic
struct UME_GameInstance_StreamContentAtLocationForCinematic_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameInstance.SetSelectedSaveSlot
struct UME_GameInstance_SetSelectedSaveSlot_Params
{
	int                                                LocalUserIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameInstance.GetSelectedSaveSlot
struct UME_GameInstance_GetSelectedSaveSlot_Params
{
	int                                                LocalUserIdx;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameInstance.FlushPendingSaveObjects
struct UME_GameInstance_FlushPendingSaveObjects_Params
{
};

// Function Maneater.ME_GameMode.SuppressNextAudioPause
struct AME_GameMode_SuppressNextAudioPause_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.StartStoryCinematicSequence
struct AME_GameMode_StartStoryCinematicSequence_Params
{
	struct FName                                       CinematicsDataTableRowName;                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.StartCinematic
struct AME_GameMode_StartCinematic_Params
{
};

// Function Maneater.ME_GameMode.ShowLoadingScreen
struct AME_GameMode_ShowLoadingScreen_Params
{
	struct FVector                                     DistanceStreamLocation;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RequiredLevelName;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.SetWaterPoisoned
struct AME_GameMode_SetWaterPoisoned_Params
{
	bool                                               bPoisoned;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.SetNoCameraFadeIn
struct AME_GameMode_SetNoCameraFadeIn_Params
{
	bool                                               SetTo;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.SetAutoReEnableControls
struct AME_GameMode_SetAutoReEnableControls_Params
{
	bool                                               UseAutoReEnable;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.SetAutoFadeIn
struct AME_GameMode_SetAutoFadeIn_Params
{
	bool                                               UseAutoFadeIn;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                CameraStartingColor;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.RespawnPlayer
struct AME_GameMode_RespawnPlayer_Params
{
};

// Function Maneater.ME_GameMode.RequestTravelToLocation
struct AME_GameMode_RequestTravelToLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AME_PlayerSharkCharacter*                    PlayerSharkCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipLoadScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetCameraRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.RemoveLoadingScreen
struct AME_GameMode_RemoveLoadingScreen_Params
{
};

// Function Maneater.ME_GameMode.PlayCinematicPauseAllEvent
struct AME_GameMode_PlayCinematicPauseAllEvent_Params
{
};

// Function Maneater.ME_GameMode.PauseSunPosition
struct AME_GameMode_PauseSunPosition_Params
{
	bool                                               bPause;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.OnHuntCommanderEjected
struct AME_GameMode_OnHuntCommanderEjected_Params
{
	class AController*                                 EjectInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_HumanCharacter*                          Pilot;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.OnCinematicCameraCut
struct AME_GameMode_OnCinematicCameraCut_Params
{
	class UCameraComponent*                            CameraComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.OnActorSpawned
struct AME_GameMode_OnActorSpawned_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.LoadCinematic
struct AME_GameMode_LoadCinematic_Params
{
};

// Function Maneater.ME_GameMode.IsWaterPoisoned
struct AME_GameMode_IsWaterPoisoned_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetTutorialManager
struct AME_GameMode_GetTutorialManager_Params
{
	class AME_TutorialManager*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetSonarManager
struct AME_GameMode_GetSonarManager_Params
{
	class AME_SonarManager*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetRegionStates
struct AME_GameMode_GetRegionStates_Params
{
	TArray<struct FWorldRegionState>                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetRegionState
struct AME_GameMode_GetRegionState_Params
{
	int                                                RegionIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldRegionState                           State;                                                     // (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetRegionPopulation
struct AME_GameMode_GetRegionPopulation_Params
{
	int                                                RegionIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetPlayerObjectiveManager
struct AME_GameMode_GetPlayerObjectiveManager_Params
{
	class AME_PlayerObjectiveManager*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetDialogueSystem
struct AME_GameMode_GetDialogueSystem_Params
{
	class UME_DialogueSystem*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetBountyManager
struct AME_GameMode_GetBountyManager_Params
{
	class AME_BountyManager*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetAssetLoader
struct AME_GameMode_GetAssetLoader_Params
{
	class AME_AssetLoader*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.GetAIDirector
struct AME_GameMode_GetAIDirector_Params
{
	class AME_AIDirector*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameMode.EnableCinematicMode
struct AME_GameMode_EnableCinematicMode_Params
{
};

// Function Maneater.ME_GameMode.DisableCinematicMode
struct AME_GameMode_DisableCinematicMode_Params
{
};

// Function Maneater.ME_GameMode.CleanupCinematic
struct AME_GameMode_CleanupCinematic_Params
{
};

// Function Maneater.ME_GameMode.CinematicLoaded
struct AME_GameMode_CinematicLoaded_Params
{
};

// Function Maneater.ME_GameMode.CinematicFinishedStartPlaying
struct AME_GameMode_CinematicFinishedStartPlaying_Params
{
};

// Function Maneater.ME_GameMode.CinematicFinished
struct AME_GameMode_CinematicFinished_Params
{
};

// Function Maneater.ME_GameplayAbility_Montage.MontageStarted
struct UME_GameplayAbility_Montage_MontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_Montage.MontageEnded
struct UME_GameplayAbility_Montage_MontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_MontageSequence.MontageStarted
struct UME_GameplayAbility_MontageSequence_MontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_MontageSequence.MontageEnded
struct UME_GameplayAbility_MontageSequence_MontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_MontageSequence.GetMontageInstanceByIndex
struct UME_GameplayAbility_MontageSequence_GetMontageInstanceByIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMontageInstance*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageInstance
struct UME_GameplayAbility_MontageSequence_GetCurrentMontageInstance_Params
{
	class UMontageInstance*                            out_MontageInstance;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_MontageSequence.GetCurrentMontageIndex
struct UME_GameplayAbility_MontageSequence_GetCurrentMontageIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageStarted
struct UME_GameplayAbility_WildlifeDirectionalLunge_MontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_WildlifeDirectionalLunge.MontageEnded
struct UME_GameplayAbility_WildlifeDirectionalLunge_MontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayAbility_WildlifeLunge.CheckOwnerPosition
struct UME_GameplayAbility_WildlifeLunge_CheckOwnerPosition_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              DropFocusRange;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ToggleWorldRendering
struct UME_GameplayStatics_ToggleWorldRendering_Params
{
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableRendering;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.TestPreyAttachment
struct UME_GameplayStatics_TestPreyAttachment_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      PreyActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.SpawnAIAtLocation
struct UME_GameplayStatics_SpawnAIAtLocation_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SpawnClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    SpawnRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bPersistent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ESpawnActorCollisionHandlingMethod          PawnCollision;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIController*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.SpawnAIAtActor
struct UME_GameplayStatics_SpawnAIAtActor_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SpawnClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseActorRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPersistent;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_ESpawnActorCollisionHandlingMethod          PawnCollision;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIController*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ShowTutorialPopup
struct UME_GameplayStatics_ShowTutorialPopup_Params
{
	struct FName                                       TutorialLabel;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.SetTimeOfDaySpeedScale
struct UME_GameplayStatics_SetTimeOfDaySpeedScale_Params
{
	float                                              NewScale;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ContextActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.SetTimeOfDay
struct UME_GameplayStatics_SetTimeOfDay_Params
{
	float                                              TimeOfDay;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ContextActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.SetKeyForAxis
struct UME_GameplayStatics_SetKeyForAxis_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Binding;                                                   // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.SetKeyForAction
struct UME_GameplayStatics_SetKeyForAction_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Binding;                                                   // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BindIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Rebuild;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ResolveAsset
struct UME_GameplayStatics_ResolveAsset_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ReadPixelsFromRenderTarget
struct UME_GameplayStatics_ReadPixelsFromRenderTarget_Params
{
	class UTextureRenderTarget2D*                      RT;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              OutPixelBuffer;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ProjectPointToSurface
struct UME_GameplayStatics_ProjectPointToSurface_Params
{
	class UObject*                                     Context;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ProjectionPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ProcessImpactResponse
struct UME_GameplayStatics_ProcessImpactResponse_Params
{
	class UPhysicalMaterial*                           InstigatorPM;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             Instigator;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         Receiver;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttachToReceiver;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               ReceivingSurfaceOverride;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceWorldRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactResponseInstance                     ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.KeyIsValid
struct UME_GameplayStatics_KeyIsValid_Params
{
	struct FKey                                        InKey;                                                     // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsWaypointed
struct UME_GameplayStatics_IsWaypointed_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsWatchingCinematic
struct UME_GameplayStatics_IsWatchingCinematic_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlayingPrologue
struct UME_GameplayStatics_IsPlayingPrologue_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlayerOnLand
struct UME_GameplayStatics_IsPlayerOnLand_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlayerLookingAtLocation
struct UME_GameplayStatics_IsPlayerLookingAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TestLocation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TestAngle;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlayerInRangeOfLocation
struct UME_GameplayStatics_IsPlayerInRangeOfLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TestLocation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RangeVal;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlayerInGrotto
struct UME_GameplayStatics_IsPlayerInGrotto_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlayerCameraUnderwater
struct UME_GameplayStatics_IsPlayerCameraUnderwater_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlatformWinGDK
struct UME_GameplayStatics_IsPlatformWinGDK_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsPlatformWindows
struct UME_GameplayStatics_IsPlatformWindows_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IsInWorldMap
struct UME_GameplayStatics_IsInWorldMap_Params
{
	class UObject*                                     WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.IntPointToFVector2D
struct UME_GameplayStatics_IntPointToFVector2D_Params
{
	TArray<struct FIntPoint>                           Input;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           Output;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldUnitScale
struct UME_GameplayStatics_GetWorldUnitScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldSettings
struct UME_GameplayStatics_GetWorldSettings_Params
{
	class AActor*                                      WorldContextActor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_WorldSettings*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldRegionStates
struct UME_GameplayStatics_GetWorldRegionStates_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWorldRegionState>                   RegionStates;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldRegionStateFromObjective
struct UME_GameplayStatics_GetWorldRegionStateFromObjective_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerObjective*                         Obj;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldRegionState                           RegionState;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldRegionState
struct UME_GameplayStatics_GetWorldRegionState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InRegionIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWorldRegionState                           RegionState;                                               // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldRegionData
struct UME_GameplayStatics_GetWorldRegionData_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_WorldRegionData*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldLocationAtUVCoord
struct UME_GameplayStatics_GetWorldLocationAtUVCoord_Params
{
	class AActor*                                      Bounds;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UVCoord;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWorldBoundsActor
struct UME_GameplayStatics_GetWorldBoundsActor_Params
{
	class AActor*                                      WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWaterDepthAtLocation
struct UME_GameplayStatics_GetWaterDepthAtLocation_Params
{
	struct FVector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      WorldContextActor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetWaterDepth
struct UME_GameplayStatics_GetWaterDepth_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetUVsAtWorldLocation
struct UME_GameplayStatics_GetUVsAtWorldLocation_Params
{
	class AActor*                                      Bounds;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Texture;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetTutorialManager
struct UME_GameplayStatics_GetTutorialManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_TutorialManager*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetTimeofDaySpeedScale
struct UME_GameplayStatics_GetTimeofDaySpeedScale_Params
{
	class AActor*                                      ContextActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetTimeofDayNoContext
struct UME_GameplayStatics_GetTimeofDayNoContext_Params
{
	class AActor*                                      ContextActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetTimeofDay
struct UME_GameplayStatics_GetTimeofDay_Params
{
	class AActor*                                      ContextActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetSpawnPool
struct UME_GameplayStatics_GetSpawnPool_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SpawnPool*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetSpawnManager
struct UME_GameplayStatics_GetSpawnManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_SpawnManager*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetSonarManager
struct UME_GameplayStatics_GetSonarManager_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_SonarManager*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetSilhouetteColor
struct UME_GameplayStatics_GetSilhouetteColor_Params
{
	class AActor*                                      SilhouetteActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EOutlineColor                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetRegionName
struct UME_GameplayStatics_GetRegionName_Params
{
	Maneater_EWorldRegion                              Region;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreLocalization;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetRegionIndexforVolume
struct UME_GameplayStatics_GetRegionIndexforVolume_Params
{
	class AME_WorldRegionVolume*                       RegionVolume;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetRegionFromName
struct UME_GameplayStatics_GetRegionFromName_Params
{
	struct FText                                       RegionName;                                                // (Parm, NativeAccessSpecifierPublic)
	Maneater_EWorldRegion                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetPMFromComponent
struct UME_GameplayStatics_GetPMFromComponent_Params
{
	class USceneComponent*                             InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetPlayerSharkState
struct UME_GameplayStatics_GetPlayerSharkState_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_PlayerSharkState*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetPlayerSharkPawn
struct UME_GameplayStatics_GetPlayerSharkPawn_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_PlayerSharkCharacter*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetPlayerBounty
struct UME_GameplayStatics_GetPlayerBounty_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsDollars;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetPersistentLevel
struct UME_GameplayStatics_GetPersistentLevel_Params
{
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevel*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetOceanPhysicsVolume
struct UME_GameplayStatics_GetOceanPhysicsVolume_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_OceanPhysicsVolume*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetOceanManager
struct UME_GameplayStatics_GetOceanManager_Params
{
	class UObject*                                     Context;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_OceanManager*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetObjectiveSpawnManager
struct UME_GameplayStatics_GetObjectiveSpawnManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_ObjectiveSpawnManager*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetObjectiveManager
struct UME_GameplayStatics_GetObjectiveManager_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_PlayerObjectiveManager*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetManeaterGameMode
struct UME_GameplayStatics_GetManeaterGameMode_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_GameMode*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetLocalViewPosition
struct UME_GameplayStatics_GetLocalViewPosition_Params
{
	class AActor*                                      ContextActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetLocalizedGrowthName
struct UME_GameplayStatics_GetLocalizedGrowthName_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           GrowthStage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetLastRenderTime
struct UME_GameplayStatics_GetLastRenderTime_Params
{
	class UPrimitiveComponent*                         InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetLandscapeResolution
struct UME_GameplayStatics_GetLandscapeResolution_Params
{
	class ALandscape*                                  Landscape;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetLandscape
struct UME_GameplayStatics_GetLandscape_Params
{
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALandscape*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetKeysForAction
struct UME_GameplayStatics_GetKeysForAction_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                Bindings;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetKeyFriendlyName
struct UME_GameplayStatics_GetKeyFriendlyName_Params
{
	struct FKey                                        InKey;                                                     // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetDialogueSystem
struct UME_GameplayStatics_GetDialogueSystem_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_DialogueSystem*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetDefaultObject
struct UME_GameplayStatics_GetDefaultObject_Params
{
	class UObject*                                     InObject;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetCurrentMapName
struct UME_GameplayStatics_GetCurrentMapName_Params
{
	class UObject*                                     Context;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetCurrentBossFight
struct UME_GameplayStatics_GetCurrentBossFight_Params
{
	class AActor*                                      WorldContextActor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_BossBattleInfo*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetClassDefaultObject
struct UME_GameplayStatics_GetClassDefaultObject_Params
{
	class UClass*                                      InClass;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetCameraWaterDepth
struct UME_GameplayStatics_GetCameraWaterDepth_Params
{
	class AActor*                                      InActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetBountyManager
struct UME_GameplayStatics_GetBountyManager_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_BountyManager*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAssetName
struct UME_GameplayStatics_GetAssetName_Params
{
	bool                                               bIncludePath;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAssetMapName
struct UME_GameplayStatics_GetAssetMapName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAssetLoader
struct UME_GameplayStatics_GetAssetLoader_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AssetLoader*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllThrashablePawns
struct UME_GameplayStatics_GetAllThrashablePawns_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APawn*>                               ThrashableList;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllThrashableActors
struct UME_GameplayStatics_GetAllThrashableActors_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ThrashableList;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllPingableActors
struct UME_GameplayStatics_GetAllPingableActors_Params
{
	class UObject*                                     WorldContext;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              PingableList;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllLivingHumans
struct UME_GameplayStatics_GetAllLivingHumans_Params
{
	class AActor*                                      WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_HumanCharacter*>                  HumanList;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllLivingCharacters
struct UME_GameplayStatics_GetAllLivingCharacters_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_Character*>                       CharacterList;                                             // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllLivingAnimals
struct UME_GameplayStatics_GetAllLivingAnimals_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_AnimalCharacter*>                 AnimalList;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllChildrenOfClass
struct UME_GameplayStatics_GetAllChildrenOfClass_Params
{
	class UClass*                                      InParent;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               IgnoredClasses;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllAxisInputs
struct UME_GameplayStatics_GetAllAxisInputs_Params
{
	TArray<struct FInputAxisKeyMapping>                AxisInputs;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllAIControllers
struct UME_GameplayStatics_GetAllAIControllers_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AME_AIController*>                    ControllerList;                                            // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortByDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAllActionInputs
struct UME_GameplayStatics_GetAllActionInputs_Params
{
	TArray<struct FInputActionKeyMapping>              ActionInputs;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetAIDirector
struct UME_GameplayStatics_GetAIDirector_Params
{
	class UObject*                                     WorldContext;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIDirector*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.GetActionsForKey
struct UME_GameplayStatics_GetActionsForKey_Params
{
	struct FKey                                        InKey;                                                     // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                OutAxisMappings;                                           // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              OutActionMappings;                                         // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.FVector2DToIntPoint
struct UME_GameplayStatics_FVector2DToIntPoint_Params
{
	TArray<struct FVector2D>                           Input;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIntPoint>                           Output;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.FormatGameplayText
struct UME_GameplayStatics_FormatGameplayText_Params
{
	struct FText                                       TextToFormat;                                              // (Parm, NativeAccessSpecifierPublic)
	TArray<struct FRichTextActionMapping>              ActionBinds;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ForceDespawnAllProxBombs
struct UME_GameplayStatics_ForceDespawnAllProxBombs_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.ForceDespawnAI
struct UME_GameplayStatics_ForceDespawnAI_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.FindSlopeRotation
struct UME_GameplayStatics_FindSlopeRotation_Params
{
	struct FVector                                     FloorNormal;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    CurrentRotation;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.FFloatIntervalToFVector2D
struct UME_GameplayStatics_FFloatIntervalToFVector2D_Params
{
	struct FFloatIntervalBP                            Input;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.DrawArrowOnActor
struct UME_GameplayStatics_DrawArrowOnActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Direction;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArrowLength;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.CreateRenderTarget2DNoHDR
struct UME_GameplayStatics_CreateRenderTarget2DNoHDR_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameplayStatics.AttachCinematicEvolutionMeshes
struct UME_GameplayStatics_AttachCinematicEvolutionMeshes_Params
{
	class ASkeletalMeshActor*                          SkeletalMeshActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetVSyncType
struct UME_GameUserSettings_SetVSyncType_Params
{
	class UWorld*                                      OwnerWorld;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetShowFrameRate
struct UME_GameUserSettings_SetShowFrameRate_Params
{
	bool                                               bNewShowFrameRate;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetShadowsOn
struct UME_GameUserSettings_SetShadowsOn_Params
{
	class UWorld*                                      OwnerWorld;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetOceanQualityLevel
struct UME_GameUserSettings_SetOceanQualityLevel_Params
{
	int                                                QualityLevel;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetLastActiveUserId
struct UME_GameUserSettings_SetLastActiveUserId_Params
{
	struct FString                                     userId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetGlobalQuality
struct UME_GameUserSettings_SetGlobalQuality_Params
{
	int                                                Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetDefaultFOV
struct UME_GameUserSettings_SetDefaultFOV_Params
{
	float                                              InFOV;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetBrightness
struct UME_GameUserSettings_SetBrightness_Params
{
	class UWorld*                                      OwnerWorld;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.SetAntiAliasingType
struct UME_GameUserSettings_SetAntiAliasingType_Params
{
	class UWorld*                                      OwnerWorld;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetVSyncType
struct UME_GameUserSettings_GetVSyncType_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetShowFrameRate
struct UME_GameUserSettings_GetShowFrameRate_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetShadowsOn
struct UME_GameUserSettings_GetShadowsOn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetOceanQualityLevel
struct UME_GameUserSettings_GetOceanQualityLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetManeaterUserSettings
struct UME_GameUserSettings_GetManeaterUserSettings_Params
{
	class UME_GameUserSettings*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetLastActiveUserId
struct UME_GameUserSettings_GetLastActiveUserId_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetGlobalQuality
struct UME_GameUserSettings_GetGlobalQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetDefaultFOV
struct UME_GameUserSettings_GetDefaultFOV_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetBrightness
struct UME_GameUserSettings_GetBrightness_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_GameUserSettings.GetAntiAliasingType
struct UME_GameUserSettings_GetAntiAliasingType_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Grotto.StreamingLevelLoaded
struct AME_Grotto_StreamingLevelLoaded_Params
{
};

// Function Maneater.ME_Grotto.SetInactive
struct AME_Grotto_SetInactive_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Grotto.OnGrottSpaceExited
struct AME_Grotto_OnGrottSpaceExited_Params
{
};

// Function Maneater.ME_Grotto.OnGrottSpaceEntered
struct AME_Grotto_OnGrottSpaceEntered_Params
{
};

// Function Maneater.ME_Grotto.Activate
struct AME_Grotto_Activate_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanAIController.GetStateAsDialogueString
struct AME_HumanAIController_GetStateAsDialogueString_Params
{
	struct FString                                     State;                                                     // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.TryUpdateChatter
struct AME_HumanCharacter_TryUpdateChatter_Params
{
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.SetThreatLevel
struct AME_HumanCharacter_SetThreatLevel_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InstigatingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.SetIsPassenger
struct AME_HumanCharacter_SetIsPassenger_Params
{
	bool                                               bNewPassengerStatus;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_VehiclePawn*                             NewVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeCollision;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeatIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.PostRandomDialogueEvent
struct AME_HumanCharacter_PostRandomDialogueEvent_Params
{
};

// Function Maneater.ME_HumanCharacter.GetupPawn_UseSnapshot
struct AME_HumanCharacter_GetupPawn_UseSnapshot_Params
{
};

// Function Maneater.ME_HumanCharacter.GetupPawn_TriggerAnimation
struct AME_HumanCharacter_GetupPawn_TriggerAnimation_Params
{
};

// Function Maneater.ME_HumanCharacter.GetupPawn_SetupActor
struct AME_HumanCharacter_GetupPawn_SetupActor_Params
{
};

// Function Maneater.ME_HumanCharacter.GetupPawn_MoveActor
struct AME_HumanCharacter_GetupPawn_MoveActor_Params
{
};

// Function Maneater.ME_HumanCharacter.GetStateAsDialogueString
struct AME_HumanCharacter_GetStateAsDialogueString_Params
{
	struct FString                                     State;                                                     // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.EjectIfPassenger
struct AME_HumanCharacter_EjectIfPassenger_Params
{
	class AController*                                 EjectInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldRagdoll;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EjectImpulse;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.ChatterUpdateEvent_BP
struct AME_HumanCharacter_ChatterUpdateEvent_BP_Params
{
	int                                                TotalLimbs;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DestroyedLimbs;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isGrabbed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               wasBumped;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWasForced;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_HumanCharacter.BleedOutTimer
struct AME_HumanCharacter_BleedOutTimer_Params
{
};

// Function Maneater.ME_HumanCharacter.AbandonVehicleFinished
struct AME_HumanCharacter_AbandonVehicleFinished_Params
{
};

// Function Maneater.ME_HumanCharacter.AbandonVehicle
struct AME_HumanCharacter_AbandonVehicle_Params
{
};

// Function Maneater.ME_HumanCharacter.AbandonIfPassenger
struct AME_HumanCharacter_AbandonIfPassenger_Params
{
};

// Function Maneater.ME_HumanBeachgoerAIController.SetFleeingPath
struct AME_HumanBeachgoerAIController_SetFleeingPath_Params
{
};

// Function Maneater.ME_HumanBeachgoerAIController.FleeingAfterDelay
struct AME_HumanBeachgoerAIController_FleeingAfterDelay_Params
{
};

// Function Maneater.ME_SharkCharacter.GetDorsalFinLocation
struct AME_SharkCharacter_GetDorsalFinLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.ZeroOutStats
struct AME_PlayerSharkCharacter_ZeroOutStats_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.UpdateGrowthAssets
struct AME_PlayerSharkCharacter_UpdateGrowthAssets_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.TryUseLungeAbility
struct AME_PlayerSharkCharacter_TryUseLungeAbility_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.TryCancelBite
struct AME_PlayerSharkCharacter_TryCancelBite_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationStarted_BP
struct AME_PlayerSharkCharacter_TailWhipTimeDilationStarted_BP_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.TailWhipTimeDilationEnded_BP
struct AME_PlayerSharkCharacter_TailWhipTimeDilationEnded_BP_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.StopAnimationsOnLandfall
struct AME_PlayerSharkCharacter_StopAnimationsOnLandfall_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.SetWantsToLeaveKnifing
struct AME_PlayerSharkCharacter_SetWantsToLeaveKnifing_Params
{
	bool                                               bWantsToLeave;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.SetTagged
struct AME_PlayerSharkCharacter_SetTagged_Params
{
	bool                                               bNewIsTagged;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.SetCameraRotation
struct AME_PlayerSharkCharacter_SetCameraRotation_Params
{
	struct FRotator                                    NewRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.SetActorAndCameraRotation
struct AME_PlayerSharkCharacter_SetActorAndCameraRotation_Params
{
	struct FRotator                                    NewRotation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	Engine_ETeleportType                               Teleport;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.RefreshAttachedMeshes
struct AME_PlayerSharkCharacter_RefreshAttachedMeshes_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.PlayWaterReEntryAnimation
struct AME_PlayerSharkCharacter_PlayWaterReEntryAnimation_Params
{
	float                                              EntryAngleDot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VelocityAngleDot;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    FlatEntryRotator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               PerfectEntry;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCruisingWaterLine;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.PlayWaterBreachFX
struct AME_PlayerSharkCharacter_PlayWaterBreachFX_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.PlayAudioEvent
struct AME_PlayerSharkCharacter_PlayAudioEvent_Params
{
	class UAkAudioEvent*                               AudioEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.OnTimeDilationStarted
struct AME_PlayerSharkCharacter_OnTimeDilationStarted_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.OnTimeDilationEnded
struct AME_PlayerSharkCharacter_OnTimeDilationEnded_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.OnEvolutionAbilityCharged
struct AME_PlayerSharkCharacter_OnEvolutionAbilityCharged_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChangedEvent
struct AME_PlayerSharkCharacter_OnCinematicModeChangedEvent_Params
{
	bool                                               bCinematicMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.OnCinematicModeChanged
struct AME_PlayerSharkCharacter_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.OnAttackAbilityMeleeHit_BP
struct AME_PlayerSharkCharacter_OnAttackAbilityMeleeHit_BP_Params
{
	class UGameplayAbility*                            AttackAbility;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.NotifyDirectorOfAttack
struct AME_PlayerSharkCharacter_NotifyDirectorOfAttack_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.LerpSharkMaterialParam
struct AME_PlayerSharkCharacter_LerpSharkMaterialParam_Params
{
	struct FString                                     ParamName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParamValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fLerpTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.KnifingStateChanged_BP
struct AME_PlayerSharkCharacter_KnifingStateChanged_BP_Params
{
	bool                                               NewKnifingState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         ChangeContext;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.IsSprinting
struct AME_PlayerSharkCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.IsMotherShark
struct AME_PlayerSharkCharacter_IsMotherShark_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.IsInputDisabled
struct AME_PlayerSharkCharacter_IsInputDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.IsCapableOfFastTravel
struct AME_PlayerSharkCharacter_IsCapableOfFastTravel_Params
{
	class AActor*                                      DestGrotto;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EFastTravelReturn>            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GrowthStageUpdated
struct AME_PlayerSharkCharacter_GrowthStageUpdated_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitPose;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GrowthStageChanged
struct AME_PlayerSharkCharacter_GrowthStageChanged_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GrowthLevelChanged
struct AME_PlayerSharkCharacter_GrowthLevelChanged_Params
{
	int                                                NewGrowthLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GibLastVictim
struct AME_PlayerSharkCharacter_GibLastVictim_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.GetPlayerTargetingSystem
struct AME_PlayerSharkCharacter_GetPlayerTargetingSystem_Params
{
	class UME_PlayerTargetingSystem*                   ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetPlayerSharkMovement
struct AME_PlayerSharkCharacter_GetPlayerSharkMovement_Params
{
	class UME_PlayerSharkMovementComponent*            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetPlayerLevel
struct AME_PlayerSharkCharacter_GetPlayerLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetGrowthStageScale
struct AME_PlayerSharkCharacter_GetGrowthStageScale_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetGrowthStage
struct AME_PlayerSharkCharacter_GetGrowthStage_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetCurrentLockOnTarget
struct AME_PlayerSharkCharacter_GetCurrentLockOnTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetCurrentFocusedTarget
struct AME_PlayerSharkCharacter_GetCurrentFocusedTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetCastAnimInstance
struct AME_PlayerSharkCharacter_GetCastAnimInstance_Params
{
	class UME_AnimInstance_PlayerShark*                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GetAttachedEvolutionMesh
struct AME_PlayerSharkCharacter_GetAttachedEvolutionMesh_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MeshIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GenericWaterlineSplash
struct AME_PlayerSharkCharacter_GenericWaterlineSplash_Params
{
	class UParticleSystem*                             Particles;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.GenericAttachedParticleTrail
struct AME_PlayerSharkCharacter_GenericAttachedParticleTrail_Params
{
	class UParticleSystem*                             Particles;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ELimbBoneName>                LimbName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.ForceKnifingEntryAngle
struct AME_PlayerSharkCharacter_ForceKnifingEntryAngle_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.ExitKnifingUnderwater
struct AME_PlayerSharkCharacter_ExitKnifingUnderwater_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.EvolutionAbilityActivatedEvent
struct AME_PlayerSharkCharacter_EvolutionAbilityActivatedEvent_Params
{
	Maneater_EEvolutionSetType                         SetType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.EnterKnifingFromUnderwater
struct AME_PlayerSharkCharacter_EnterKnifingFromUnderwater_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.EnterKnifingFromBreach
struct AME_PlayerSharkCharacter_EnterKnifingFromBreach_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.EndWhipshotSlomo
struct AME_PlayerSharkCharacter_EndWhipshotSlomo_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.ChunkLastVictim
struct AME_PlayerSharkCharacter_ChunkLastVictim_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.AttemptFastTravel
struct AME_PlayerSharkCharacter_AttemptFastTravel_Params
{
	class AActor*                                      Dest;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.ApplyEvolutionMaterial
struct AME_PlayerSharkCharacter_ApplyEvolutionMaterial_Params
{
};

// Function Maneater.ME_PlayerSharkCharacter.ActivateMutagenScale
struct AME_PlayerSharkCharacter_ActivateMutagenScale_Params
{
	class UParticleSystem*                             ParticleToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketToAttach;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkCharacter.ActionModeUpdated_BP
struct AME_PlayerSharkCharacter_ActionModeUpdated_BP_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         NewActionMode;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_InventoryActor.SetSharkEvolutionVisuals
struct AME_InventoryActor_SetSharkEvolutionVisuals_Params
{
	TMap<Maneater_EEvolutionSlot, class UME_PlayerEvolution*> EquippedEvolutionMap;                                      // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_InventoryActor.SetPlayerSharkCharacter
struct AME_InventoryActor_SetPlayerSharkCharacter_Params
{
	class AME_PlayerSharkCharacter*                    Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_InWorldWidgetCreator.SetActiveIndexFromObjective
struct AME_InWorldWidgetCreator_SetActiveIndexFromObjective_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_InWorldWidgetCreator.OnViewControllerVisibilityChanged
struct AME_InWorldWidgetCreator_OnViewControllerVisibilityChanged_Params
{
	UMG_ESlateVisibility                               ControllerVisibility;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_LandmarkObjective.OnDiscoveredSet
struct AME_LandmarkObjective_OnDiscoveredSet_Params
{
	bool                                               bNewDiscoveredSetting;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_LandmarkObjective.GetAssociatedSign
struct AME_LandmarkObjective_GetAssociatedSign_Params
{
	class AME_DestructibleActor*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.ShouldClampToEdgeOfMap
struct UME_MapWidgetInterface_ShouldClampToEdgeOfMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.OnWidgetMouseDown
struct UME_MapWidgetInterface_OnWidgetMouseDown_Params
{
	class UUserWidget*                                 Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapWidgetVisibility
struct UME_MapWidgetInterface_GetMapWidgetVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapWidgetSize
struct UME_MapWidgetInterface_GetMapWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapWidgetPriority
struct UME_MapWidgetInterface_GetMapWidgetPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapWidgetMaterial
struct UME_MapWidgetInterface_GetMapWidgetMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapWidgetIcon
struct UME_MapWidgetInterface_GetMapWidgetIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapWidgetEnabled
struct UME_MapWidgetInterface_GetMapWidgetEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapDisplayName
struct UME_MapWidgetInterface_GetMapDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MapWidgetInterface.GetMapDescriptionText
struct UME_MapWidgetInterface_GetMapDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MercunaNavOctree.IsBoatOctree
struct AME_MercunaNavOctree_IsBoatOctree_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_MercunaNavVolume.IsBoatVolume
struct AME_MercunaNavVolume_IsBoatVolume_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ObjectiveConditionBase.ConditionIsValid
struct UME_ObjectiveConditionBase_ConditionIsValid_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanManager.IsUnderwater
struct AME_OceanManager_IsUnderwater_Params
{
	struct FVector                                     InLocation;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanManager.GetWaveModulationAtLocation
struct AME_OceanManager_GetWaveModulationAtLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanManager.GetFluidHeightRT
struct AME_OceanManager_GetFluidHeightRT_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanManager.CauseFluidDisturbance
struct AME_OceanManager_CauseFluidDisturbance_Params
{
	struct FVector                                     DisturbanceOrigin;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisturbanceRadius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisturbanceIntensity;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EFluidEffectType                          EffectType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowSize
struct UME_OceanSurfaceParticleSystemComponent_SetWakeLowSize_Params
{
	float                                              NewSize;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowColor
struct UME_OceanSurfaceParticleSystemComponent_SetWakeLowColor_Params
{
	struct FVector                                     NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanSurfaceParticleSystemComponent.SetWakeLowAlpha
struct UME_OceanSurfaceParticleSystemComponent_SetWakeLowAlpha_Params
{
	float                                              NewAlpha;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowSize
struct UME_OceanSurfaceParticleSystemComponent_GetWakeLowSize_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowColor
struct UME_OceanSurfaceParticleSystemComponent_GetWakeLowColor_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_OceanSurfaceParticleSystemComponent.GetWakeLowAlpha
struct UME_OceanSurfaceParticleSystemComponent_GetWakeLowAlpha_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.StartAttackCooldown
struct UME_WeaponComponent_StartAttackCooldown_Params
{
	float                                              CooldownDuration;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.SetShowLaserPointer
struct UME_WeaponComponent_SetShowLaserPointer_Params
{
	bool                                               bShowPointer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetTargeting;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomLockOnStartTime;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.ResetLaserTargeting
struct UME_WeaponComponent_ResetLaserTargeting_Params
{
};

// Function Maneater.ME_WeaponComponent.PerformFire
struct UME_WeaponComponent_PerformFire_Params
{
	struct FVector                                     AimDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bViaAnimNotify;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.OnMeleeAttackCooldownTimerFinished
struct UME_WeaponComponent_OnMeleeAttackCooldownTimerFinished_Params
{
};

// Function Maneater.ME_WeaponComponent.IsCooldownActive
struct UME_WeaponComponent_IsCooldownActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.HasLaserLock
struct UME_WeaponComponent_HasLaserLock_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.HasLaser
struct UME_WeaponComponent_HasLaser_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.GetWeapon
struct UME_WeaponComponent_GetWeapon_Params
{
	class USkeletalMeshComponent*                      Owner;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_WeaponComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.GetTargetedActor
struct UME_WeaponComponent_GetTargetedActor_Params
{
	class AME_Character*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.GetLaserAimDir
struct UME_WeaponComponent_GetLaserAimDir_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.Fire
struct UME_WeaponComponent_Fire_Params
{
	struct FVector                                     AimDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bViaAnimNotify;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WeaponComponent.Drop
struct UME_WeaponComponent_Drop_Params
{
};

// Function Maneater.ME_PathRequestQueue.DecayQueue
struct UME_PathRequestQueue_DecayQueue_Params
{
};

// Function Maneater.ME_PhysicalImpactResponse.GetManeaterGameMode
struct UME_PhysicalImpactResponse_GetManeaterGameMode_Params
{
	class AME_GameMode*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PhysicalImpactResponse.GetImpactEffects
struct UME_PhysicalImpactResponse_GetImpactEffects_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               ImpactingSurface;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnderwater;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScrape;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImpactEffect                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerEvolution.GetDisplayStatsForEvolution
struct UME_PlayerEvolution_GetDisplayStatsForEvolution_Params
{
	float                                              EffectiveLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionRarity                          eRarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEvolutionDisplayStat>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.SetObjectiveState
struct UME_PlayerObjective_SetObjectiveState_Params
{
	Maneater_EObjectiveState                           NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggeredFromLoad;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.OnGateActivated
struct UME_PlayerObjective_OnGateActivated_Params
{
	class AActor*                                      ActivatedGate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.IsStoryObjective
struct UME_PlayerObjective_IsStoryObjective_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.IsComplete
struct UME_PlayerObjective_IsComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.IsAssociatedWithActor
struct UME_PlayerObjective_IsAssociatedWithActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.InitObjectiveFromSave
struct UME_PlayerObjective_InitObjectiveFromSave_Params
{
};

// Function Maneater.ME_PlayerObjective.GetTotalProgressPoints
struct UME_PlayerObjective_GetTotalProgressPoints_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetSubtitleText
struct UME_PlayerObjective_GetSubtitleText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetShortObjectiveDescription
struct UME_PlayerObjective_GetShortObjectiveDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetProgressText
struct UME_PlayerObjective_GetProgressText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetObjectiveType
struct UME_PlayerObjective_GetObjectiveType_Params
{
	Maneater_EObjectiveType                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetObjectiveState
struct UME_PlayerObjective_GetObjectiveState_Params
{
	Maneater_EObjectiveState                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetObjectiveRewardsHandle
struct UME_PlayerObjective_GetObjectiveRewardsHandle_Params
{
	struct FDataTableRowHandle                         ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetObjectiveName
struct UME_PlayerObjective_GetObjectiveName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetObjectiveImage
struct UME_PlayerObjective_GetObjectiveImage_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetObjectiveDescription
struct UME_PlayerObjective_GetObjectiveDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetMapLocators
struct UME_PlayerObjective_GetMapLocators_Params
{
	TArray<struct FVector>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetCurrentProgressPoints
struct UME_PlayerObjective_GetCurrentProgressPoints_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetCompletionPercentage
struct UME_PlayerObjective_GetCompletionPercentage_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.GetAssignedRegion
struct UME_PlayerObjective_GetAssignedRegion_Params
{
	Maneater_EWorldRegion                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.Cheat_ResetObjective
struct UME_PlayerObjective_Cheat_ResetObjective_Params
{
};

// Function Maneater.ME_PlayerObjective.Cheat_ProgressObjective
struct UME_PlayerObjective_Cheat_ProgressObjective_Params
{
	int                                                Increment;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjective.Cheat_LogObjective
struct UME_PlayerObjective_Cheat_LogObjective_Params
{
};

// Function Maneater.ME_PlayerObjective.Cheat_CompleteObjective
struct UME_PlayerObjective_Cheat_CompleteObjective_Params
{
};

// Function Maneater.ME_PlayerObjectiveGrotto.GetAssociatedGrotto
struct UME_PlayerObjectiveGrotto_GetAssociatedGrotto_Params
{
};

// Function Maneater.ME_PlayerObjectiveManager.TutorialFinished
struct AME_PlayerObjectiveManager_TutorialFinished_Params
{
};

// Function Maneater.ME_PlayerObjectiveManager.SetObjectState
struct AME_PlayerObjectiveManager_SetObjectState_Params
{
	class AActor*                                      FoundActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EObjectiveProgressState                   eState;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.SetCustomObjectiveState
struct AME_PlayerObjectiveManager_SetCustomObjectiveState_Params
{
	Maneater_EObjectiveState                           NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AssociatedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.OnRegionChanged
struct AME_PlayerObjectiveManager_OnRegionChanged_Params
{
	Maneater_EWorldRegion                              Region;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RegionIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.OnPlayerLevelChanged
struct AME_PlayerObjectiveManager_OnPlayerLevelChanged_Params
{
	int                                                NewGrowthLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.OnInfamyRankUp
struct AME_PlayerObjectiveManager_OnInfamyRankUp_Params
{
	int                                                Rank;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.OnGrowthStageChanged
struct AME_PlayerObjectiveManager_OnGrowthStageChanged_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitPose;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.OnGrottoEntered
struct AME_PlayerObjectiveManager_OnGrottoEntered_Params
{
	class AME_Grotto*                                  ME_Grotto;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.OnGateActivated
struct AME_PlayerObjectiveManager_OnGateActivated_Params
{
	class AActor*                                      ActivatedGate;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.ObjectUnloaded
struct AME_PlayerObjectiveManager_ObjectUnloaded_Params
{
	class AActor*                                      UnloadedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.ObjectLoaded
struct AME_PlayerObjectiveManager_ObjectLoaded_Params
{
	class AActor*                                      LoadedActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.LandmarkObjectBitten
struct AME_PlayerObjectiveManager_LandmarkObjectBitten_Params
{
	class AActor*                                      LandmarkActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetStoryConditionStatus
struct AME_PlayerObjectiveManager_GetStoryConditionStatus_Params
{
	TArray<struct FConditionStatus>                    ConditionResults;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetRegionPercentComplete
struct AME_PlayerObjectiveManager_GetRegionPercentComplete_Params
{
	Maneater_EWorldRegion                              Region;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetObjectState
struct AME_PlayerObjectiveManager_GetObjectState_Params
{
	class AActor*                                      FoundActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EObjectiveProgressState                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetObjectiveFromActor
struct AME_PlayerObjectiveManager_GetObjectiveFromActor_Params
{
	class AActor*                                      SearchingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EObjectiveType                            FilterType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerObjective*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetObjectiveByName
struct AME_PlayerObjectiveManager_GetObjectiveByName_Params
{
	struct FText                                       SearchName;                                                // (Parm, NativeAccessSpecifierPublic)
	class UME_PlayerObjective*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetGamePercentComplete
struct AME_PlayerObjectiveManager_GetGamePercentComplete_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.GetCurrentStoryIndex
struct AME_PlayerObjectiveManager_GetCurrentStoryIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.DelayedBossFightAvailableBroadcast
struct AME_PlayerObjectiveManager_DelayedBossFightAvailableBroadcast_Params
{
	class UME_PlayerObjectiveBoss*                     BossObjective;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.CheckNextStoryEvent
struct AME_PlayerObjectiveManager_CheckNextStoryEvent_Params
{
};

// Function Maneater.ME_PlayerObjectiveManager.Cheat_ResetObjective
struct AME_PlayerObjectiveManager_Cheat_ResetObjective_Params
{
	struct FName                                       ObjName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.Cheat_ProgressObjective
struct AME_PlayerObjectiveManager_Cheat_ProgressObjective_Params
{
	struct FName                                       ObjName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Increment;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.Cheat_CompleteObjective
struct AME_PlayerObjectiveManager_Cheat_CompleteObjective_Params
{
	struct FName                                       ObjName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerObjectiveManager.AdvanceToNextStoryEvent
struct AME_PlayerObjectiveManager_AdvanceToNextStoryEvent_Params
{
};

// Function Maneater.ME_PlayerSharkController.SetHUDVisibilityChanged
struct AME_PlayerSharkController_SetHUDVisibilityChanged_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkController.ReceivePostInitializeComponents
struct AME_PlayerSharkController_ReceivePostInitializeComponents_Params
{
};

// Function Maneater.ME_PlayerSharkController.OnRevealMap
struct AME_PlayerSharkController_OnRevealMap_Params
{
	struct FVector                                     MapLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkController.OnPossessedPawn
struct AME_PlayerSharkController_OnPossessedPawn_Params
{
	class AME_PlayerSharkCharacter*                    PlayerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkController.OnPlayerDied
struct AME_PlayerSharkController_OnPlayerDied_Params
{
	class AME_PlayerSharkCharacter*                    PlayerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkController.IsCinematicMode
struct AME_PlayerSharkController_IsCinematicMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkController.GetKeysForAction
struct AME_PlayerSharkController_GetKeysForAction_Params
{
	struct FName                                       ActionName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              Bindings;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkMovementComponent.SetCrusingWaterLine
struct UME_PlayerSharkMovementComponent_SetCrusingWaterLine_Params
{
	bool                                               bNewCrusingWaterline;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         ChangeContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetWaypoint
struct AME_PlayerSharkState_SetWaypoint_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_WaypointMarker*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetStat
struct AME_PlayerSharkState_SetStat_Params
{
	TEnumAsByte<Maneater_EPersistentStatType>          StatToModify;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetSlottedEvolution
struct AME_PlayerSharkState_SetSlottedEvolution_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerEvolution*                         Evolution;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetRespawnLocation
struct AME_PlayerSharkState_SetRespawnLocation_Params
{
	struct FVector                                     NewRespawnLocation;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    NewRespawnRotation;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSaveGame;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetNewEvolution
struct AME_PlayerSharkState_SetNewEvolution_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNewEvolution;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetInventoryEvolutionEquipped
struct AME_PlayerSharkState_SetInventoryEvolutionEquipped_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionSlot                            AssignedSlot;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetHasNewEvolutionAvailable
struct AME_PlayerSharkState_SetHasNewEvolutionAvailable_Params
{
	bool                                               bAvailable;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetGrowthStage
struct AME_PlayerSharkState_SetGrowthStage_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitPose;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.SetGrowthLevel
struct AME_PlayerSharkState_SetGrowthLevel_Params
{
	int                                                NewGrowthLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ForceGrowth;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCauseGameSave;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.RemoveWaypoint
struct AME_PlayerSharkState_RemoveWaypoint_Params
{
};

// Function Maneater.ME_PlayerSharkState.RemoveInventoryEvolution
struct AME_PlayerSharkState_RemoveInventoryEvolution_Params
{
	class UME_PlayerEvolution*                         ToBeRemovedEvolution;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.ReceiveBountyChange
struct AME_PlayerSharkState_ReceiveBountyChange_Params
{
	float                                              NewBountyDollars;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      BountyChangeInstigator;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.PurchaseInventoryEvolutionUpgrade
struct AME_PlayerSharkState_PurchaseInventoryEvolutionUpgrade_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.OnWorldRegionChanged
struct AME_PlayerSharkState_OnWorldRegionChanged_Params
{
	class AME_WorldRegionVolume*                       NewRegion;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.OnPlayerBountyChanged
struct AME_PlayerSharkState_OnPlayerBountyChanged_Params
{
	float                                              NewBountyDollars;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      BountyChangeInstigator;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.OnNutrientsChanged
struct AME_PlayerSharkState_OnNutrientsChanged_Params
{
	int                                                NutrientDelta;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.OnIncreasedGrowthStage
struct AME_PlayerSharkState_OnIncreasedGrowthStage_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.OnGainedGrowthLevel
struct AME_PlayerSharkState_OnGainedGrowthLevel_Params
{
	int                                                NewGrowthLevel;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.ModifyStat
struct AME_PlayerSharkState_ModifyStat_Params
{
	TEnumAsByte<Maneater_EPersistentStatType>          StatToModify;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueChange;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.ModifyNutrients
struct AME_PlayerSharkState_ModifyNutrients_Params
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientToModify;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValueChange;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.ModifyGrowthStage
struct AME_PlayerSharkState_ModifyGrowthStage_Params
{
	int                                                GrowthChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.ModifyGrowthLevel
struct AME_PlayerSharkState_ModifyGrowthLevel_Params
{
	int                                                GrowthLevelChange;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.LevelUpRequiresGrowth
struct AME_PlayerSharkState_LevelUpRequiresGrowth_Params
{
	int                                                NewGrowthLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.IsInstigatingAnyAlerts
struct AME_PlayerSharkState_IsInstigatingAnyAlerts_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.IsGrowthStageAvailable
struct AME_PlayerSharkState_IsGrowthStageAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.IsEvolutionEquip
struct AME_PlayerSharkState_IsEvolutionEquip_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetSlottedEvolution
struct AME_PlayerSharkState_GetSlottedEvolution_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerEvolution*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetNumberOfSetItemsEquippedByType
struct AME_PlayerSharkState_GetNumberOfSetItemsEquippedByType_Params
{
	Maneater_EEvolutionSetType                         eType;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetMinGrowthLevel
struct AME_PlayerSharkState_GetMinGrowthLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetMaxGrowthLevel
struct AME_PlayerSharkState_GetMaxGrowthLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetInventoryEvolutions
struct AME_PlayerSharkState_GetInventoryEvolutions_Params
{
	TArray<class UME_PlayerEvolution*>                 Evolutions;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionSlot                            SlotTypeFilter;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetInventoryEvolutionData
struct AME_PlayerSharkState_GetInventoryEvolutionData_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEvolutionData                              OutEvolutionData;                                          // (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetHasNewEvolutionAvailable
struct AME_PlayerSharkState_GetHasNewEvolutionAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetGrowthPct
struct AME_PlayerSharkState_GetGrowthPct_Params
{
	bool                                               bRelativeToNextStage;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetEvolutionSetName
struct AME_PlayerSharkState_GetEvolutionSetName_Params
{
	Maneater_EEvolutionSetType                         eType;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetEvolutionsBelongingToSet
struct AME_PlayerSharkState_GetEvolutionsBelongingToSet_Params
{
	Maneater_EEvolutionSetType                         eType;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_PlayerEvolution*>                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.GetDisplayStatsForEvolutionSetBonus
struct AME_PlayerSharkState_GetDisplayStatsForEvolutionSetBonus_Params
{
	Maneater_EEvolutionSetType                         eType;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumEquip;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEvolutionDisplayStat>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.DeductNutrientCost
struct AME_PlayerSharkState_DeductNutrientCost_Params
{
	struct FEvolutionUpgradeCost                       UpgradeCost;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.CheckAndGrantPlayerEntitlements
struct AME_PlayerSharkState_CheckAndGrantPlayerEntitlements_Params
{
};

// Function Maneater.ME_PlayerSharkState.CanPurchaseEvolutionUpgrade
struct AME_PlayerSharkState_CanPurchaseEvolutionUpgrade_Params
{
	struct FEvolutionUpgradePrice                      UpgradePrice;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.CanAffordEvolutionCost
struct AME_PlayerSharkState_CanAffordEvolutionCost_Params
{
	struct FEvolutionUpgradeCost                       UpgradeCost;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.AddInventoryEvolution
struct AME_PlayerSharkState_AddInventoryEvolution_Params
{
	class UME_PlayerEvolution*                         NewEvolution;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionRarity                          Rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerSharkState.AcceptGrowthStageAtGrotto
struct AME_PlayerSharkState_AcceptGrowthStageAtGrotto_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           PlayerGrowthStage;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.SetShowSilhouette
struct UME_PlayerTargetingSystem_SetShowSilhouette_Params
{
	class AActor*                                      PingTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EOutlineColor                             ForcedOutlineColor;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.RemovePotentialTarget
struct UME_PlayerTargetingSystem_RemovePotentialTarget_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetSoftLockOnTargetLocation
struct UME_PlayerTargetingSystem_GetSoftLockOnTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetLockOnTargetLocation
struct UME_PlayerTargetingSystem_GetLockOnTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetFocusedTargetLocation
struct UME_PlayerTargetingSystem_GetFocusedTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetCurrentWhipShotTarget
struct UME_PlayerTargetingSystem_GetCurrentWhipShotTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetCurrentSoftLockOnTarget
struct UME_PlayerTargetingSystem_GetCurrentSoftLockOnTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetCurrentLockOnTarget
struct UME_PlayerTargetingSystem_GetCurrentLockOnTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedTarget
struct UME_PlayerTargetingSystem_GetCurrentFocusedTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.GetCurrentFocusedObjectiveTarget
struct UME_PlayerTargetingSystem_GetCurrentFocusedObjectiveTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerTargetingSystem.AddPotentialTarget
struct UME_PlayerTargetingSystem_AddPotentialTarget_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyWhipshotTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsObjectiveTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_PlayerUIAvatarActor.ReceivePostInitializeComponents
struct AME_PlayerUIAvatarActor_ReceivePostInitializeComponents_Params
{
};

// Function Maneater.ME_Projectile.OnPhysicsVolumeChanged
struct AME_Projectile_OnPhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_Projectile.OnHitActor
struct AME_Projectile_OnHitActor_Params
{
	class AActor*                                      HitActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveObjectBase.SetDirty
struct UME_SaveObjectBase_SetDirty_Params
{
};

// Function Maneater.ME_SaveObjectBase.SetClean
struct UME_SaveObjectBase_SetClean_Params
{
};

// Function Maneater.ME_SaveObjectBase.IsDirty
struct UME_SaveObjectBase_IsDirty_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.SetTigerSkinEvolutionRarity
struct UME_SaveGameObject_SetTigerSkinEvolutionRarity_Params
{
	Maneater_EEvolutionRarity                          eRarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.SaveObject
struct UME_SaveGameObject_SaveObject_Params
{
	class UObject*                                     ObjectToSave;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                      GameWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.SaveActorWithTransform
struct UME_SaveGameObject_SaveActorWithTransform_Params
{
	class AActor*                                      ActorToSave;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.RemoveSavedObject
struct UME_SaveGameObject_RemoveSavedObject_Params
{
	class UObject*                                     ObjectToRemove;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.LoadObjectProperties
struct UME_SaveGameObject_LoadObjectProperties_Params
{
	class UObject*                                     ObjectToLoad;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWorld*                                      GameWorld;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyClassMustMatch;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.LoadAllObjectsOfClass
struct UME_SaveGameObject_LoadAllObjectsOfClass_Params
{
	class UClass*                                      ClassToLoad;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.LoadAllActorsWithTransform
struct UME_SaveGameObject_LoadAllActorsWithTransform_Params
{
	class UClass*                                      ClassToLoad;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.LoadActorWithTransform
struct UME_SaveGameObject_LoadActorWithTransform_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveGameObject.GetTigerSkinEvolutionRarity
struct UME_SaveGameObject_GetTigerSkinEvolutionRarity_Params
{
	Maneater_EEvolutionRarity                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetTutorialPopupEnabled
struct UME_SaveProfileObject_SetTutorialPopupEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetSubtitlesEnabled
struct UME_SaveProfileObject_SetSubtitlesEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetSfxVolume
struct UME_SaveProfileObject_SetSfxVolume_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetRightStickSensitivity
struct UME_SaveProfileObject_SetRightStickSensitivity_Params
{
	float                                              Sensitivity;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetRaytracingQuality
struct UME_SaveProfileObject_SetRaytracingQuality_Params
{
	int                                                Quality;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetNarratorVolume
struct UME_SaveProfileObject_SetNarratorVolume_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetMusicVolume
struct UME_SaveProfileObject_SetMusicVolume_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetMouseSensitivity
struct UME_SaveProfileObject_SetMouseSensitivity_Params
{
	float                                              Sensitivity;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetMasterVolume
struct UME_SaveProfileObject_SetMasterVolume_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetLeftStickSensitivity
struct UME_SaveProfileObject_SetLeftStickSensitivity_Params
{
	float                                              Sensitivity;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetInvertMouseYEnabled
struct UME_SaveProfileObject_SetInvertMouseYEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetInvertMouseY
struct UME_SaveProfileObject_SetInvertMouseY_Params
{
	bool                                               Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetInvertGamepadYEnabled
struct UME_SaveProfileObject_SetInvertGamepadYEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetInvertGamepadY
struct UME_SaveProfileObject_SetInvertGamepadY_Params
{
	bool                                               Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetDialogVolume
struct UME_SaveProfileObject_SetDialogVolume_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetControlScheme
struct UME_SaveProfileObject_SetControlScheme_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.SetControllerVibrationEnabled
struct UME_SaveProfileObject_SetControllerVibrationEnabled_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.IsMouseYInverted
struct UME_SaveProfileObject_IsMouseYInverted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.IsInvertMouseYEnabled
struct UME_SaveProfileObject_IsInvertMouseYEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.IsInvertGamepadYEnabled
struct UME_SaveProfileObject_IsInvertGamepadYEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.IsGamepadYInverted
struct UME_SaveProfileObject_IsGamepadYInverted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetTutorialPopupEnabled
struct UME_SaveProfileObject_GetTutorialPopupEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetSubtitlesEnabled
struct UME_SaveProfileObject_GetSubtitlesEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetSfxVolume
struct UME_SaveProfileObject_GetSfxVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetRightStickSensitivity
struct UME_SaveProfileObject_GetRightStickSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetRaytracingQuality
struct UME_SaveProfileObject_GetRaytracingQuality_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetNarratorVolume
struct UME_SaveProfileObject_GetNarratorVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMusicVolume
struct UME_SaveProfileObject_GetMusicVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMouseSensitivity
struct UME_SaveProfileObject_GetMouseSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMinStickSensitivity
struct UME_SaveProfileObject_GetMinStickSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMinMouseSensitivity
struct UME_SaveProfileObject_GetMinMouseSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMaxStickSensitivity
struct UME_SaveProfileObject_GetMaxStickSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMaxMouseSensitivity
struct UME_SaveProfileObject_GetMaxMouseSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetMasterVolume
struct UME_SaveProfileObject_GetMasterVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetLeftStickSensitivity
struct UME_SaveProfileObject_GetLeftStickSensitivity_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetDialogVolume
struct UME_SaveProfileObject_GetDialogVolume_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetControlScheme
struct UME_SaveProfileObject_GetControlScheme_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.GetControllerVibrationEnabled
struct UME_SaveProfileObject_GetControllerVibrationEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.DEV_SetBoostType
struct UME_SaveProfileObject_DEV_SetBoostType_Params
{
	unsigned char                                      idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.DEV_GetBoostType
struct UME_SaveProfileObject_DEV_GetBoostType_Params
{
	unsigned char                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveProfileObject.ApplyAudioSettings
struct UME_SaveProfileObject_ApplyAudioSettings_Params
{
};

// Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveProfileData
struct UME_SaveSystemStatics_SaveCurrentlyActiveProfileData_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.SaveCurrentlyActiveGameToSlot
struct UME_SaveSystemStatics_SaveCurrentlyActiveGameToSlot_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceFlush;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.PeekSaveGameSlot
struct UME_SaveSystemStatics_PeekSaveGameSlot_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.LoadSaveGameSlot
struct UME_SaveSystemStatics_LoadSaveGameSlot_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.LoadProfileData
struct UME_SaveSystemStatics_LoadProfileData_Params
{
	class UObject*                                     WorldContextObjet;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveProfileObject*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.GetSaveName
struct UME_SaveSystemStatics_GetSaveName_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.GetSaveGameInstance
struct UME_SaveSystemStatics_GetSaveGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.GetSavedProfileTimeStamp
struct UME_SaveSystemStatics_GetSavedProfileTimeStamp_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.GetSavedProfileDir
struct UME_SaveSystemStatics_GetSavedProfileDir_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.GetProfileSaveInstance
struct UME_SaveSystemStatics_GetProfileSaveInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveProfileObject*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.GetPreviouslyLoadedSaveSlot
struct UME_SaveSystemStatics_GetPreviouslyLoadedSaveSlot_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.DestroySaveGameInstance
struct UME_SaveSystemStatics_DestroySaveGameInstance_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.DeleteSaveGameSlot
struct UME_SaveSystemStatics_DeleteSaveGameSlot_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SaveSystemStatics.CurrentPlayerDoesSlotHaveSave
struct UME_SaveSystemStatics_CurrentPlayerDoesSlotHaveSave_Params
{
	int                                                Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SignificanceEntity.PostSignificance
struct UME_SignificanceEntity_PostSignificance_Params
{
	class UObject*                                     SignificanceObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldSignificance;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewSignificance;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnregistered;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SignificanceEntity.CalculateSignificance
struct UME_SignificanceEntity_CalculateSignificance_Params
{
	class UObject*                                     SignificanceObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ViewPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.OnPlayerFocused
struct UME_SonarDetectableInterface_OnPlayerFocused_Params
{
};

// Function Maneater.ME_SonarDetectableInterface.OnPingedByPlayerSonar
struct UME_SonarDetectableInterface_OnPingedByPlayerSonar_Params
{
};

// Function Maneater.ME_SonarDetectableInterface.OnFoundBySonar
struct UME_SonarDetectableInterface_OnFoundBySonar_Params
{
};

// Function Maneater.ME_SonarDetectableInterface.GetSonarWidget
struct UME_SonarDetectableInterface_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetComponent*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetMaxDistanceVisible
struct UME_SonarDetectableInterface_GetMaxDistanceVisible_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetFriendlyName
struct UME_SonarDetectableInterface_GetFriendlyName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetFocusPriority
struct UME_SonarDetectableInterface_GetFocusPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetDisplayLevel
struct UME_SonarDetectableInterface_GetDisplayLevel_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetDetectableLocation
struct UME_SonarDetectableInterface_GetDetectableLocation_Params
{
	struct FVector                                     AttackerLocation;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetDetectableComponentLocationOffset
struct UME_SonarDetectableInterface_GetDetectableComponentLocationOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.GetDetectableComponent
struct UME_SonarDetectableInterface_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.CanBeLockedOnTo
struct UME_SonarDetectableInterface_CanBeLockedOnTo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarDetectableInterface.CanBeFocused
struct UME_SonarDetectableInterface_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SonarManager.OnCinematicModeChanged
struct AME_SonarManager_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnManagerBase.AISpawned
struct AME_SpawnManagerBase_AISpawned_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnlistCondition.ConditionIsValid
struct UME_SpawnlistCondition_ConditionIsValid_Params
{
	class AActor*                                      WorldContextActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnPoolEntity.ResetEntity
struct UME_SpawnPoolEntity_ResetEntity_Params
{
};

// Function Maneater.ME_SpawnPoolEntity.IsExemptFromPool
struct UME_SpawnPoolEntity_IsExemptFromPool_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnPoolEntity.IsDespawning
struct UME_SpawnPoolEntity_IsDespawning_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_SpawnPoolEntity.InitEntity
struct UME_SpawnPoolEntity_InitEntity_Params
{
};

// Function Maneater.ME_SpawnPoolEntity.EntityDespawned
struct UME_SpawnPoolEntity_EntityDespawned_Params
{
};

// Function Maneater.ME_ThrashableInterface.OnWhipShotImpact
struct UME_ThrashableInterface_OnWhipShotImpact_Params
{
	class APawn*                                       WhipInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnWhipShotEnd
struct UME_ThrashableInterface_OnWhipShotEnd_Params
{
	class APawn*                                       WhipInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     EndVelocity;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               GrabbedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnWhipShotBegin
struct UME_ThrashableInterface_OnWhipShotBegin_Params
{
	class APawn*                                       WhipInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WhipVelocity;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnReleasedBy
struct UME_ThrashableInterface_OnReleasedBy_Params
{
	class AME_AnimalCharacter*                         ReleasingAnimal;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreFlee;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBrokeAway;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnGrabPointDamagedVFX
struct UME_ThrashableInterface_OnGrabPointDamagedVFX_Params
{
	struct FThrashGrabPoint                            GrabPoint;                                                 // (Parm, NativeAccessSpecifierPublic)
	float                                              DamageToApply;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageNormal;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnGrabPointDamaged
struct UME_ThrashableInterface_OnGrabPointDamaged_Params
{
	struct FThrashGrabPoint                            GrabPoint;                                                 // (Parm, NativeAccessSpecifierPublic)
	float                                              DamageToApply;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EPhysicalSurface>               PhysSurface;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         DamagedComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         InstigatingComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageNormal;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageLocation;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnGrabPointConsumed
struct UME_ThrashableInterface_OnGrabPointConsumed_Params
{
	class AME_AnimalCharacter*                         ConsumingAnimal;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FThrashGrabPoint                            ConsumedGrabPoint;                                         // (Parm, NativeAccessSpecifierPublic)
	struct FName                                       GoreCapBoneName;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnGrabPointChanged
struct UME_ThrashableInterface_OnGrabPointChanged_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         GrabbedComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GrabPointIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnGrabbedBy
struct UME_ThrashableInterface_OnGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         GrabbedComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GrabPointIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.OnConsumedWhole
struct UME_ThrashableInterface_OnConsumedWhole_Params
{
	class AME_AnimalCharacter*                         ConsumingAnimal;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.MoveActorToMeshPositionOnRelease
struct UME_ThrashableInterface_MoveActorToMeshPositionOnRelease_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipshotSpinning
struct UME_ThrashableInterface_GetWhipshotSpinning_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipshotRotationSpeed
struct UME_ThrashableInterface_GetWhipshotRotationSpeed_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipshotRolling
struct UME_ThrashableInterface_GetWhipshotRolling_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipShotMovementClass
struct UME_ThrashableInterface_GetWhipShotMovementClass_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipshotLandClearance
struct UME_ThrashableInterface_GetWhipshotLandClearance_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipShotImpactEffect
struct UME_ThrashableInterface_GetWhipShotImpactEffect_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipShotFlightType
struct UME_ThrashableInterface_GetWhipShotFlightType_Params
{
	TEnumAsByte<Maneater_EMECustomMovementMode>        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetWhipShotFlightParticleEffect
struct UME_ThrashableInterface_GetWhipShotFlightParticleEffect_Params
{
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetThrashableMesh
struct UME_ThrashableInterface_GetThrashableMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetSize
struct UME_ThrashableInterface_GetSize_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.GetGrabPoints
struct UME_ThrashableInterface_GetGrabPoints_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FThrashGrabPoint>                    GrabPoints;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.CanBeWhipShot
struct UME_ThrashableInterface_CanBeWhipShot_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.CanBeGrabbedBy
struct UME_ThrashableInterface_CanBeGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_ThrashableInterface.CanBeConsumedWholeBy
struct UME_ThrashableInterface_CanBeConsumedWholeBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeofDayInfo.SetTimeOfDay
struct AME_TimeofDayInfo_SetTimeOfDay_Params
{
	float                                              NewHourOfDay;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForce;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeofDayInfo.SetPauseState
struct AME_TimeofDayInfo_SetPauseState_Params
{
	bool                                               bNewPause;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeofDayInfo.GetPauseState
struct AME_TimeofDayInfo_GetPauseState_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeOfDayWorldActor.UpdateTimeOfDayCubemaps
struct AME_TimeOfDayWorldActor_UpdateTimeOfDayCubemaps_Params
{
	float                                              InTimeOfDay;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeOfDayWorldActor.TriggerStartNightTime
struct AME_TimeOfDayWorldActor_TriggerStartNightTime_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.TriggerStartDayTime
struct AME_TimeOfDayWorldActor_TriggerStartDayTime_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.TriggerForceChangeTime
struct AME_TimeOfDayWorldActor_TriggerForceChangeTime_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.TriggerFogBelowWater
struct AME_TimeOfDayWorldActor_TriggerFogBelowWater_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.TriggerFogAboveWater
struct AME_TimeOfDayWorldActor_TriggerFogAboveWater_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.TickFogTransition
struct AME_TimeOfDayWorldActor_TickFogTransition_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.TickDayNightTransition
struct AME_TimeOfDayWorldActor_TickDayNightTransition_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.OnNewFogVolumeEntered
struct AME_TimeOfDayWorldActor_OnNewFogVolumeEntered_Params
{
	TEnumAsByte<Maneater_EFogState>                    PlayerFogOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeOfDayWorldActor.IsDaytime
struct AME_TimeOfDayWorldActor_IsDaytime_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TimeOfDayWorldActor.InitTODActor
struct AME_TimeOfDayWorldActor_InitTODActor_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.InitTimeOfDaySettings
struct AME_TimeOfDayWorldActor_InitTimeOfDaySettings_Params
{
};

// Function Maneater.ME_TimeOfDayWorldActor.InitFogSettings
struct AME_TimeOfDayWorldActor_InitFogSettings_Params
{
};

// Function Maneater.ME_TorpedoProjectile.SetCanBeGrabbed
struct AME_TorpedoProjectile_SetCanBeGrabbed_Params
{
	bool                                               bCanGrab;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TorpedoProjectile.OnHomingLost
struct AME_TorpedoProjectile_OnHomingLost_Params
{
};

// Function Maneater.ME_TorpedoProjectile.OnEvaded
struct AME_TorpedoProjectile_OnEvaded_Params
{
};

// Function Maneater.ME_TutorialManager.TriggerNarratorInitialProgressEvent
struct AME_TutorialManager_TriggerNarratorInitialProgressEvent_Params
{
};

// Function Maneater.ME_TutorialManager.ShouldShowInGamePopupWidget
struct AME_TutorialManager_ShouldShowInGamePopupWidget_Params
{
	TEnumAsByte<Maneater_ETutorialPopupID>             PopupId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.RequestInGamePopupWidget
struct AME_TutorialManager_RequestInGamePopupWidget_Params
{
	TEnumAsByte<Maneater_ETutorialPopupID>             PopupId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.PushHudTip
struct AME_TutorialManager_PushHudTip_Params
{
	int                                                Index;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.OnWhipShotPerformed
struct AME_TutorialManager_OnWhipShotPerformed_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.OnTailwhipPerformed
struct AME_TutorialManager_OnTailwhipPerformed_Params
{
};

// Function Maneater.ME_TutorialManager.OnPlayerConsumedPrey
struct AME_TutorialManager_OnPlayerConsumedPrey_Params
{
	class AME_AnimalCharacter*                         Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Prey;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.OnLungePerformed
struct AME_TutorialManager_OnLungePerformed_Params
{
};

// Function Maneater.ME_TutorialManager.OnKnifingStateChanged
struct AME_TutorialManager_OnKnifingStateChanged_Params
{
	bool                                               NewKnifingState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         ChangeContext;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.OnKnifingJumpPerformed
struct AME_TutorialManager_OnKnifingJumpPerformed_Params
{
};

// Function Maneater.ME_TutorialManager.OnEvolutionEquipped
struct AME_TutorialManager_OnEvolutionEquipped_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.OnBreachPerformed
struct AME_TutorialManager_OnBreachPerformed_Params
{
};

// Function Maneater.ME_TutorialManager.IsTutorialPartTwoComplete
struct AME_TutorialManager_IsTutorialPartTwoComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.IsTutorialPartOneComplete
struct AME_TutorialManager_IsTutorialPartOneComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.IsEnabled
struct AME_TutorialManager_IsEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.IncrementObjective
struct AME_TutorialManager_IncrementObjective_Params
{
	bool                                               ForceShowDelayedStep;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.GetCurrentTutorialIndex
struct AME_TutorialManager_GetCurrentTutorialIndex_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.DelayedShowInvertedControlsPopup
struct AME_TutorialManager_DelayedShowInvertedControlsPopup_Params
{
};

// Function Maneater.ME_TutorialManager.DelayedIncrementObjective
struct AME_TutorialManager_DelayedIncrementObjective_Params
{
};

// Function Maneater.ME_TutorialManager.CreateInGamePopupWidget
struct AME_TutorialManager_CreateInGamePopupWidget_Params
{
	TEnumAsByte<Maneater_ETutorialPopupID>             PopupId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_TutorialManager.ClearHudTip
struct AME_TutorialManager_ClearHudTip_Params
{
};

// Function Maneater.ME_WhipshotMovementComponent.OnWhipShotVictimImpact
struct UME_WhipshotMovementComponent_OnWhipShotVictimImpact_Params
{
	class UPrimitiveComponent*                         SelfActor;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherPrimitive;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WorldMapWidget.LoadSavedRenderTarget
struct UME_WorldMapWidget_LoadSavedRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WorldRegionVolume.PointIsWithinRegion
struct AME_WorldRegionVolume_PointIsWithinRegion_Params
{
	struct FVector                                     Point;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SphereRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WorldSettings.UpdateWorldCapture
struct AME_WorldSettings_UpdateWorldCapture_Params
{
};

// Function Maneater.ME_WorldSettings.OnImpactParticleComplete
struct AME_WorldSettings_OnImpactParticleComplete_Params
{
	class UParticleSystemComponent*                    PSystem;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.ME_WorldSettings.OnImpactAudioComplete
struct AME_WorldSettings_OnImpactAudioComplete_Params
{
	AkAudio_EAkCallbackType                            CallbackType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkCallbackInfo*                             CallbackInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTDecorator_CanSpawnDiver.OnTrackedAIChange
struct UMEBTDecorator_CanSpawnDiver_OnTrackedAIChange_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTDecorator_CombatState.OnCombatStateChanged
struct UMEBTDecorator_CombatState_OnCombatStateChanged_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_ECombatStatus                             PrevStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTDecorator_TimeSinceLastSpawn.OnNewSpawn
struct UMEBTDecorator_TimeSinceLastSpawn_OnNewSpawn_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTTask_AbilityBase.OnAbilityFinished
struct UMEBTTask_AbilityBase_OnAbilityFinished_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTreeComponent*                      OwnerComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTTask_MoveTo.OnRequestIdUpdated
struct UMEBTTask_MoveTo_OnRequestIdUpdated_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIRequestID                                UpdatedRequestId;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTTask_PlayCustomAnimations.OnMontageComplete
struct UMEBTTask_PlayCustomAnimations_OnMontageComplete_Params
{
};

// Function Maneater.MEBTTask_SpawnAI.OnSpawnComplete
struct UMEBTTask_SpawnAI_OnSpawnComplete_Params
{
	class AME_BoatAIController*                        AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.MEBTTask_VehicleMoveTo.OnRequestIdUpdated
struct UMEBTTask_VehicleMoveTo_OnRequestIdUpdated_Params
{
	class AME_AIController*                            AIC;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIRequestID                                UpdatedRequestId;                                          // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.OvodusButton.UpdateCursorOverlaps
struct UOvodusButton_UpdateCursorOverlaps_Params
{
	struct FGeometry                                   AllottedGeometry;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Maneater.OvodusButton.SetAdvancedHitTexture
struct UOvodusButton_SetAdvancedHitTexture_Params
{
	class UTexture2D*                                  InTexture;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Maneater.OvodusButton.SetAdvancedHitAlpha
struct UOvodusButton_SetAdvancedHitAlpha_Params
{
	int                                                InAlpha;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
