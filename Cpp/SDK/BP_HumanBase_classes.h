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

// BlueprintGeneratedClass BP_HumanBase.BP_HumanBase_C
// 0x00F8 (FullSize[0x0F50] - InheritedSize[0x0E58])
class ABP_HumanBase_C : public AME_HumanCharacter
{
public:
	unsigned char                                      UnknownData_2HVK[0x8];                                     // 0x0E58(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BlendFromWaterRagdoll_FlattenActor_2A4ECF784135BD6998B38ABB0B196EF0; // 0x0E68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendFromWaterRagdoll_SetAcceleration_2A4ECF784135BD6998B38ABB0B196EF0; // 0x0E6C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendFromWaterRagdoll_BallAlpha_2A4ECF784135BD6998B38ABB0B196EF0; // 0x0E70(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendFromWaterRagdoll_Relative_Transform_2A4ECF784135BD6998B38ABB0B196EF0; // 0x0E74(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BlendFromWaterRagdoll__Direction_2A4ECF784135BD6998B38ABB0B196EF0; // 0x0E78(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VYCP[0x7];                                     // 0x0E79(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BlendFromWaterRagdoll;                                     // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Timeline_F1A8100D40001E398CC5C2881C0D5EE9;      // 0x0E88(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_F1A8100D40001E398CC5C2881C0D5EE9;    // 0x0E8C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BK0N[0x3];                                     // 0x0E8D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HumanController_C*                       HumanController;                                           // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMesh*>                       PossibleMeshes;                                            // 0x0EA0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               BeingThrown;                                               // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2Q2H[0xF];                                     // 0x0EB1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  StartingTransform;                                         // 0x0EC0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DebugAILastSawThreatLoc;                                   // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DebugAIVisibleThreatLoc;                                   // 0x0EF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9B9V[0x2];                                     // 0x0EF2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DebugInterval;                                             // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChestUp;                                                   // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RagdollActivated;                                          // 0x0EF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7MCT[0x6];                                     // 0x0EFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UHumanBase_ABP_C*                            CastABP;                                                   // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentAccelerationValue;                                  // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    StartingActorRot;                                          // 0x0F0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_87HU[0x8];                                     // 0x0F18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WorldTransform;                                            // 0x0F20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HumanBase.BP_HumanBase_C");
		return ptr;
	}



	bool BlendMeshRelativeT();
	class UAnimMontage* GetGetupAnimation();
	void CastAnimBP();
	void DebugVisibleThreatLoc();
	void StartAIDebugTimers();
	void DebugLastSawThreatLoc();
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void GetThrashableSize();
	void GetAlertState(TEnumAsByte<Maneater_EAIThreatAlertState>* AlertState, float* AlertLevel);
	void UserConstructionScript();
	void BlendFromWaterRagdoll__FinishedFunc();
	void BlendFromWaterRagdoll__UpdateFunc();
	void BlendFromWaterRagdoll__DisableWaterRagdoll__EventFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnNotifyEnd_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName);
	void OnNotifyBegin_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName);
	void OnInterrupted_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName);
	void OnBlendOut_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName);
	void OnCompleted_FF3E8CEC4E3BC0556811ACB1B782B8C4(const struct FName& NotifyName);
	void BlendBackToDefault();
	void ProcessRagdollImpactResponse(class UPhysicalMaterial* InstigatorPM, class UPrimitiveComponent* InstigatorComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse);
	void ChatterUpdateEvent_BP(int TotalLimbs, int DestroyedLimbs, bool isGrabbed, bool wasBumped, bool bWasForced);
	void ReceiveUnpossessed(class AController* OldController);
	void ReceivePossessed(class AController* NewController);
	void ReceiveBeginPlay();
	void GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded);
	void GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration);
	void BlendOutComplete();
	void StopBlend();
	void StopGetup();
	void ExecuteUbergraph_BP_HumanBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
