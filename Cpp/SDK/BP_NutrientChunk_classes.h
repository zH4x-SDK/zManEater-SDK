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

// BlueprintGeneratedClass BP_NutrientChunk.BP_NutrientChunk_C
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class ABP_NutrientChunk_C : public AME_GoreChunk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NutrientChunk.BP_NutrientChunk_C");
		return ptr;
	}



	class UPrimitiveComponent* GetDetectableComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
