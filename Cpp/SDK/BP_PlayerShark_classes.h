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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerShark.BP_PlayerShark_C
// 0x11D4 (FullSize[0x30A4] - InheritedSize[0x1ED0])
class ABP_PlayerShark_C : public AME_PlayerSharkCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FX_UnderwaterParticulates_P;                               // 0x1ED8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Overlay;                                                   // 0x1EE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x1EE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    PectoralBubbles;                                           // 0x1EF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    DorsalBubbles;                                             // 0x1EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    MarineSnow;                                                // 0x1F00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              EvolutionBodyAbility_Timeline_BodyTextureBlend_Brightness_D846599F492AE909DA231D89CA8BB89D; // 0x1F08(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             EvolutionBodyAbility_Timeline__Direction_D846599F492AE909DA231D89CA8BB89D; // 0x1F0C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XDH8[0x3];                                     // 0x1F0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          EvolutionBodyAbility_Timeline;                             // 0x1F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeDilationTmeline_0_1_C6CF2D0C4DD2B12F980BE6A961CCA172;  // 0x1F18(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimeDilationTmeline__Direction_C6CF2D0C4DD2B12F980BE6A961CCA172; // 0x1F1C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0YHT[0x3];                                     // 0x1F1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimeDilationTmeline;                                       // 0x1F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceRotation_Forced_Additive_71D73A224BC2B8FEF937CE9E2C5476FD; // 0x1F28(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceRotation_Forced_Rotation_71D73A224BC2B8FEF937CE9E2C5476FD; // 0x1F2C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ForceRotation__Direction_71D73A224BC2B8FEF937CE9E2C5476FD; // 0x1F30(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V29Q[0x7];                                     // 0x1F31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ForceRotation;                                             // 0x1F38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               CurrentMovementAKEvent;                                    // 0x1F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSharkController_C*                 PlayerSharkController;                                     // 0x1F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ManeaterHUD;                                               // 0x1F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSharkState_C*                      PlayerSharkState;                                          // 0x1F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInCurrent;                                               // 0x1F60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Triggered;                                                 // 0x1F61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Splashdown;                                                // 0x1F62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FirstPass;                                                 // 0x1F63(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseTailBubble;                                             // 0x1F64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RunIntensity;                                              // 0x1F65(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MM8K[0x2];                                     // 0x1F66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SprintCounter;                                             // 0x1F68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentArrayIndex;                                         // 0x1F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystem*>                     BubbleTrail;                                               // 0x1F70(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UParticleSystemComponent*                    DorsalEmitter;                                             // 0x1F80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    L_Ventral;                                                 // 0x1F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    R_Ventral;                                                 // 0x1F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    CaudalTip;                                                 // 0x1F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SetShark;                                                  // 0x1FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SurfaceBreak;                                              // 0x1FA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K5XQ[0x3];                                     // 0x1FA5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    AboveWater;                                                // 0x1FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BelowWater;                                                // 0x1FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    tempLastTickRotation;                                      // 0x1FB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    tempDeltaRotation;                                         // 0x1FC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              tempAudioYawRange;                                         // 0x1FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              tempAudioPitchRange;                                       // 0x1FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              tempYawValue;                                              // 0x1FD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              tempPitchValue;                                            // 0x1FDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              tempSpeed;                                                 // 0x1FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InProximity;                                               // 0x1FE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0Y9F[0x3];                                     // 0x1FE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    L_BoostParticle;                                           // 0x1FE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    R_BoostParticle;                                           // 0x1FF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LungeTier;                                                 // 0x1FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                JumpTier;                                                  // 0x1FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                CurrentAnimMontage;                                        // 0x2000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               CachedAudioBiteEvent;                                      // 0x2008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             TailwhipParticle;                                          // 0x2010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TailwhipStage;                                             // 0x2018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0WWL[0x3];                                     // 0x2019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    KnifingForcedRotation;                                     // 0x201C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              KnifingIntroRotationAmount;                                // 0x2028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LungeTime;                                                 // 0x202C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ElectroGlow;                                               // 0x2030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LungeElectroBodyGlow;                                      // 0x203C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ElectroON;                                                 // 0x2040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_39P1[0x3];                                     // 0x2041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ShadowGlow;                                                // 0x2044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShadowON;                                                  // 0x2050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OILT[0xF];                                     // 0x2051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        CurrentPP;                                                 // 0x2060(0x0540) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                        TimeDilationPP;                                            // 0x25A0(0x0540) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                        DefaultPP;                                                 // 0x2AE0(0x0540) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPlayingTimeDilationPP;                                    // 0x3020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CHY8[0x7];                                     // 0x3021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    SprintPSC;                                                 // 0x3028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    UpdateFX;                                                  // 0x3030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              FXUpdateDuration;                                          // 0x3040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FXUpdateRemaining;                                         // 0x3044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FXUpdateRate;                                              // 0x3048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     FXBodyGlow;                                                // 0x304C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FXUpdating;                                                // 0x3058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_52F8[0x3];                                     // 0x3059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BoneGlow;                                                  // 0x305C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              f_TTS;                                                     // 0x3068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RV11[0x4];                                     // 0x306C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TTS_Timer;                                                 // 0x3070(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              Crawfish_Completion_Pct;                                   // 0x3078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Fawtick_Completion_Pct;                                    // 0x307C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dead_Horse_Completion_Pct;                                 // 0x3080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Golden_Shores_Completion_Pct;                              // 0x3084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Sapphire_Bay_Completion_Pct;                               // 0x3088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Prosperity_Completion_Pct;                                 // 0x308C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Caviar_Completion_Pct;                                     // 0x3090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              The_Gulf_Completion_Pct;                                   // 0x3094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Storyline_Index;                                           // 0x3098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Splunk_Data_Check;                                         // 0x309C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DOAJ[0x3];                                     // 0x309D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Current_Evolution_Count;                                   // 0x30A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerShark.BP_PlayerShark_C");
		return ptr;
	}



	struct FText GetMapDescriptionText();
	struct FText GetMapDisplayName();
	bool GetMapWidgetEnabled();
	class UTexture2D* GetMapWidgetIcon();
	class UMaterialInterface* GetMapWidgetMaterial();
	int GetMapWidgetPriority();
	struct FVector2D GetMapWidgetSize();
	UMG_ESlateVisibility GetMapWidgetVisibility();
	bool ShouldClampToEdgeOfMap();
	void OnLand_SetFloppingSoundFX(bool TurnOn);
	void OnVFXTag_Bone();
	void OnVFXTag_TailWhipBreach();
	void OnVFXTag_BloodConsumeKnife(TEnumAsByte<VFXTag_Enum_EVFXTag_Enum> VFX_Tag);
	void OnVFXTag_BloodConsumeAtStart();
	void OnVFXTag_BloodConsumeBelowWater(TEnumAsByte<VFXTag_Enum_EVFXTag_Enum> VFX_Tag, TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void OnVFXTag_BloodConsumeKnifeSplash(TEnumAsByte<VFXTag_Enum_EVFXTag_Enum> VFXTag);
	void OnVFXTag_BloodThrashHorizontal(TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void OnVFXTag_BloodGill(TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void OnVFXTag_BloodConsume(TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void OnVFXTag_BloodBite(TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void UpdateEvoMatrialParam(Maneater_EEvolutionSlot EvolutionSlot, const struct FName& ParameterName, const struct FVector& ParameterValue);
	void BlendAndSetPP(const struct FPostProcessSettings& PostSettingsA, const struct FPostProcessSettings& PostSettingsB, float Alpha);
	void LerpVect4(const struct FVector4& A, const struct FVector4& B, float Alpha, struct FVector4* Out);
	void ManageRagdoll(bool bNewSimulate);
	void OnAudioTagSet(bool bAdded, const struct FGameplayTagContainer& TagContainer);
	void HandleAbilityTriggeredFromTag(const struct FGameplayTag& AbilityTag);
	void OnVFXTagSet(bool Added, const struct FGameplayTagContainer& TagContainer);
	void SharkTrail(int SetShark);
	void SprintFX();
	void StopLungingAudio();
	void UserConstructionScript();
	void TimeDilationTmeline__FinishedFunc();
	void TimeDilationTmeline__UpdateFunc();
	void ForceRotation__FinishedFunc();
	void ForceRotation__UpdateFunc();
	void EvolutionBodyAbility_Timeline__FinishedFunc();
	void EvolutionBodyAbility_Timeline__UpdateFunc();
	void OnDoubleJump(int JumpTier);
	void OnEvadeUp();
	void OnEvadeDown();
	void KnifingStateChanged_BP(bool NewKnifingState, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext);
	void OnTailWhipFullMouth();
	void TailWhipTimeDilationEnded_BP();
	void TailWhipTimeDilationStarted_BP(TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void GrowthStageUpdated(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose);
	void BndEvt__CharacterMovement_K2Node_ComponentBoundEvent_0_WaterBreachDelegate__DelegateSignature();
	void OnSonarPulse();
	void ReceiveBeginPlay();
	void OnDied(class AController* Killer);
	void OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	void ReceivePossessed(class AController* NewController);
	void OnEvadeLeft();
	void OnEvadeRight();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnTailWhip();
	void CharacterAbilityTriggered(Maneater_EME_CharacterAbility CharacterAbilityEnum, const struct FGameplayTag& AbilityTag);
	void GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration);
	void GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded);
	void OnDebuffTagSet(bool Added, const struct FGameplayTagContainer& TagContainer, float TagDuration);
	void WhipShotPPStart();
	void WhipShotPPEnd();
	void ForceKnifingEntryAngle();
	void ActionModeUpdated_BP(TEnumAsByte<Maneater_ECharacterActionMode> NewActionMode);
	void EvolutionAbilityActivatedEvent(Maneater_EEvolutionSetType SetType);
	void OnLunge(int LungeTier);
	void OnWidgetMouseDown(class UUserWidget* Widget, const struct FPointerEvent& MouseEvent);
	void EvoGlow(float Duration, float FXUpdateRate, TArray<Maneater_EEvolutionSlot> Slots);
	void EvoGlow_Update(float Perc, Maneater_EEvolutionSlot EvolutionSlot);
	void EvoUpdate_Clear();
	void DebugTimeToSurvive();
	void TimeToSurvive(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void DebugLogTTS();
	void Check_TTS_Reset();
	void SpeedTracker();
	void OnLanded(const struct FHitResult& Hit);
	void StartSplunkTimer();
	void OutputToSplunk();
	void OnCinematicModeChangedEvent(bool bCinematicMode);
	void ExecuteUbergraph_BP_PlayerShark(int EntryPoint);
	void UpdateFX__DelegateSignature(float Perc);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
