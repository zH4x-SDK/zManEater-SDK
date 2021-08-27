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

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.GetDefaultFocusWidget
struct UManeaterPauseMenuView_BP_C_GetDefaultFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnCloseClicked
struct UManeaterPauseMenuView_BP_C_OnCloseClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnExitClicked
struct UManeaterPauseMenuView_BP_C_OnExitClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewEnteringStack_BP
struct UManeaterPauseMenuView_BP_C_OnViewEnteringStack_BP_Params
{
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewLeavingStack_BP
struct UManeaterPauseMenuView_BP_C_OnViewLeavingStack_BP_Params
{
	struct FViewPoppingResponder                       Responder;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewShowing_BP
struct UManeaterPauseMenuView_BP_C_OnViewShowing_BP_Params
{
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.Construct
struct UManeaterPauseMenuView_BP_C_Construct_Params
{
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnettingsClicked
struct UManeaterPauseMenuView_BP_C_OnettingsClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.ExecuteUbergraph_ManeaterPauseMenuView_BP
struct UManeaterPauseMenuView_BP_C_ExecuteUbergraph_ManeaterPauseMenuView_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
