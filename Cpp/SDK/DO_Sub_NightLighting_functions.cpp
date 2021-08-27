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

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.UpdateTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADO_Sub_NightLighting_C::UpdateTimeOfDay(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.UpdateTimeOfDay");

	ADO_Sub_NightLighting_C_UpdateTimeOfDay_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TogglePointLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APointLight*>     Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADO_Sub_NightLighting_C::TogglePointLights(TArray<class APointLight*>* Array, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TogglePointLights");

	ADO_Sub_NightLighting_C_TogglePointLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ToggleSpotLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASpotLight*>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADO_Sub_NightLighting_C::ToggleSpotLights(TArray<class ASpotLight*>* Array, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ToggleSpotLights");

	ADO_Sub_NightLighting_C_ToggleSpotLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.SortPointLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADO_Sub_NightLighting_C::SortPointLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.SortPointLights");

	ADO_Sub_NightLighting_C_SortPointLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.SortSpotLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ADO_Sub_NightLighting_C::SortSpotLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.SortSpotLights");

	ADO_Sub_NightLighting_C_SortSpotLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADO_Sub_NightLighting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ReceiveBeginPlay");

	ADO_Sub_NightLighting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADO_Sub_NightLighting_C::TimeOfDayChanged(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TimeOfDayChanged");

	ADO_Sub_NightLighting_C_TimeOfDayChanged_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TriggerNight
// (BlueprintCallable, BlueprintEvent)
void ADO_Sub_NightLighting_C::TriggerNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TriggerNight");

	ADO_Sub_NightLighting_C_TriggerNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TriggerDay
// (BlueprintCallable, BlueprintEvent)
void ADO_Sub_NightLighting_C::TriggerDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TriggerDay");

	ADO_Sub_NightLighting_C_TriggerDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADO_Sub_NightLighting_C::OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.OnTimeOfDayTrackerCreated");

	ADO_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ExecuteUbergraph_DO_Sub_NightLighting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADO_Sub_NightLighting_C::ExecuteUbergraph_DO_Sub_NightLighting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ExecuteUbergraph_DO_Sub_NightLighting");

	ADO_Sub_NightLighting_C_ExecuteUbergraph_DO_Sub_NightLighting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
