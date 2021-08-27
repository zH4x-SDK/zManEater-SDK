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

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.CleanHarpoonSEQ
struct ABP_Base_PetesBoat_V1_C_CleanHarpoonSEQ_Params
{
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BindHarpoonSEQ
struct ABP_Base_PetesBoat_V1_C_BindHarpoonSEQ_Params
{
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.SpawnAndAttachHarpoonSEQ
struct ABP_Base_PetesBoat_V1_C_SpawnAndAttachHarpoonSEQ_Params
{
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.SpawnScriptedBeam
struct ABP_Base_PetesBoat_V1_C_SpawnScriptedBeam_Params
{
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.UpdateTargetPoint
struct ABP_Base_PetesBoat_V1_C_UpdateTargetPoint_Params
{
	struct FVector                                     SourceLoc;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLoc;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.CanAIAttackTarget
struct ABP_Base_PetesBoat_V1_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.GetSizeLevel
struct ABP_Base_PetesBoat_V1_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.OnBossCinematicComplete
struct ABP_Base_PetesBoat_V1_C_OnBossCinematicComplete_Params
{
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BossPhaseChanged
struct ABP_Base_PetesBoat_V1_C_BossPhaseChanged_Params
{
	int                                                NewPhaseNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PassengerRespawnDelay;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BindBossHunterSeqCamera
struct ABP_Base_PetesBoat_V1_C_BindBossHunterSeqCamera_Params
{
};

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.ExecuteUbergraph_BP_Base_PetesBoat_V1
struct ABP_Base_PetesBoat_V1_C_ExecuteUbergraph_BP_Base_PetesBoat_V1_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
