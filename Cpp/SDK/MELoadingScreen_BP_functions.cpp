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

// Function MELoadingScreen_BP.MELoadingScreen_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMELoadingScreen_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MELoadingScreen_BP.MELoadingScreen_BP_C.Construct");

	UMELoadingScreen_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MELoadingScreen_BP.MELoadingScreen_BP_C.ExecuteUbergraph_MELoadingScreen_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMELoadingScreen_BP_C::ExecuteUbergraph_MELoadingScreen_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MELoadingScreen_BP.MELoadingScreen_BP_C.ExecuteUbergraph_MELoadingScreen_BP");

	UMELoadingScreen_BP_C_ExecuteUbergraph_MELoadingScreen_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
