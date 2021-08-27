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

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ToggleEmitters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_On_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEmitter*>        Emitter_Array                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ASB_Sub_NightLighting_C::ToggleEmitters(bool Is_On_, TArray<class AEmitter*>* Emitter_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ToggleEmitters");

	ASB_Sub_NightLighting_C_ToggleEmitters_Params params;
	params.Is_On_ = Is_On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Emitter_Array != nullptr)
		*Emitter_Array = params.Emitter_Array;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortEmitters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASB_Sub_NightLighting_C::SortEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortEmitters");

	ASB_Sub_NightLighting_C_SortEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TogglePointLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APointLight*>     SBPointLights                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASB_Sub_NightLighting_C::TogglePointLights(TArray<class APointLight*>* SBPointLights, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TogglePointLights");

	ASB_Sub_NightLighting_C_TogglePointLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SBPointLights != nullptr)
		*SBPointLights = params.SBPointLights;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ToggleSpotLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASpotLight*>      SBSpotLights                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASB_Sub_NightLighting_C::ToggleSpotLights(TArray<class ASpotLight*>* SBSpotLights, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ToggleSpotLights");

	ASB_Sub_NightLighting_C_ToggleSpotLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SBSpotLights != nullptr)
		*SBSpotLights = params.SBSpotLights;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortPointLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASB_Sub_NightLighting_C::SortPointLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortPointLights");

	ASB_Sub_NightLighting_C_SortPointLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortSpotLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ASB_Sub_NightLighting_C::SortSpotLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortSpotLights");

	ASB_Sub_NightLighting_C_SortSpotLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASB_Sub_NightLighting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ReceiveBeginPlay");

	ASB_Sub_NightLighting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASB_Sub_NightLighting_C::TimeOfDayChanged(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TimeOfDayChanged");

	ASB_Sub_NightLighting_C_TimeOfDayChanged_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TriggerNight
// (BlueprintCallable, BlueprintEvent)
void ASB_Sub_NightLighting_C::TriggerNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TriggerNight");

	ASB_Sub_NightLighting_C_TriggerNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TriggerDay
// (BlueprintCallable, BlueprintEvent)
void ASB_Sub_NightLighting_C::TriggerDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TriggerDay");

	ASB_Sub_NightLighting_C_TriggerDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ForceTODOnStart
// (BlueprintCallable, BlueprintEvent)
void ASB_Sub_NightLighting_C::ForceTODOnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ForceTODOnStart");

	ASB_Sub_NightLighting_C_ForceTODOnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASB_Sub_NightLighting_C::OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.OnTimeOfDayTrackerCreated");

	ASB_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ExecuteUbergraph_SB_Sub_NightLighting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASB_Sub_NightLighting_C::ExecuteUbergraph_SB_Sub_NightLighting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ExecuteUbergraph_SB_Sub_NightLighting");

	ASB_Sub_NightLighting_C_ExecuteUbergraph_SB_Sub_NightLighting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
