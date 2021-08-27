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

// BlueprintGeneratedClass BP_AISharkBase.BP_AISharkBase_C
// 0x0008 (FullSize[0x0FB8] - InheritedSize[0x0FB0])
class ABP_AISharkBase_C : public AME_SharkCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AISharkBase.BP_AISharkBase_C");
		return ptr;
	}



	bool CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal);
	bool CanBeGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ExecuteUbergraph_BP_AISharkBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
