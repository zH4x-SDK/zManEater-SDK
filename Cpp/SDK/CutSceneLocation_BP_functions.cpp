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

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACutSceneLocation_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CutSceneLocation_BP.CutSceneLocation_BP_C.ReceiveBeginPlay");

	ACutSceneLocation_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CutSceneLocation_BP.CutSceneLocation_BP_C.BindObjectiveStarted
// (BlueprintCallable, BlueprintEvent)
void ACutSceneLocation_BP_C::BindObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CutSceneLocation_BP.CutSceneLocation_BP_C.BindObjectiveStarted");

	ACutSceneLocation_BP_C_BindObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CutSceneLocation_BP.CutSceneLocation_BP_C.GetObjectiveManager
// (BlueprintCallable, BlueprintEvent)
void ACutSceneLocation_BP_C::GetObjectiveManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function CutSceneLocation_BP.CutSceneLocation_BP_C.GetObjectiveManager");

	ACutSceneLocation_BP_C_GetObjectiveManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CutSceneLocation_BP.CutSceneLocation_BP_C.StateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Maneater_EObjectiveState       NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACutSceneLocation_BP_C::StateChanged(class UME_PlayerObjective* PlayerObjective, Maneater_EObjectiveState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CutSceneLocation_BP.CutSceneLocation_BP_C.StateChanged");

	ACutSceneLocation_BP_C_StateChanged_Params params;
	params.PlayerObjective = PlayerObjective;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CutSceneLocation_BP.CutSceneLocation_BP_C.FirstTimeCheck
// (BlueprintCallable, BlueprintEvent)
void ACutSceneLocation_BP_C::FirstTimeCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function CutSceneLocation_BP.CutSceneLocation_BP_C.FirstTimeCheck");

	ACutSceneLocation_BP_C_FirstTimeCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CutSceneLocation_BP.CutSceneLocation_BP_C.ExecuteUbergraph_CutSceneLocation_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACutSceneLocation_BP_C::ExecuteUbergraph_CutSceneLocation_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CutSceneLocation_BP.CutSceneLocation_BP_C.ExecuteUbergraph_CutSceneLocation_BP");

	ACutSceneLocation_BP_C_ExecuteUbergraph_CutSceneLocation_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
