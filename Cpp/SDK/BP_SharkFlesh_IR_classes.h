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

// BlueprintGeneratedClass BP_SharkFlesh_IR.BP_SharkFlesh_IR_C
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBP_SharkFlesh_IR_C : public UBP_Base_IR_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SharkFlesh_IR.BP_SharkFlesh_IR_C");
		return ptr;
	}



	struct FImpactEffect GetImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactingSurface, bool bUnderwater, bool bScrape);
	void GetScrapeEffects(TEnumAsByte<Engine_EPhysicalSurface> ScrapedSurface, struct FImpactEffect* ScrapeEffects);
	void GetDirectImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface, bool bUnderwater, struct FImpactEffect* ImpactEffects);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
