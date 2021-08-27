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

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Tick
struct UManeaterCinematicView_BP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Construct
struct UManeaterCinematicView_BP_C_Construct_Params
{
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTVShowLower3rd
struct UManeaterCinematicView_BP_C_PlayTVShowLower3rd_Params
{
	struct FText                                       ShipName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ChracterName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       JobText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayHashTag
struct UManeaterCinematicView_BP_C_PlayHashTag_Params
{
	struct FText                                       hashtagtext;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTVShowLocation
struct UManeaterCinematicView_BP_C_PlayTVShowLocation_Params
{
	struct FText                                       Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTvShowBug
struct UManeaterCinematicView_BP_C_PlayTvShowBug_Params
{
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.RollCredits
struct UManeaterCinematicView_BP_C_RollCredits_Params
{
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTvChannelLogo
struct UManeaterCinematicView_BP_C_PlayTvChannelLogo_Params
{
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Reset
struct UManeaterCinematicView_BP_C_Reset_Params
{
};

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.ExecuteUbergraph_ManeaterCinematicView_BP
struct UManeaterCinematicView_BP_C_ExecuteUbergraph_ManeaterCinematicView_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
