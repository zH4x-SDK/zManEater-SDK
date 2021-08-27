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

// Function WorldMap_P.WorldMap_P_C.Level Out Everty
struct AWorldMap_P_C_Level_Out_Everty_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goToDMI
struct AWorldMap_P_C_goToDMI_Params
{
};

// Function WorldMap_P.WorldMap_P_C.testcine
struct AWorldMap_P_C_testcine_Params
{
};

// Function WorldMap_P.WorldMap_P_C.ReceiveBeginPlay
struct AWorldMap_P_C_ReceiveBeginPlay_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goToWC
struct AWorldMap_P_C_goToWC_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goToPro
struct AWorldMap_P_C_goToPro_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goTOWB
struct AWorldMap_P_C_goTOWB_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goToSE
struct AWorldMap_P_C_goToSE_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goTOSB
struct AWorldMap_P_C_goTOSB_Params
{
};

// Function WorldMap_P.WorldMap_P_C.goToDO
struct AWorldMap_P_C_goToDO_Params
{
};

// Function WorldMap_P.WorldMap_P_C.StoryUpdated
struct AWorldMap_P_C_StoryUpdated_Params
{
	int                                                NewStoryIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_P.WorldMap_P_C.BindOnStoryUpdated
struct AWorldMap_P_C_BindOnStoryUpdated_Params
{
};

// Function WorldMap_P.WorldMap_P_C.BindOnRegionChaged
struct AWorldMap_P_C_BindOnRegionChaged_Params
{
};

// Function WorldMap_P.WorldMap_P_C.OnRegionChanged
struct AWorldMap_P_C_OnRegionChanged_Params
{
	Maneater_EWorldRegion                              Region;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  RegionIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_P.WorldMap_P_C.goToIC
struct AWorldMap_P_C_goToIC_Params
{
};

// Function WorldMap_P.WorldMap_P_C.GetShark
struct AWorldMap_P_C_GetShark_Params
{
};

// Function WorldMap_P.WorldMap_P_C.CheckStoryIndex
struct AWorldMap_P_C_CheckStoryIndex_Params
{
};

// Function WorldMap_P.WorldMap_P_C.showlevel
struct AWorldMap_P_C_showlevel_Params
{
};

// Function WorldMap_P.WorldMap_P_C.Load
struct AWorldMap_P_C_Load_Params
{
	struct FName                                       mapname;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_P.WorldMap_P_C.Cine_Broll
struct AWorldMap_P_C_Cine_Broll_Params
{
};

// Function WorldMap_P.WorldMap_P_C.ChangeWiseState
struct AWorldMap_P_C_ChangeWiseState_Params
{
};

// Function WorldMap_P.WorldMap_P_C.SetToZero
struct AWorldMap_P_C_SetToZero_Params
{
};

// Function WorldMap_P.WorldMap_P_C.BindTutorialObjectiveAdded
struct AWorldMap_P_C_BindTutorialObjectiveAdded_Params
{
};

// Function WorldMap_P.WorldMap_P_C.TutorialObjectiveAdded
struct AWorldMap_P_C_TutorialObjectiveAdded_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             TutorialEventId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_TutorialEvent                           EventData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WorldMap_P.WorldMap_P_C.switchCam
struct AWorldMap_P_C_switchCam_Params
{
	int                                                cameraNum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_P.WorldMap_P_C.BindTutorialGateFractured
struct AWorldMap_P_C_BindTutorialGateFractured_Params
{
};

// Function WorldMap_P.WorldMap_P_C.ExecuteUbergraph_WorldMap_P
struct AWorldMap_P_C_ExecuteUbergraph_WorldMap_P_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
