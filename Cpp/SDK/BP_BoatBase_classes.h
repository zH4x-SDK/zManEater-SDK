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

// BlueprintGeneratedClass BP_BoatBase.BP_BoatBase_C
// 0x00F8 (FullSize[0x0CD0] - InheritedSize[0x0BD8])
class ABP_BoatBase_C : public AME_BoatPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ALevelSequenceActor*                         SequenceActor;                                             // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            CinematicCamera;                                           // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Cine_HunterSocket;                                         // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cine_HunterIndex;                                          // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YBI3[0x4];                                     // 0x0C04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCameraAnim*                                 CameraAnim;                                                // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HunterBaseSocket;                                          // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Cine_HunterMontage;                                        // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                ValidPassengerCheckTimer;                                  // 0x0C20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              ElapsedCheckTimer;                                         // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ValidateCheckInterval;                                     // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                              Cine_Sequence;                                             // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideBountyName;                                        // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4KUN[0x7];                                     // 0x0C39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       OverrideFirstName;                                         // 0x0C40(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       OverrideLastName;                                          // 0x0C58(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PushNameView;                                              // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HP7T[0x7];                                     // 0x0C71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PassengerIndicesToHide;                                    // 0x0C78(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FName                                       CameraSocketName;                                          // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              f_TTK;                                                     // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U3BT[0x4];                                     // 0x0C94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpotLightComponent*                         CineCamLight;                                              // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CamLightEndTime;                                           // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CamLightStartTime;                                         // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraZoomTime;                                            // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoatDisabled;                                              // 0x0CAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_34TZ[0x3];                                     // 0x0CAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Narrator_Boss_Intro;                                       // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                HunterBossCam;                                             // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              CameraIgnoreActors;                                        // 0x0CC0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoatBase.BP_BoatBase_C");
		return ptr;
	}



	void CleanCinematicContent();
	void BindBossHunterSeqCamera();
	void CameraZoom(float ZoomLength, float MinimumDistance, bool* Delay, float* DelayDuration);
	void DisableCameraActorTracking();
	void EnableCameraActorTracking(bool Smooth_Focus_Changes, float Focus_Smoothing_Interp_Speed, float Look_at_Tracking_Interp_Speed);
	void DisableCineCamLight();
	void EnableCineCamLight();
	void ManageSpecificPassengerVisiblity(bool bHidePassengers);
	void PushBlankView();
	void GetHudController(class UManeaterHUDViewController** HudViewController);
	void OnCinematicStarted();
	void OnCinematicComplete();
	void ClearValidationTimer();
	bool CheckReachedMaxValidateTimer();
	void GetCinePassengerMesh(class USkeletalMeshComponent** PassengerMeshComponent);
	void StartValidateTimer();
	void IncrementElapsedCheckTime();
	void HandleCinematicMode(bool bCinematicModeOn, bool HidePlayer);
	void PlayCinematic(class UCameraAnim* CameraAnim, class UMovieSceneSequencePlayer* MovieSceneSequencePlayer);
	void InitHunterCinematicActors(bool* Success);
	void PushHunterNameView(const struct FText& FirstName, const struct FText& LastName);
	void MoveHunterForCinematic(const struct FName& SocketName, int PassengerIndex, bool* Success);
	void OnNotifyEnd_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName);
	void OnNotifyBegin_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName);
	void OnInterrupted_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName);
	void OnBlendOut_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName);
	void OnCompleted_341BE94344AB2E6BC062FC91933D5CD2(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void BeginTimeToDie(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnSink(class AController* SinkInstigator);
	void OnVehicleEmptied();
	void OnBossCinematicStarted();
	void OnFinished_Bounty_Cinematic();
	void ExecuteUbergraph_BP_BoatBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
