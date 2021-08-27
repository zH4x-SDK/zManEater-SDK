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

// BlueprintGeneratedClass DEP_BP_USCG_Small_Hunter_Pete2_Support_Divers.DEP_BP_USCG_Small_Hunter_Pete2_Support_Divers_C
// 0x0018 (FullSize[0x0CFC] - InheritedSize[0x0CE4])
class ADEP_BP_USCG_Small_Hunter_Pete2_Support_Divers_C : public ABP_Base_USCG_Small_Bounty_C
{
public:
	unsigned char                                      UnknownData_5HQ8[0x4];                                     // 0x0CE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     StartingLoc;                                               // 0x0CF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DEP_BP_USCG_Small_Hunter_Pete2_Support_Divers.DEP_BP_USCG_Small_Hunter_Pete2_Support_Divers_C");
		return ptr;
	}



	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ReceiveBeginPlay();
	void MoveToSafeLoc();
	void ExecuteUbergraph_DEP_BP_USCG_Small_Hunter_Pete2_Support_Divers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
