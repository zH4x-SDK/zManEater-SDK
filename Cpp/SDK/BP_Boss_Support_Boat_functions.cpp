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

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.CheckBossCinematicStarted
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PhaseToCheck                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CineExists                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Boss_Support_Boat_C::CheckBossCinematicStarted(int PhaseToCheck, bool* CineExists)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.CheckBossCinematicStarted");

	ABP_Boss_Support_Boat_C_CheckBossCinematicStarted_Params params;
	params.PhaseToCheck = PhaseToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CineExists != nullptr)
		*CineExists = params.CineExists;

}


// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Boss_Support_Boat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.ReceiveBeginPlay");

	ABP_Boss_Support_Boat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.OnBossCinematicStarted
// (Event, Public, BlueprintEvent)
void ABP_Boss_Support_Boat_C::OnBossCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.OnBossCinematicStarted");

	ABP_Boss_Support_Boat_C_OnBossCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.PlayCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraAnim*             CameraAnim                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMovieSceneSequencePlayer* MovieSceneSequencePlayer       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Boss_Support_Boat_C::PlayCinematic(class UCameraAnim* CameraAnim, class UMovieSceneSequencePlayer* MovieSceneSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.PlayCinematic");

	ABP_Boss_Support_Boat_C_PlayCinematic_Params params;
	params.CameraAnim = CameraAnim;
	params.MovieSceneSequencePlayer = MovieSceneSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.OnCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Boss_Support_Boat_C::OnCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.OnCinematicComplete");

	ABP_Boss_Support_Boat_C_OnCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Boss_Support_Boat_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.BindBossHunterSeqCamera");

	ABP_Boss_Support_Boat_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.ExecuteUbergraph_BP_Boss_Support_Boat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Boss_Support_Boat_C::ExecuteUbergraph_BP_Boss_Support_Boat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.ExecuteUbergraph_BP_Boss_Support_Boat");

	ABP_Boss_Support_Boat_C_ExecuteUbergraph_BP_Boss_Support_Boat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
