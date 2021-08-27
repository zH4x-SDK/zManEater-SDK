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

// BlueprintGeneratedClass PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C
// 0x0018 (FullSize[0x02F8] - InheritedSize[0x02E0])
class APetesHandGoreChunk_BP_C : public AME_GoreChunk
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C");
		return ptr;
	}



	class UPrimitiveComponent* GetDetectableComponent();
	void HideInWorldWidget();
	void ShowInWorldWidget();
	void OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName);
	void ReceiveTick(float DeltaSeconds);
	void OnConsumedWhole(class AME_AnimalCharacter* ConsumingAnimal);
	void OnCinematicModeChanged_Event_1(bool bCinematicMode);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PetesHandGoreChunk_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
