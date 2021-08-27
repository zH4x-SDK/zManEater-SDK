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

// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ToggleOnOff
struct ATutorial_FishSpawn_BP_C_ToggleOnOff_Params
{
	bool                                               Enabled_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.SpawnFish
struct ATutorial_FishSpawn_BP_C_SpawnFish_Params
{
};

// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ReceiveBeginPlay
struct ATutorial_FishSpawn_BP_C_ReceiveBeginPlay_Params
{
};

// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.FishDied
struct ATutorial_FishSpawn_BP_C_FishDied_Params
{
	class AME_AIController*                            KilledAIC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ExecuteUbergraph_Tutorial_FishSpawn_BP
struct ATutorial_FishSpawn_BP_C_ExecuteUbergraph_Tutorial_FishSpawn_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
