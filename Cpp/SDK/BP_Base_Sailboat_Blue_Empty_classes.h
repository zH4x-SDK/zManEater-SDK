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

// BlueprintGeneratedClass BP_Base_Sailboat_Blue_Empty.BP_Base_Sailboat_Blue_Empty_C
// 0x0004 (FullSize[0x0BFC] - InheritedSize[0x0BF8])
class ABP_Base_Sailboat_Blue_Empty_C : public ABP_BoatBaseNoNav_C
{
public:
	float                                              LastHitTime_0_1;                                           // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Sailboat_Blue_Empty.BP_Base_Sailboat_Blue_Empty_C");
		return ptr;
	}



	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
