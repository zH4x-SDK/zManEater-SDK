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

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.SpawnAndAttachElectroShield
struct ABP_Base_PetesBoat_V2_C_SpawnAndAttachElectroShield_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ManageDummyElectro
struct ABP_Base_PetesBoat_V2_C_ManageDummyElectro_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.CanAIAttackTarget
struct ABP_Base_PetesBoat_V2_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.GetSizeLevel
struct ABP_Base_PetesBoat_V2_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BossPhaseChanged
struct ABP_Base_PetesBoat_V2_C_BossPhaseChanged_Params
{
	int                                                NewPhaseNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PassengerRespawnDelay;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnBossCinematicStarted
struct ABP_Base_PetesBoat_V2_C_OnBossCinematicStarted_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ReceiveBeginPlay
struct ABP_Base_PetesBoat_V2_C_ReceiveBeginPlay_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnBossCinematicComplete
struct ABP_Base_PetesBoat_V2_C_OnBossCinematicComplete_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.HandleKyleVisiblity
struct ABP_Base_PetesBoat_V2_C_HandleKyleVisiblity_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.PlayPlayerDeathCharacterAnims
struct ABP_Base_PetesBoat_V2_C_PlayPlayerDeathCharacterAnims_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.HandlePassengerVisiblity
struct ABP_Base_PetesBoat_V2_C_HandlePassengerVisiblity_Params
{
	bool                                               NewPassengerVisiblity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewCinePeteVisibility;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.UpdateBossHealthBar
struct ABP_Base_PetesBoat_V2_C_UpdateBossHealthBar_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ReceiveTick
struct ABP_Base_PetesBoat_V2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindElectroShieldDestroyed
struct ABP_Base_PetesBoat_V2_C_BindElectroShieldDestroyed_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnSink
struct ABP_Base_PetesBoat_V2_C_OnSink_Params
{
	class AController*                                 SinkInstigator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ElectroShieldDestoryed
struct ABP_Base_PetesBoat_V2_C_ElectroShieldDestoryed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BeginPlayerDefeatedCine
struct ABP_Base_PetesBoat_V2_C_BeginPlayerDefeatedCine_Params
{
	class AME_Character*                               Victim;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindPlayerDefeatSequence
struct ABP_Base_PetesBoat_V2_C_BindPlayerDefeatSequence_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindBossHunterSeqCamera
struct ABP_Base_PetesBoat_V2_C_BindBossHunterSeqCamera_Params
{
};

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ExecuteUbergraph_BP_Base_PetesBoat_V2
struct ABP_Base_PetesBoat_V2_C_ExecuteUbergraph_BP_Base_PetesBoat_V2_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
