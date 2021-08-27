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

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ToggleEmitters
struct ASB_Sub_NightLighting_C_ToggleEmitters_Params
{
	bool                                               Is_On_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AEmitter*>                            Emitter_Array;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortEmitters
struct ASB_Sub_NightLighting_C_SortEmitters_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TogglePointLights
struct ASB_Sub_NightLighting_C_TogglePointLights_Params
{
	TArray<class APointLight*>                         SBPointLights;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ToggleSpotLights
struct ASB_Sub_NightLighting_C_ToggleSpotLights_Params
{
	TArray<class ASpotLight*>                          SBSpotLights;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               IsOn_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortPointLights
struct ASB_Sub_NightLighting_C_SortPointLights_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.SortSpotLights
struct ASB_Sub_NightLighting_C_SortSpotLights_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ReceiveBeginPlay
struct ASB_Sub_NightLighting_C_ReceiveBeginPlay_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TimeOfDayChanged
struct ASB_Sub_NightLighting_C_TimeOfDayChanged_Params
{
	float                                              CurrentHour;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TriggerNight
struct ASB_Sub_NightLighting_C_TriggerNight_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.TriggerDay
struct ASB_Sub_NightLighting_C_TriggerDay_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ForceTODOnStart
struct ASB_Sub_NightLighting_C_ForceTODOnStart_Params
{
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.OnTimeOfDayTrackerCreated
struct ASB_Sub_NightLighting_C_OnTimeOfDayTrackerCreated_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SB_Sub_NightLighting.SB_Sub_NightLighting_C.ExecuteUbergraph_SB_Sub_NightLighting
struct ASB_Sub_NightLighting_C_ExecuteUbergraph_SB_Sub_NightLighting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
