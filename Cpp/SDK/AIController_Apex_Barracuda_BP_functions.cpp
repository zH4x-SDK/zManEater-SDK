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

// Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.ThreatStateHasChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InstigatingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Apex_Barracuda_BP_C::ThreatStateHasChanged_Event(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.ThreatStateHasChanged_Event");

	AAIController_Apex_Barracuda_BP_C_ThreatStateHasChanged_Event_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.OnAIDied_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AIController*        KilledAIC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Apex_Barracuda_BP_C::OnAIDied_Event(class AME_AIController* KilledAIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.OnAIDied_Event");

	AAIController_Apex_Barracuda_BP_C_OnAIDied_Event_Params params;
	params.KilledAIC = KilledAIC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Apex_Barracuda_BP_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.ReceivePossess");

	AAIController_Apex_Barracuda_BP_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.ExecuteUbergraph_AIController_Apex_Barracuda_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIController_Apex_Barracuda_BP_C::ExecuteUbergraph_AIController_Apex_Barracuda_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIController_Apex_Barracuda_BP.AIController_Apex_Barracuda_BP_C.ExecuteUbergraph_AIController_Apex_Barracuda_BP");

	AAIController_Apex_Barracuda_BP_C_ExecuteUbergraph_AIController_Apex_Barracuda_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
