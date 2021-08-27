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

// BlueprintGeneratedClass BP_Base_Sailboat_Blue.BP_Base_Sailboat_Blue_C
// 0x0004 (FullSize[0x0CD8] - InheritedSize[0x0CD4])
class ABP_Base_Sailboat_Blue_C : public ABP_Base_Sailboat_C
{
public:
	float                                              LastHitTime_1;                                             // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Sailboat_Blue.BP_Base_Sailboat_Blue_C");
		return ptr;
	}



	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
