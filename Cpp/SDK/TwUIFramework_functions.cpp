// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function TwUIFramework.TwBaseWidget.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseWidget::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.UnsubscribeFromEvents_BP");

	UTwBaseWidget_UnsubscribeFromEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseWidget.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseWidget::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.SubscribeToEvents_BP");

	UTwBaseWidget_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseWidget.OnPostInitProperties
// (Event, Public, BlueprintEvent)
void UTwBaseWidget::OnPostInitProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.OnPostInitProperties");

	UTwBaseWidget_OnPostInitProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseWidget.OnMouseLeave_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTwBaseWidget::OnMouseLeave_BP(const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.OnMouseLeave_BP");

	UTwBaseWidget_OnMouseLeave_BP_Params params;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseWidget.OnMouseEnter_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               InGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTwBaseWidget::OnMouseEnter_BP(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.OnMouseEnter_BP");

	UTwBaseWidget_OnMouseEnter_BP_Params params;
	params.InGeometry = InGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseWidget.OnMouseButtonDown_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               InGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent           InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTwBaseWidget::OnMouseButtonDown_BP(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.OnMouseButtonDown_BP");

	UTwBaseWidget_OnMouseButtonDown_BP_Params params;
	params.InGeometry = InGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseWidget.GetHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AHUD*                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AHUD* UTwBaseWidget::GetHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseWidget.GetHUD");

	UTwBaseWidget_GetHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.BaseSlider.SetSliderValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Perc                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bSurpressEvent                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseSlider::SetSliderValue(float Perc, bool bSurpressEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.BaseSlider.SetSliderValue");

	UBaseSlider_SetSliderValue_Params params;
	params.Perc = Perc;
	params.bSurpressEvent = bSurpressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.BaseSlider.GetSliderValue
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseSlider::GetSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.BaseSlider.GetSliderValue");

	UBaseSlider_GetSliderValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwClickableWidget.ToggleSelectedState
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForceSetState                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNewState                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwClickableWidget::ToggleSelectedState(bool bForceSetState, bool bNewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwClickableWidget.ToggleSelectedState");

	UTwClickableWidget_ToggleSelectedState_Params params;
	params.bForceSetState = bForceSetState;
	params.bNewState = bNewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwClickableWidget.SetLabelText
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Label                          (Parm, NativeAccessSpecifierPublic)
void UTwClickableWidget::SetLabelText(const struct FText& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwClickableWidget.SetLabelText");

	UTwClickableWidget_SetLabelText_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwClickableWidget.SetIsToggleable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bToggle                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwClickableWidget::SetIsToggleable(bool bToggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwClickableWidget.SetIsToggleable");

	UTwClickableWidget_SetIsToggleable_Params params;
	params.bToggle = bToggle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwClickableWidget.SetIconTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwClickableWidget::SetIconTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwClickableWidget.SetIconTexture");

	UTwClickableWidget_SetIconTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwAnimatedButton.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwAnimatedButton::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwAnimatedButton.SetSelected");

	UTwAnimatedButton_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwAnimatedButton.IsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwAnimatedButton::IsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwAnimatedButton.IsSelected");

	UTwAnimatedButton_IsSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwAnimatedButton.AnimateState_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// TwUIFramework_EAnimButtonState State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwAnimatedButton::AnimateState_BP(TwUIFramework_EAnimButtonState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwAnimatedButton.AnimateState_BP");

	UTwAnimatedButton_AnimateState_BP_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseButton.StopBorderPulseTween
// (Final, Native, Public, BlueprintCallable)
void UTwBaseButton::StopBorderPulseTween()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.StopBorderPulseTween");

	UTwBaseButton_StopBorderPulseTween_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseButton.StartBorderPulseTween
// (Final, Native, Public, BlueprintCallable)
void UTwBaseButton::StartBorderPulseTween()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.StartBorderPulseTween");

	UTwBaseButton_StartBorderPulseTween_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseButton.SetForcedHighlight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseButton::SetForcedHighlight(bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.SetForcedHighlight");

	UTwBaseButton_SetForcedHighlight_Params params;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseButton.SetDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisabled                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseButton::SetDisabled(bool bDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.SetDisabled");

	UTwBaseButton_SetDisabled_Params params;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseButton.OnTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseButton::OnTweenStep(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.OnTweenStep");

	UTwBaseButton_OnTweenStep_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseButton.GetSelectedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwBaseButton::GetSelectedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.GetSelectedState");

	UTwBaseButton_GetSelectedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseButton.GetDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwBaseButton::GetDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.GetDisabled");

	UTwBaseButton_GetDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseButton.GetButtonLabelText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTwBaseButton::GetButtonLabelText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.GetButtonLabelText");

	UTwBaseButton_GetButtonLabelText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseButton.GetButtonFrameImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UImage*                  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UImage* UTwBaseButton::GetButtonFrameImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseButton.GetButtonFrameImage");

	UTwBaseButton_GetButtonFrameImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.SetDefaultPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  Panel                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenu::SetDefaultPanel(unsigned char Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.SetDefaultPanel");

	UTwBaseMenu_SetDefaultPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenu.OpenMenuPanelByLookup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LookupName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseMenuPanel* UTwBaseMenu::OpenMenuPanelByLookup(const struct FName& LookupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.OpenMenuPanelByLookup");

	UTwBaseMenu_OpenMenuPanelByLookup_Params params;
	params.LookupName = LookupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.OpenMenuPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseMenuPanel* UTwBaseMenu::OpenMenuPanel(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.OpenMenuPanel");

	UTwBaseMenu_OpenMenuPanel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.OpenMenu
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UTwBaseMenu::OpenMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.OpenMenu");

	UTwBaseMenu_OpenMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenu.OnMenuBarItemClicked
// (Native, Protected)
// Parameters:
// class UTwBaseMenuBarItem*      MenuBarItem                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenu::OnMenuBarItemClicked(class UTwBaseMenuBarItem* MenuBarItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.OnMenuBarItemClicked");

	UTwBaseMenu_OnMenuBarItemClicked_Params params;
	params.MenuBarItem = MenuBarItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenu.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenu::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.OnInputDeviceChanged");

	UTwBaseMenu_OnInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenu.MoveMenus
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               MoveVector                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenu::MoveMenus(const struct FVector2D& MoveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.MoveMenus");

	UTwBaseMenu_MoveMenus_Params params;
	params.MoveVector = MoveVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenu.IsOpenDefault
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwBaseMenu::IsOpenDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.IsOpenDefault");

	UTwBaseMenu_IsOpenDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.HandleInput
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InputName                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTwBaseMenu::HandleInput(const struct FText& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.HandleInput");

	UTwBaseMenu_HandleInput_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenu.GetPanelForLookup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LookUp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseMenuPanel* UTwBaseMenu::GetPanelForLookup(const struct FName& LookUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.GetPanelForLookup");

	UTwBaseMenu_GetPanelForLookup_Params params;
	params.LookUp = LookUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.GetLabelForLookup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LookUp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTwBaseMenu::GetLabelForLookup(const struct FName& LookUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.GetLabelForLookup");

	UTwBaseMenu_GetLabelForLookup_Params params;
	params.LookUp = LookUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseMenu::GetFocusWidgetForNavigation_BP(SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation_BP");

	UTwBaseMenu_GetFocusWidgetForNavigation_BP_Params params;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation
// (Native, Public)
// Parameters:
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseMenu::GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.GetFocusWidgetForNavigation");

	UTwBaseMenu_GetFocusWidgetForNavigation_Params params;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.GetCurrentPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseMenuPanel*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseMenuPanel* UTwBaseMenu::GetCurrentPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.GetCurrentPanel");

	UTwBaseMenu_GetCurrentPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenu.CloseMenu
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UTwBaseMenu::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenu.CloseMenu");

	UTwBaseMenu_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuBarItem.SetSelected_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenuBarItem::SetSelected_BP(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuBarItem.SetSelected_BP");

	UTwBaseMenuBarItem_SetSelected_BP_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuBarItem.OnButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      ButtonClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenuBarItem::OnButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuBarItem.OnButtonClicked");

	UTwBaseMenuBarItem_OnButtonClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuPanel.OnPanelOpen_BP
// (Event, Public, BlueprintEvent)
void UTwBaseMenuPanel::OnPanelOpen_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.OnPanelOpen_BP");

	UTwBaseMenuPanel_OnPanelOpen_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuPanel.OnPanelFinishedClosing
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FPanelLifetimeResponder Responder                      (Parm, NativeAccessSpecifierPublic)
void UTwBaseMenuPanel::OnPanelFinishedClosing(const struct FPanelLifetimeResponder& Responder)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.OnPanelFinishedClosing");

	UTwBaseMenuPanel_OnPanelFinishedClosing_Params params;
	params.Responder = Responder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuPanel.OnPanelClosing_BP
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPanelLifetimeResponder Responder                      (Parm, NativeAccessSpecifierPublic)
// class UTwBaseMenuPanel*        IncomingPanel                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenuPanel::OnPanelClosing_BP(const struct FPanelLifetimeResponder& Responder, class UTwBaseMenuPanel* IncomingPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.OnPanelClosing_BP");

	UTwBaseMenuPanel_OnPanelClosing_BP_Params params;
	params.Responder = Responder;
	params.IncomingPanel = IncomingPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuPanel.MovePanel
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               MoveVector                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenuPanel::MovePanel(const struct FVector2D& MoveVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.MovePanel");

	UTwBaseMenuPanel_MovePanel_Params params;
	params.MoveVector = MoveVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseMenuPanel::GetFocusWidgetForNavigation_BP(SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation_BP");

	UTwBaseMenuPanel_GetFocusWidgetForNavigation_BP_Params params;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation
// (Native, Public)
// Parameters:
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseMenuPanel::GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.GetFocusWidgetForNavigation");

	UTwBaseMenuPanel_GetFocusWidgetForNavigation_Params params;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenuPanel.GetDefaultFocusWidget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseMenuPanel::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuPanel.GetDefaultFocusWidget");

	UTwBaseMenuPanel_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseView.OnViewShowing_BP
// (Event, Public, BlueprintEvent)
void UTwBaseView::OnViewShowing_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewShowing_BP");

	UTwBaseView_OnViewShowing_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnViewShowing
// (Native, Public)
void UTwBaseView::OnViewShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewShowing");

	UTwBaseView_OnViewShowing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnViewLeavingStack_BP
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FViewPoppingResponder   Responder                      (Parm, NativeAccessSpecifierPublic)
void UTwBaseView::OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewLeavingStack_BP");

	UTwBaseView_OnViewLeavingStack_BP_Params params;
	params.Responder = Responder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnViewHiding_BP
// (Event, Public, BlueprintEvent)
void UTwBaseView::OnViewHiding_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewHiding_BP");

	UTwBaseView_OnViewHiding_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnViewHiding
// (Native, Public)
void UTwBaseView::OnViewHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewHiding");

	UTwBaseView_OnViewHiding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnViewEnteringStack_BP
// (Event, Public, BlueprintEvent)
void UTwBaseView::OnViewEnteringStack_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewEnteringStack_BP");

	UTwBaseView_OnViewEnteringStack_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnViewEnteringStack
// (Native, Public)
// Parameters:
// class UTwViewController*       Controller                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseView::OnViewEnteringStack(class UTwViewController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnViewEnteringStack");

	UTwBaseView_OnViewEnteringStack_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.OnFinishLeavingStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FViewPoppingResponder   Responder                      (Parm, NativeAccessSpecifierPublic)
void UTwBaseView::OnFinishLeavingStack(const struct FViewPoppingResponder& Responder)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.OnFinishLeavingStack");

	UTwBaseView_OnFinishLeavingStack_Params params;
	params.Responder = Responder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseView.GetDefaultFocusWidget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseView::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.GetDefaultFocusWidget");

	UTwBaseView_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseView.DoesRequireInputUIMode
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwBaseView::DoesRequireInputUIMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseView.DoesRequireInputUIMode");

	UTwBaseView_DoesRequireInputUIMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseMenuView.OnOpenPanelRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LookupName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseMenuView::OnOpenPanelRequest(const struct FName& LookupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuView.OnOpenPanelRequest");

	UTwBaseMenuView_OnOpenPanelRequest_Params params;
	params.LookupName = LookupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuView.OnMenuPanel_Changed
// (Final, Native, Protected)
void UTwBaseMenuView::OnMenuPanel_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuView.OnMenuPanel_Changed");

	UTwBaseMenuView_OnMenuPanel_Changed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseMenuView.GetMenuController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseMenu*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseMenu* UTwBaseMenuView::GetMenuController()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseMenuView.GetMenuController");

	UTwBaseMenuView_GetMenuController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseModal.OnModalShowing_BP
// (Event, Public, BlueprintEvent)
void UTwBaseModal::OnModalShowing_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalShowing_BP");

	UTwBaseModal_OnModalShowing_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalShowing
// (Native, Public)
void UTwBaseModal::OnModalShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalShowing");

	UTwBaseModal_OnModalShowing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalLeavingStack_BP
// (Event, Public, BlueprintEvent)
void UTwBaseModal::OnModalLeavingStack_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalLeavingStack_BP");

	UTwBaseModal_OnModalLeavingStack_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalLeavingStack
// (Native, Public)
void UTwBaseModal::OnModalLeavingStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalLeavingStack");

	UTwBaseModal_OnModalLeavingStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalHiding_BP
// (Event, Public, BlueprintEvent)
void UTwBaseModal::OnModalHiding_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalHiding_BP");

	UTwBaseModal_OnModalHiding_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalHiding
// (Native, Public)
void UTwBaseModal::OnModalHiding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalHiding");

	UTwBaseModal_OnModalHiding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalEnteringStack_BP
// (Event, Public, BlueprintEvent)
void UTwBaseModal::OnModalEnteringStack_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalEnteringStack_BP");

	UTwBaseModal_OnModalEnteringStack_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.OnModalEnteringStack
// (Native, Public)
// Parameters:
// class UTwViewController*       Controller                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwBaseModal::OnModalEnteringStack(class UTwViewController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.OnModalEnteringStack");

	UTwBaseModal_OnModalEnteringStack_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwBaseModal.GetDefaultFocusWidget
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UTwBaseModal::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseModal.GetDefaultFocusWidget");

	UTwBaseModal_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwBaseSlider.SetLabelText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   LabelText                      (Parm, NativeAccessSpecifierPublic)
void UTwBaseSlider::SetLabelText(const struct FText& LabelText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwBaseSlider.SetLabelText");

	UTwBaseSlider_SetLabelText_Params params;
	params.LabelText = LabelText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwTweener.Stop
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSkipToEnd                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwTweener::Stop(bool bSkipToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwTweener.Stop");

	UTwTweener_Stop_Params params;
	params.bSkipToEnd = bSkipToEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwTweener.Play
// (Native, Public, BlueprintCallable)
void UTwTweener::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwTweener.Play");

	UTwTweener_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwTweener.Pause
// (Native, Public, BlueprintCallable)
void UTwTweener::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwTweener.Pause");

	UTwTweener_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwColorTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UTwColorTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwColorTweener.GetCurrentValue");

	UTwColorTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwColorTweener.CreateColorTween
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwColorTweener*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwColorTweener* UTwColorTweener::STATIC_CreateColorTween(const struct FLinearColor& FromValue, const struct FLinearColor& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwColorTweener.CreateColorTween");

	UTwColorTweener_CreateColorTween_Params params;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwConfirmModal.OnModalDecline
// (Final, Native, Protected)
void UTwConfirmModal::OnModalDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwConfirmModal.OnModalDecline");

	UTwConfirmModal_OnModalDecline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwConfirmModal.OnModalConfirm
// (Final, Native, Protected)
void UTwConfirmModal::OnModalConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwConfirmModal.OnModalConfirm");

	UTwConfirmModal_OnModalConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwFlipbookImageWidget.SetPlayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TwUIFramework_EFlipbookPlayMode NewPlayMode                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwFlipbookImageWidget::SetPlayMode(TwUIFramework_EFlipbookPlayMode NewPlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwFlipbookImageWidget.SetPlayMode");

	UTwFlipbookImageWidget_SetPlayMode_Params params;
	params.NewPlayMode = NewPlayMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwFlipbookImageWidget.Reset
// (Final, Native, Public, BlueprintCallable)
void UTwFlipbookImageWidget::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwFlipbookImageWidget.Reset");

	UTwFlipbookImageWidget_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwFloatTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTwFloatTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwFloatTweener.GetCurrentValue");

	UTwFloatTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwFloatTweener.CreateFloatTween
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenFinished                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UTwFloatTweener*         ReusableTweener                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwFloatTweener*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwFloatTweener* UTwFloatTweener::STATIC_CreateFloatTween(float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, class UTwFloatTweener* ReusableTweener, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwFloatTweener.CreateFloatTween");

	UTwFloatTweener_CreateFloatTween_Params params;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.OnTweenFinished = OnTweenFinished;
	params.ReusableTweener = ReusableTweener;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwHUD.OnInputDeviceEvent
// (Final, Native, Private)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATwHUD::OnInputDeviceEvent(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwHUD.OnInputDeviceEvent");

	ATwHUD_OnInputDeviceEvent_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwHUD.OnControllerDisconnectedAnyPlatform
// (Native, Public, BlueprintCallable)
void ATwHUD::OnControllerDisconnectedAnyPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwHUD.OnControllerDisconnectedAnyPlatform");

	ATwHUD_OnControllerDisconnectedAnyPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwHUD.OnControllerDisconnected
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShowGenericAlertInstead       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATwHUD::OnControllerDisconnected(bool bShowGenericAlertInstead)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwHUD.OnControllerDisconnected");

	ATwHUD_OnControllerDisconnected_Params params;
	params.bShowGenericAlertInstead = bShowGenericAlertInstead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwHUD.GetCurrentInputDevice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TwUIFramework_EUserInputDevice ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TwUIFramework_EUserInputDevice ATwHUD::GetCurrentInputDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwHUD.GetCurrentInputDevice");

	ATwHUD_GetCurrentInputDevice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwInputAwareRichTextBlock.SetTextAware
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTwInputAwareRichTextBlock::SetTextAware(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwInputAwareRichTextBlock.SetTextAware");

	UTwInputAwareRichTextBlock_SetTextAware_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwInputAwareRichTextBlock.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwInputAwareRichTextBlock::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwInputAwareRichTextBlock.OnInputDeviceChanged");

	UTwInputAwareRichTextBlock_OnInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetTextAware
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTwInputAwareRichTextBlockWidget::SetTextAware(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetTextAware");

	UTwInputAwareRichTextBlockWidget_SetTextAware_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetKeybindText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           bGamepad                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwInputAwareRichTextBlockWidget::SetKeybindText(const struct FText& InText, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwInputAwareRichTextBlockWidget.SetKeybindText");

	UTwInputAwareRichTextBlockWidget_SetKeybindText_Params params;
	params.InText = InText;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwInputAwareRichTextBlockWidget.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwInputAwareRichTextBlockWidget::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwInputAwareRichTextBlockWidget.OnInputDeviceChanged");

	UTwInputAwareRichTextBlockWidget_OnInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwLambdaButton.OnWidgetClickedInternal
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      WidgetClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwLambdaButton::OnWidgetClickedInternal(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwLambdaButton.OnWidgetClickedInternal");

	UTwLambdaButton_OnWidgetClickedInternal_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.WidgetClicked = WidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMatFloatScalarTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTwMatFloatScalarTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMatFloatScalarTweener.GetCurrentValue");

	UTwMatFloatScalarTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwMatFloatScalarTweener.CreateMatFloatScalarTween
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic* Mat                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   Param                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwMatFloatScalarTweener* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwMatFloatScalarTweener* UTwMatFloatScalarTweener::STATIC_CreateMatFloatScalarTween(class UMaterialInstanceDynamic* Mat, const struct FName& Param, float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMatFloatScalarTweener.CreateMatFloatScalarTween");

	UTwMatFloatScalarTweener_CreateMatFloatScalarTween_Params params;
	params.Mat = Mat;
	params.Param = Param;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwMoviePlayerView.OnTracksChanged
// (Final, Native, Protected)
void UTwMoviePlayerView::OnTracksChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMoviePlayerView.OnTracksChanged");

	UTwMoviePlayerView_OnTracksChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMoviePlayerView.OnInteractReleased
// (Final, Native, Protected)
void UTwMoviePlayerView::OnInteractReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMoviePlayerView.OnInteractReleased");

	UTwMoviePlayerView_OnInteractReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMoviePlayerView.OnInteractPressed
// (Final, Native, Protected)
void UTwMoviePlayerView::OnInteractPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMoviePlayerView.OnInteractPressed");

	UTwMoviePlayerView_OnInteractPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMoviePlayerView.OnEndReached
// (Final, Native, Protected)
void UTwMoviePlayerView::OnEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMoviePlayerView.OnEndReached");

	UTwMoviePlayerView_OnEndReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMoviePlayerView.OnAnyButtonPressed
// (Final, Native, Protected)
void UTwMoviePlayerView::OnAnyButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMoviePlayerView.OnAnyButtonPressed");

	UTwMoviePlayerView_OnAnyButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMultiOptionModal.CreateModalWithOptions_BP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FText>           Options                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   TitleText                      (Parm, NativeAccessSpecifierPublic)
// struct FText                   BodyText                       (Parm, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bDismissable                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   DismissAction                  (Parm, NativeAccessSpecifierPublic)
void UTwMultiOptionModal::STATIC_CreateModalWithOptions_BP(class APlayerController* OwningPlayer, TArray<struct FText> Options, const struct FText& TitleText, const struct FText& BodyText, const struct FScriptDelegate& Callback, bool bDismissable, const struct FText& DismissAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMultiOptionModal.CreateModalWithOptions_BP");

	UTwMultiOptionModal_CreateModalWithOptions_BP_Params params;
	params.OwningPlayer = OwningPlayer;
	params.Options = Options;
	params.TitleText = TitleText;
	params.BodyText = BodyText;
	params.Callback = Callback;
	params.bDismissable = bDismissable;
	params.DismissAction = DismissAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwWidgetQueue.PumpQueue
// (Final, Native, Protected)
void UTwWidgetQueue::PumpQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwWidgetQueue.PumpQueue");

	UTwWidgetQueue_PumpQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwWidgetQueue.OnWidgetReadyForDestruction
// (Final, Native, Protected)
// Parameters:
// class UTwBaseWidget*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwWidgetQueue::OnWidgetReadyForDestruction(class UTwBaseWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwWidgetQueue.OnWidgetReadyForDestruction");

	UTwWidgetQueue_OnWidgetReadyForDestruction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwMultiWidgetQueue.OnWidgetQueueDestruction
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwMultiWidgetQueue::OnWidgetQueueDestruction(class UTwBaseWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwMultiWidgetQueue.OnWidgetQueueDestruction");

	UTwMultiWidgetQueue_OnWidgetQueueDestruction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwRadialProgressIcon.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewRadius                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwRadialProgressIcon::SetRadius(float NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwRadialProgressIcon.SetRadius");

	UTwRadialProgressIcon_SetRadius_Params params;
	params.NewRadius = NewRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwRadialProgressIcon.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwRadialProgressIcon::SetProgress(float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwRadialProgressIcon.SetProgress");

	UTwRadialProgressIcon_SetProgress_Params params;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwRadialProgressIcon.SetColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwRadialProgressIcon::SetColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwRadialProgressIcon.SetColor");

	UTwRadialProgressIcon_SetColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwRadioWidget.OnProcessButtonClick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      ButtonClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwRadioWidget::OnProcessButtonClick(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwRadioWidget.OnProcessButtonClick");

	UTwRadioWidget_OnProcessButtonClick_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwScreenSpaceConstrainedWidget.SetTargetActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwScreenSpaceConstrainedWidget::SetTargetActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwScreenSpaceConstrainedWidget.SetTargetActor");

	UTwScreenSpaceConstrainedWidget_SetTargetActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwToastManagerWidget.AddNewToast
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ToastWidgetClass               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToastData              ToastData                      (Parm, NativeAccessSpecifierPublic)
// class UTwToastWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwToastWidget* UTwToastManagerWidget::AddNewToast(class UClass* ToastWidgetClass, const struct FToastData& ToastData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwToastManagerWidget.AddNewToast");

	UTwToastManagerWidget_AddNewToast_Params params;
	params.ToastWidgetClass = ToastWidgetClass;
	params.ToastData = ToastData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwToastWidget.CreateToast
// (Final, Native, Static, Public)
// Parameters:
// class UClass*                  ToastWidgetClass               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*       Player                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBox*            VerticalBoxParent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FToastData              ToastData                      (Parm, NativeAccessSpecifierPublic)
// class UTwToastWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwToastWidget* UTwToastWidget::STATIC_CreateToast(class UClass* ToastWidgetClass, class APlayerController* Player, class UVerticalBox* VerticalBoxParent, const struct FToastData& ToastData)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwToastWidget.CreateToast");

	UTwToastWidget_CreateToast_Params params;
	params.ToastWidgetClass = ToastWidgetClass;
	params.Player = Player;
	params.VerticalBoxParent = VerticalBoxParent;
	params.ToastData = ToastData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwTooltipContainer.CreateBasicTooltip
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Header                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   Body                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   InputText                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwTooltipContainer::CreateBasicTooltip(const struct FText& Header, const struct FText& Body, const struct FText& InputText, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwTooltipContainer.CreateBasicTooltip");

	UTwTooltipContainer_CreateBasicTooltip_Params params;
	params.Header = Header;
	params.Body = Body;
	params.InputText = InputText;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForViewPop
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForViewPop(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForViewPop");

	UTwUIFunctionLibrary_IsKeyValidForViewPop_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForUITab
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForUITab(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForUITab");

	UTwUIFunctionLibrary_IsKeyValidForUITab_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightNavigation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForRightNavigation(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightNavigation");

	UTwUIFunctionLibrary_IsKeyValidForRightNavigation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightMenu
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForRightMenu(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForRightMenu");

	UTwUIFunctionLibrary_IsKeyValidForRightMenu_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForNavigation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForNavigation(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForNavigation");

	UTwUIFunctionLibrary_IsKeyValidForNavigation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftNavigation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForLeftNavigation(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftNavigation");

	UTwUIFunctionLibrary_IsKeyValidForLeftNavigation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftMenu
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForLeftMenu(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForLeftMenu");

	UTwUIFunctionLibrary_IsKeyValidForLeftMenu_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForHNavigation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForHNavigation(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForHNavigation");

	UTwUIFunctionLibrary_IsKeyValidForHNavigation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForConfirm
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsKeyValidForConfirm(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsKeyValidForConfirm");

	UTwUIFunctionLibrary_IsKeyValidForConfirm_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUIFunctionLibrary.IsConsoleActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwUIFunctionLibrary::STATIC_IsConsoleActive(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUIFunctionLibrary.IsConsoleActive");

	UTwUIFunctionLibrary_IsConsoleActive_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUMGAngleTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTwUMGAngleTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUMGAngleTweener.GetCurrentValue");

	UTwUMGAngleTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUMGAngleTweener.CreateUMGAngleTween
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenFinished                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwUMGAngleTweener*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwUMGAngleTweener* UTwUMGAngleTweener::STATIC_CreateUMGAngleTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUMGAngleTweener.CreateUMGAngleTween");

	UTwUMGAngleTweener_CreateUMGAngleTween_Params params;
	params.Widget = Widget;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.OnTweenFinished = OnTweenFinished;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUMGOpacityTweener.GetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTwUMGOpacityTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUMGOpacityTweener.GetCurrentValue");

	UTwUMGOpacityTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUMGOpacityTweener.CreateUMGOpacityTween
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenFinished                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UTwUMGOpacityTweener*    ReusableTweener                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwUMGOpacityTweener*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwUMGOpacityTweener* UTwUMGOpacityTweener::STATIC_CreateUMGOpacityTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, class UTwUMGOpacityTweener* ReusableTweener, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUMGOpacityTweener.CreateUMGOpacityTween");

	UTwUMGOpacityTweener_CreateUMGOpacityTween_Params params;
	params.Widget = Widget;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.OnTweenFinished = OnTweenFinished;
	params.ReusableTweener = ReusableTweener;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUMGScaleTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UTwUMGScaleTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUMGScaleTweener.GetCurrentValue");

	UTwUMGScaleTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwUMGScaleTweener.CreateUMGScaleTween
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenFinished                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwUMGScaleTweener*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwUMGScaleTweener* UTwUMGScaleTweener::STATIC_CreateUMGScaleTween(class UWidget* Widget, const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwUMGScaleTweener.CreateUMGScaleTween");

	UTwUMGScaleTweener_CreateUMGScaleTween_Params params;
	params.Widget = Widget;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.OnTweenFinished = OnTweenFinished;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwVector2DTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UTwVector2DTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwVector2DTweener.GetCurrentValue");

	UTwVector2DTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwVector2DTweener.CreateVector2DTween_BP
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D               ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenFinished                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwVector2DTweener*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwVector2DTweener* UTwVector2DTweener::STATIC_CreateVector2DTween_BP(const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwVector2DTweener.CreateVector2DTween_BP");

	UTwVector2DTweener_CreateVector2DTween_BP_Params params;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.OnTweenFinished = OnTweenFinished;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwVector3DTweener.GetCurrentValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTwVector3DTweener::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwVector3DTweener.GetCurrentValue");

	UTwVector3DTweener_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwVector3DTweener.CreateVector3DTween
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 FromValue                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ToValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          TweenDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EEasingFunc> Easing                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           TweenPingPong                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         OnTweenStep                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           AutoStart                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwVector3DTweener*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwVector3DTweener* UTwVector3DTweener::STATIC_CreateVector3DTween(const struct FVector& FromValue, const struct FVector& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwVector3DTweener.CreateVector3DTween");

	UTwVector3DTweener_CreateVector3DTween_Params params;
	params.FromValue = FromValue;
	params.ToValue = ToValue;
	params.TweenDuration = TweenDuration;
	params.Easing = Easing;
	params.TweenPingPong = TweenPingPong;
	params.OnTweenStep = OnTweenStep;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.PushView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ViewClass                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseView*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseView* UTwViewController::PushView(class UClass* ViewClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PushView");

	UTwViewController_PushView_Params params;
	params.ViewClass = ViewClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.PushModalInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseModal*            NewModal                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseModal*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseModal* UTwViewController::PushModalInstance(class UTwBaseModal* NewModal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PushModalInstance");

	UTwViewController_PushModalInstance_Params params;
	params.NewModal = NewModal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.PushModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ModalClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseModal*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseModal* UTwViewController::PushModal(class UClass* ModalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PushModal");

	UTwViewController_PushModal_Params params;
	params.ModalClass = ModalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.PopViewInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseView*             ViewToPop                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwViewController::PopViewInstance(class UTwBaseView* ViewToPop)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PopViewInstance");

	UTwViewController_PopViewInstance_Params params;
	params.ViewToPop = ViewToPop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwViewController.PopViewClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ModalClass                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwViewController::PopViewClass(class UClass* ModalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PopViewClass");

	UTwViewController_PopViewClass_Params params;
	params.ModalClass = ModalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwViewController.PopView
// (Final, Native, Public, BlueprintCallable)
void UTwViewController::PopView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PopView");

	UTwViewController_PopView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwViewController.PopModal
// (Final, Native, Public, BlueprintCallable)
void UTwViewController::PopModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.PopModal");

	UTwViewController_PopModal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwUIFramework.TwViewController.IsViewClassOnStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  View                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwViewController::IsViewClassOnStack(class UClass* View)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.IsViewClassOnStack");

	UTwViewController_IsViewClassOnStack_Params params;
	params.View = View;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.IsModalClassOnStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Modal                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTwViewController::IsModalClassOnStack(class UClass* Modal)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.IsModalClassOnStack");

	UTwViewController_IsModalClassOnStack_Params params;
	params.Modal = Modal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.GetActiveView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseView*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseView* UTwViewController::GetActiveView()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.GetActiveView");

	UTwViewController_GetActiveView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewController.GetActiveModal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTwBaseModal*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseModal* UTwViewController::GetActiveModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewController.GetActiveModal");

	UTwViewController_GetActiveModal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwUIFramework.TwViewFooter.OnUserInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwViewFooter::OnUserInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwUIFramework.TwViewFooter.OnUserInputDeviceChanged");

	UTwViewFooter_OnUserInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
