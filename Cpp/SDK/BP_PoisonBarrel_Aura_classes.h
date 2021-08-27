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

// BlueprintGeneratedClass BP_PoisonBarrel_Aura.BP_PoisonBarrel_Aura_C
// 0x0000 (FullSize[0x0400] - InheritedSize[0x0400])
class ABP_PoisonBarrel_Aura_C : public AME_AuraDamageActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PoisonBarrel_Aura.BP_PoisonBarrel_Aura_C");
		return ptr;
	}



	struct FVector GetDetectableLocation(const struct FVector& AttackerLocation);
	class UPrimitiveComponent* GetDetectableComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
