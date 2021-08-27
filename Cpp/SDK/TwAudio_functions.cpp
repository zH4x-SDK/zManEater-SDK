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

// Function TwAudio.TwAkEmitterArrayComponent.PostEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           Event                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwAkEmitterArrayComponent::PostEvent(class UAkAudioEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkEmitterArrayComponent.PostEvent");

	UTwAkEmitterArrayComponent_PostEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwAudio.TwAkEmitterArrayComponent.EnableVoice
// (Final, Native, Public, BlueprintCallable)
void UTwAkEmitterArrayComponent::EnableVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkEmitterArrayComponent.EnableVoice");

	UTwAkEmitterArrayComponent_EnableVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwAudio.TwAkEmitterArrayComponent.DisableVoice
// (Final, Native, Public, BlueprintCallable)
void UTwAkEmitterArrayComponent::DisableVoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkEmitterArrayComponent.DisableVoice");

	UTwAkEmitterArrayComponent_DisableVoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  A1                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  A2                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwAkSplineProximityEffectsComponent::EndOverlap(class AActor* A1, class AActor* A2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap");

	UTwAkSplineProximityEffectsComponent_EndOverlap_Params params;
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                  A1                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  A2                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwAkSplineProximityEffectsComponent::BeginOverlap(class AActor* A1, class AActor* A2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap");

	UTwAkSplineProximityEffectsComponent_BeginOverlap_Params params;
	params.A1 = A1;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
