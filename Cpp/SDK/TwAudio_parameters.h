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

// Function TwAudio.TwAkEmitterArrayComponent.PostEvent
struct UTwAkEmitterArrayComponent_PostEvent_Params
{
	class UAkAudioEvent*                               Event;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAudio.TwAkEmitterArrayComponent.EnableVoice
struct UTwAkEmitterArrayComponent_EnableVoice_Params
{
};

// Function TwAudio.TwAkEmitterArrayComponent.DisableVoice
struct UTwAkEmitterArrayComponent_DisableVoice_Params
{
};

// Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
struct UTwAkSplineProximityEffectsComponent_EndOverlap_Params
{
	class AActor*                                      A1;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      A2;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
struct UTwAkSplineProximityEffectsComponent_BeginOverlap_Params
{
	class AActor*                                      A1;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      A2;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
