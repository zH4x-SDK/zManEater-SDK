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

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapDescriptionText
struct ABP_PlayerShark_C_GetMapDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapDisplayName
struct ABP_PlayerShark_C_GetMapDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapWidgetEnabled
struct ABP_PlayerShark_C_GetMapWidgetEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapWidgetIcon
struct ABP_PlayerShark_C_GetMapWidgetIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapWidgetMaterial
struct ABP_PlayerShark_C_GetMapWidgetMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapWidgetPriority
struct ABP_PlayerShark_C_GetMapWidgetPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapWidgetSize
struct ABP_PlayerShark_C_GetMapWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GetMapWidgetVisibility
struct ABP_PlayerShark_C_GetMapWidgetVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.ShouldClampToEdgeOfMap
struct ABP_PlayerShark_C_ShouldClampToEdgeOfMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnLand_SetFloppingSoundFX
struct ABP_PlayerShark_C_OnLand_SetFloppingSoundFX_Params
{
	bool                                               TurnOn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_Bone
struct ABP_PlayerShark_C_OnVFXTag_Bone_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_TailWhipBreach
struct ABP_PlayerShark_C_OnVFXTag_TailWhipBreach_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodConsumeKnife
struct ABP_PlayerShark_C_OnVFXTag_BloodConsumeKnife_Params
{
	TEnumAsByte<VFXTag_Enum_EVFXTag_Enum>              VFX_Tag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodConsumeAtStart
struct ABP_PlayerShark_C_OnVFXTag_BloodConsumeAtStart_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodConsumeBelowWater
struct ABP_PlayerShark_C_OnVFXTag_BloodConsumeBelowWater_Params
{
	TEnumAsByte<VFXTag_Enum_EVFXTag_Enum>              VFX_Tag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodConsumeKnifeSplash
struct ABP_PlayerShark_C_OnVFXTag_BloodConsumeKnifeSplash_Params
{
	TEnumAsByte<VFXTag_Enum_EVFXTag_Enum>              VFXTag;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodThrashHorizontal
struct ABP_PlayerShark_C_OnVFXTag_BloodThrashHorizontal_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodGill
struct ABP_PlayerShark_C_OnVFXTag_BloodGill_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodConsume
struct ABP_PlayerShark_C_OnVFXTag_BloodConsume_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTag_BloodBite
struct ABP_PlayerShark_C_OnVFXTag_BloodBite_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.UpdateEvoMatrialParam
struct ABP_PlayerShark_C_UpdateEvoMatrialParam_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ParameterName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ParameterValue;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.BlendAndSetPP
struct ABP_PlayerShark_C_BlendAndSetPP_Params
{
	struct FPostProcessSettings                        PostSettingsA;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPostProcessSettings                        PostSettingsB;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.LerpVect4
struct ABP_PlayerShark_C_LerpVect4_Params
{
	struct FVector4                                    A;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                                    B;                                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                                    Out;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.ManageRagdoll
struct ABP_PlayerShark_C_ManageRagdoll_Params
{
	bool                                               bNewSimulate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnAudioTagSet
struct ABP_PlayerShark_C_OnAudioTagSet_Params
{
	bool                                               bAdded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TagContainer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerShark.BP_PlayerShark_C.HandleAbilityTriggeredFromTag
struct ABP_PlayerShark_C_HandleAbilityTriggeredFromTag_Params
{
	struct FGameplayTag                                AbilityTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnVFXTagSet
struct ABP_PlayerShark_C_OnVFXTagSet_Params
{
	bool                                               Added;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TagContainer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerShark.BP_PlayerShark_C.SharkTrail
struct ABP_PlayerShark_C_SharkTrail_Params
{
	int                                                SetShark;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.SprintFX
struct ABP_PlayerShark_C_SprintFX_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.StopLungingAudio
struct ABP_PlayerShark_C_StopLungingAudio_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.UserConstructionScript
struct ABP_PlayerShark_C_UserConstructionScript_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.TimeDilationTmeline__FinishedFunc
struct ABP_PlayerShark_C_TimeDilationTmeline__FinishedFunc_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.TimeDilationTmeline__UpdateFunc
struct ABP_PlayerShark_C_TimeDilationTmeline__UpdateFunc_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.ForceRotation__FinishedFunc
struct ABP_PlayerShark_C_ForceRotation__FinishedFunc_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.ForceRotation__UpdateFunc
struct ABP_PlayerShark_C_ForceRotation__UpdateFunc_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.EvolutionBodyAbility_Timeline__FinishedFunc
struct ABP_PlayerShark_C_EvolutionBodyAbility_Timeline__FinishedFunc_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.EvolutionBodyAbility_Timeline__UpdateFunc
struct ABP_PlayerShark_C_EvolutionBodyAbility_Timeline__UpdateFunc_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnDoubleJump
struct ABP_PlayerShark_C_OnDoubleJump_Params
{
	int                                                JumpTier;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnEvadeUp
struct ABP_PlayerShark_C_OnEvadeUp_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnEvadeDown
struct ABP_PlayerShark_C_OnEvadeDown_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.KnifingStateChanged_BP
struct ABP_PlayerShark_C_KnifingStateChanged_BP_Params
{
	bool                                               NewKnifingState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Maneater_ECharacterActionMode>         ChangeContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnTailWhipFullMouth
struct ABP_PlayerShark_C_OnTailWhipFullMouth_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.TailWhipTimeDilationEnded_BP
struct ABP_PlayerShark_C_TailWhipTimeDilationEnded_BP_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.TailWhipTimeDilationStarted_BP
struct ABP_PlayerShark_C_TailWhipTimeDilationStarted_BP_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GrowthStageUpdated
struct ABP_PlayerShark_C_GrowthStageUpdated_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bReinitPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerShark.BP_PlayerShark_C.BndEvt__CharacterMovement_K2Node_ComponentBoundEvent_0_WaterBreachDelegate__DelegateSignature
struct ABP_PlayerShark_C_BndEvt__CharacterMovement_K2Node_ComponentBoundEvent_0_WaterBreachDelegate__DelegateSignature_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnSonarPulse
struct ABP_PlayerShark_C_OnSonarPulse_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.ReceiveBeginPlay
struct ABP_PlayerShark_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnDied
struct ABP_PlayerShark_C_OnDied_Params
{
	class AController*                                 Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnPhysicsVolumeChanged
struct ABP_PlayerShark_C_OnPhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.ReceivePossessed
struct ABP_PlayerShark_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnEvadeLeft
struct ABP_PlayerShark_C_OnEvadeLeft_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnEvadeRight
struct ABP_PlayerShark_C_OnEvadeRight_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.ReceiveAnyDamage
struct ABP_PlayerShark_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnTailWhip
struct ABP_PlayerShark_C_OnTailWhip_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.CharacterAbilityTriggered
struct ABP_PlayerShark_C_CharacterAbilityTriggered_Params
{
	Maneater_EME_CharacterAbility                      CharacterAbilityEnum;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                AbilityTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GameplayTagAdded
struct ABP_PlayerShark_C_GameplayTagAdded_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TagDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.GameplayTagRemoved
struct ABP_PlayerShark_C_GameplayTagRemoved_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnDebuffTagSet
struct ABP_PlayerShark_C_OnDebuffTagSet_Params
{
	bool                                               Added;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TagContainer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TagDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.WhipShotPPStart
struct ABP_PlayerShark_C_WhipShotPPStart_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.WhipShotPPEnd
struct ABP_PlayerShark_C_WhipShotPPEnd_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.ForceKnifingEntryAngle
struct ABP_PlayerShark_C_ForceKnifingEntryAngle_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.ActionModeUpdated_BP
struct ABP_PlayerShark_C_ActionModeUpdated_BP_Params
{
	TEnumAsByte<Maneater_ECharacterActionMode>         NewActionMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.EvolutionAbilityActivatedEvent
struct ABP_PlayerShark_C_EvolutionAbilityActivatedEvent_Params
{
	Maneater_EEvolutionSetType                         SetType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnLunge
struct ABP_PlayerShark_C_OnLunge_Params
{
	int                                                LungeTier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnWidgetMouseDown
struct ABP_PlayerShark_C_OnWidgetMouseDown_Params
{
	class UUserWidget*                                 Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerShark.BP_PlayerShark_C.EvoGlow
struct ABP_PlayerShark_C_EvoGlow_Params
{
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FXUpdateRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<Maneater_EEvolutionSlot>                    Slots;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.EvoGlow_Update
struct ABP_PlayerShark_C_EvoGlow_Update_Params
{
	float                                              Perc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.EvoUpdate_Clear
struct ABP_PlayerShark_C_EvoUpdate_Clear_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.DebugTimeToSurvive
struct ABP_PlayerShark_C_DebugTimeToSurvive_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.TimeToSurvive
struct ABP_PlayerShark_C_TimeToSurvive_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.DebugLogTTS
struct ABP_PlayerShark_C_DebugLogTTS_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.Check TTS Reset
struct ABP_PlayerShark_C_Check_TTS_Reset_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.SpeedTracker
struct ABP_PlayerShark_C_SpeedTracker_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnLanded
struct ABP_PlayerShark_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_PlayerShark.BP_PlayerShark_C.StartSplunkTimer
struct ABP_PlayerShark_C_StartSplunkTimer_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OutputToSplunk
struct ABP_PlayerShark_C_OutputToSplunk_Params
{
};

// Function BP_PlayerShark.BP_PlayerShark_C.OnCinematicModeChangedEvent
struct ABP_PlayerShark_C_OnCinematicModeChangedEvent_Params
{
	bool                                               bCinematicMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerShark.BP_PlayerShark_C.ExecuteUbergraph_BP_PlayerShark
struct ABP_PlayerShark_C_ExecuteUbergraph_BP_PlayerShark_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerShark.BP_PlayerShark_C.UpdateFX__DelegateSignature
struct ABP_PlayerShark_C_UpdateFX__DelegateSignature_Params
{
	float                                              Perc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
