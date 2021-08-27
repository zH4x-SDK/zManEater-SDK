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

// Function BoostMeter_BP.BoostMeter_BP_C.ProcessTagChange
struct UBoostMeter_BP_C_ProcessTagChange_Params
{
};

// Function BoostMeter_BP.BoostMeter_BP_C.UpdateLocalTagContainer
struct UBoostMeter_BP_C_UpdateLocalTagContainer_Params
{
	bool                                               bAdded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TagContainer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TagDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BoostMeter_BP.BoostMeter_BP_C.UnsubscribeFromEvents_BP
struct UBoostMeter_BP_C_UnsubscribeFromEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BoostMeter_BP.BoostMeter_BP_C.GameplayTagAdded
struct UBoostMeter_BP_C_GameplayTagAdded_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TagDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BoostMeter_BP.BoostMeter_BP_C.SubscribeToEvents_BP
struct UBoostMeter_BP_C_SubscribeToEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BoostMeter_BP.BoostMeter_BP_C.GameplayTagRemoved
struct UBoostMeter_BP_C_GameplayTagRemoved_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BoostMeter_BP.BoostMeter_BP_C.Construct
struct UBoostMeter_BP_C_Construct_Params
{
};

// Function BoostMeter_BP.BoostMeter_BP_C.ExecuteUbergraph_BoostMeter_BP
struct UBoostMeter_BP_C_ExecuteUbergraph_BoostMeter_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
