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

// BlueprintGeneratedClass BP_Diver_Hunter.BP_Diver_Hunter_C
// 0x0010 (FullSize[0x0F70] - InheritedSize[0x0F60])
class ABP_Diver_Hunter_C : public ABP_Diver_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       AlertKeyName;                                              // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Diver_Hunter.BP_Diver_Hunter_C");
		return ptr;
	}



	void IsWeaponHoldingLimbGone_(const struct FName& GrabBoneName, bool* WeaponLimbIsGone);
	void OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Diver_Hunter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
