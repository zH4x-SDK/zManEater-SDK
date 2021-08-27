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

// Function BP_BoatBase.BP_BoatBase_C.CleanCinematicContent
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::CleanCinematicContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.CleanCinematicContent");

	ABP_BoatBase_C_CleanCinematicContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.BindBossHunterSeqCamera");

	ABP_BoatBase_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.CameraZoom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ZoomLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinimumDistance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DelayDuration                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::CameraZoom(float ZoomLength, float MinimumDistance, bool* Delay, float* DelayDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.CameraZoom");

	ABP_BoatBase_C_CameraZoom_Params params;
	params.ZoomLength = ZoomLength;
	params.MinimumDistance = MinimumDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
	if (DelayDuration != nullptr)
		*DelayDuration = params.DelayDuration;

}


// Function BP_BoatBase.BP_BoatBase_C.DisableCameraActorTracking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::DisableCameraActorTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.DisableCameraActorTracking");

	ABP_BoatBase_C_DisableCameraActorTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.EnableCameraActorTracking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Smooth_Focus_Changes           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Focus_Smoothing_Interp_Speed   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Look_at_Tracking_Interp_Speed  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::EnableCameraActorTracking(bool Smooth_Focus_Changes, float Focus_Smoothing_Interp_Speed, float Look_at_Tracking_Interp_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.EnableCameraActorTracking");

	ABP_BoatBase_C_EnableCameraActorTracking_Params params;
	params.Smooth_Focus_Changes = Smooth_Focus_Changes;
	params.Focus_Smoothing_Interp_Speed = Focus_Smoothing_Interp_Speed;
	params.Look_at_Tracking_Interp_Speed = Look_at_Tracking_Interp_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.DisableCineCamLight
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::DisableCineCamLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.DisableCineCamLight");

	ABP_BoatBase_C_DisableCineCamLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.EnableCineCamLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::EnableCineCamLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.EnableCineCamLight");

	ABP_BoatBase_C_EnableCineCamLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.ManageSpecificPassengerVisiblity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHidePassengers                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BoatBase_C::ManageSpecificPassengerVisiblity(bool bHidePassengers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.ManageSpecificPassengerVisiblity");

	ABP_BoatBase_C_ManageSpecificPassengerVisiblity_Params params;
	params.bHidePassengers = bHidePassengers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.PushBlankView
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::PushBlankView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.PushBlankView");

	ABP_BoatBase_C_PushBlankView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.GetHudController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UManeaterHUDViewController* HudViewController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::GetHudController(class UManeaterHUDViewController** HudViewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.GetHudController");

	ABP_BoatBase_C_GetHudController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HudViewController != nullptr)
		*HudViewController = params.HudViewController;

}


// Function BP_BoatBase.BP_BoatBase_C.OnCinematicStarted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::OnCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnCinematicStarted");

	ABP_BoatBase_C_OnCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::OnCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnCinematicComplete");

	ABP_BoatBase_C_OnCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.ClearValidationTimer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::ClearValidationTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.ClearValidationTimer");

	ABP_BoatBase_C_ClearValidationTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.CheckReachedMaxValidateTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BoatBase_C::CheckReachedMaxValidateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.CheckReachedMaxValidateTimer");

	ABP_BoatBase_C_CheckReachedMaxValidateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BoatBase.BP_BoatBase_C.GetCinePassengerMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  PassengerMeshComponent         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::GetCinePassengerMesh(class USkeletalMeshComponent** PassengerMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.GetCinePassengerMesh");

	ABP_BoatBase_C_GetCinePassengerMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PassengerMeshComponent != nullptr)
		*PassengerMeshComponent = params.PassengerMeshComponent;

}


// Function BP_BoatBase.BP_BoatBase_C.StartValidateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::StartValidateTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.StartValidateTimer");

	ABP_BoatBase_C_StartValidateTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.IncrementElapsedCheckTime
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::IncrementElapsedCheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.IncrementElapsedCheckTime");

	ABP_BoatBase_C_IncrementElapsedCheckTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.HandleCinematicMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCinematicModeOn               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HidePlayer                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BoatBase_C::HandleCinematicMode(bool bCinematicModeOn, bool HidePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.HandleCinematicMode");

	ABP_BoatBase_C_HandleCinematicMode_Params params;
	params.bCinematicModeOn = bCinematicModeOn;
	params.HidePlayer = HidePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.PlayCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraAnim*             CameraAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMovieSceneSequencePlayer* MovieSceneSequencePlayer       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::PlayCinematic(class UCameraAnim* CameraAnim, class UMovieSceneSequencePlayer* MovieSceneSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.PlayCinematic");

	ABP_BoatBase_C_PlayCinematic_Params params;
	params.CameraAnim = CameraAnim;
	params.MovieSceneSequencePlayer = MovieSceneSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.InitHunterCinematicActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BoatBase_C::InitHunterCinematicActors(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.InitHunterCinematicActors");

	ABP_BoatBase_C_InitHunterCinematicActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BoatBase.BP_BoatBase_C.PushHunterNameView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FirstName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LastName                       (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_BoatBase_C::PushHunterNameView(const struct FText& FirstName, const struct FText& LastName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.PushHunterNameView");

	ABP_BoatBase_C_PushHunterNameView_Params params;
	params.FirstName = FirstName;
	params.LastName = LastName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.MoveHunterForCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PassengerIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BoatBase_C::MoveHunterForCinematic(const struct FName& SocketName, int PassengerIndex, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.MoveHunterForCinematic");

	ABP_BoatBase_C_MoveHunterForCinematic_Params params;
	params.SocketName = SocketName;
	params.PassengerIndex = PassengerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BoatBase.BP_BoatBase_C.OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2");

	ABP_BoatBase_C_OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2");

	ABP_BoatBase_C_OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2");

	ABP_BoatBase_C_OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2");

	ABP_BoatBase_C_OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnCompleted_341BE94344AB2E6BC062FC91933D5CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::OnCompleted_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnCompleted_341BE94344AB2E6BC062FC91933D5CD2");

	ABP_BoatBase_C_OnCompleted_341BE94344AB2E6BC062FC91933D5CD2_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BoatBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.ReceiveBeginPlay");

	ABP_BoatBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.BeginTimeToDie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::BeginTimeToDie(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.BeginTimeToDie");

	ABP_BoatBase_C_BeginTimeToDie_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnSink
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             SinkInstigator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::OnSink(class AController* SinkInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnSink");

	ABP_BoatBase_C_OnSink_Params params;
	params.SinkInstigator = SinkInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnVehicleEmptied
// (Event, Public, BlueprintEvent)
void ABP_BoatBase_C::OnVehicleEmptied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnVehicleEmptied");

	ABP_BoatBase_C_OnVehicleEmptied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnBossCinematicStarted
// (Event, Public, BlueprintEvent)
void ABP_BoatBase_C::OnBossCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnBossCinematicStarted");

	ABP_BoatBase_C_OnBossCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.OnFinished_Bounty_Cinematic
// (BlueprintCallable, BlueprintEvent)
void ABP_BoatBase_C::OnFinished_Bounty_Cinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.OnFinished_Bounty_Cinematic");

	ABP_BoatBase_C_OnFinished_Bounty_Cinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BoatBase.BP_BoatBase_C.ExecuteUbergraph_BP_BoatBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BoatBase_C::ExecuteUbergraph_BP_BoatBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BoatBase.BP_BoatBase_C.ExecuteUbergraph_BP_BoatBase");

	ABP_BoatBase_C_ExecuteUbergraph_BP_BoatBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
