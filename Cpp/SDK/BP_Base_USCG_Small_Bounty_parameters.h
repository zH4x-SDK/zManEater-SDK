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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugVisibleThreatLoc
struct ABP_Base_USCG_Small_Bounty_C_DebugVisibleThreatLoc_Params
{
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugLastVisibleThreatLoc
struct ABP_Base_USCG_Small_Bounty_C_DebugLastVisibleThreatLoc_Params
{
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.CanAIAttackTarget
struct ABP_Base_USCG_Small_Bounty_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.GetSizeLevel
struct ABP_Base_USCG_Small_Bounty_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugFloat
struct ABP_Base_USCG_Small_Bounty_C_DebugFloat_Params
{
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugEscapePoint
struct ABP_Base_USCG_Small_Bounty_C_DebugEscapePoint_Params
{
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.HaveEverSeenPlayerDebug
struct ABP_Base_USCG_Small_Bounty_C_HaveEverSeenPlayerDebug_Params
{
};

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.ExecuteUbergraph_BP_Base_USCG_Small_Bounty
struct ABP_Base_USCG_Small_Bounty_C_ExecuteUbergraph_BP_Base_USCG_Small_Bounty_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
