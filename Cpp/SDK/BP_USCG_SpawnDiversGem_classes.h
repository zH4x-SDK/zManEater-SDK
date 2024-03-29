﻿#pragma once

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

// BlueprintGeneratedClass BP_USCG_SpawnDiversGem.BP_USCG_SpawnDiversGem_C
// 0x000C (FullSize[0x0CF0] - InheritedSize[0x0CE4])
class ABP_USCG_SpawnDiversGem_C : public ABP_Base_USCG_Small_Bounty_C
{
public:
	unsigned char                                      UnknownData_GC1Q[0x4];                                     // 0x0CE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USCG_SpawnDiversGem.BP_USCG_SpawnDiversGem_C");
		return ptr;
	}



	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_USCG_SpawnDiversGem(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
