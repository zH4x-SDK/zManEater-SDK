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

// Function TwUIFramework.TwBaseWidget.UnsubscribeFromEvents_BP
struct UTwBaseWidget_UnsubscribeFromEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseWidget.SubscribeToEvents_BP
struct UTwBaseWidget_SubscribeToEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseWidget.OnPostInitProperties
struct UTwBaseWidget_OnPostInitProperties_Params
{
};

// Function TwUIFramework.TwBaseWidget.OnMouseLeave_BP
struct UTwBaseWidget_OnMouseLeave_BP_Params
{
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseWidget.OnMouseEnter_BP
struct UTwBaseWidget_OnMouseEnter_BP_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseWidget.OnMouseButtonDown_BP
struct UTwBaseWidget_OnMouseButtonDown_BP_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseWidget.GetHUD
struct UTwBaseWidget_GetHUD_Params
{
	class AHUD*                                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.BaseSlider.SetSliderValue
struct UBaseSlider_SetSliderValue_Params
{
	float                                              Perc;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSurpressEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.BaseSlider.GetSliderValue
struct UBaseSlider_GetSliderValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwClickableWidget.ToggleSelectedState
struct UTwClickableWidget_ToggleSelectedState_Params
{
	bool                                               bForceSetState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewState;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwClickableWidget.SetLabelText
struct UTwClickableWidget_SetLabelText_Params
{
	struct FText                                       Label;                                                     // (Parm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwClickableWidget.SetIsToggleable
struct UTwClickableWidget_SetIsToggleable_Params
{
	bool                                               bToggle;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwClickableWidget.SetIconTexture
struct UTwClickableWidget_SetIconTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwAnimatedButton.SetSelected
struct UTwAnimatedButton_SetSelected_Params
{
	bool                                               bSelected;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwAnimatedButton.IsSelected
struct UTwAnimatedButton_IsSelected_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwAnimatedButton.AnimateState_BP
struct UTwAnimatedButton_AnimateState_BP_Params
{
	TwUIFramework_EAnimButtonState                     State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.StopBorderPulseTween
struct UTwBaseButton_StopBorderPulseTween_Params
{
};

// Function TwUIFramework.TwBaseButton.StartBorderPulseTween
struct UTwBaseButton_StartBorderPulseTween_Params
{
};

// Function TwUIFramework.TwBaseButton.SetForcedHighlight
struct UTwBaseButton_SetForcedHighlight_Params
{
	bool                                               bForced;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.SetDisabled
struct UTwBaseButton_SetDisabled_Params
{
	bool                                               bDisabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.OnTweenStep
struct UTwBaseButton_OnTweenStep_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.GetSelectedState
struct UTwBaseButton_GetSelectedState_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.GetDisabled
struct UTwBaseButton_GetDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.GetButtonLabelText
struct UTwBaseButton_GetButtonLabelText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseButton.GetButtonFrameImage
struct UTwBaseButton_GetButtonFrameImage_Params
{
	class UImage*                                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.SetDefaultPanel
struct UTwBaseMenu_SetDefaultPanel_Params
{
	unsigned char                                      Panel;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.OpenMenuPanelByLookup
struct UTwBaseMenu_OpenMenuPanelByLookup_Params
{
	struct FName                                       LookupName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.OpenMenuPanel
struct UTwBaseMenu_OpenMenuPanel_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.OpenMenu
struct UTwBaseMenu_OpenMenu_Params
{
};

// Function TwUIFramework.TwBaseMenu.OnMenuBarItemClicked
struct UTwBaseMenu_OnMenuBarItemClicked_Params
{
	class UTwBaseMenuBarItem*                          MenuBarItem;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.OnInputDeviceChanged
struct UTwBaseMenu_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.MoveMenus
struct UTwBaseMenu_MoveMenus_Params
{
	struct FVector2D                                   MoveVector;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.IsOpenDefault
struct UTwBaseMenu_IsOpenDefault_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.HandleInput
struct UTwBaseMenu_HandleInput_Params
{
	struct FText                                       InputName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.GetPanelForLookup
struct UTwBaseMenu_GetPanelForLookup_Params
{
	struct FName                                       LookUp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.GetLabelForLookup
struct UTwBaseMenu_GetLabelForLookup_Params
{
	struct FName                                       LookUp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation_BP
struct UTwBaseMenu_GetFocusWidgetForNavigation_BP_Params
{
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation
struct UTwBaseMenu_GetFocusWidgetForNavigation_Params
{
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.GetCurrentPanel
struct UTwBaseMenu_GetCurrentPanel_Params
{
	class UTwBaseMenuPanel*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenu.CloseMenu
struct UTwBaseMenu_CloseMenu_Params
{
};

// Function TwUIFramework.TwBaseMenuBarItem.SetSelected_BP
struct UTwBaseMenuBarItem_SetSelected_BP_Params
{
	bool                                               bIsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuBarItem.OnButtonClicked
struct UTwBaseMenuBarItem_OnButtonClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          ButtonClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuPanel.OnPanelOpen_BP
struct UTwBaseMenuPanel_OnPanelOpen_BP_Params
{
};

// Function TwUIFramework.TwBaseMenuPanel.OnPanelFinishedClosing
struct UTwBaseMenuPanel_OnPanelFinishedClosing_Params
{
	struct FPanelLifetimeResponder                     Responder;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuPanel.OnPanelClosing_BP
struct UTwBaseMenuPanel_OnPanelClosing_BP_Params
{
	struct FPanelLifetimeResponder                     Responder;                                                 // (Parm, NativeAccessSpecifierPublic)
	class UTwBaseMenuPanel*                            IncomingPanel;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuPanel.MovePanel
struct UTwBaseMenuPanel_MovePanel_Params
{
	struct FVector2D                                   MoveVector;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation_BP
struct UTwBaseMenuPanel_GetFocusWidgetForNavigation_BP_Params
{
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation
struct UTwBaseMenuPanel_GetFocusWidgetForNavigation_Params
{
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuPanel.GetDefaultFocusWidget
struct UTwBaseMenuPanel_GetDefaultFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseView.OnViewShowing_BP
struct UTwBaseView_OnViewShowing_BP_Params
{
};

// Function TwUIFramework.TwBaseView.OnViewShowing
struct UTwBaseView_OnViewShowing_Params
{
};

// Function TwUIFramework.TwBaseView.OnViewLeavingStack_BP
struct UTwBaseView_OnViewLeavingStack_BP_Params
{
	struct FViewPoppingResponder                       Responder;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseView.OnViewHiding_BP
struct UTwBaseView_OnViewHiding_BP_Params
{
};

// Function TwUIFramework.TwBaseView.OnViewHiding
struct UTwBaseView_OnViewHiding_Params
{
};

// Function TwUIFramework.TwBaseView.OnViewEnteringStack_BP
struct UTwBaseView_OnViewEnteringStack_BP_Params
{
};

// Function TwUIFramework.TwBaseView.OnViewEnteringStack
struct UTwBaseView_OnViewEnteringStack_Params
{
	class UTwViewController*                           Controller;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseView.OnFinishLeavingStack
struct UTwBaseView_OnFinishLeavingStack_Params
{
	struct FViewPoppingResponder                       Responder;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseView.GetDefaultFocusWidget
struct UTwBaseView_GetDefaultFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseView.DoesRequireInputUIMode
struct UTwBaseView_DoesRequireInputUIMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuView.OnOpenPanelRequest
struct UTwBaseMenuView_OnOpenPanelRequest_Params
{
	struct FName                                       LookupName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseMenuView.OnMenuPanel_Changed
struct UTwBaseMenuView_OnMenuPanel_Changed_Params
{
};

// Function TwUIFramework.TwBaseMenuView.GetMenuController
struct UTwBaseMenuView_GetMenuController_Params
{
	class UTwBaseMenu*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseModal.OnModalShowing_BP
struct UTwBaseModal_OnModalShowing_BP_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalShowing
struct UTwBaseModal_OnModalShowing_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalLeavingStack_BP
struct UTwBaseModal_OnModalLeavingStack_BP_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalLeavingStack
struct UTwBaseModal_OnModalLeavingStack_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalHiding_BP
struct UTwBaseModal_OnModalHiding_BP_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalHiding
struct UTwBaseModal_OnModalHiding_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalEnteringStack_BP
struct UTwBaseModal_OnModalEnteringStack_BP_Params
{
};

// Function TwUIFramework.TwBaseModal.OnModalEnteringStack
struct UTwBaseModal_OnModalEnteringStack_Params
{
	class UTwViewController*                           Controller;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseModal.GetDefaultFocusWidget
struct UTwBaseModal_GetDefaultFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwBaseSlider.SetLabelText
struct UTwBaseSlider_SetLabelText_Params
{
	struct FText                                       LabelText;                                                 // (Parm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwTweener.Stop
struct UTwTweener_Stop_Params
{
	bool                                               bSkipToEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwTweener.Play
struct UTwTweener_Play_Params
{
};

// Function TwUIFramework.TwTweener.Pause
struct UTwTweener_Pause_Params
{
};

// Function TwUIFramework.TwColorTweener.GetCurrentValue
struct UTwColorTweener_GetCurrentValue_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwColorTweener.CreateColorTween
struct UTwColorTweener_CreateColorTween_Params
{
	struct FLinearColor                                FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwColorTweener*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwConfirmModal.OnModalDecline
struct UTwConfirmModal_OnModalDecline_Params
{
};

// Function TwUIFramework.TwConfirmModal.OnModalConfirm
struct UTwConfirmModal_OnModalConfirm_Params
{
};

// Function TwUIFramework.TwFlipbookImageWidget.SetPlayMode
struct UTwFlipbookImageWidget_SetPlayMode_Params
{
	TwUIFramework_EFlipbookPlayMode                    NewPlayMode;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwFlipbookImageWidget.Reset
struct UTwFlipbookImageWidget_Reset_Params
{
};

// Function TwUIFramework.TwFloatTweener.GetCurrentValue
struct UTwFloatTweener_GetCurrentValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwFloatTweener.CreateFloatTween
struct UTwFloatTweener_CreateFloatTween_Params
{
	float                                              FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenFinished;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UTwFloatTweener*                             ReusableTweener;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwFloatTweener*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwHUD.OnInputDeviceEvent
struct ATwHUD_OnInputDeviceEvent_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwHUD.OnControllerDisconnectedAnyPlatform
struct ATwHUD_OnControllerDisconnectedAnyPlatform_Params
{
};

// Function TwUIFramework.TwHUD.OnControllerDisconnected
struct ATwHUD_OnControllerDisconnected_Params
{
	bool                                               bShowGenericAlertInstead;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwHUD.GetCurrentInputDevice
struct ATwHUD_GetCurrentInputDevice_Params
{
	TwUIFramework_EUserInputDevice                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwInputAwareRichTextBlock.SetTextAware
struct UTwInputAwareRichTextBlock_SetTextAware_Params
{
	struct FText                                       InText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwInputAwareRichTextBlock.OnInputDeviceChanged
struct UTwInputAwareRichTextBlock_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetTextAware
struct UTwInputAwareRichTextBlockWidget_SetTextAware_Params
{
	struct FText                                       InText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetKeybindText
struct UTwInputAwareRichTextBlockWidget_SetKeybindText_Params
{
	struct FText                                       InText;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bGamepad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwInputAwareRichTextBlockWidget.OnInputDeviceChanged
struct UTwInputAwareRichTextBlockWidget_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwLambdaButton.OnWidgetClickedInternal
struct UTwLambdaButton_OnWidgetClickedInternal_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          WidgetClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwMatFloatScalarTweener.GetCurrentValue
struct UTwMatFloatScalarTweener_GetCurrentValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwMatFloatScalarTweener.CreateMatFloatScalarTween
struct UTwMatFloatScalarTweener_CreateMatFloatScalarTween_Params
{
	class UMaterialInstanceDynamic*                    Mat;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwMatFloatScalarTweener*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwMoviePlayerView.OnTracksChanged
struct UTwMoviePlayerView_OnTracksChanged_Params
{
};

// Function TwUIFramework.TwMoviePlayerView.OnInteractReleased
struct UTwMoviePlayerView_OnInteractReleased_Params
{
};

// Function TwUIFramework.TwMoviePlayerView.OnInteractPressed
struct UTwMoviePlayerView_OnInteractPressed_Params
{
};

// Function TwUIFramework.TwMoviePlayerView.OnEndReached
struct UTwMoviePlayerView_OnEndReached_Params
{
};

// Function TwUIFramework.TwMoviePlayerView.OnAnyButtonPressed
struct UTwMoviePlayerView_OnAnyButtonPressed_Params
{
};

// Function TwUIFramework.TwMultiOptionModal.CreateModalWithOptions_BP
struct UTwMultiOptionModal_CreateModalWithOptions_BP_Params
{
	class APlayerController*                           OwningPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               Options;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TitleText;                                                 // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       BodyText;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDismissable;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DismissAction;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwWidgetQueue.PumpQueue
struct UTwWidgetQueue_PumpQueue_Params
{
};

// Function TwUIFramework.TwWidgetQueue.OnWidgetReadyForDestruction
struct UTwWidgetQueue_OnWidgetReadyForDestruction_Params
{
	class UTwBaseWidget*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwMultiWidgetQueue.OnWidgetQueueDestruction
struct UTwMultiWidgetQueue_OnWidgetQueueDestruction_Params
{
	class UTwBaseWidget*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwRadialProgressIcon.SetRadius
struct UTwRadialProgressIcon_SetRadius_Params
{
	float                                              NewRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwRadialProgressIcon.SetProgress
struct UTwRadialProgressIcon_SetProgress_Params
{
	float                                              Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwRadialProgressIcon.SetColor
struct UTwRadialProgressIcon_SetColor_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwRadioWidget.OnProcessButtonClick
struct UTwRadioWidget_OnProcessButtonClick_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          ButtonClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwScreenSpaceConstrainedWidget.SetTargetActor
struct UTwScreenSpaceConstrainedWidget_SetTargetActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwToastManagerWidget.AddNewToast
struct UTwToastManagerWidget_AddNewToast_Params
{
	class UClass*                                      ToastWidgetClass;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToastData                                  ToastData;                                                 // (Parm, NativeAccessSpecifierPublic)
	class UTwToastWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwToastWidget.CreateToast
struct UTwToastWidget_CreateToast_Params
{
	class UClass*                                      ToastWidgetClass;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                                VerticalBoxParent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FToastData                                  ToastData;                                                 // (Parm, NativeAccessSpecifierPublic)
	class UTwToastWidget*                              ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwTooltipContainer.CreateBasicTooltip
struct UTwTooltipContainer_CreateBasicTooltip_Params
{
	struct FText                                       Header;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       InputText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForViewPop
struct UTwUIFunctionLibrary_IsKeyValidForViewPop_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForUITab
struct UTwUIFunctionLibrary_IsKeyValidForUITab_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightNavigation
struct UTwUIFunctionLibrary_IsKeyValidForRightNavigation_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightMenu
struct UTwUIFunctionLibrary_IsKeyValidForRightMenu_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForNavigation
struct UTwUIFunctionLibrary_IsKeyValidForNavigation_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftNavigation
struct UTwUIFunctionLibrary_IsKeyValidForLeftNavigation_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftMenu
struct UTwUIFunctionLibrary_IsKeyValidForLeftMenu_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForHNavigation
struct UTwUIFunctionLibrary_IsKeyValidForHNavigation_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForConfirm
struct UTwUIFunctionLibrary_IsKeyValidForConfirm_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUIFunctionLibrary.IsConsoleActive
struct UTwUIFunctionLibrary_IsConsoleActive_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUMGAngleTweener.GetCurrentValue
struct UTwUMGAngleTweener_GetCurrentValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUMGAngleTweener.CreateUMGAngleTween
struct UTwUMGAngleTweener_CreateUMGAngleTween_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenFinished;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwUMGAngleTweener*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUMGOpacityTweener.GetCurrentValue
struct UTwUMGOpacityTweener_GetCurrentValue_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUMGOpacityTweener.CreateUMGOpacityTween
struct UTwUMGOpacityTweener_CreateUMGOpacityTween_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenFinished;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UTwUMGOpacityTweener*                        ReusableTweener;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwUMGOpacityTweener*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUMGScaleTweener.GetCurrentValue
struct UTwUMGScaleTweener_GetCurrentValue_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwUMGScaleTweener.CreateUMGScaleTween
struct UTwUMGScaleTweener_CreateUMGScaleTween_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenFinished;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwUMGScaleTweener*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwVector2DTweener.GetCurrentValue
struct UTwVector2DTweener_GetCurrentValue_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwVector2DTweener.CreateVector2DTween_BP
struct UTwVector2DTweener_CreateVector2DTween_BP_Params
{
	struct FVector2D                                   FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenFinished;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwVector2DTweener*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwVector3DTweener.GetCurrentValue
struct UTwVector3DTweener_GetCurrentValue_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwVector3DTweener.CreateVector3DTween
struct UTwVector3DTweener_CreateVector3DTween_Params
{
	struct FVector                                     FromValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ToValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TweenDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEasingFunc>                    Easing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               TweenPingPong;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnTweenStep;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwVector3DTweener*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.PushView
struct UTwViewController_PushView_Params
{
	class UClass*                                      ViewClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseView*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.PushModalInstance
struct UTwViewController_PushModalInstance_Params
{
	class UTwBaseModal*                                NewModal;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseModal*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.PushModal
struct UTwViewController_PushModal_Params
{
	class UClass*                                      ModalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseModal*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.PopViewInstance
struct UTwViewController_PopViewInstance_Params
{
	class UTwBaseView*                                 ViewToPop;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.PopViewClass
struct UTwViewController_PopViewClass_Params
{
	class UClass*                                      ModalClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.PopView
struct UTwViewController_PopView_Params
{
};

// Function TwUIFramework.TwViewController.PopModal
struct UTwViewController_PopModal_Params
{
};

// Function TwUIFramework.TwViewController.IsViewClassOnStack
struct UTwViewController_IsViewClassOnStack_Params
{
	class UClass*                                      View;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.IsModalClassOnStack
struct UTwViewController_IsModalClassOnStack_Params
{
	class UClass*                                      Modal;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.GetActiveView
struct UTwViewController_GetActiveView_Params
{
	class UTwBaseView*                                 ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewController.GetActiveModal
struct UTwViewController_GetActiveModal_Params
{
	class UTwBaseModal*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwUIFramework.TwViewFooter.OnUserInputDeviceChanged
struct UTwViewFooter_OnUserInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
