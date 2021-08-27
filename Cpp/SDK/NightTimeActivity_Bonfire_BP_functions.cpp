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

// Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ToggleActors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On_                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANightTimeActivity_Bonfire_BP_C::ToggleActors(bool On_)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ToggleActors");

	ANightTimeActivity_Bonfire_BP_C_ToggleActors_Params params;
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ANightTimeActivity_Bonfire_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ReceiveBeginPlay");

	ANightTimeActivity_Bonfire_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ToggleNight
// (Public, BlueprintCallable, BlueprintEvent)
void ANightTimeActivity_Bonfire_BP_C::ToggleNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ToggleNight");

	ANightTimeActivity_Bonfire_BP_C_ToggleNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ToggleDay
// (Public, BlueprintCallable, BlueprintEvent)
void ANightTimeActivity_Bonfire_BP_C::ToggleDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ToggleDay");

	ANightTimeActivity_Bonfire_BP_C_ToggleDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ExecuteUbergraph_NightTimeActivity_Bonfire_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANightTimeActivity_Bonfire_BP_C::ExecuteUbergraph_NightTimeActivity_Bonfire_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivity_Bonfire_BP.NightTimeActivity_Bonfire_BP_C.ExecuteUbergraph_NightTimeActivity_Bonfire_BP");

	ANightTimeActivity_Bonfire_BP_C_ExecuteUbergraph_NightTimeActivity_Bonfire_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
