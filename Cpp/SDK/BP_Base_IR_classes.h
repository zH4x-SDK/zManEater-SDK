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

// BlueprintGeneratedClass BP_Base_IR.BP_Base_IR_C
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBP_Base_IR_C : public UME_PhysicalImpactResponse
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_IR.BP_Base_IR_C");
		return ptr;
	}



	void GetDirectImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface, bool bUnderwater, struct FImpactEffect* ImpactEffects);
	void GetScrapeEffects(TEnumAsByte<Engine_EPhysicalSurface> ScrapedSurface, struct FImpactEffect* ScrapeEffects);
	struct FImpactEffect GetImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactingSurface, bool bUnderwater, bool bScrape);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif