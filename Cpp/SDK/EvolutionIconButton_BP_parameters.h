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

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.OnFocusReceived
struct UEvolutionIconButton_BP_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.GetTooltip
struct UEvolutionIconButton_BP_C_GetTooltip_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.PlayUpgradeFX
struct UEvolutionIconButton_BP_C_PlayUpgradeFX_Params
{
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.OnFocusLost
struct UEvolutionIconButton_BP_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.ToggleTooltipVisiblity
struct UEvolutionIconButton_BP_C_ToggleTooltipVisiblity_Params
{
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.InventoryChanged
struct UEvolutionIconButton_BP_C_InventoryChanged_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUpgrade;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.SubscribeToEvents_BP
struct UEvolutionIconButton_BP_C_SubscribeToEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.UnsubscribeFromEvents_BP
struct UEvolutionIconButton_BP_C_UnsubscribeFromEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.Construct
struct UEvolutionIconButton_BP_C_Construct_Params
{
};

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.ExecuteUbergraph_EvolutionIconButton_BP
struct UEvolutionIconButton_BP_C_ExecuteUbergraph_EvolutionIconButton_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
