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

// BlueprintGeneratedClass BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C
// 0x0068 (FullSize[0x0E70] - InheritedSize[0x0E08])
class ABP_Base_PetesBoat_V1_C : public ABP_BossBoatBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            KillshotCam;                                               // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    PeteBeam;                                                  // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BeamValid;                                                 // 0x0E20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FNWX[0x7];                                     // 0x0E21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    PeteDot;                                                   // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SourceLoc;                                                 // 0x0E30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLoc;                                                 // 0x0E3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentFInterpTo;                                          // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CameraMove;                                                // 0x0E4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ABHL[0x3];                                     // 0x0E4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ALevelSequenceActor*                         HarpoonCineSEQ;                                            // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                HarpoonCam;                                                // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                          MotherShark;                                               // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                          Pete;                                                      // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C");
		return ptr;
	}



	void CleanHarpoonSEQ();
	void BindHarpoonSEQ();
	void SpawnAndAttachHarpoonSEQ();
	void SpawnScriptedBeam();
	void UpdateTargetPoint(struct FVector* SourceLoc, struct FVector* TargetLoc);
	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void OnBossCinematicComplete();
	void BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay);
	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_Base_PetesBoat_V1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
