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

// Function BP_BossBoatBase.BP_BossBoatBase_C.SetStartBattleLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::SetStartBattleLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.SetStartBattleLocations");

	ABP_BossBoatBase_C_SetStartBattleLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.BindPlayerDefeatSequence
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::BindPlayerDefeatSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.BindPlayerDefeatSequence");

	ABP_BossBoatBase_C_BindPlayerDefeatSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPete1HunterDefeatedAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::PlayPete1HunterDefeatedAudio(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPete1HunterDefeatedAudio");

	ABP_BossBoatBase_C_PlayPete1HunterDefeatedAudio_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ManageCapturedWidget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::ManageCapturedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ManageCapturedWidget");

	ABP_BossBoatBase_C_ManageCapturedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.RemoveControlAndFadeOut
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SequenceLength                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::RemoveControlAndFadeOut(float* SequenceLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.RemoveControlAndFadeOut");

	ABP_BossBoatBase_C_RemoveControlAndFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SequenceLength != nullptr)
		*SequenceLength = params.SequenceLength;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.MeasurePeteDOF
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::MeasurePeteDOF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.MeasurePeteDOF");

	ABP_BossBoatBase_C_MeasurePeteDOF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupSupportDiversOnly
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::CleanupSupportDiversOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupSupportDiversOnly");

	ABP_BossBoatBase_C_CleanupSupportDiversOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPlayerDeathBlowFX
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PlayPlayerDeathBlowFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPlayerDeathBlowFX");

	ABP_BossBoatBase_C_PlayPlayerDeathBlowFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.BindCameraToSEQ
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::BindCameraToSEQ()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.BindCameraToSEQ");

	ABP_BossBoatBase_C_BindCameraToSEQ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.CheckDefeatHunterPhaseComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BossBoatBase_C::CheckDefeatHunterPhaseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.CheckDefeatHunterPhaseComplete");

	ABP_BossBoatBase_C_CheckDefeatHunterPhaseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BossBoatBase.BP_BossBoatBase_C.InitDefeatHuntersUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::InitDefeatHuntersUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.InitDefeatHuntersUI");

	ABP_BossBoatBase_C_InitDefeatHuntersUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.InitSurviveUI
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::InitSurviveUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.InitSurviveUI");

	ABP_BossBoatBase_C_InitSurviveUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.GetSurviveTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SurviveTime                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::GetSurviveTime(float* SurviveTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.GetSurviveTime");

	ABP_BossBoatBase_C_GetSurviveTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SurviveTime != nullptr)
		*SurviveTime = params.SurviveTime;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.IncrementPrologueBossTimer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::IncrementPrologueBossTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.IncrementPrologueBossTimer");

	ABP_BossBoatBase_C_IncrementPrologueBossTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupSupportBoats
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::CleanupSupportBoats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupSupportBoats");

	ABP_BossBoatBase_C_CleanupSupportBoats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPlayerDeathCharacterAnims
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PlayPlayerDeathCharacterAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PlayPlayerDeathCharacterAnims");

	ABP_BossBoatBase_C_PlayPlayerDeathCharacterAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.HandleKyleVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::HandleKyleVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.HandleKyleVisiblity");

	ABP_BossBoatBase_C_HandleKyleVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PushDeathView
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PushDeathView()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PushDeathView");

	ABP_BossBoatBase_C_PushDeathView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ManageDeathScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BossBoatBase_C::ManageDeathScreen(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ManageDeathScreen");

	ABP_BossBoatBase_C_ManageDeathScreen_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.SpawnAndAttachCineCamera
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttachSocketName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*            CameraActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::SpawnAndAttachCineCamera(const struct FName& AttachSocketName, class ACameraActor** CameraActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.SpawnAndAttachCineCamera");

	ABP_BossBoatBase_C_SpawnAndAttachCineCamera_Params params;
	params.AttachSocketName = AttachSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CameraActor != nullptr)
		*CameraActor = params.CameraActor;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayDeathBlowFX
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PlayDeathBlowFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PlayDeathBlowFX");

	ABP_BossBoatBase_C_PlayDeathBlowFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ManageBossBehaviorTree
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDisabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BossBoatBase_C::ManageBossBehaviorTree(bool bDisabled, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ManageBossBehaviorTree");

	ABP_BossBoatBase_C_ManageBossBehaviorTree_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.HideInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::HideInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.HideInWorldWidget");

	ABP_BossBoatBase_C_HideInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ShowInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::ShowInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ShowInWorldWidget");

	ABP_BossBoatBase_C_ShowInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.OnBossCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::OnBossCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.OnBossCinematicComplete");

	ABP_BossBoatBase_C_OnBossCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.HandlePassengerVisiblity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewPassengerVisiblity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewCinePeteVisibility          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BossBoatBase_C::HandlePassengerVisiblity(bool NewPassengerVisiblity, bool NewCinePeteVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.HandlePassengerVisiblity");

	ABP_BossBoatBase_C_HandlePassengerVisiblity_Params params;
	params.NewPassengerVisiblity = NewPassengerVisiblity;
	params.NewCinePeteVisibility = NewCinePeteVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::CleanupHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.CleanupHealthBar");

	ABP_BossBoatBase_C_CleanupHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.UpdateBossHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::UpdateBossHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.UpdateBossHealthBar");

	ABP_BossBoatBase_C_UpdateBossHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.InitializeBossHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::InitializeBossHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.InitializeBossHealthBar");

	ABP_BossBoatBase_C_InitializeBossHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.HandleOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableOutline                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BossBoatBase_C::HandleOutline(bool EnableOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.HandleOutline");

	ABP_BossBoatBase_C_HandleOutline_Params params;
	params.EnableOutline = EnableOutline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BossBoatBase_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.CanAIAttackTarget");

	ABP_BossBoatBase_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BossBoatBase.BP_BossBoatBase_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_BossBoatBase_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.GetSizeLevel");

	ABP_BossBoatBase_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BossBoatBase.BP_BossBoatBase_C.OnSink
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             SinkInstigator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::OnSink(class AController* SinkInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.OnSink");

	ABP_BossBoatBase_C_OnSink_Params params;
	params.SinkInstigator = SinkInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ReceiveTick");

	ABP_BossBoatBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.OnBossCinematicStarted
// (Event, Public, BlueprintEvent)
void ABP_BossBoatBase_C::OnBossCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.OnBossCinematicStarted");

	ABP_BossBoatBase_C_OnBossCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.BindDamageTaken
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::BindDamageTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.BindDamageTaken");

	ABP_BossBoatBase_C_BindDamageTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.StartCinematic
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::StartCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.StartCinematic");

	ABP_BossBoatBase_C_StartCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BossBoatBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ReceiveBeginPlay");

	ABP_BossBoatBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PeteTakesDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::PeteTakesDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PeteTakesDamage");

	ABP_BossBoatBase_C_PeteTakesDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PeteTakesDamageToWin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::PeteTakesDamageToWin(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PeteTakesDamageToWin");

	ABP_BossBoatBase_C_PeteTakesDamageToWin_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.BindForPlayerDefeatedCine
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::BindForPlayerDefeatedCine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.BindForPlayerDefeatedCine");

	ABP_BossBoatBase_C_BindForPlayerDefeatedCine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.BeginPlayerDefeatedCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_Character*           Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::BeginPlayerDefeatedCine(class AME_Character* Victim, class AActor* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.BeginPlayerDefeatedCine");

	ABP_BossBoatBase_C_BeginPlayerDefeatedCine_Params params;
	params.Victim = Victim;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.StreamInBossRelatedLevels
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::StreamInBossRelatedLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.StreamInBossRelatedLevels");

	ABP_BossBoatBase_C_StreamInBossRelatedLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PrologueBossCinematicStarted
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PrologueBossCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PrologueBossCinematicStarted");

	ABP_BossBoatBase_C_PrologueBossCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.HunterBoatDied
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::HunterBoatDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.HunterBoatDied");

	ABP_BossBoatBase_C_HunterBoatDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PeteGameplayLevelShown
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PeteGameplayLevelShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PeteGameplayLevelShown");

	ABP_BossBoatBase_C_PeteGameplayLevelShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.TauntVO
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::TauntVO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.TauntVO");

	ABP_BossBoatBase_C_TauntVO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.LowSharkHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::LowSharkHealth(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.LowSharkHealth");

	ABP_BossBoatBase_C_LowSharkHealth_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.PlayerCaptured
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::PlayerCaptured()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.PlayerCaptured");

	ABP_BossBoatBase_C_PlayerCaptured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.OnFinished_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_BossBoatBase_C::OnFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.OnFinished_Event_1");

	ABP_BossBoatBase_C_OnFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BossBoatBase.BP_BossBoatBase_C.ExecuteUbergraph_BP_BossBoatBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BossBoatBase_C::ExecuteUbergraph_BP_BossBoatBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BossBoatBase.BP_BossBoatBase_C.ExecuteUbergraph_BP_BossBoatBase");

	ABP_BossBoatBase_C_ExecuteUbergraph_BP_BossBoatBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
