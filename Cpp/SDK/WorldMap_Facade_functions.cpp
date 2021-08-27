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

// Function WorldMap_Facade.WorldMap_Facade_C.TogglePointLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APointLight*>     FacadePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWorldMap_Facade_C::TogglePointLights(TArray<class APointLight*>* FacadePoints, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.TogglePointLights");

	AWorldMap_Facade_C_TogglePointLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FacadePoints != nullptr)
		*FacadePoints = params.FacadePoints;

}


// Function WorldMap_Facade.WorldMap_Facade_C.ToggleSpotLights
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ASpotLight*>      FacadeSpots                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           IsOn_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWorldMap_Facade_C::ToggleSpotLights(TArray<class ASpotLight*>* FacadeSpots, bool IsOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.ToggleSpotLights");

	AWorldMap_Facade_C_ToggleSpotLights_Params params;
	params.IsOn_ = IsOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FacadeSpots != nullptr)
		*FacadeSpots = params.FacadeSpots;

}


// Function WorldMap_Facade.WorldMap_Facade_C.SortPointLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AWorldMap_Facade_C::SortPointLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.SortPointLights");

	AWorldMap_Facade_C_SortPointLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.SortSpotLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AWorldMap_Facade_C::SortSpotLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.SortSpotLights");

	AWorldMap_Facade_C_SortSpotLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWorldMap_Facade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.ReceiveBeginPlay");

	AWorldMap_Facade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.TimeOfDayChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Facade_C::TimeOfDayChanged(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.TimeOfDayChanged");

	AWorldMap_Facade_C_TimeOfDayChanged_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.ForceTODOnStart
// (BlueprintCallable, BlueprintEvent)
void AWorldMap_Facade_C::ForceTODOnStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.ForceTODOnStart");

	AWorldMap_Facade_C_ForceTODOnStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.TriggerNight
// (BlueprintCallable, BlueprintEvent)
void AWorldMap_Facade_C::TriggerNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.TriggerNight");

	AWorldMap_Facade_C_TriggerNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.TriggerDay
// (BlueprintCallable, BlueprintEvent)
void AWorldMap_Facade_C::TriggerDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.TriggerDay");

	AWorldMap_Facade_C_TriggerDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.OnTimeOfDayTrackerCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_TimeofDayInfo*       TimeOfDayTracker               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Facade_C::OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.OnTimeOfDayTrackerCreated");

	AWorldMap_Facade_C_OnTimeOfDayTrackerCreated_Params params;
	params.TimeOfDayTracker = TimeOfDayTracker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Facade.WorldMap_Facade_C.ExecuteUbergraph_WorldMap_Facade
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Facade_C::ExecuteUbergraph_WorldMap_Facade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Facade.WorldMap_Facade_C.ExecuteUbergraph_WorldMap_Facade");

	AWorldMap_Facade_C_ExecuteUbergraph_WorldMap_Facade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
