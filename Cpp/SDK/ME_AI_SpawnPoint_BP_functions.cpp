// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ForceSpawn
// (BlueprintCallable, BlueprintEvent)
void AME_AI_SpawnPoint_BP_C::ForceSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ForceSpawn");

	AME_AI_SpawnPoint_BP_C_ForceSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.AIDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_AI_SpawnPoint_BP_C::AIDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.AIDestroyed");

	AME_AI_SpawnPoint_BP_C_AIDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.CleanUpSpawnedAI
// (BlueprintCallable, BlueprintEvent)
void AME_AI_SpawnPoint_BP_C::CleanUpSpawnedAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.CleanUpSpawnedAI");

	AME_AI_SpawnPoint_BP_C_CleanUpSpawnedAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AME_AI_SpawnPoint_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ReceiveBeginPlay");

	AME_AI_SpawnPoint_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.AutoRespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AIController*        KilledAIC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_AI_SpawnPoint_BP_C::AutoRespawn(class AME_AIController* KilledAIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.AutoRespawn");

	AME_AI_SpawnPoint_BP_C_AutoRespawn_Params params;
	params.KilledAIC = KilledAIC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ExecuteUbergraph_ME_AI_SpawnPoint_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_AI_SpawnPoint_BP_C::ExecuteUbergraph_ME_AI_SpawnPoint_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_AI_SpawnPoint_BP.ME_AI_SpawnPoint_BP_C.ExecuteUbergraph_ME_AI_SpawnPoint_BP");

	AME_AI_SpawnPoint_BP_C_ExecuteUbergraph_ME_AI_SpawnPoint_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
