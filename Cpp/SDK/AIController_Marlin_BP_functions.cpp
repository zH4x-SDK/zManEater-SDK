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

// Function AIController_Marlin_BP.AIController_Marlin_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAIController_Marlin_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Marlin_BP.AIController_Marlin_BP_C.ReceiveBeginPlay");

	AAIController_Marlin_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Marlin_BP.AIController_Marlin_BP_C.ThreatStateHasChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InstigatingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Marlin_BP_C::ThreatStateHasChanged_Event(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Marlin_BP.AIController_Marlin_BP_C.ThreatStateHasChanged_Event");

	AAIController_Marlin_BP_C_ThreatStateHasChanged_Event_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Marlin_BP.AIController_Marlin_BP_C.ExecuteUbergraph_AIController_Marlin_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Marlin_BP_C::ExecuteUbergraph_AIController_Marlin_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Marlin_BP.AIController_Marlin_BP_C.ExecuteUbergraph_AIController_Marlin_BP");

	AAIController_Marlin_BP_C_ExecuteUbergraph_AIController_Marlin_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif