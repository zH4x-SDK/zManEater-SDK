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

// BlueprintGeneratedClass BP_PipeBomb.BP_PipeBomb_C
// 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
class ABP_PipeBomb_C : public AME_ExplodingBarrelBase
{
public:
	class UParticleSystemComponent*                    Bubbles;                                                   // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PipeBomb.BP_PipeBomb_C");
		return ptr;
	}



	bool CanBeFocused();
	bool CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal);
	bool CanBeLockedOnTo();
	int GetFocusPriority();
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
