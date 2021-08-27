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

// Function BP_BoatBase.BP_BoatBase_C.CleanCinematicContent
struct ABP_BoatBase_C_CleanCinematicContent_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.BindBossHunterSeqCamera
struct ABP_BoatBase_C_BindBossHunterSeqCamera_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.CameraZoom
struct ABP_BoatBase_C_CameraZoom_Params
{
	float                                              ZoomLength;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Delay;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DelayDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.DisableCameraActorTracking
struct ABP_BoatBase_C_DisableCameraActorTracking_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.EnableCameraActorTracking
struct ABP_BoatBase_C_EnableCameraActorTracking_Params
{
	bool                                               Smooth_Focus_Changes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Focus_Smoothing_Interp_Speed;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Look_at_Tracking_Interp_Speed;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.DisableCineCamLight
struct ABP_BoatBase_C_DisableCineCamLight_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.EnableCineCamLight
struct ABP_BoatBase_C_EnableCineCamLight_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.ManageSpecificPassengerVisiblity
struct ABP_BoatBase_C_ManageSpecificPassengerVisiblity_Params
{
	bool                                               bHidePassengers;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BoatBase.BP_BoatBase_C.PushBlankView
struct ABP_BoatBase_C_PushBlankView_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.GetHudController
struct ABP_BoatBase_C_GetHudController_Params
{
	class UManeaterHUDViewController*                  HudViewController;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnCinematicStarted
struct ABP_BoatBase_C_OnCinematicStarted_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.OnCinematicComplete
struct ABP_BoatBase_C_OnCinematicComplete_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.ClearValidationTimer
struct ABP_BoatBase_C_ClearValidationTimer_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.CheckReachedMaxValidateTimer
struct ABP_BoatBase_C_CheckReachedMaxValidateTimer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BoatBase.BP_BoatBase_C.GetCinePassengerMesh
struct ABP_BoatBase_C_GetCinePassengerMesh_Params
{
	class USkeletalMeshComponent*                      PassengerMeshComponent;                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.StartValidateTimer
struct ABP_BoatBase_C_StartValidateTimer_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.IncrementElapsedCheckTime
struct ABP_BoatBase_C_IncrementElapsedCheckTime_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.HandleCinematicMode
struct ABP_BoatBase_C_HandleCinematicMode_Params
{
	bool                                               bCinematicModeOn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HidePlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BoatBase.BP_BoatBase_C.PlayCinematic
struct ABP_BoatBase_C_PlayCinematic_Params
{
	class UCameraAnim*                                 CameraAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieSceneSequencePlayer*                   MovieSceneSequencePlayer;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.InitHunterCinematicActors
struct ABP_BoatBase_C_InitHunterCinematicActors_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BoatBase.BP_BoatBase_C.PushHunterNameView
struct ABP_BoatBase_C_PushHunterNameView_Params
{
	struct FText                                       FirstName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       LastName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BoatBase.BP_BoatBase_C.MoveHunterForCinematic
struct ABP_BoatBase_C_MoveHunterForCinematic_Params
{
	struct FName                                       SocketName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PassengerIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BoatBase.BP_BoatBase_C.OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2
struct ABP_BoatBase_C_OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2
struct ABP_BoatBase_C_OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2
struct ABP_BoatBase_C_OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2
struct ABP_BoatBase_C_OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnCompleted_341BE94344AB2E6BC062FC91933D5CD2
struct ABP_BoatBase_C_OnCompleted_341BE94344AB2E6BC062FC91933D5CD2_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.ReceiveBeginPlay
struct ABP_BoatBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.BeginTimeToDie
struct ABP_BoatBase_C_BeginTimeToDie_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnSink
struct ABP_BoatBase_C_OnSink_Params
{
	class AController*                                 SinkInstigator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BoatBase.BP_BoatBase_C.OnVehicleEmptied
struct ABP_BoatBase_C_OnVehicleEmptied_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.OnBossCinematicStarted
struct ABP_BoatBase_C_OnBossCinematicStarted_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.OnFinished_Bounty_Cinematic
struct ABP_BoatBase_C_OnFinished_Bounty_Cinematic_Params
{
};

// Function BP_BoatBase.BP_BoatBase_C.ExecuteUbergraph_BP_BoatBase
struct ABP_BoatBase_C_ExecuteUbergraph_BP_BoatBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
