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

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManagePetePassengerVisiblity
struct ABP_Base_PT_Boat_C_ManagePetePassengerVisiblity_Params
{
	bool                                               bNewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CleanupElectroShields
struct ABP_Base_PT_Boat_C_CleanupElectroShields_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManageDummyElectro2
struct ABP_Base_PT_Boat_C_ManageDummyElectro2_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManageDummyElectro1
struct ABP_Base_PT_Boat_C_ManageDummyElectro1_Params
{
	bool                                               IsActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnAndAttachElectroShield2
struct ABP_Base_PT_Boat_C_SpawnAndAttachElectroShield2_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnAndAttachElectroShield1
struct ABP_Base_PT_Boat_C_SpawnAndAttachElectroShield1_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnElectroShields
struct ABP_Base_PT_Boat_C_SpawnElectroShields_Params
{
	int                                                BossPhase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CanAIAttackTarget
struct ABP_Base_PT_Boat_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.GetSizeLevel
struct ABP_Base_PT_Boat_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ReceiveBeginPlay
struct ABP_Base_PT_Boat_C_ReceiveBeginPlay_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.HandlePassengerVisiblity
struct ABP_Base_PT_Boat_C_HandlePassengerVisiblity_Params
{
	bool                                               NewPassengerVisiblity;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewCinePeteVisibility;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.PlayPlayerDeathCharacterAnims
struct ABP_Base_PT_Boat_C_PlayPlayerDeathCharacterAnims_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BossPhaseChanged
struct ABP_Base_PT_Boat_C_BossPhaseChanged_Params
{
	int                                                NewPhaseNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PassengerRespawnDelay;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.UpdateBossHealthBar
struct ABP_Base_PT_Boat_C_UpdateBossHealthBar_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ElectroShield1Destroyed
struct ABP_Base_PT_Boat_C_ElectroShield1Destroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ElectroShield2Destroyed
struct ABP_Base_PT_Boat_C_ElectroShield2Destroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindDestroyedEventsToElectroShields
struct ABP_Base_PT_Boat_C_BindDestroyedEventsToElectroShields_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CleanupSupportBoats
struct ABP_Base_PT_Boat_C_CleanupSupportBoats_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BeginPlayerDefeatedCine
struct ABP_Base_PT_Boat_C_BeginPlayerDefeatedCine_Params
{
	class AME_Character*                               Victim;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindPlayerDefeatSequence
struct ABP_Base_PT_Boat_C_BindPlayerDefeatSequence_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindBossHunterSeqCamera
struct ABP_Base_PT_Boat_C_BindBossHunterSeqCamera_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.AddBoatDefeated
struct ABP_Base_PT_Boat_C_AddBoatDefeated_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.UpdateHunterSupportProgress
struct ABP_Base_PT_Boat_C_UpdateHunterSupportProgress_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.OnBossCinematicComplete
struct ABP_Base_PT_Boat_C_OnBossCinematicComplete_Params
{
};

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ExecuteUbergraph_BP_Base_PT_Boat
struct ABP_Base_PT_Boat_C_ExecuteUbergraph_BP_Base_PT_Boat_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
