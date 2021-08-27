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

// BlueprintGeneratedClass BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C
// 0x006C (FullSize[0x0E74] - InheritedSize[0x0E08])
class ABP_Base_PetesBoat_V2_C : public ABP_BossBoatBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CageMesh;                                                  // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Cine_Kyle;                                                 // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        DummyElectro;                                              // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight_1;                                               // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_ElectroShield_PetePTBoat_C*              SharkShield;                                               // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                            SharkShieldCamera;                                         // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         SharkShieldLevelSeqActor;                                  // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                        SharkShieldLevelSeqPlayer;                                 // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATargetPoint*                                ShieldLoc;                                                 // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BossShieldHealth;                                          // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BossShieldMaxHealth;                                       // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ElectroShield_Pete2_C*                   ElectroShield;                                             // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PeteKyleVictoryOffset;                                     // 0x0E68(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C");
		return ptr;
	}



	void SpawnAndAttachElectroShield();
	void ManageDummyElectro(bool IsActive);
	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay);
	void OnBossCinematicStarted();
	void ReceiveBeginPlay();
	void OnBossCinematicComplete();
	void HandleKyleVisiblity();
	void PlayPlayerDeathCharacterAnims();
	void HandlePassengerVisiblity(bool NewPassengerVisiblity, bool NewCinePeteVisibility);
	void UpdateBossHealthBar();
	void ReceiveTick(float DeltaSeconds);
	void BindElectroShieldDestroyed();
	void OnSink(class AController* SinkInstigator);
	void ElectroShieldDestoryed(class AActor* DestroyedActor);
	void BeginPlayerDefeatedCine(class AME_Character* Victim, class AActor* Killer);
	void BindPlayerDefeatSequence();
	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_Base_PetesBoat_V2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
