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

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.PauseSunPosition
struct AME_DayCycle_SkyDome_BP_C_PauseSunPosition_Params
{
	bool                                               Pause_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSkyLightColorConstruct
struct AME_DayCycle_SkyDome_BP_C_UpdateSkyLightColorConstruct_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSkyLightColor
struct AME_DayCycle_SkyDome_BP_C_UpdateSkyLightColor_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.SetNewRegionFog
struct AME_DayCycle_SkyDome_BP_C_SetNewRegionFog_Params
{
	class AActor*                                      VolumeActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.GetPostProcessVolumes
struct AME_DayCycle_SkyDome_BP_C_GetPostProcessVolumes_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSkylight
struct AME_DayCycle_SkyDome_BP_C_InitSkylight_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSkyRecap
struct AME_DayCycle_SkyDome_BP_C_InitSkyRecap_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RecaptureSky
struct AME_DayCycle_SkyDome_BP_C_RecaptureSky_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitCompass
struct AME_DayCycle_SkyDome_BP_C_InitCompass_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitEffects
struct AME_DayCycle_SkyDome_BP_C_InitEffects_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateEffects
struct AME_DayCycle_SkyDome_BP_C_UpdateEffects_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateMoon
struct AME_DayCycle_SkyDome_BP_C_UpdateMoon_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitMoon
struct AME_DayCycle_SkyDome_BP_C_InitMoon_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSun
struct AME_DayCycle_SkyDome_BP_C_UpdateSun_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSun
struct AME_DayCycle_SkyDome_BP_C_InitSun_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSky
struct AME_DayCycle_SkyDome_BP_C_InitSky_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.CreateWorldTimeString
struct AME_DayCycle_SkyDome_BP_C_CreateWorldTimeString_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSky
struct AME_DayCycle_SkyDome_BP_C_UpdateSky_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.IncrementCurrentMinute
struct AME_DayCycle_SkyDome_BP_C_IncrementCurrentMinute_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.SetSunPitchFromMinute
struct AME_DayCycle_SkyDome_BP_C_SetSunPitchFromMinute_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateTimeOfDay
struct AME_DayCycle_SkyDome_BP_C_UpdateTimeOfDay_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UserConstructionScript
struct AME_DayCycle_SkyDome_BP_C_UserConstructionScript_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.FogTransition__FinishedFunc
struct AME_DayCycle_SkyDome_BP_C_FogTransition__FinishedFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.FogTransition__UpdateFunc
struct AME_DayCycle_SkyDome_BP_C_FogTransition__UpdateFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_NightExposure__FinishedFunc
struct AME_DayCycle_SkyDome_BP_C_Day_NightExposure__FinishedFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_NightExposure__UpdateFunc
struct AME_DayCycle_SkyDome_BP_C_Day_NightExposure__UpdateFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionFogTransition__FinishedFunc
struct AME_DayCycle_SkyDome_BP_C_RegionFogTransition__FinishedFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionFogTransition__UpdateFunc
struct AME_DayCycle_SkyDome_BP_C_RegionFogTransition__UpdateFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorAnim__FinishedFunc
struct AME_DayCycle_SkyDome_BP_C_TransitionWaterColorAnim__FinishedFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorAnim__UpdateFunc
struct AME_DayCycle_SkyDome_BP_C_TransitionWaterColorAnim__UpdateFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_Night_MoonFade__FinishedFunc
struct AME_DayCycle_SkyDome_BP_C_Day_Night_MoonFade__FinishedFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_Night_MoonFade__UpdateFunc
struct AME_DayCycle_SkyDome_BP_C_Day_Night_MoonFade__UpdateFunc_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ReceiveBeginPlay
struct AME_DayCycle_SkyDome_BP_C_ReceiveBeginPlay_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionFogAboveWater
struct AME_DayCycle_SkyDome_BP_C_TransitionFogAboveWater_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionFogUnderwater
struct AME_DayCycle_SkyDome_BP_C_TransitionFogUnderwater_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionNightPost
struct AME_DayCycle_SkyDome_BP_C_TransitionNightPost_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionDayPost
struct AME_DayCycle_SkyDome_BP_C_TransitionDayPost_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionRegionFogAnimation
struct AME_DayCycle_SkyDome_BP_C_TransitionRegionFogAnimation_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.CheckUnderWater
struct AME_DayCycle_SkyDome_BP_C_CheckUnderWater_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ForceTODTransitionOnCreation
struct AME_DayCycle_SkyDome_BP_C_ForceTODTransitionOnCreation_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerFogAboveWater
struct AME_DayCycle_SkyDome_BP_C_TriggerFogAboveWater_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerFogBelowWater
struct AME_DayCycle_SkyDome_BP_C_TriggerFogBelowWater_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerStartNightTime
struct AME_DayCycle_SkyDome_BP_C_TriggerStartNightTime_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerStartDayTime
struct AME_DayCycle_SkyDome_BP_C_TriggerStartDayTime_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorTimeline
struct AME_DayCycle_SkyDome_BP_C_TransitionWaterColorTimeline_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionChanged
struct AME_DayCycle_SkyDome_BP_C_RegionChanged_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ReceiveTick
struct AME_DayCycle_SkyDome_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerForceChangeTime
struct AME_DayCycle_SkyDome_BP_C_TriggerForceChangeTime_Params
{
};

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ExecuteUbergraph_ME_DayCycle_SkyDome_BP
struct AME_DayCycle_SkyDome_BP_C_ExecuteUbergraph_ME_DayCycle_SkyDome_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
