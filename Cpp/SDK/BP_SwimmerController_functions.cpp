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

// Function BP_SwimmerController.BP_SwimmerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SwimmerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimmerController.BP_SwimmerController_C.ReceivePossess");

	ABP_SwimmerController_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SwimmerController.BP_SwimmerController_C.OnThreatStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  InstigatingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SwimmerController_C::OnThreatStateChanged(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimmerController.BP_SwimmerController_C.OnThreatStateChanged");

	ABP_SwimmerController_C_OnThreatStateChanged_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SwimmerController.BP_SwimmerController_C.ExecuteUbergraph_BP_SwimmerController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SwimmerController_C::ExecuteUbergraph_BP_SwimmerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SwimmerController.BP_SwimmerController_C.ExecuteUbergraph_BP_SwimmerController");

	ABP_SwimmerController_C_ExecuteUbergraph_BP_SwimmerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
