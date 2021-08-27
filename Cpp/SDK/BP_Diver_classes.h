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

// BlueprintGeneratedClass BP_Diver.BP_Diver_C
// 0x0010 (FullSize[0x0F60] - InheritedSize[0x0F50])
class ABP_Diver_C : public ABP_HumanBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                BreathingAudioComponent;                                   // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Diver.BP_Diver_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName);
	void OnDied(class AController* Killer);
	void ExecuteUbergraph_BP_Diver(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
