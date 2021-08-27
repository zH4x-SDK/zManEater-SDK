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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Base_IR.BP_Base_IR_C.GetDirectImpactEffects
struct UBP_Base_IR_C_GetDirectImpactEffects_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               ImpactedSurface;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUnderwater;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FImpactEffect                               ImpactEffects;                                             // (Parm, OutParm, NoDestructor)
};

// Function BP_Base_IR.BP_Base_IR_C.GetScrapeEffects
struct UBP_Base_IR_C_GetScrapeEffects_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               ScrapedSurface;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FImpactEffect                               ScrapeEffects;                                             // (Parm, OutParm, NoDestructor)
};

// Function BP_Base_IR.BP_Base_IR_C.GetImpactEffects
struct UBP_Base_IR_C_GetImpactEffects_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               ImpactingSurface;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUnderwater;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bScrape;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FImpactEffect                               ReturnValue;                                               // (Parm, OutParm, ReturnParm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
