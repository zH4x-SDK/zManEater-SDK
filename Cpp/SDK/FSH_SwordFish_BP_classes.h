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

// BlueprintGeneratedClass FSH_SwordFish_BP.FSH_SwordFish_BP_C
// 0x00BA (FullSize[0x10FA] - InheritedSize[0x1040])
class AFSH_SwordFish_BP_C : public AWildlife_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVoiceGroupComponent_BP_C*                   VoiceGroupComponent_BP1;                                   // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVoiceGroupComponent_BP_C*                   VoiceGroupComponent_BP;                                    // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_BandGlow_030610FA49361826FA88CE813E3CC0A7;    // 0x1058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_BandScale_030610FA49361826FA88CE813E3CC0A7;   // 0x105C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_BandScroll_030610FA49361826FA88CE813E3CC0A7;  // 0x1060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_IntakeRefraction_030610FA49361826FA88CE813E3CC0A7; // 0x1064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_GlowAmount_030610FA49361826FA88CE813E3CC0A7;  // 0x1068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_RibbonOpacity_030610FA49361826FA88CE813E3CC0A7; // 0x106C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_SparkleScale_030610FA49361826FA88CE813E3CC0A7; // 0x1070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_0_GlowON_030610FA49361826FA88CE813E3CC0A7;      // 0x1074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0_0__Direction_030610FA49361826FA88CE813E3CC0A7;  // 0x1078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NLX5[0x7];                                     // 0x1079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_0_1;                                              // 0x1080(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_FadeRipple_43E1D102424C65592C8FE0B82B4EBA2E;    // 0x1088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Glowoff_43E1D102424C65592C8FE0B82B4EBA2E;       // 0x108C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_43E1D102424C65592C8FE0B82B4EBA2E;    // 0x1090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MY9W[0x7];                                     // 0x1091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x1098(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    SwordfishCharge;                                           // 0x10A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurnCount;                                                 // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RibbonOpacity;                                             // 0x10AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SparkleScale;                                              // 0x10B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GlowBloom;                                                 // 0x10B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IntakeRefraction;                                          // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1HBQ[0x4];                                     // 0x10BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    SwordfishChargeTail;                                       // 0x10C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LungingDone;                                               // 0x10C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChargeSET;                                                 // 0x10C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HD8K[0x6];                                     // 0x10CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    RushStreak01;                                              // 0x10D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    RushStreak02;                                              // 0x10D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    RushStreak03;                                              // 0x10E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    RushStreak04;                                              // 0x10E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    RushNoseCone;                                              // 0x10F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChargingDone;                                              // 0x10F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RushDone;                                                  // 0x10F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FSH_SwordFish_BP.FSH_SwordFish_BP_C");
		return ptr;
	}



	void TryDeactivate(TArray<class UActorComponent*>* ActorComponent);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnLungeEnd(class UAnimMontage* Montage);
	void OnDied(class AController* Killer);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageStarted(class UAnimMontage* Montage);
	void OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex);
	void ExecuteUbergraph_FSH_SwordFish_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
