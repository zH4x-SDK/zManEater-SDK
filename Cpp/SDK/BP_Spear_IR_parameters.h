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

// Function BP_Spear_IR.BP_Spear_IR_C.GetDirectImpactEffects
struct UBP_Spear_IR_C_GetDirectImpactEffects_Params
{
	TEnumAsByte<Engine_EPhysicalSurface>               ImpactedSurface;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUnderwater;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FImpactEffect                               ImpactEffects;                                             // (Parm, OutParm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
