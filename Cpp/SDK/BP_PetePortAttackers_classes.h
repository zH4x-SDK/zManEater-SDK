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

// BlueprintGeneratedClass BP_PetePortAttackers.BP_PetePortAttackers_C
// 0x0000 (FullSize[0x0E60] - InheritedSize[0x0E60])
class ABP_PetePortAttackers_C : public AME_HumanPassenger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetePortAttackers.BP_PetePortAttackers_C");
		return ptr;
	}



	bool CanBeFocused();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
