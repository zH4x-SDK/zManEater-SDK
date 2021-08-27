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

// Function BP_Diver_Hunter.BP_Diver_Hunter_C.IsWeaponHoldingLimbGone?
struct ABP_Diver_Hunter_C_IsWeaponHoldingLimbGone__Params
{
	struct FName                                       GrabBoneName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WeaponLimbIsGone;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Diver_Hunter.BP_Diver_Hunter_C.OnGrabPointConsumed
struct ABP_Diver_Hunter_C_OnGrabPointConsumed_Params
{
	class AME_AnimalCharacter*                         ConsumingAnimal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FThrashGrabPoint                            ConsumedGrabPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GoreCapBoneName;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Diver_Hunter.BP_Diver_Hunter_C.ReceiveTick
struct ABP_Diver_Hunter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Diver_Hunter.BP_Diver_Hunter_C.ExecuteUbergraph_BP_Diver_Hunter
struct ABP_Diver_Hunter_C_ExecuteUbergraph_BP_Diver_Hunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
