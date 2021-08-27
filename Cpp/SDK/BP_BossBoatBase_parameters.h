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

// Function BP_BossBoatBase.BP_BossBoatBase_C.SetStartBattleLocations
struct ABP_BossBoatBase_C_SetStartBattleLocations_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.BindPlayerDefeatSequence
struct ABP_BossBoatBase_C_BindPlayerDefeatSequence_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPete1HunterDefeatedAudio
struct ABP_BossBoatBase_C_PlayPete1HunterDefeatedAudio_Params
{
	int                                                Num;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ManageCapturedWidget
struct ABP_BossBoatBase_C_ManageCapturedWidget_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.RemoveControlAndFadeOut
struct ABP_BossBoatBase_C_RemoveControlAndFadeOut_Params
{
	float                                              SequenceLength;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.MeasurePeteDOF
struct ABP_BossBoatBase_C_MeasurePeteDOF_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupSupportDiversOnly
struct ABP_BossBoatBase_C_CleanupSupportDiversOnly_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPlayerDeathBlowFX
struct ABP_BossBoatBase_C_PlayPlayerDeathBlowFX_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.BindCameraToSEQ
struct ABP_BossBoatBase_C_BindCameraToSEQ_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.CheckDefeatHunterPhaseComplete
struct ABP_BossBoatBase_C_CheckDefeatHunterPhaseComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.InitDefeatHuntersUI
struct ABP_BossBoatBase_C_InitDefeatHuntersUI_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.InitSurviveUI
struct ABP_BossBoatBase_C_InitSurviveUI_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.GetSurviveTime
struct ABP_BossBoatBase_C_GetSurviveTime_Params
{
	float                                              SurviveTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.IncrementPrologueBossTimer
struct ABP_BossBoatBase_C_IncrementPrologueBossTimer_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupSupportBoats
struct ABP_BossBoatBase_C_CleanupSupportBoats_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPlayerDeathCharacterAnims
struct ABP_BossBoatBase_C_PlayPlayerDeathCharacterAnims_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.HandleKyleVisiblity
struct ABP_BossBoatBase_C_HandleKyleVisiblity_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PushDeathView
struct ABP_BossBoatBase_C_PushDeathView_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ManageDeathScreen
struct ABP_BossBoatBase_C_ManageDeathScreen_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.SpawnAndAttachCineCamera
struct ABP_BossBoatBase_C_SpawnAndAttachCineCamera_Params
{
	struct FName                                       AttachSocketName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                CameraActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayDeathBlowFX
struct ABP_BossBoatBase_C_PlayDeathBlowFX_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ManageBossBehaviorTree
struct ABP_BossBoatBase_C_ManageBossBehaviorTree_Params
{
	bool                                               bDisabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.HideInWorldWidget
struct ABP_BossBoatBase_C_HideInWorldWidget_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ShowInWorldWidget
struct ABP_BossBoatBase_C_ShowInWorldWidget_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.OnBossCinematicComplete
struct ABP_BossBoatBase_C_OnBossCinematicComplete_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.HandlePassengerVisiblity
struct ABP_BossBoatBase_C_HandlePassengerVisiblity_Params
{
	bool                                               NewPassengerVisiblity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewCinePeteVisibility;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupHealthBar
struct ABP_BossBoatBase_C_CleanupHealthBar_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.UpdateBossHealthBar
struct ABP_BossBoatBase_C_UpdateBossHealthBar_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.InitializeBossHealthBar
struct ABP_BossBoatBase_C_InitializeBossHealthBar_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.HandleOutline
struct ABP_BossBoatBase_C_HandleOutline_Params
{
	bool                                               EnableOutline;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.CanAIAttackTarget
struct ABP_BossBoatBase_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.GetSizeLevel
struct ABP_BossBoatBase_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.OnSink
struct ABP_BossBoatBase_C_OnSink_Params
{
	class AController*                                 SinkInstigator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ReceiveTick
struct ABP_BossBoatBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.OnBossCinematicStarted
struct ABP_BossBoatBase_C_OnBossCinematicStarted_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.BindDamageTaken
struct ABP_BossBoatBase_C_BindDamageTaken_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.StartCinematic
struct ABP_BossBoatBase_C_StartCinematic_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ReceiveBeginPlay
struct ABP_BossBoatBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PeteTakesDamage
struct ABP_BossBoatBase_C_PeteTakesDamage_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PeteTakesDamageToWin
struct ABP_BossBoatBase_C_PeteTakesDamageToWin_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.BindForPlayerDefeatedCine
struct ABP_BossBoatBase_C_BindForPlayerDefeatedCine_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.BeginPlayerDefeatedCine
struct ABP_BossBoatBase_C_BeginPlayerDefeatedCine_Params
{
	class AME_Character*                               Victim;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.StreamInBossRelatedLevels
struct ABP_BossBoatBase_C_StreamInBossRelatedLevels_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PrologueBossCinematicStarted
struct ABP_BossBoatBase_C_PrologueBossCinematicStarted_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.HunterBoatDied
struct ABP_BossBoatBase_C_HunterBoatDied_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PeteGameplayLevelShown
struct ABP_BossBoatBase_C_PeteGameplayLevelShown_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.TauntVO
struct ABP_BossBoatBase_C_TauntVO_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.LowSharkHealth
struct ABP_BossBoatBase_C_LowSharkHealth_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayerCaptured
struct ABP_BossBoatBase_C_PlayerCaptured_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.OnFinished_Event_1
struct ABP_BossBoatBase_C_OnFinished_Event_1_Params
{
};

// Function BP_BossBoatBase.BP_BossBoatBase_C.ExecuteUbergraph_BP_BossBoatBase
struct ABP_BossBoatBase_C_ExecuteUbergraph_BP_BossBoatBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
