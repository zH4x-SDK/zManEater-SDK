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

// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.OnHealthValueChanged_BP
struct UPlayerHealthBar_BP_C_OnHealthValueChanged_BP_Params
{
	float                                              NewValue;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.GrowthLevelChanged
struct UPlayerHealthBar_BP_C_GrowthLevelChanged_Params
{
	int                                                NewGrowthLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bChangeFromTheoretical;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.SubscribeToEvents_BP
struct UPlayerHealthBar_BP_C_SubscribeToEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.UnsubscribeFromEvents_BP
struct UPlayerHealthBar_BP_C_UnsubscribeFromEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.ExecuteUbergraph_PlayerHealthBar_BP
struct UPlayerHealthBar_BP_C_ExecuteUbergraph_PlayerHealthBar_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
