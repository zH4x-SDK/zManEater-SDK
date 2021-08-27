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

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.Prologue_Sub_NightLighting_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_NightLighting_C::Prologue_Sub_NightLighting_AutoGenFunc(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.Prologue_Sub_NightLighting_AutoGenFunc");

	APrologue_Sub_NightLighting_C_Prologue_Sub_NightLighting_AutoGenFunc_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ToggleSpotLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASpotLight*>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APrologue_Sub_NightLighting_C::ToggleSpotLights(TArray<class ASpotLight*>* Array, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ToggleSpotLights");

	APrologue_Sub_NightLighting_C_ToggleSpotLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TogglePointLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APointLight*>     PointLightArray                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void APrologue_Sub_NightLighting_C::TogglePointLights(bool IsOn_, TArray<class APointLight*>* PointLightArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TogglePointLights");

	APrologue_Sub_NightLighting_C_TogglePointLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PointLightArray != nullptr)
		*PointLightArray = params.PointLightArray;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ToggleEmitters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEmitter*>        EmitterArray                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void APrologue_Sub_NightLighting_C::ToggleEmitters(bool IsOn_, TArray<class AEmitter*>* EmitterArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ToggleEmitters");

	APrologue_Sub_NightLighting_C_ToggleEmitters_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EmitterArray != nullptr)
		*EmitterArray = params.EmitterArray;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APrologue_Sub_NightLighting_C::SortLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortLights");

	APrologue_Sub_NightLighting_C_SortLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortEmitters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APrologue_Sub_NightLighting_C::SortEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortEmitters");

	APrologue_Sub_NightLighting_C_SortEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortPointLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APrologue_Sub_NightLighting_C::SortPointLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortPointLights");

	APrologue_Sub_NightLighting_C_SortPointLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APrologue_Sub_NightLighting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ReceiveBeginPlay");

	APrologue_Sub_NightLighting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_NightLighting_C::TimeOfDayChanged(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TimeOfDayChanged");

	APrologue_Sub_NightLighting_C_TimeOfDayChanged_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ForceTODOnStart
// (BlueprintCallable, BlueprintEvent)
void APrologue_Sub_NightLighting_C::ForceTODOnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ForceTODOnStart");

	APrologue_Sub_NightLighting_C_ForceTODOnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TriggerNight
// (BlueprintCallable, BlueprintEvent)
void APrologue_Sub_NightLighting_C::TriggerNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TriggerNight");

	APrologue_Sub_NightLighting_C_TriggerNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TriggerDay
// (BlueprintCallable, BlueprintEvent)
void APrologue_Sub_NightLighting_C::TriggerDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TriggerDay");

	APrologue_Sub_NightLighting_C_TriggerDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_NightLighting_C::OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.OnTimeOfDayTrackerCreated");

	APrologue_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ExecuteUbergraph_Prologue_Sub_NightLighting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_NightLighting_C::ExecuteUbergraph_Prologue_Sub_NightLighting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ExecuteUbergraph_Prologue_Sub_NightLighting");

	APrologue_Sub_NightLighting_C_ExecuteUbergraph_Prologue_Sub_NightLighting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
