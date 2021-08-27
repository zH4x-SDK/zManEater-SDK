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

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.EnablePoison
struct APoisonTheRegionController_BP_C_EnablePoison_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.DisablePoison
struct APoisonTheRegionController_BP_C_DisablePoison_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.SubLevelLoaded
struct APoisonTheRegionController_BP_C_SubLevelLoaded_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.OnRegionChanged
struct APoisonTheRegionController_BP_C_OnRegionChanged_Params
{
	Maneater_EWorldRegion                              Region;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  RegionIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.ReceiveBeginPlay
struct APoisonTheRegionController_BP_C_ReceiveBeginPlay_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BeginAgain
struct APoisonTheRegionController_BP_C_BeginAgain_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.StoryUpdated
struct APoisonTheRegionController_BP_C_StoryUpdated_Params
{
	int                                                NewStoryIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BindOnRegionChanged
struct APoisonTheRegionController_BP_C_BindOnRegionChanged_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BindOnStoryUpdated
struct APoisonTheRegionController_BP_C_BindOnStoryUpdated_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.SpawnPoison
struct APoisonTheRegionController_BP_C_SpawnPoison_Params
{
};

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.ExecuteUbergraph_PoisonTheRegionController_BP
struct APoisonTheRegionController_BP_C_ExecuteUbergraph_PoisonTheRegionController_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
