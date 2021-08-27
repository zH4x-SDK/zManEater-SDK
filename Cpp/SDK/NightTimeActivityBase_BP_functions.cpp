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

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ToggleNight
// (Public, BlueprintCallable, BlueprintEvent)
void ANightTimeActivityBase_BP_C::ToggleNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ToggleNight");

	ANightTimeActivityBase_BP_C_ToggleNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ToggleDay
// (Public, BlueprintCallable, BlueprintEvent)
void ANightTimeActivityBase_BP_C::ToggleDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ToggleDay");

	ANightTimeActivityBase_BP_C_ToggleDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ANightTimeActivityBase_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ReceiveBeginPlay");

	ANightTimeActivityBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.TimeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANightTimeActivityBase_BP_C::TimeChanged(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.TimeChanged");

	ANightTimeActivityBase_BP_C_TimeChanged_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.OnTimeOfDayTrackerCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANightTimeActivityBase_BP_C::OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.OnTimeOfDayTrackerCreated");

	ANightTimeActivityBase_BP_C_OnTimeOfDayTrackerCreated_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.BindToOnTimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANightTimeActivityBase_BP_C::BindToOnTimeOfDayChanged(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.BindToOnTimeOfDayChanged");

	ANightTimeActivityBase_BP_C_BindToOnTimeOfDayChanged_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ExecuteUbergraph_NightTimeActivityBase_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANightTimeActivityBase_BP_C::ExecuteUbergraph_NightTimeActivityBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ExecuteUbergraph_NightTimeActivityBase_BP");

	ANightTimeActivityBase_BP_C_ExecuteUbergraph_NightTimeActivityBase_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
