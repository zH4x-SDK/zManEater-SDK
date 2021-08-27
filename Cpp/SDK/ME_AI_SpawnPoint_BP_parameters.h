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

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ForceSpawn
struct AME_AI_SpawnPoint_BP_C_ForceSpawn_Params
{
};

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.AIDestroyed
struct AME_AI_SpawnPoint_BP_C_AIDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.CleanUpSpawnedAI
struct AME_AI_SpawnPoint_BP_C_CleanUpSpawnedAI_Params
{
};

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ReceiveBeginPlay
struct AME_AI_SpawnPoint_BP_C_ReceiveBeginPlay_Params
{
};

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.AutoRespawn
struct AME_AI_SpawnPoint_BP_C_AutoRespawn_Params
{
	class AME_AIController*                            KilledAIC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ExecuteUbergraph_ME_AI_SpawnPoint_BP
struct AME_AI_SpawnPoint_BP_C_ExecuteUbergraph_ME_AI_SpawnPoint_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
