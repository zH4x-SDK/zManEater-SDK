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

// BlueprintGeneratedClass BP_Base_PT_Boat.BP_Base_PT_Boat_C
// 0x004C (FullSize[0x0E54] - InheritedSize[0x0E08])
class ABP_Base_PT_Boat_C : public ABP_BossBoatBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DummyElectro2;                                             // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        DummyElectro1;                                             // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CageMesh;                                                  // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UME_TorpedoLauncherComponent*                ME_TorpedoLauncher;                                        // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         SpotLight_1;                                               // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              BossShieldHealth;                                          // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BossShieldMaxHealth;                                       // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ElectroShield_PetePTBoat_C*              ElectroShield1;                                            // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ElectroShield_PetePTBoat_C*              ElectroShield2;                                            // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumValidShields;                                           // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_PT_Boat.BP_Base_PT_Boat_C");
		return ptr;
	}



	void ManagePetePassengerVisiblity(bool bNewVisibility);
	void CleanupElectroShields();
	void ManageDummyElectro2(bool IsActive);
	void ManageDummyElectro1(bool IsActive);
	void SpawnAndAttachElectroShield2();
	void SpawnAndAttachElectroShield1();
	void SpawnElectroShields(int BossPhase);
	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ReceiveBeginPlay();
	void HandlePassengerVisiblity(bool NewPassengerVisiblity, bool NewCinePeteVisibility);
	void PlayPlayerDeathCharacterAnims();
	void BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay);
	void UpdateBossHealthBar();
	void ElectroShield1Destroyed(class AActor* DestroyedActor);
	void ElectroShield2Destroyed(class AActor* DestroyedActor);
	void BindDestroyedEventsToElectroShields();
	void CleanupSupportBoats();
	void BeginPlayerDefeatedCine(class AME_Character* Victim, class AActor* Killer);
	void BindPlayerDefeatSequence();
	void BindBossHunterSeqCamera();
	void AddBoatDefeated();
	void UpdateHunterSupportProgress();
	void OnBossCinematicComplete();
	void ExecuteUbergraph_BP_Base_PT_Boat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
