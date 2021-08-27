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

// Function WorldMap_Sound.WorldMap_Sound_C.UpdateCameraDepth
// (Public, BlueprintCallable, BlueprintEvent)
void AWorldMap_Sound_C::UpdateCameraDepth()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Sound.WorldMap_Sound_C.UpdateCameraDepth");

	AWorldMap_Sound_C_UpdateCameraDepth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Sound.WorldMap_Sound_C.UpdateGrottoAmbience
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AWorldMap_Sound_C::UpdateGrottoAmbience()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Sound.WorldMap_Sound_C.UpdateGrottoAmbience");

	AWorldMap_Sound_C_UpdateGrottoAmbience_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Sound.WorldMap_Sound_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Sound_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Sound.WorldMap_Sound_C.ReceiveTick");

	AWorldMap_Sound_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Sound.WorldMap_Sound_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWorldMap_Sound_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Sound.WorldMap_Sound_C.ReceiveBeginPlay");

	AWorldMap_Sound_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Sound.WorldMap_Sound_C.ExecuteUbergraph_WorldMap_Sound
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Sound_C::ExecuteUbergraph_WorldMap_Sound(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Sound.WorldMap_Sound_C.ExecuteUbergraph_WorldMap_Sound");

	AWorldMap_Sound_C_ExecuteUbergraph_WorldMap_Sound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
