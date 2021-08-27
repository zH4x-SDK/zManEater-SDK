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

// Function OneWayGate_BP.OneWayGate_BP_C.SetWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOneWayGate_BP_C::SetWidgetIndex(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.SetWidgetIndex");

	AOneWayGate_BP_C_SetWidgetIndex_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AOneWayGate_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.UserConstructionScript");

	AOneWayGate_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.GateAnimation__FinishedFunc
// (BlueprintEvent)
void AOneWayGate_BP_C::GateAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.GateAnimation__FinishedFunc");

	AOneWayGate_BP_C_GateAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.GateAnimation__UpdateFunc
// (BlueprintEvent)
void AOneWayGate_BP_C::GateAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.GateAnimation__UpdateFunc");

	AOneWayGate_BP_C_GateAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.OpenGate
// (BlueprintCallable, BlueprintEvent)
void AOneWayGate_BP_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.OpenGate");

	AOneWayGate_BP_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.LeverComplete
// (BlueprintCallable, BlueprintEvent)
void AOneWayGate_BP_C::LeverComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.LeverComplete");

	AOneWayGate_BP_C_LeverComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AOneWayGate_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.ReceiveBeginPlay");

	AOneWayGate_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OneWayGate_BP.OneWayGate_BP_C.ExecuteUbergraph_OneWayGate_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AOneWayGate_BP_C::ExecuteUbergraph_OneWayGate_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OneWayGate_BP.OneWayGate_BP_C.ExecuteUbergraph_OneWayGate_BP");

	AOneWayGate_BP_C_ExecuteUbergraph_OneWayGate_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
