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

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.CheckBossCinematicStarted
struct ABP_Boss_Support_Boat_C_CheckBossCinematicStarted_Params
{
	int                                                PhaseToCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CineExists;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.ReceiveBeginPlay
struct ABP_Boss_Support_Boat_C_ReceiveBeginPlay_Params
{
};

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.OnBossCinematicStarted
struct ABP_Boss_Support_Boat_C_OnBossCinematicStarted_Params
{
};

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.PlayCinematic
struct ABP_Boss_Support_Boat_C_PlayCinematic_Params
{
	class UCameraAnim*                                 CameraAnim;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMovieSceneSequencePlayer*                   MovieSceneSequencePlayer;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.OnCinematicComplete
struct ABP_Boss_Support_Boat_C_OnCinematicComplete_Params
{
};

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.BindBossHunterSeqCamera
struct ABP_Boss_Support_Boat_C_BindBossHunterSeqCamera_Params
{
};

// Function BP_Boss_Support_Boat.BP_Boss_Support_Boat_C.ExecuteUbergraph_BP_Boss_Support_Boat
struct ABP_Boss_Support_Boat_C_ExecuteUbergraph_BP_Boss_Support_Boat_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
