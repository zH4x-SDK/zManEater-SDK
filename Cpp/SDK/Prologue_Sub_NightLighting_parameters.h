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

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.Prologue_Sub_NightLighting_AutoGenFunc
struct APrologue_Sub_NightLighting_C_Prologue_Sub_NightLighting_AutoGenFunc_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ToggleSpotLights
struct APrologue_Sub_NightLighting_C_ToggleSpotLights_Params
{
	TArray<class ASpotLight*>                          Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TogglePointLights
struct APrologue_Sub_NightLighting_C_TogglePointLights_Params
{
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APointLight*>                         PointLightArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ToggleEmitters
struct APrologue_Sub_NightLighting_C_ToggleEmitters_Params
{
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AEmitter*>                            EmitterArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortLights
struct APrologue_Sub_NightLighting_C_SortLights_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortEmitters
struct APrologue_Sub_NightLighting_C_SortEmitters_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.SortPointLights
struct APrologue_Sub_NightLighting_C_SortPointLights_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ReceiveBeginPlay
struct APrologue_Sub_NightLighting_C_ReceiveBeginPlay_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TimeOfDayChanged
struct APrologue_Sub_NightLighting_C_TimeOfDayChanged_Params
{
	float                                              CurrentHour;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ForceTODOnStart
struct APrologue_Sub_NightLighting_C_ForceTODOnStart_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TriggerNight
struct APrologue_Sub_NightLighting_C_TriggerNight_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.TriggerDay
struct APrologue_Sub_NightLighting_C_TriggerDay_Params
{
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
struct APrologue_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C.ExecuteUbergraph_Prologue_Sub_NightLighting
struct APrologue_Sub_NightLighting_C_ExecuteUbergraph_Prologue_Sub_NightLighting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
