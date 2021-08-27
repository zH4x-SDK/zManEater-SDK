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

// BlueprintGeneratedClass BP_ElectroShield.BP_ElectroShield_C
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class ABP_ElectroShield_C : public AME_AuraDamageActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElectroShield.BP_ElectroShield_C");
		return ptr;
	}



	struct FVector GetDetectableLocation(const struct FVector& AttackerLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
