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

// Function SpearProjectile_Pete1.SpearProjectile_Pete1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpearProjectile_Pete1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpearProjectile_Pete1.SpearProjectile_Pete1_C.ReceiveBeginPlay");

	ASpearProjectile_Pete1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpearProjectile_Pete1.SpearProjectile_Pete1_C.ExecuteUbergraph_SpearProjectile_Pete1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpearProjectile_Pete1_C::ExecuteUbergraph_SpearProjectile_Pete1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpearProjectile_Pete1.SpearProjectile_Pete1_C.ExecuteUbergraph_SpearProjectile_Pete1");

	ASpearProjectile_Pete1_C_ExecuteUbergraph_SpearProjectile_Pete1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif