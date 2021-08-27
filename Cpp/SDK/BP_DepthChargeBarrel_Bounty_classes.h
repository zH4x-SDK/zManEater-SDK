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

// BlueprintGeneratedClass BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C
// 0x0040 (FullSize[0x03E8] - InheritedSize[0x03A8])
class ABP_DepthChargeBarrel_Bounty_C : public AME_ProximityBomb
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VulnerableVFX;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Bubbles;                                                   // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              MaterialTimeline_Active_DD581010490CC2A764BB179B58D3B2BA;  // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaterialTimeline_FlashSpeed_DD581010490CC2A764BB179B58D3B2BA; // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             MaterialTimeline__Direction_DD581010490CC2A764BB179B58D3B2BA; // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_26YH[0x7];                                     // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          MaterialTimeline;                                          // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DMIC;                                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C");
		return ptr;
	}



	bool CanBeFocused();
	bool CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal);
	bool CanBeLockedOnTo();
	int GetFocusPriority();
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void MaterialTimeline__FinishedFunc();
	void MaterialTimeline__UpdateFunc();
	void MaterialTimeline__Events__EventFunc();
	void ReceiveBeginPlay();
	void UpdateMaterial(float ExplosionTimer);
	void ExecuteUbergraph_BP_DepthChargeBarrel_Bounty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
