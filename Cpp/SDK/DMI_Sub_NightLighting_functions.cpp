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

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.UpdateTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADMI_Sub_NightLighting_C::UpdateTimeOfDay(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.UpdateTimeOfDay");

	ADMI_Sub_NightLighting_C_UpdateTimeOfDay_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TogglePointLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APointLight*>     DMIPointLights                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADMI_Sub_NightLighting_C::TogglePointLights(TArray<class APointLight*>* DMIPointLights, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TogglePointLights");

	ADMI_Sub_NightLighting_C_TogglePointLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DMIPointLights != nullptr)
		*DMIPointLights = params.DMIPointLights;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.SortPointLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADMI_Sub_NightLighting_C::SortPointLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.SortPointLights");

	ADMI_Sub_NightLighting_C_SortPointLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ToggleSpotLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASpotLight*>      DMiSpotLights                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADMI_Sub_NightLighting_C::ToggleSpotLights(TArray<class ASpotLight*>* DMiSpotLights, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ToggleSpotLights");

	ADMI_Sub_NightLighting_C_ToggleSpotLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DMiSpotLights != nullptr)
		*DMiSpotLights = params.DMiSpotLights;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.SortSpotLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADMI_Sub_NightLighting_C::SortSpotLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.SortSpotLights");

	ADMI_Sub_NightLighting_C_SortSpotLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.DMISortEmitters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADMI_Sub_NightLighting_C::DMISortEmitters()
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.DMISortEmitters");

	ADMI_Sub_NightLighting_C_DMISortEmitters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ToggleEmitters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AEmitter*>        DMIEmitterArray                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ADMI_Sub_NightLighting_C::ToggleEmitters(bool IsOn_, TArray<class AEmitter*>* DMIEmitterArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ToggleEmitters");

	ADMI_Sub_NightLighting_C_ToggleEmitters_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DMIEmitterArray != nullptr)
		*DMIEmitterArray = params.DMIEmitterArray;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADMI_Sub_NightLighting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ReceiveBeginPlay");

	ADMI_Sub_NightLighting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADMI_Sub_NightLighting_C::TimeOfDayChanged(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TimeOfDayChanged");

	ADMI_Sub_NightLighting_C_TimeOfDayChanged_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TriggerNight
// (BlueprintCallable, BlueprintEvent)
void ADMI_Sub_NightLighting_C::TriggerNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TriggerNight");

	ADMI_Sub_NightLighting_C_TriggerNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TriggerDay
// (BlueprintCallable, BlueprintEvent)
void ADMI_Sub_NightLighting_C::TriggerDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TriggerDay");

	ADMI_Sub_NightLighting_C_TriggerDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADMI_Sub_NightLighting_C::OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.OnTimeOfDayTrackerCreated");

	ADMI_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ExecuteUbergraph_DMI_Sub_NightLighting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADMI_Sub_NightLighting_C::ExecuteUbergraph_DMI_Sub_NightLighting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ExecuteUbergraph_DMI_Sub_NightLighting");

	ADMI_Sub_NightLighting_C_ExecuteUbergraph_DMI_Sub_NightLighting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
