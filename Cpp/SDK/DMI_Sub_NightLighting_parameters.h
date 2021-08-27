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

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.UpdateTimeOfDay
struct ADMI_Sub_NightLighting_C_UpdateTimeOfDay_Params
{
	float                                              NewTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TogglePointLights
struct ADMI_Sub_NightLighting_C_TogglePointLights_Params
{
	TArray<class APointLight*>                         DMIPointLights;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.SortPointLights
struct ADMI_Sub_NightLighting_C_SortPointLights_Params
{
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ToggleSpotLights
struct ADMI_Sub_NightLighting_C_ToggleSpotLights_Params
{
	TArray<class ASpotLight*>                          DMiSpotLights;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.SortSpotLights
struct ADMI_Sub_NightLighting_C_SortSpotLights_Params
{
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.DMISortEmitters
struct ADMI_Sub_NightLighting_C_DMISortEmitters_Params
{
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ToggleEmitters
struct ADMI_Sub_NightLighting_C_ToggleEmitters_Params
{
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AEmitter*>                            DMIEmitterArray;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ReceiveBeginPlay
struct ADMI_Sub_NightLighting_C_ReceiveBeginPlay_Params
{
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TimeOfDayChanged
struct ADMI_Sub_NightLighting_C_TimeOfDayChanged_Params
{
	float                                              CurrentHour;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TriggerNight
struct ADMI_Sub_NightLighting_C_TriggerNight_Params
{
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.TriggerDay
struct ADMI_Sub_NightLighting_C_TriggerDay_Params
{
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
struct ADMI_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DMI_Sub_NightLighting.DMI_Sub_NightLighting_C.ExecuteUbergraph_DMI_Sub_NightLighting
struct ADMI_Sub_NightLighting_C_ExecuteUbergraph_DMI_Sub_NightLighting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
