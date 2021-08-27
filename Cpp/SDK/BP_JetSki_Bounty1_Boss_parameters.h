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

// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.CanAIAttackTarget
struct ABP_JetSki_Bounty1_Boss_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.GetSizeLevel
struct ABP_JetSki_Bounty1_Boss_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.WallHit
struct ABP_JetSki_Bounty1_Boss_C_WallHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.BindBossHunterSeqCamera
struct ABP_JetSki_Bounty1_Boss_C_BindBossHunterSeqCamera_Params
{
};

// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.ExecuteUbergraph_BP_JetSki_Bounty1_Boss
struct ABP_JetSki_Bounty1_Boss_C_ExecuteUbergraph_BP_JetSki_Bounty1_Boss_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
