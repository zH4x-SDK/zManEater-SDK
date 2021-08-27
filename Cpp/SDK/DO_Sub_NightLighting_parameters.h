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

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.UpdateTimeOfDay
struct ADO_Sub_NightLighting_C_UpdateTimeOfDay_Params
{
	float                                              NewTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TogglePointLights
struct ADO_Sub_NightLighting_C_TogglePointLights_Params
{
	TArray<class APointLight*>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ToggleSpotLights
struct ADO_Sub_NightLighting_C_ToggleSpotLights_Params
{
	TArray<class ASpotLight*>                          Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.SortPointLights
struct ADO_Sub_NightLighting_C_SortPointLights_Params
{
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.SortSpotLights
struct ADO_Sub_NightLighting_C_SortSpotLights_Params
{
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ReceiveBeginPlay
struct ADO_Sub_NightLighting_C_ReceiveBeginPlay_Params
{
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TimeOfDayChanged
struct ADO_Sub_NightLighting_C_TimeOfDayChanged_Params
{
	float                                              CurrentHour;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TriggerNight
struct ADO_Sub_NightLighting_C_TriggerNight_Params
{
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.TriggerDay
struct ADO_Sub_NightLighting_C_TriggerDay_Params
{
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
struct ADO_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DO_Sub_NightLighting.DO_Sub_NightLighting_C.ExecuteUbergraph_DO_Sub_NightLighting
struct ADO_Sub_NightLighting_C_ExecuteUbergraph_DO_Sub_NightLighting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
