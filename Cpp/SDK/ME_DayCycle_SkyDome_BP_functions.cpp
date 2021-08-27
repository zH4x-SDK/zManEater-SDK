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

// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.PauseSunPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pause_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AME_DayCycle_SkyDome_BP_C::PauseSunPosition(bool Pause_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.PauseSunPosition");

	AME_DayCycle_SkyDome_BP_C_PauseSunPosition_Params params;
	params.Pause_ = Pause_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSkyLightColorConstruct
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UpdateSkyLightColorConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSkyLightColorConstruct");

	AME_DayCycle_SkyDome_BP_C_UpdateSkyLightColorConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSkyLightColor
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UpdateSkyLightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSkyLightColor");

	AME_DayCycle_SkyDome_BP_C_UpdateSkyLightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.SetNewRegionFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  VolumeActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_DayCycle_SkyDome_BP_C::SetNewRegionFog(class AActor* VolumeActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.SetNewRegionFog");

	AME_DayCycle_SkyDome_BP_C_SetNewRegionFog_Params params;
	params.VolumeActor = VolumeActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.GetPostProcessVolumes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::GetPostProcessVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.GetPostProcessVolumes");

	AME_DayCycle_SkyDome_BP_C_GetPostProcessVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSkylight
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitSkylight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSkylight");

	AME_DayCycle_SkyDome_BP_C_InitSkylight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSkyRecap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitSkyRecap()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSkyRecap");

	AME_DayCycle_SkyDome_BP_C_InitSkyRecap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RecaptureSky
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::RecaptureSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RecaptureSky");

	AME_DayCycle_SkyDome_BP_C_RecaptureSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitCompass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitCompass");

	AME_DayCycle_SkyDome_BP_C_InitCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitEffects
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitEffects");

	AME_DayCycle_SkyDome_BP_C_InitEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateEffects
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UpdateEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateEffects");

	AME_DayCycle_SkyDome_BP_C_UpdateEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateMoon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UpdateMoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateMoon");

	AME_DayCycle_SkyDome_BP_C_UpdateMoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitMoon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitMoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitMoon");

	AME_DayCycle_SkyDome_BP_C_InitMoon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSun
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UpdateSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSun");

	AME_DayCycle_SkyDome_BP_C_UpdateSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSun
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSun");

	AME_DayCycle_SkyDome_BP_C_InitSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSky
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::InitSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.InitSky");

	AME_DayCycle_SkyDome_BP_C_InitSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.CreateWorldTimeString
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::CreateWorldTimeString()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.CreateWorldTimeString");

	AME_DayCycle_SkyDome_BP_C_CreateWorldTimeString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSky
// (Public, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UpdateSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateSky");

	AME_DayCycle_SkyDome_BP_C_UpdateSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.IncrementCurrentMinute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_DayCycle_SkyDome_BP_C::IncrementCurrentMinute(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.IncrementCurrentMinute");

	AME_DayCycle_SkyDome_BP_C_IncrementCurrentMinute_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.SetSunPitchFromMinute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::SetSunPitchFromMinute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.SetSunPitchFromMinute");

	AME_DayCycle_SkyDome_BP_C_SetSunPitchFromMinute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_DayCycle_SkyDome_BP_C::UpdateTimeOfDay(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UpdateTimeOfDay");

	AME_DayCycle_SkyDome_BP_C_UpdateTimeOfDay_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.UserConstructionScript");

	AME_DayCycle_SkyDome_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.FogTransition__FinishedFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::FogTransition__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.FogTransition__FinishedFunc");

	AME_DayCycle_SkyDome_BP_C_FogTransition__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.FogTransition__UpdateFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::FogTransition__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.FogTransition__UpdateFunc");

	AME_DayCycle_SkyDome_BP_C_FogTransition__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_NightExposure__FinishedFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::Day_NightExposure__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_NightExposure__FinishedFunc");

	AME_DayCycle_SkyDome_BP_C_Day_NightExposure__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_NightExposure__UpdateFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::Day_NightExposure__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_NightExposure__UpdateFunc");

	AME_DayCycle_SkyDome_BP_C_Day_NightExposure__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionFogTransition__FinishedFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::RegionFogTransition__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionFogTransition__FinishedFunc");

	AME_DayCycle_SkyDome_BP_C_RegionFogTransition__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionFogTransition__UpdateFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::RegionFogTransition__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionFogTransition__UpdateFunc");

	AME_DayCycle_SkyDome_BP_C_RegionFogTransition__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorAnim__FinishedFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionWaterColorAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorAnim__FinishedFunc");

	AME_DayCycle_SkyDome_BP_C_TransitionWaterColorAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorAnim__UpdateFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionWaterColorAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorAnim__UpdateFunc");

	AME_DayCycle_SkyDome_BP_C_TransitionWaterColorAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_Night_MoonFade__FinishedFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::Day_Night_MoonFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_Night_MoonFade__FinishedFunc");

	AME_DayCycle_SkyDome_BP_C_Day_Night_MoonFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_Night_MoonFade__UpdateFunc
// (BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::Day_Night_MoonFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.Day_Night_MoonFade__UpdateFunc");

	AME_DayCycle_SkyDome_BP_C_Day_Night_MoonFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ReceiveBeginPlay");

	AME_DayCycle_SkyDome_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionFogAboveWater
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionFogAboveWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionFogAboveWater");

	AME_DayCycle_SkyDome_BP_C_TransitionFogAboveWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionFogUnderwater
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionFogUnderwater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionFogUnderwater");

	AME_DayCycle_SkyDome_BP_C_TransitionFogUnderwater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionNightPost
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionNightPost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionNightPost");

	AME_DayCycle_SkyDome_BP_C_TransitionNightPost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionDayPost
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionDayPost()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionDayPost");

	AME_DayCycle_SkyDome_BP_C_TransitionDayPost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionRegionFogAnimation
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionRegionFogAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionRegionFogAnimation");

	AME_DayCycle_SkyDome_BP_C_TransitionRegionFogAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.CheckUnderWater
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::CheckUnderWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.CheckUnderWater");

	AME_DayCycle_SkyDome_BP_C_CheckUnderWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ForceTODTransitionOnCreation
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::ForceTODTransitionOnCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ForceTODTransitionOnCreation");

	AME_DayCycle_SkyDome_BP_C_ForceTODTransitionOnCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerFogAboveWater
// (Event, Protected, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TriggerFogAboveWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerFogAboveWater");

	AME_DayCycle_SkyDome_BP_C_TriggerFogAboveWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerFogBelowWater
// (Event, Protected, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TriggerFogBelowWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerFogBelowWater");

	AME_DayCycle_SkyDome_BP_C_TriggerFogBelowWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerStartNightTime
// (Event, Protected, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TriggerStartNightTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerStartNightTime");

	AME_DayCycle_SkyDome_BP_C_TriggerStartNightTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerStartDayTime
// (Event, Protected, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TriggerStartDayTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerStartDayTime");

	AME_DayCycle_SkyDome_BP_C_TriggerStartDayTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorTimeline
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TransitionWaterColorTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TransitionWaterColorTimeline");

	AME_DayCycle_SkyDome_BP_C_TransitionWaterColorTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionChanged
// (BlueprintCallable, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::RegionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.RegionChanged");

	AME_DayCycle_SkyDome_BP_C_RegionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_DayCycle_SkyDome_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ReceiveTick");

	AME_DayCycle_SkyDome_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerForceChangeTime
// (Event, Protected, BlueprintEvent)
void AME_DayCycle_SkyDome_BP_C::TriggerForceChangeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.TriggerForceChangeTime");

	AME_DayCycle_SkyDome_BP_C_TriggerForceChangeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ExecuteUbergraph_ME_DayCycle_SkyDome_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_DayCycle_SkyDome_BP_C::ExecuteUbergraph_ME_DayCycle_SkyDome_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_DayCycle_SkyDome_BP.ME_DayCycle_SkyDome_BP_C.ExecuteUbergraph_ME_DayCycle_SkyDome_BP");

	AME_DayCycle_SkyDome_BP_C_ExecuteUbergraph_ME_DayCycle_SkyDome_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
