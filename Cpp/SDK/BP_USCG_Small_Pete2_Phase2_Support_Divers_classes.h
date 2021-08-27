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

// BlueprintGeneratedClass BP_USCG_Small_Pete2_Phase2_Support_Divers.BP_USCG_Small_Pete2_Phase2_Support_Divers_C
// 0x0014 (FullSize[0x0D2C] - InheritedSize[0x0D18])
class ABP_USCG_Small_Pete2_Phase2_Support_Divers_C : public ABP_Boss_Support_Boat_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     StartingLoc;                                               // 0x0D20(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USCG_Small_Pete2_Phase2_Support_Divers.BP_USCG_Small_Pete2_Phase2_Support_Divers_C");
		return ptr;
	}



	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ReceiveBeginPlay();
	void MoveToSafeLoc();
	void ExecuteUbergraph_BP_USCG_Small_Pete2_Phase2_Support_Divers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
