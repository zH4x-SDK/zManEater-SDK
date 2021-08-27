#pragma once

// Name: ManEater, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WorldMap_Facade.WorldMap_Facade_C.TogglePointLights
struct AWorldMap_Facade_C_TogglePointLights_Params
{
	TArray<class APointLight*>                         FacadePoints;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WorldMap_Facade.WorldMap_Facade_C.ToggleSpotLights
struct AWorldMap_Facade_C_ToggleSpotLights_Params
{
	TArray<class ASpotLight*>                          FacadeSpots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WorldMap_Facade.WorldMap_Facade_C.SortPointLights
struct AWorldMap_Facade_C_SortPointLights_Params
{
};

// Function WorldMap_Facade.WorldMap_Facade_C.SortSpotLights
struct AWorldMap_Facade_C_SortSpotLights_Params
{
};

// Function WorldMap_Facade.WorldMap_Facade_C.ReceiveBeginPlay
struct AWorldMap_Facade_C_ReceiveBeginPlay_Params
{
};

// Function WorldMap_Facade.WorldMap_Facade_C.TimeOfDayChanged
struct AWorldMap_Facade_C_TimeOfDayChanged_Params
{
	float                                              CurrentHour;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_Facade.WorldMap_Facade_C.ForceTODOnStart
struct AWorldMap_Facade_C_ForceTODOnStart_Params
{
};

// Function WorldMap_Facade.WorldMap_Facade_C.TriggerNight
struct AWorldMap_Facade_C_TriggerNight_Params
{
};

// Function WorldMap_Facade.WorldMap_Facade_C.TriggerDay
struct AWorldMap_Facade_C_TriggerDay_Params
{
};

// Function WorldMap_Facade.WorldMap_Facade_C.OnTimeOfDayTrackerCreated
struct AWorldMap_Facade_C_OnTimeOfDayTrackerCreated_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_Facade.WorldMap_Facade_C.ExecuteUbergraph_WorldMap_Facade
struct AWorldMap_Facade_C_ExecuteUbergraph_WorldMap_Facade_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
