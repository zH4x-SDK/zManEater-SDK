﻿// Name: ManEater, Version: 1.0.0

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

// Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_USCG_SpawnDynamiteGem_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.CanAIAttackTarget");

	ABP_USCG_SpawnDynamiteGem_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_USCG_SpawnDynamiteGem_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.GetSizeLevel");

	ABP_USCG_SpawnDynamiteGem_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_USCG_SpawnDynamiteGem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.ReceiveBeginPlay");

	ABP_USCG_SpawnDynamiteGem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.ExecuteUbergraph_BP_USCG_SpawnDynamiteGem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_USCG_SpawnDynamiteGem_C::ExecuteUbergraph_BP_USCG_SpawnDynamiteGem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_USCG_SpawnDynamiteGem.BP_USCG_SpawnDynamiteGem_C.ExecuteUbergraph_BP_USCG_SpawnDynamiteGem");

	ABP_USCG_SpawnDynamiteGem_C_ExecuteUbergraph_BP_USCG_SpawnDynamiteGem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
