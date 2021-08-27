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

// Function ManeaterUI.AgeTierInfographicWidget.OnEvolutionUpgradeButton_BP_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      OnWidgetClicked                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAgeTierInfographicWidget::OnEvolutionUpgradeButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.AgeTierInfographicWidget.OnEvolutionUpgradeButton_BP_Clicked");

	UAgeTierInfographicWidget_OnEvolutionUpgradeButton_BP_Clicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.AttributesWidget.UpdateAttributes
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UAttributesWidget::UpdateAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.AttributesWidget.UpdateAttributes");

	UAttributesWidget_UpdateAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.AwarenessWidget.SetAwareness
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Awareness                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAwarenessWidget::SetAwareness(float Awareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.AwarenessWidget.SetAwareness");

	UAwarenessWidget_SetAwareness_Params params;
	params.Awareness = Awareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.BaseObjectiveDecorator.DelayedOutAnimation
// (Final, Native, Public)
void UBaseObjectiveDecorator::DelayedOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.BaseObjectiveDecorator.DelayedOutAnimation");

	UBaseObjectiveDecorator_DelayedOutAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapMarkerWidget.OnInteractButtonUp
// (Native, Public, BlueprintCallable)
void UMapMarkerWidget::OnInteractButtonUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapMarkerWidget.OnInteractButtonUp");

	UMapMarkerWidget_OnInteractButtonUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapMarkerWidget.OnInteractButtonDown
// (Native, Public, BlueprintCallable)
void UMapMarkerWidget::OnInteractButtonDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapMarkerWidget.OnInteractButtonDown");

	UMapMarkerWidget_OnInteractButtonDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapMarkerWidget.OnActiveFilterChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// ManeaterUI_EMarkerType         NewMarkerTypeFilter            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapMarkerWidget::OnActiveFilterChanged(ManeaterUI_EMarkerType NewMarkerTypeFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapMarkerWidget.OnActiveFilterChanged");

	UMapMarkerWidget_OnActiveFilterChanged_Params params;
	params.NewMarkerTypeFilter = NewMarkerTypeFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.BountyPanel.OnHunterButton_Focused
// (Final, Native, Protected)
// Parameters:
// class UHunterButtonWidget*     HunterButtonWidget             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBountyPanel::OnHunterButton_Focused(class UHunterButtonWidget* HunterButtonWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.BountyPanel.OnHunterButton_Focused");

	UBountyPanel_OnHunterButton_Focused_Params params;
	params.HunterButtonWidget = HunterButtonWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.BountyPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
void UBountyPanel::OnControllerDisconnectedModalDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.BountyPanel.OnControllerDisconnectedModalDismissed");

	UBountyPanel_OnControllerDisconnectedModalDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.BountyPanel.GetBountyDataForRank
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// unsigned char                  Rank                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_BountyTier*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_BountyTier* UBountyPanel::GetBountyDataForRank(unsigned char Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.BountyPanel.GetBountyDataForRank");

	UBountyPanel_GetBountyDataForRank_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.CompassWidget.RemoveTrackedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCompassWidget::RemoveTrackedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CompassWidget.RemoveTrackedActor");

	UCompassWidget_RemoveTrackedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.CompassWidget.OnAICombatStatusChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bInCombat                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*        AIActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCompassWidget::OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CompassWidget.OnAICombatStatusChanged");

	UCompassWidget_OnAICombatStatusChanged_Params params;
	params.bInCombat = bInCombat;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.CompassWidget.OnActorRequestingWidget
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCompassWidget::OnActorRequestingWidget(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CompassWidget.OnActorRequestingWidget");

	UCompassWidget_OnActorRequestingWidget_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.CompassWidget.OnActorRequestingRemoval
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCompassWidget::OnActorRequestingRemoval(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CompassWidget.OnActorRequestingRemoval");

	UCompassWidget_OnActorRequestingRemoval_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.CompassWidget.AddTrackedActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTrackedCompassActor    Actor                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCompassWidget::AddTrackedActor(const struct FTrackedCompassActor& Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CompassWidget.AddTrackedActor");

	UCompassWidget_AddTrackedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ContextualControlWidget.RemoveControlWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UContextualControlWidget::RemoveControlWidget(const struct FName& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ContextualControlWidget.RemoveControlWidget");

	UContextualControlWidget_RemoveControlWidget_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ContextualControlWidget.AddControlWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ControlText                    (Parm, NativeAccessSpecifierPublic)
// struct FName                   InputActionName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UContextualControlWidget::AddControlWidget(const struct FName& ControlName, const struct FText& ControlText, const struct FName& InputActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ContextualControlWidget.AddControlWidget");

	UContextualControlWidget_AddControlWidget_Params params;
	params.ControlName = ControlName;
	params.ControlText = ControlText;
	params.InputActionName = InputActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ControlsSettingsWidget.OnLayoutChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UControlsSettingsWidget::OnLayoutChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ControlsSettingsWidget.OnLayoutChanged");

	UControlsSettingsWidget_OnLayoutChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.CrosshairNavigationWidget.SetFocusedMarker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMapMarkerWidget*        _MapMarkerWidget               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCrosshairNavigationWidget::SetFocusedMarker(class UMapMarkerWidget* _MapMarkerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CrosshairNavigationWidget.SetFocusedMarker");

	UCrosshairNavigationWidget_SetFocusedMarker_Params params;
	params._MapMarkerWidget = _MapMarkerWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.CrosshairNavigationWidget.OnFocusedMarkerChanged
// (Event, Protected, BlueprintEvent)
void UCrosshairNavigationWidget::OnFocusedMarkerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.CrosshairNavigationWidget.OnFocusedMarkerChanged");

	UCrosshairNavigationWidget_OnFocusedMarkerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.DamageTextController.SpawnHealingText
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnPos                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDamageTextController::SpawnHealingText(const struct FVector& SpawnPos, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.DamageTextController.SpawnHealingText");

	UDamageTextController_SpawnHealingText_Params params;
	params.SpawnPos = SpawnPos;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.DamageTextController.SpawnEvadeText
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnPos                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDamageTextController::SpawnEvadeText(const struct FVector& SpawnPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.DamageTextController.SpawnEvadeText");

	UDamageTextController_SpawnEvadeText_Params params;
	params.SpawnPos = SpawnPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.DamageTextController.SpawnDamageText
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SpawnPos                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVulnerableVictim              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   AttackGameplayTags             (Parm, NativeAccessSpecifierPublic)
void UDamageTextController::SpawnDamageText(const struct FVector& SpawnPos, float Value, bool bVulnerableVictim, const struct FGameplayTagContainer& AttackGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.DamageTextController.SpawnDamageText");

	UDamageTextController_SpawnDamageText_Params params;
	params.SpawnPos = SpawnPos;
	params.Value = Value;
	params.bVulnerableVictim = bVulnerableVictim;
	params.AttackGameplayTags = AttackGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.DamageTextController.OnPlayerCausedCombatEvent
// (Final, Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// TEnumAsByte<Maneater_ECombatEventType> CombatEventType                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 WorldPos                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bVulnerableVictim              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   AttackGameplayTags             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDamageTextController::OnPlayerCausedCombatEvent(TEnumAsByte<Maneater_ECombatEventType> CombatEventType, const struct FVector& WorldPos, float Amount, bool bVulnerableVictim, const struct FGameplayTagContainer& AttackGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.DamageTextController.OnPlayerCausedCombatEvent");

	UDamageTextController_OnPlayerCausedCombatEvent_Params params;
	params.CombatEventType = CombatEventType;
	params.WorldPos = WorldPos;
	params.Amount = Amount;
	params.bVulnerableVictim = bVulnerableVictim;
	params.AttackGameplayTags = AttackGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.DeathView.OnButtonMouseOver
// (Final, Native, Protected)
// Parameters:
// class UTwBaseButton*           MouseOverWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathView::OnButtonMouseOver(class UTwBaseButton* MouseOverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.DeathView.OnButtonMouseOver");

	UDeathView_OnButtonMouseOver_Params params;
	params.MouseOverWidget = MouseOverWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.DeathView.OnButtonGainFoucus
// (Final, Native, Protected)
// Parameters:
// class UTwClickableWidget*      OnWidgetFocused                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDeathView::OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.DeathView.OnButtonGainFoucus");

	UDeathView_OnButtonGainFoucus_Params params;
	params.OnWidgetFocused = OnWidgetFocused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetComponent.GetContainer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnemyOverheadWidgetContainer* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnemyOverheadWidgetContainer* UEnemyOverheadWidgetComponent::GetContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetComponent.GetContainer");

	UEnemyOverheadWidgetComponent_GetContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnViewControllerVisibilityChanged
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ControllerVisibility           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnViewControllerVisibilityChanged(UMG_ESlateVisibility ControllerVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnViewControllerVisibilityChanged");

	UEnemyOverheadWidgetContainer_OnViewControllerVisibilityChanged_Params params;
	params.ControllerVisibility = ControllerVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnThreatStateChanged
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  InstigatingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnThreatStateChanged(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnThreatStateChanged");

	UEnemyOverheadWidgetContainer_OnThreatStateChanged_Params params;
	params.NewAlertState = NewAlertState;
	params.InstigatingActor = InstigatingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnRelatedObjectiveChanged
// (Final, Native, Protected)
// Parameters:
// Maneater_EObjectiveType        ObjectiveType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnRelatedObjectiveChanged(Maneater_EObjectiveType ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnRelatedObjectiveChanged");

	UEnemyOverheadWidgetContainer_OnRelatedObjectiveChanged_Params params;
	params.ObjectiveType = ObjectiveType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnTakeDamage
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnPawnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnTakeDamage");

	UEnemyOverheadWidgetContainer_OnPawnTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnKilled
// (Final, Native, Protected)
// Parameters:
// class AME_Character*           Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Killer                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnPawnKilled(class AME_Character* Victim, class AActor* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnKilled");

	UEnemyOverheadWidgetContainer_OnPawnKilled_Params params;
	params.Victim = Victim;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnHUDVisiblityChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnHUDVisiblityChanged(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnHUDVisiblityChanged");

	UEnemyOverheadWidgetContainer_OnHUDVisiblityChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnGamePauseStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bPaused                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnGamePauseStateChanged(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnGamePauseStateChanged");

	UEnemyOverheadWidgetContainer_OnGamePauseStateChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bCinematicMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnCinematicModeChanged");

	UEnemyOverheadWidgetContainer_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyOverheadWidgetContainer.OnBoatKilled
// (Final, Native, Protected)
// Parameters:
// class AME_VehiclePawn*         Victim                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyOverheadWidgetContainer::OnBoatKilled(class AME_VehiclePawn* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyOverheadWidgetContainer.OnBoatKilled");

	UEnemyOverheadWidgetContainer_OnBoatKilled_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.UpdateWidgetDangerSense
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DangerousActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyScreenSpaceWidgetContainer::UpdateWidgetDangerSense(class AActor* DangerousActor, bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyScreenSpaceWidgetContainer.UpdateWidgetDangerSense");

	UEnemyScreenSpaceWidgetContainer_UpdateWidgetDangerSense_Params params;
	params.DangerousActor = DangerousActor;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnScreenSpaceWidgetRequested
// (Final, Native, Protected)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEnemyScreenSpaceWidgetContainer::OnScreenSpaceWidgetRequested(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnScreenSpaceWidgetRequested");

	UEnemyScreenSpaceWidgetContainer_OnScreenSpaceWidgetRequested_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnSonarAbilityActivated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Duration                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionAbilityWidget::OnSonarAbilityActivated(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionAbilityWidget.OnSonarAbilityActivated");

	UEvolutionAbilityWidget_OnSonarAbilityActivated_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnSlottedEvolutionChanged
// (Final, Native, Protected)
// Parameters:
// Maneater_EEvolutionSlot        EvolutionSlot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionAbilityWidget::OnSlottedEvolutionChanged(Maneater_EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionAbilityWidget.OnSlottedEvolutionChanged");

	UEvolutionAbilityWidget_OnSlottedEvolutionChanged_Params params;
	params.EvolutionSlot = EvolutionSlot;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnEvolutionAbilityActivated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Duration                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionAbilityWidget::OnEvolutionAbilityActivated(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionAbilityWidget.OnEvolutionAbilityActivated");

	UEvolutionAbilityWidget_OnEvolutionAbilityActivated_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bCinematicMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionAbilityWidget::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionAbilityWidget.OnCinematicModeChanged");

	UEvolutionAbilityWidget_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionAbilityWidget.OnCharacterAttributesChanged
// (Final, Native, Protected)
void UEvolutionAbilityWidget::OnCharacterAttributesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionAbilityWidget.OnCharacterAttributesChanged");

	UEvolutionAbilityWidget_OnCharacterAttributesChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionIconButtonWidget.PlayUpgradeFX
// (Event, Public, BlueprintEvent)
void UEvolutionIconButtonWidget::PlayUpgradeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.PlayUpgradeFX");

	UEvolutionIconButtonWidget_PlayUpgradeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionSlot        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EEvolutionSlot UEvolutionIconButtonWidget::GetSlotType()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.GetSlotType");

	UEvolutionIconButtonWidget_GetSlotType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEvolutionIconButtonWidget::GetSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.GetSlotName");

	UEvolutionIconButtonWidget_GetSlotName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EvolutionIconButtonWidget.GetRarity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// Maneater_EEvolutionRarity      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EEvolutionRarity UEvolutionIconButtonWidget::GetRarity()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.GetRarity");

	UEvolutionIconButtonWidget_GetRarity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EvolutionIconButtonWidget.GetLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEvolutionIconButtonWidget::GetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.GetLocked");

	UEvolutionIconButtonWidget_GetLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EvolutionIconButtonWidget.GetIsEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEvolutionIconButtonWidget::GetIsEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.GetIsEquipped");

	UEvolutionIconButtonWidget_GetIsEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EvolutionIconButtonWidget.GetFocusWidgetForNavigation
// (Final, Native, Protected)
// Parameters:
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UEvolutionIconButtonWidget::GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionIconButtonWidget.GetFocusWidgetForNavigation");

	UEvolutionIconButtonWidget_GetFocusWidgetForNavigation_Params params;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolutionUpgrade_Pressed
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionListWidget::OnInventoryEvolutionUpgrade_Pressed(class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionListWidget.OnInventoryEvolutionUpgrade_Pressed");

	UEvolutionListWidget_OnInventoryEvolutionUpgrade_Pressed_Params params;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_MouseLeave
// (Final, Native, Protected)
// Parameters:
// class UTwBaseButton*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionListWidget::OnInventoryEvolution_MouseLeave(class UTwBaseButton* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_MouseLeave");

	UEvolutionListWidget_OnInventoryEvolution_MouseLeave_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Focused
// (Final, Native, Protected)
// Parameters:
// class UEvolutionIconButtonWidget* IconWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionListWidget::OnInventoryEvolution_Focused(class UEvolutionIconButtonWidget* IconWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Focused");

	UEvolutionListWidget_OnInventoryEvolution_Focused_Params params;
	params.IconWidget = IconWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionListWidget::OnInventoryEvolution_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Clicked");

	UEvolutionListWidget_OnInventoryEvolution_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionListWidget.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionListWidget::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionListWidget.OnInputDeviceChanged");

	UEvolutionListWidget_OnInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionListWidget.OnBackButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionListWidget::OnBackButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionListWidget.OnBackButton_Clicked");

	UEvolutionListWidget_OnBackButton_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.ShowTutorialPopupWidget
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::ShowTutorialPopupWidget(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.ShowTutorialPopupWidget");

	UEvolutionsPanel_ShowTutorialPopupWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionToUpgrade
// (Final, Native, Protected)
void UEvolutionsPanel::PlayTransitionToUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.PlayTransitionToUpgrade");

	UEvolutionsPanel_PlayTransitionToUpgrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionToSlots
// (Final, Native, Protected)
void UEvolutionsPanel::PlayTransitionToSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.PlayTransitionToSlots");

	UEvolutionsPanel_PlayTransitionToSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionToList
// (Final, Native, Protected)
void UEvolutionsPanel::PlayTransitionToList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.PlayTransitionToList");

	UEvolutionsPanel_PlayTransitionToList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.PlayTransitionOutOfUpgrade
// (Final, Native, Protected)
void UEvolutionsPanel::PlayTransitionOutOfUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.PlayTransitionOutOfUpgrade");

	UEvolutionsPanel_PlayTransitionOutOfUpgrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.PlayGrowthAnimation
// (Event, Protected, BlueprintCallable, BlueprintEvent)
void UEvolutionsPanel::PlayGrowthAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.PlayGrowthAnimation");

	UEvolutionsPanel_PlayGrowthAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnSlottedEvolutionChanged
// (Final, Native, Protected)
// Parameters:
// Maneater_EEvolutionSlot        EvolutionSlot                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::OnSlottedEvolutionChanged(Maneater_EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnSlottedEvolutionChanged");

	UEvolutionsPanel_OnSlottedEvolutionChanged_Params params;
	params.EvolutionSlot = EvolutionSlot;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Focused
// (Final, Native, Protected)
// Parameters:
// class UEvolutionIconButtonWidget* IconWidge                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::OnSlotButtonWidget_Focused(class UEvolutionIconButtonWidget* IconWidge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Focused");

	UEvolutionsPanel_OnSlotButtonWidget_Focused_Params params;
	params.IconWidge = IconWidge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::OnSlotButtonWidget_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Clicked");

	UEvolutionsPanel_OnSlotButtonWidget_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnShark_GrowthStageChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::OnShark_GrowthStageChanged(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnShark_GrowthStageChanged");

	UEvolutionsPanel_OnShark_GrowthStageChanged_Params params;
	params.OldGrowthStage = OldGrowthStage;
	params.NewGrowthStage = NewGrowthStage;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnInventoryEvolutionChanged
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsUpgrade                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnInventoryEvolutionChanged");

	UEvolutionsPanel_OnInventoryEvolutionChanged_Params params;
	params.Evolution = Evolution;
	params.IsUpgrade = IsUpgrade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
void UEvolutionsPanel::OnControllerDisconnectedModalDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnControllerDisconnectedModalDismissed");

	UEvolutionsPanel_OnControllerDisconnectedModalDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.OnAgeTierWidgetDismissed
// (Final, Native, Protected)
void UEvolutionsPanel::OnAgeTierWidgetDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.OnAgeTierWidgetDismissed");

	UEvolutionsPanel_OnAgeTierWidgetDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.HandleUpgradeButton_Pressed
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::HandleUpgradeButton_Pressed(class UME_PlayerEvolution* Evolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.HandleUpgradeButton_Pressed");

	UEvolutionsPanel_HandleUpgradeButton_Pressed_Params params;
	params.Evolution = Evolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.HandleEvolutionListItem_Focused
// (Final, Native, Protected)
// Parameters:
// class UEvolutionIconButtonWidget* IconWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EEvolutionSlot        SlotType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::HandleEvolutionListItem_Focused(class UEvolutionIconButtonWidget* IconWidget, Maneater_EEvolutionSlot SlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.HandleEvolutionListItem_Focused");

	UEvolutionsPanel_HandleEvolutionListItem_Focused_Params params;
	params.IconWidget = IconWidget;
	params.SlotType = SlotType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.ConstructTooltip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEvolutionData          EvolutionData                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                           HideCost                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           HideUpgrade                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionsPanel::ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, bool HideCost, bool HideUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.ConstructTooltip");

	UEvolutionsPanel_ConstructTooltip_Params params;
	params.Evolution = Evolution;
	params.EvolutionData = EvolutionData;
	params.HideCost = HideCost;
	params.HideUpgrade = HideUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionsPanel.CantUseUntilGrottoPopup
// (Final, Native, Protected)
void UEvolutionsPanel::CantUseUntilGrottoPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionsPanel.CantUseUntilGrottoPopup");

	UEvolutionsPanel_CantUseUntilGrottoPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionUpgradeWidget.OnUpgradeButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionUpgradeWidget::OnUpgradeButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionUpgradeWidget.OnUpgradeButton_Clicked");

	UEvolutionUpgradeWidget_OnUpgradeButton_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionUpgradeWidget.OnCancelButton_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEvolutionUpgradeWidget::OnCancelButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionUpgradeWidget.OnCancelButton_Clicked");

	UEvolutionUpgradeWidget_OnCancelButton_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.EvolutionUpgradeWidget.ConstructTooltip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEvolutionData          EvolutionData                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEvolutionData          UpgradedEvolutionData          (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UEvolutionUpgradeWidget::ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, const struct FEvolutionData& UpgradedEvolutionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.EvolutionUpgradeWidget.ConstructTooltip");

	UEvolutionUpgradeWidget_ConstructTooltip_Params params;
	params.Evolution = Evolution;
	params.EvolutionData = EvolutionData;
	params.UpgradedEvolutionData = UpgradedEvolutionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnViewControllerVisibilityChanged
// (Final, Native, Protected)
// Parameters:
// UMG_ESlateVisibility           ControllerVisibility           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExplosiveIndicatorScreenSpaceWidget::OnViewControllerVisibilityChanged(UMG_ESlateVisibility ControllerVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnViewControllerVisibilityChanged");

	UExplosiveIndicatorScreenSpaceWidget_OnViewControllerVisibilityChanged_Params params;
	params.ControllerVisibility = ControllerVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExplosiveIndicatorScreenSpaceWidget::OnHUDVisiblityChanged(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged");

	UExplosiveIndicatorScreenSpaceWidget_OnHUDVisiblityChanged_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bPaused                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExplosiveIndicatorScreenSpaceWidget::OnGamePauseStateChanged(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged");

	UExplosiveIndicatorScreenSpaceWidget_OnGamePauseStateChanged_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnCinematicModeChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bCinematicMode                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExplosiveIndicatorScreenSpaceWidget::OnCinematicModeChanged(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnCinematicModeChanged");

	UExplosiveIndicatorScreenSpaceWidget_OnCinematicModeChanged_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnVibrationChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnVibrationChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnVibrationChanged");

	UGameplaySettingsWidget_OnVibrationChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnTutorialPopupChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnTutorialPopupChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnTutorialPopupChanged");

	UGameplaySettingsWidget_OnTutorialPopupChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnSubtitlesChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnSubtitlesChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnSubtitlesChanged");

	UGameplaySettingsWidget_OnSubtitlesChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnSprintChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnSprintChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnSprintChanged");

	UGameplaySettingsWidget_OnSprintChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnRightStickSensitivityChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnRightStickSensitivityChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnRightStickSensitivityChanged");

	UGameplaySettingsWidget_OnRightStickSensitivityChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnRaytracingChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnRaytracingChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnRaytracingChanged");

	UGameplaySettingsWidget_OnRaytracingChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnMouseSensitivityChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnMouseSensitivityChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnMouseSensitivityChanged");

	UGameplaySettingsWidget_OnMouseSensitivityChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnInvertMouseYChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnInvertMouseYChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnInvertMouseYChanged");

	UGameplaySettingsWidget_OnInvertMouseYChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GameplaySettingsWidget.OnInvertGamepadYChanged
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplaySettingsWidget::OnInvertGamepadYChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GameplaySettingsWidget.OnInvertGamepadYChanged");

	UGameplaySettingsWidget_OnInvertGamepadYChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GrottoMapMarkerWidget.OnMarkerUpdated
// (Event, Protected, BlueprintEvent)
void UGrottoMapMarkerWidget::OnMarkerUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GrottoMapMarkerWidget.OnMarkerUpdated");

	UGrottoMapMarkerWidget_OnMarkerUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.GrottoMapMarkerWidget.FastTravel
// (Final, Native, Public, BlueprintCallable)
void UGrottoMapMarkerWidget::FastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.GrottoMapMarkerWidget.FastTravel");

	UGrottoMapMarkerWidget_FastTravel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.HUDRewardQueueWidget.OnWidgetQueueDestruction
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHUDRewardQueueWidget::OnWidgetQueueDestruction(class UTwBaseWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.HUDRewardQueueWidget.OnWidgetQueueDestruction");

	UHUDRewardQueueWidget_OnWidgetQueueDestruction_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.HUDRewardQueueWidget.OnInventoryEvolutionChanged
// (Final, Native, Public)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           IsUpgrade                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHUDRewardQueueWidget::OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.HUDRewardQueueWidget.OnInventoryEvolutionChanged");

	UHUDRewardQueueWidget_OnInventoryEvolutionChanged_Params params;
	params.Evolution = Evolution;
	params.IsUpgrade = IsUpgrade;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.HUDTipInfo.Disable
// (Final, Native, Protected)
void UHUDTipInfo::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.HUDTipInfo.Disable");

	UHUDTipInfo_Disable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.InfamyRankUpWidget.OnAnimStart_BP
// (Event, Public, BlueprintEvent)
void UInfamyRankUpWidget::OnAnimStart_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.InfamyRankUpWidget.OnAnimStart_BP");

	UInfamyRankUpWidget_OnAnimStart_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.InfamyRankUpWidget.OnAnimEnd_BP
// (Event, Public, BlueprintEvent)
void UInfamyRankUpWidget::OnAnimEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.InfamyRankUpWidget.OnAnimEnd_BP");

	UInfamyRankUpWidget_OnAnimEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.InGameMenuView.OpenEvolutionPanel_BP
// (Event, Public, BlueprintEvent)
void UInGameMenuView::OpenEvolutionPanel_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.InGameMenuView.OpenEvolutionPanel_BP");

	UInGameMenuView_OpenEvolutionPanel_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.InGameMenuView.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInGameMenuView::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.InGameMenuView.OnInputDeviceChanged");

	UInGameMenuView_OnInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.InvertedControlsWidget.OnAnyButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      WidgetClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInvertedControlsWidget::OnAnyButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.InvertedControlsWidget.OnAnyButtonClicked");

	UInvertedControlsWidget_OnAnyButtonClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.WidgetClicked = WidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.KeyMappingSettingsWidget.RedrawKeybinds
// (Final, Native, Public)
void UKeyMappingSettingsWidget::RedrawKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.KeyMappingSettingsWidget.RedrawKeybinds");

	UKeyMappingSettingsWidget_RedrawKeybinds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LandmarkMapMarkerWidget.OnMarkerUpdated
// (Event, Protected, BlueprintEvent)
void ULandmarkMapMarkerWidget::OnMarkerUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LandmarkMapMarkerWidget.OnMarkerUpdated");

	ULandmarkMapMarkerWidget_OnMarkerUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.UpdateProgress
// (Final, Native, Public, BlueprintCallable)
void ULevelProgressWidget::UpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.UpdateProgress");

	ULevelProgressWidget_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnTweenStep(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnTweenStep");

	ULevelProgressWidget_OnTweenStep_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_NutrientGained
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NutrientGain                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromObjective                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnShark_NutrientGained(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientGain, bool bFromObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnShark_NutrientGained");

	ULevelProgressWidget_OnShark_NutrientGained_Params params;
	params.NutrientType = NutrientType;
	params.NutrientGain = NutrientGain;
	params.bFromObjective = bFromObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_LevelChanged
// (Final, Native, Protected)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnShark_LevelChanged(int NewLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnShark_LevelChanged");

	ULevelProgressWidget_OnShark_LevelChanged_Params params;
	params.NewLevel = NewLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthStageAvailable
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnShark_GrowthStageAvailable(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnShark_GrowthStageAvailable");

	ULevelProgressWidget_OnShark_GrowthStageAvailable_Params params;
	params.OldGrowthStage = OldGrowthStage;
	params.NewGrowthStage = NewGrowthStage;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthLevelChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnShark_GrowthLevelChanged(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnShark_GrowthLevelChanged");

	ULevelProgressWidget_OnShark_GrowthLevelChanged_Params params;
	params.OldGrowthStage = OldGrowthStage;
	params.NewGrowthStage = NewGrowthStage;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnOpacityTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnOpacityTweenStep(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnOpacityTweenStep");

	ULevelProgressWidget_OnOpacityTweenStep_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnOpacityOutFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnOpacityOutFinished(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnOpacityOutFinished");

	ULevelProgressWidget_OnOpacityOutFinished_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnOpacityInFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelProgressWidget::OnOpacityInFinished(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnOpacityInFinished");

	ULevelProgressWidget_OnOpacityInFinished_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LevelProgressWidget.OnLifetimeEnded
// (Final, Native, Protected)
void ULevelProgressWidget::OnLifetimeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LevelProgressWidget.OnLifetimeEnded");

	ULevelProgressWidget_OnLifetimeEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LoadGameButtonWidget.SetProfileData
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FText                   SlotName                       (Parm, NativeAccessSpecifierPublic)
// struct FDateTime               SaveTime                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   CurrentRegion                  (Parm, NativeAccessSpecifierPublic)
// struct FText                   PlayerLevel                    (Parm, NativeAccessSpecifierPublic)
// struct FText                   TimePlayed                     (Parm, NativeAccessSpecifierPublic)
// class UTexture2D*              SaveImage                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoadGameButtonWidget::SetProfileData(const struct FText& SlotName, const struct FDateTime& SaveTime, const struct FText& CurrentRegion, const struct FText& PlayerLevel, const struct FText& TimePlayed, class UTexture2D* SaveImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LoadGameButtonWidget.SetProfileData");

	ULoadGameButtonWidget_SetProfileData_Params params;
	params.SlotName = SlotName;
	params.SaveTime = SaveTime;
	params.CurrentRegion = CurrentRegion;
	params.PlayerLevel = PlayerLevel;
	params.TimePlayed = TimePlayed;
	params.SaveImage = SaveImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LoadGameButtonWidget.SetIsEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Empty                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULoadGameButtonWidget::SetIsEmpty(bool Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LoadGameButtonWidget.SetIsEmpty");

	ULoadGameButtonWidget_SetIsEmpty_Params params;
	params.Empty = Empty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.LoadGameButtonWidget.LoadGame
// (Final, Native, Public, BlueprintCallable)
void ULoadGameButtonWidget::LoadGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.LoadGameButtonWidget.LoadGame");

	ULoadGameButtonWidget_LoadGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.UpdateMeters
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   RegionName                     (Parm, NativeAccessSpecifierPublic)
// class UTexture2D*              RegionIcon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsRegionPoisoned              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OldRegionPerc                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewRegionPerc                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          OldGamePerc                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewGamePerc                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMacroObjectiveMeterWidget::UpdateMeters(const struct FText& RegionName, class UTexture2D* RegionIcon, bool bIsRegionPoisoned, float OldRegionPerc, float NewRegionPerc, float OldGamePerc, float NewGamePerc)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.UpdateMeters");

	UMacroObjectiveMeterWidget_UpdateMeters_Params params;
	params.RegionName = RegionName;
	params.RegionIcon = RegionIcon;
	params.bIsRegionPoisoned = bIsRegionPoisoned;
	params.OldRegionPerc = OldRegionPerc;
	params.NewRegionPerc = NewRegionPerc;
	params.OldGamePerc = OldGamePerc;
	params.NewGamePerc = NewGamePerc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.PostCompleteDelay
// (Final, Native, Protected)
void UMacroObjectiveMeterWidget::PostCompleteDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.PostCompleteDelay");

	UMacroObjectiveMeterWidget_PostCompleteDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionStepEvent
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMacroObjectiveMeterWidget::OnRegionStepEvent(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionStepEvent");

	UMacroObjectiveMeterWidget_OnRegionStepEvent_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionCompleteEvent
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMacroObjectiveMeterWidget::OnRegionCompleteEvent(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionCompleteEvent");

	UMacroObjectiveMeterWidget_OnRegionCompleteEvent_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeOutComplete
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMacroObjectiveMeterWidget::OnOpacityFadeOutComplete(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeOutComplete");

	UMacroObjectiveMeterWidget_OnOpacityFadeOutComplete_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeInComplete
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMacroObjectiveMeterWidget::OnOpacityFadeInComplete(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeInComplete");

	UMacroObjectiveMeterWidget_OnOpacityFadeInComplete_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MacroObjectiveMeterWidget.OnGameStepEvent
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMacroObjectiveMeterWidget::OnGameStepEvent(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MacroObjectiveMeterWidget.OnGameStepEvent");

	UMacroObjectiveMeterWidget_OnGameStepEvent_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterBaseViewController.OnInputDeviceChanged
// (Final, Native, Protected)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterBaseViewController::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterBaseViewController.OnInputDeviceChanged");

	UManeaterBaseViewController_OnInputDeviceChanged_Params params;
	params.Device = Device;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.TutorialPopupDismissed
// (Final, Native, Public)
void AManeaterHUD::TutorialPopupDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.TutorialPopupDismissed");

	AManeaterHUD_TutorialPopupDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ToggleSpeedometer
// (Final, Exec, Native, Public)
void AManeaterHUD::ToggleSpeedometer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ToggleSpeedometer");

	AManeaterHUD_ToggleSpeedometer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ThreatAdded
// (Final, Native, Protected)
void AManeaterHUD::ThreatAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ThreatAdded");

	AManeaterHUD_ThreatAdded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.StoryCompleteWidgetDismissed
// (Final, Native, Public)
void AManeaterHUD::StoryCompleteWidgetDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.StoryCompleteWidgetDismissed");

	AManeaterHUD_StoryCompleteWidgetDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ShowTutorialSinglePopupWidget
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PageCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::ShowTutorialSinglePopupWidget(int Index, int PageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ShowTutorialSinglePopupWidget");

	AManeaterHUD_ShowTutorialSinglePopupWidget_Params params;
	params.Index = Index;
	params.PageCount = PageCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ShowStoryCompletePopup
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::ShowStoryCompletePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ShowStoryCompletePopup");

	AManeaterHUD_ShowStoryCompletePopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ShowRegionToast
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegionToastData        Data                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AManeaterHUD::ShowRegionToast(const struct FRegionToastData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ShowRegionToast");

	AManeaterHUD_ShowRegionToast_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ShowInvertedControlsPopup
// (Final, Native, Public)
void AManeaterHUD::ShowInvertedControlsPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ShowInvertedControlsPopup");

	AManeaterHUD_ShowInvertedControlsPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ShowDevSettings
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::ShowDevSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ShowDevSettings");

	AManeaterHUD_ShowDevSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ShowBasicTooltip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Header                         (Parm, NativeAccessSpecifierPublic)
// struct FText                   Body                           (Parm, NativeAccessSpecifierPublic)
// struct FText                   InputText                      (Parm, NativeAccessSpecifierPublic)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::ShowBasicTooltip(const struct FText& Header, const struct FText& Body, const struct FText& InputText, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ShowBasicTooltip");

	AManeaterHUD_ShowBasicTooltip_Params params;
	params.Header = Header;
	params.Body = Body;
	params.InputText = InputText;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.SetPlayerWaypoint
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D               Pos                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::SetPlayerWaypoint(const struct FVector2D& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.SetPlayerWaypoint");

	AManeaterHUD_SetPlayerWaypoint_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.SetDeathScreenEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::SetDeathScreenEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.SetDeathScreenEnabled");

	AManeaterHUD_SetDeathScreenEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.RemoveContextualControlPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::RemoveContextualControlPrompt(const struct FName& ControlName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.RemoveContextualControlPrompt");

	AManeaterHUD_RemoveContextualControlPrompt_Params params;
	params.ControlName = ControlName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PushDeathView
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::PushDeathView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PushDeathView");

	AManeaterHUD_PushDeathView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PushDeathScreen
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::PushDeathScreen(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PushDeathScreen");

	AManeaterHUD_PushDeathScreen_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PushCreditsScreen
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::PushCreditsScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PushCreditsScreen");

	AManeaterHUD_PushCreditsScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PushCinematicView
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::PushCinematicView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PushCinematicView");

	AManeaterHUD_PushCinematicView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PopCinematicView
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::PopCinematicView()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PopCinematicView");

	AManeaterHUD_PopCinematicView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PlayerKnifingStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bIsKnifing                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::PlayerKnifingStateChanged(bool bIsKnifing, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PlayerKnifingStateChanged");

	AManeaterHUD_PlayerKnifingStateChanged_Params params;
	params.bIsKnifing = bIsKnifing;
	params.ChangeContext = ChangeContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PlayerInfamyRankUp
// (Final, Native, Protected)
// Parameters:
// int                            Rank                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::PlayerInfamyRankUp(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PlayerInfamyRankUp");

	AManeaterHUD_PlayerInfamyRankUp_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.PauseGame
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::PauseGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.PauseGame");

	AManeaterHUD_PauseGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnZeroOutStats
// (Final, Native, Protected)
void AManeaterHUD::OnZeroOutStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnZeroOutStats");

	AManeaterHUD_OnZeroOutStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnTimeDilationEvent
// (Final, Native, Protected)
// Parameters:
// bool                           bStarted                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Maneater_ECharacterActionMode> ActionMode                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnTimeDilationEvent(bool bStarted, TEnumAsByte<Maneater_ECharacterActionMode> ActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnTimeDilationEvent");

	AManeaterHUD_OnTimeDilationEvent_Params params;
	params.bStarted = bStarted;
	params.ActionMode = ActionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnThrashUIChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerSharkThrashed           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnThrashUIChanged(bool bShow, bool bPlayerSharkThrashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnThrashUIChanged");

	AManeaterHUD_OnThrashUIChanged_Params params;
	params.bShow = bShow;
	params.bPlayerSharkThrashed = bPlayerSharkThrashed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnStoryEventProgress
// (Final, Native, Protected)
// Parameters:
// int                            CurrentStoryIndex              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ConditionText                  (Parm, NativeAccessSpecifierPublic)
// float                          StoryProgress                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnStoryEventProgress(int CurrentStoryIndex, const struct FText& ConditionText, float StoryProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnStoryEventProgress");

	AManeaterHUD_OnStoryEventProgress_Params params;
	params.CurrentStoryIndex = CurrentStoryIndex;
	params.ConditionText = ConditionText;
	params.StoryProgress = StoryProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnSonarUntarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnSonarUntarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnSonarUntarget");

	AManeaterHUD_OnSonarUntarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnSonarTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnSonarTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnSonarTarget");

	AManeaterHUD_OnSonarTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnSonarRefreshTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnSonarRefreshTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnSonarRefreshTarget");

	AManeaterHUD_OnSonarRefreshTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnSonarAbilityActivated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Duration                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnSonarAbilityActivated(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnSonarAbilityActivated");

	AManeaterHUD_OnSonarAbilityActivated_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerTookDamage
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnPlayerTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnPlayerTookDamage");

	AManeaterHUD_OnPlayerTookDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerThrash
// (Final, Native, Protected)
void AManeaterHUD::OnPlayerThrash()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnPlayerThrash");

	AManeaterHUD_OnPlayerThrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerStruggle
// (Final, Native, Protected)
void AManeaterHUD::OnPlayerStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnPlayerStruggle");

	AManeaterHUD_OnPlayerStruggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerRegionChanged
// (Final, Native, Protected)
// Parameters:
// Maneater_EWorldRegion          Region                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              RegionIcon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnPlayerRegionChanged(Maneater_EWorldRegion Region, class UTexture2D* RegionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnPlayerRegionChanged");

	AManeaterHUD_OnPlayerRegionChanged_Params params;
	params.Region = Region;
	params.RegionIcon = RegionIcon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerNutrientGained
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NutrientGain                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromObjective                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnPlayerNutrientGained(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientGain, bool bFromObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnPlayerNutrientGained");

	AManeaterHUD_OnPlayerNutrientGained_Params params;
	params.NutrientType = NutrientType;
	params.NutrientGain = NutrientGain;
	params.bFromObjective = bFromObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnPlayerMovementModeChanged
// (Final, Native, Protected)
// Parameters:
// class AME_PlayerSharkCharacter* PlayerShark                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EMovementMode> OldMovementMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnPlayerMovementModeChanged(class AME_PlayerSharkCharacter* PlayerShark, TEnumAsByte<Engine_EMovementMode> OldMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnPlayerMovementModeChanged");

	AManeaterHUD_OnPlayerMovementModeChanged_Params params;
	params.PlayerShark = PlayerShark;
	params.OldMovementMode = OldMovementMode;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveUpdated
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnObjectiveUpdated(class UME_PlayerObjective* PlayerObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnObjectiveUpdated");

	AManeaterHUD_OnObjectiveUpdated_Params params;
	params.PlayerObjective = PlayerObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldTrack                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoTrackerUpdate               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnObjectiveTrack");

	AManeaterHUD_OnObjectiveTrack_Params params;
	params.PlayerObjective = PlayerObjective;
	params.bShouldTrack = bShouldTrack;
	params.bNoTrackerUpdate = bNoTrackerUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveStateChanged
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EObjectiveState       NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnObjectiveStateChanged(class UME_PlayerObjective* Objective, Maneater_EObjectiveState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnObjectiveStateChanged");

	AManeaterHUD_OnObjectiveStateChanged_Params params;
	params.Objective = Objective;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveStarted
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnObjectiveStarted(class UME_PlayerObjective* PlayerObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnObjectiveStarted");

	AManeaterHUD_OnObjectiveStarted_Params params;
	params.PlayerObjective = PlayerObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveDiscovered
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnObjectiveDiscovered(class UME_PlayerObjective* PlayerObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnObjectiveDiscovered");

	AManeaterHUD_OnObjectiveDiscovered_Params params;
	params.PlayerObjective = PlayerObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnObjectiveComplete
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnObjectiveComplete(class UME_PlayerObjective* PlayerObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnObjectiveComplete");

	AManeaterHUD_OnObjectiveComplete_Params params;
	params.PlayerObjective = PlayerObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnNewSoftTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnNewSoftTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnNewSoftTarget");

	AManeaterHUD_OnNewSoftTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnNewRelevantTarget
// (Final, Native, Protected)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnNewRelevantTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnNewRelevantTarget");

	AManeaterHUD_OnNewRelevantTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnNewQuestAvailableChanged
// (Final, Native, Protected)
void AManeaterHUD::OnNewQuestAvailableChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnNewQuestAvailableChanged");

	AManeaterHUD_OnNewQuestAvailableChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnLevelChanged
// (Final, Native, Protected)
// Parameters:
// int                            growthLevel                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnLevelChanged(int growthLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnLevelChanged");

	AManeaterHUD_OnLevelChanged_Params params;
	params.growthLevel = growthLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnLandmarkObjectFound
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   LandmarkDescription            (Parm, NativeAccessSpecifierPublic)
void AManeaterHUD::OnLandmarkObjectFound(class UME_PlayerObjective* PlayerObjective, const struct FText& LandmarkDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnLandmarkObjectFound");

	AManeaterHUD_OnLandmarkObjectFound_Params params;
	params.PlayerObjective = PlayerObjective;
	params.LandmarkDescription = LandmarkDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnHudTipRequested
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FME_TutorialTipEvent    ME_TutorialEvent               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AManeaterHUD::OnHudTipRequested(const struct FME_TutorialTipEvent& ME_TutorialEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnHudTipRequested");

	AManeaterHUD_OnHudTipRequested_Params params;
	params.ME_TutorialEvent = ME_TutorialEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnHUDErrorMessage
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AManeaterHUD::OnHUDErrorMessage(const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnHUDErrorMessage");

	AManeaterHUD_OnHUDErrorMessage_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnGameplayTagRemoved
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer   TagsRemoved                    (ConstParm, Parm, NativeAccessSpecifierPublic)
void AManeaterHUD::OnGameplayTagRemoved(const struct FGameplayTagContainer& TagsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnGameplayTagRemoved");

	AManeaterHUD_OnGameplayTagRemoved_Params params;
	params.TagsRemoved = TagsRemoved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnGameplayTagAdded
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// float                          TagDuration                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnGameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnGameplayTagAdded");

	AManeaterHUD_OnGameplayTagAdded_Params params;
	params.TagsAdded = TagsAdded;
	params.TagDuration = TagDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnEvolutionAbilityActivated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Duration                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnEvolutionAbilityActivated(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnEvolutionAbilityActivated");

	AManeaterHUD_OnEvolutionAbilityActivated_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnDangerSenseUpdated
// (Final, Native, Protected)
// Parameters:
// class AActor*                  DangerousActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnDangerSenseUpdated(class AActor* DangerousActor, bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnDangerSenseUpdated");

	AManeaterHUD_OnDangerSenseUpdated_Params params;
	params.DangerousActor = DangerousActor;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnCharacterAttributesChanged
// (Final, Native, Protected)
void AManeaterHUD::OnCharacterAttributesChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnCharacterAttributesChanged");

	AManeaterHUD_OnCharacterAttributesChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnBountyBossSpawned
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FBountyViewData         BountyData                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void AManeaterHUD::OnBountyBossSpawned(const struct FBountyViewData& BountyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnBountyBossSpawned");

	AManeaterHUD_OnBountyBossSpawned_Params params;
	params.BountyData = BountyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnBossFightAvailable
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjectiveBoss* BossObjective                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnBossFightAvailable");

	AManeaterHUD_OnBossFightAvailable_Params params;
	params.BossObjective = BossObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnAICombatStatusChanged
// (Final, Native, Protected)
// Parameters:
// bool                           bInCombat                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AME_AIController*        AIActor                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnAICombatStatusChanged");

	AManeaterHUD_OnAICombatStatusChanged_Params params;
	params.bInCombat = bInCombat;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnAdvancedToNextEpisode
// (Final, Native, Protected)
// Parameters:
// int                            CurrentStoryEventIndex         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnAdvancedToNextEpisode(int CurrentStoryEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnAdvancedToNextEpisode");

	AManeaterHUD_OnAdvancedToNextEpisode_Params params;
	params.CurrentStoryEventIndex = CurrentStoryEventIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.OnAbilityTriggered
// (Final, Native, Protected)
// Parameters:
// Maneater_EME_CharacterAbility  CharacterAbilityEnum           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag            AbilityTag                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::OnAbilityTriggered(Maneater_EME_CharacterAbility CharacterAbilityEnum, const struct FGameplayTag& AbilityTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.OnAbilityTriggered");

	AManeaterHUD_OnAbilityTriggered_Params params;
	params.CharacterAbilityEnum = CharacterAbilityEnum;
	params.AbilityTag = AbilityTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.InvertedControlsPopupDismissed
// (Final, Native, Public)
void AManeaterHUD::InvertedControlsPopupDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.InvertedControlsPopupDismissed");

	AManeaterHUD_InvertedControlsPopupDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.GetTutorialModal
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*           ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseWidget* AManeaterHUD::GetTutorialModal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.GetTutorialModal");

	AManeaterHUD_GetTutorialModal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterHUD.GetHUDViewController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UManeaterHUDViewController* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UManeaterHUDViewController* AManeaterHUD::GetHUDViewController()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.GetHUDViewController");

	AManeaterHUD_GetHUDViewController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterHUD.EnableCinematicMode
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::EnableCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.EnableCinematicMode");

	AManeaterHUD_EnableCinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.DisableCinematicMode
// (Final, Native, Public, BlueprintCallable)
void AManeaterHUD::DisableCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.DisableCinematicMode");

	AManeaterHUD_DisableCinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.ClearPlayerWaypoint
// (Final, Native, Public)
void AManeaterHUD::ClearPlayerWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.ClearPlayerWaypoint");

	AManeaterHUD_ClearPlayerWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.BountyEnding
// (Final, Native, Protected)
void AManeaterHUD::BountyEnding()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.BountyEnding");

	AManeaterHUD_BountyEnding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.BountyBeginning
// (Final, Native, Protected)
void AManeaterHUD::BountyBeginning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.BountyBeginning");

	AManeaterHUD_BountyBeginning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUD.AddContextualControlPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ButtonText                     (Parm, NativeAccessSpecifierPublic)
// struct FName                   InputActionName                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AManeaterHUD::AddContextualControlPrompt(const struct FName& ControlName, const struct FText& ButtonText, const struct FName& InputActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUD.AddContextualControlPrompt");

	AManeaterHUD_AddContextualControlPrompt_Params params;
	params.ControlName = ControlName;
	params.ButtonText = ButtonText;
	params.InputActionName = InputActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDPauseMenuView.OnQuit_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterHUDPauseMenuView::OnQuit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDPauseMenuView.OnQuit_Clicked");

	UManeaterHUDPauseMenuView_OnQuit_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonMouseOver
// (Final, Native, Protected)
// Parameters:
// class UTwBaseButton*           MouseOverWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterHUDPauseMenuView::OnButtonMouseOver(class UTwBaseButton* MouseOverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonMouseOver");

	UManeaterHUDPauseMenuView_OnButtonMouseOver_Params params;
	params.MouseOverWidget = MouseOverWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonGainFoucus
// (Final, Native, Protected)
// Parameters:
// class UTwClickableWidget*      OnWidgetFocused                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterHUDPauseMenuView::OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonGainFoucus");

	UManeaterHUDPauseMenuView_OnButtonGainFoucus_Params params;
	params.OnWidgetFocused = OnWidgetFocused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDView.TutorialSinglePopupDismissed
// (Final, Native, Public)
void UManeaterHUDView::TutorialSinglePopupDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.TutorialSinglePopupDismissed");

	UManeaterHUDView_TutorialSinglePopupDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDView.StoryCompleteWidgetDismissed
// (Final, Native, Public)
void UManeaterHUDView::StoryCompleteWidgetDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.StoryCompleteWidgetDismissed");

	UManeaterHUDView_StoryCompleteWidgetDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDView.ShowTutorialSinglePopupWidget
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PageCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwBaseWidget*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwBaseWidget* UManeaterHUDView::ShowTutorialSinglePopupWidget(int Index, int PageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.ShowTutorialSinglePopupWidget");

	UManeaterHUDView_ShowTutorialSinglePopupWidget_Params params;
	params.Index = Index;
	params.PageCount = PageCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterHUDView.ShowStoryCompleteWidget
// (Final, Native, Public)
// Parameters:
// class UStoryCompleteWidget*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStoryCompleteWidget* UManeaterHUDView::ShowStoryCompleteWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.ShowStoryCompleteWidget");

	UManeaterHUDView_ShowStoryCompleteWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterHUDView.ShowSavingIcon
// (Final, Native, Public)
void UManeaterHUDView::ShowSavingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.ShowSavingIcon");

	UManeaterHUDView_ShowSavingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDView.ShowInvertedControlsWidget
// (Final, Native, Public)
// Parameters:
// class UInvertedControlsWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UInvertedControlsWidget* UManeaterHUDView::ShowInvertedControlsWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.ShowInvertedControlsWidget");

	UManeaterHUDView_ShowInvertedControlsWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterHUDView.InvertedControlsPopupDismissed
// (Final, Native, Public)
void UManeaterHUDView::InvertedControlsPopupDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.InvertedControlsPopupDismissed");

	UManeaterHUDView_InvertedControlsPopupDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterHUDView.HideSavingIcon
// (Final, Native, Private)
void UManeaterHUDView::HideSavingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterHUDView.HideSavingIcon");

	UManeaterHUDView_HideSavingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterMapPanel.OnTutorialPopupWidgetDismissed
// (Final, Native, Protected)
void UManeaterMapPanel::OnTutorialPopupWidgetDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterMapPanel.OnTutorialPopupWidgetDismissed");

	UManeaterMapPanel_OnTutorialPopupWidgetDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterMapPanel.OnRegionDataLoaded
// (Final, Native, Protected)
void UManeaterMapPanel::OnRegionDataLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterMapPanel.OnRegionDataLoaded");

	UManeaterMapPanel_OnRegionDataLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterMapPanel.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldTrack                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoTrackerUpdate               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterMapPanel::OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterMapPanel.OnObjectiveTrack");

	UManeaterMapPanel_OnObjectiveTrack_Params params;
	params.PlayerObjective = PlayerObjective;
	params.bShouldTrack = bShouldTrack;
	params.bNoTrackerUpdate = bNoTrackerUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterMapPanel.OnNewPlayerWaypointSet
// (Final, Native, Protected, HasDefaults)
// Parameters:
// struct FVector2D               Pos                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterMapPanel::OnNewPlayerWaypointSet(const struct FVector2D& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterMapPanel.OnNewPlayerWaypointSet");

	UManeaterMapPanel_OnNewPlayerWaypointSet_Params params;
	params.Pos = Pos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterMapPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
void UManeaterMapPanel::OnControllerDisconnectedModalDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterMapPanel.OnControllerDisconnectedModalDismissed");

	UManeaterMapPanel_OnControllerDisconnectedModalDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterSettingsMenuView.ShowSavingIcon
// (Final, Native, Public)
void UManeaterSettingsMenuView::ShowSavingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterSettingsMenuView.ShowSavingIcon");

	UManeaterSettingsMenuView_ShowSavingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterSettingsMenuView.HideSavingIcon
// (Final, Native, Public)
void UManeaterSettingsMenuView::HideSavingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterSettingsMenuView.HideSavingIcon");

	UManeaterSettingsMenuView_HideSavingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.ShowSavingIcon
// (Final, Native, Public)
void UManeaterTitleMenuView::ShowSavingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.ShowSavingIcon");

	UManeaterTitleMenuView_ShowSavingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.RecacheSaveGames
// (Final, Native, Protected)
void UManeaterTitleMenuView::RecacheSaveGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.RecacheSaveGames");

	UManeaterTitleMenuView_RecacheSaveGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UME_SaveGameObject*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UME_SaveGameObject* UManeaterTitleMenuView::PeekSaveGame(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGame");

	UManeaterTitleMenuView_PeekSaveGame_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_MouseEnter
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnSettings_MouseEnter(class UTwBaseButton* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnSettings_MouseEnter");

	UManeaterTitleMenuView_OnSettings_MouseEnter_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnSettings_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnSettings_Clicked");

	UManeaterTitleMenuView_OnSettings_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Focused
// (Final, Native, Public)
// Parameters:
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnPlayGame_Focused(class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Focused");

	UManeaterTitleMenuView_OnPlayGame_Focused_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnPlayGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Clicked");

	UManeaterTitleMenuView_OnPlayGame_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnMenuButton_FocusLost
// (Final, Native, Public)
// Parameters:
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnMenuButton_FocusLost(class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnMenuButton_FocusLost");

	UManeaterTitleMenuView_OnMenuButton_FocusLost_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnExit_MouseEnter
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnExit_MouseEnter(class UTwBaseButton* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnExit_MouseEnter");

	UManeaterTitleMenuView_OnExit_MouseEnter_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnExit_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnExit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnExit_Clicked");

	UManeaterTitleMenuView_OnExit_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Focused
// (Final, Native, Public)
// Parameters:
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnContinueGame_Focused(class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Focused");

	UManeaterTitleMenuView_OnContinueGame_Focused_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnContinueGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Clicked");

	UManeaterTitleMenuView_OnContinueGame_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseLeave
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnContinueButton_MouseLeave(class UTwBaseButton* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseLeave");

	UManeaterTitleMenuView_OnContinueButton_MouseLeave_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseEnter
// (Final, Native, Public)
// Parameters:
// class UTwBaseButton*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleMenuView::OnContinueButton_MouseEnter(class UTwBaseButton* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseEnter");

	UManeaterTitleMenuView_OnContinueButton_MouseEnter_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.HideSavingIcon
// (Final, Native, Public)
void UManeaterTitleMenuView::HideSavingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.HideSavingIcon");

	UManeaterTitleMenuView_HideSavingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleMenuView.DoesSaveGameExist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UManeaterTitleMenuView::DoesSaveGameExist(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.DoesSaveGameExist");

	UManeaterTitleMenuView_DoesSaveGameExist_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterTitleMenuView.ContinueGame_BP
// (Event, Public, BlueprintEvent)
void UManeaterTitleMenuView::ContinueGame_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleMenuView.ContinueGame_BP");

	UManeaterTitleMenuView_ContinueGame_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterTitleSplashView.OnStartButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      OnWidgetClicked                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UManeaterTitleSplashView::OnStartButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterTitleSplashView.OnStartButtonClicked");

	UManeaterTitleSplashView_OnStartButtonClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ManeaterUIFunctionLibrary.IsKeyValidForUpgrade
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UManeaterUIFunctionLibrary::STATIC_IsKeyValidForUpgrade(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.IsKeyValidForUpgrade");

	UManeaterUIFunctionLibrary_IsKeyValidForUpgrade_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetTextForKeybind
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bGamepad                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IconSize                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            IconOffset                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          AxisScale                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UManeaterUIFunctionLibrary::STATIC_GetTextForKeybind(const struct FName& ActionName, bool bGamepad, int IconSize, int IconOffset, float AxisScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetTextForKeybind");

	UManeaterUIFunctionLibrary_GetTextForKeybind_Params params;
	params.ActionName = ActionName;
	params.bGamepad = bGamepad;
	params.IconSize = IconSize;
	params.IconOffset = IconOffset;
	params.AxisScale = AxisScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetShouldDisplayAttributeAsPercentage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UManeaterUIFunctionLibrary::STATIC_GetShouldDisplayAttributeAsPercentage(const struct FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetShouldDisplayAttributeAsPercentage");

	UManeaterUIFunctionLibrary_GetShouldDisplayAttributeAsPercentage_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetReadableNameForAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UManeaterUIFunctionLibrary::STATIC_GetReadableNameForAttribute(const struct FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetReadableNameForAttribute");

	UManeaterUIFunctionLibrary_GetReadableNameForAttribute_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetNutrientColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> Nutrient                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UManeaterUIFunctionLibrary::STATIC_GetNutrientColor(TEnumAsByte<Maneater_ENutrientType> Nutrient)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetNutrientColor");

	UManeaterUIFunctionLibrary_GetNutrientColor_Params params;
	params.Nutrient = Nutrient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetManeaterHUD
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AManeaterHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AManeaterHUD* UManeaterUIFunctionLibrary::STATIC_GetManeaterHUD(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetManeaterHUD");

	UManeaterUIFunctionLibrary_GetManeaterHUD_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedSlotName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EEvolutionSlot        Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UManeaterUIFunctionLibrary::STATIC_GetLocalizedSlotName(Maneater_EEvolutionSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedSlotName");

	UManeaterUIFunctionLibrary_GetLocalizedSlotName_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedRarityName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EEvolutionRarity      Rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UManeaterUIFunctionLibrary::STATIC_GetLocalizedRarityName(Maneater_EEvolutionRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedRarityName");

	UManeaterUIFunctionLibrary_GetLocalizedRarityName_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedGrowthName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> GrowthStage                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UManeaterUIFunctionLibrary::STATIC_GetLocalizedGrowthName(TEnumAsByte<Maneater_EPlayerGrowthStage> GrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedGrowthName");

	UManeaterUIFunctionLibrary_GetLocalizedGrowthName_Params params;
	params.GrowthStage = GrowthStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedEvolutionProcName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EEvolutionProcType    ProcType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UManeaterUIFunctionLibrary::STATIC_GetLocalizedEvolutionProcName(Maneater_EEvolutionProcType ProcType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedEvolutionProcName");

	UManeaterUIFunctionLibrary_GetLocalizedEvolutionProcName_Params params;
	params.ProcType = ProcType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIsDisplayAttributeMultiplier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 AttributeName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UManeaterUIFunctionLibrary::STATIC_GetIsDisplayAttributeMultiplier(const struct FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetIsDisplayAttributeMultiplier");

	UManeaterUIFunctionLibrary_GetIsDisplayAttributeMultiplier_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForObjectiveType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EObjectiveType        ObjectiveType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStoryObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCompleted                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UManeaterUIFunctionLibrary::STATIC_GetIconForObjectiveType(Maneater_EObjectiveType ObjectiveType, bool bStoryObjective, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForObjectiveType");

	UManeaterUIFunctionLibrary_GetIconForObjectiveType_Params params;
	params.ObjectiveType = ObjectiveType;
	params.bStoryObjective = bStoryObjective;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForMarkerType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ManeaterUI_EMarkerType         MarkerType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UManeaterUIFunctionLibrary::STATIC_GetIconForMarkerType(ManeaterUI_EMarkerType MarkerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForMarkerType");

	UManeaterUIFunctionLibrary_GetIconForMarkerType_Params params;
	params.MarkerType = MarkerType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEvolutionColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// Maneater_EEvolutionRarity      Rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UManeaterUIFunctionLibrary::STATIC_GetEvolutionColor(Maneater_EEvolutionRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetEvolutionColor");

	UManeaterUIFunctionLibrary_GetEvolutionColor_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEpisodeImage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            StoryIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UManeaterUIFunctionLibrary::STATIC_GetEpisodeImage(int StoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ManeaterUIFunctionLibrary.GetEpisodeImage");

	UManeaterUIFunctionLibrary_GetEpisodeImage_Params params;
	params.StoryIndex = StoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.MapMarkerPopupWidget.SetObjectiveData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapMarkerPopupWidget::SetObjectiveData(class UME_PlayerObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapMarkerPopupWidget.SetObjectiveData");

	UMapMarkerPopupWidget_SetObjectiveData_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapMarkerPopupWidget.OnHoveredMapMarkerWidgetUpdated
// (Event, Protected, BlueprintEvent)
void UMapMarkerPopupWidget::OnHoveredMapMarkerWidgetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapMarkerPopupWidget.OnHoveredMapMarkerWidgetUpdated");

	UMapMarkerPopupWidget_OnHoveredMapMarkerWidgetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapMarkerPopupWidget.HandleInput
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapMarkerPopupWidget::HandleInput(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapMarkerPopupWidget.HandleInput");

	UMapMarkerPopupWidget_HandleInput_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.ToggleFocus
// (Final, Native, Public, BlueprintCallable)
void UMapProgressButtonWidget::ToggleFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.ToggleFocus");

	UMapProgressButtonWidget_ToggleFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.SetWidgetSwitcherIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressButtonWidget::SetWidgetSwitcherIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.SetWidgetSwitcherIndex");

	UMapProgressButtonWidget_SetWidgetSwitcherIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.SetShowProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressButtonWidget::SetShowProgress(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.SetShowProgress");

	UMapProgressButtonWidget_SetShowProgress_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.SetSectionTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressButtonWidget::SetSectionTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.SetSectionTexture");

	UMapProgressButtonWidget_SetSectionTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.SetSectionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Name                           (Parm, NativeAccessSpecifierPublic)
void UMapProgressButtonWidget::SetSectionName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.SetSectionName");

	UMapProgressButtonWidget_SetSectionName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressButtonWidget::SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.SetProgress");

	UMapProgressButtonWidget_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.SetActionContainerDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Disable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressButtonWidget::SetActionContainerDisabled(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.SetActionContainerDisabled");

	UMapProgressButtonWidget_SetActionContainerDisabled_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressButtonWidget.IsFocused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMapProgressButtonWidget::IsFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.IsFocused");

	UMapProgressButtonWidget_IsFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.MapProgressButtonWidget.GetWidgetSwitcherIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMapProgressButtonWidget::GetWidgetSwitcherIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressButtonWidget.GetWidgetSwitcherIndex");

	UMapProgressButtonWidget_GetWidgetSwitcherIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.MapProgressWidget.SetSectionTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressWidget::SetSectionTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressWidget.SetSectionTexture");

	UMapProgressWidget_SetSectionTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressWidget.SetSectionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Name                           (Parm, NativeAccessSpecifierPublic)
void UMapProgressWidget::SetSectionName(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressWidget.SetSectionName");

	UMapProgressWidget_SetSectionName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressWidget.SetProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMapProgressWidget::SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressWidget.SetProgress");

	UMapProgressWidget_SetProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressWidget.SetNutrientCacheProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Progress                       (Parm, NativeAccessSpecifierPublic)
void UMapProgressWidget::SetNutrientCacheProgress(const struct FText& Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressWidget.SetNutrientCacheProgress");

	UMapProgressWidget_SetNutrientCacheProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressWidget.SetLandmarkProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Progress                       (Parm, NativeAccessSpecifierPublic)
void UMapProgressWidget::SetLandmarkProgress(const struct FText& Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressWidget.SetLandmarkProgress");

	UMapProgressWidget_SetLandmarkProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MapProgressWidget.SetCollectibleProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   Progress                       (Parm, NativeAccessSpecifierPublic)
void UMapProgressWidget::SetCollectibleProgress(const struct FText& Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MapProgressWidget.SetCollectibleProgress");

	UMapProgressWidget_SetCollectibleProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ME_CinematicMovieWidget.GetMediaSourceForPlatform
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaSource* UME_CinematicMovieWidget::GetMediaSourceForPlatform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ME_CinematicMovieWidget.GetMediaSourceForPlatform");

	UME_CinematicMovieWidget_GetMediaSourceForPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.METoastWidget.RemoveToast
// (Native, Protected, BlueprintCallable)
void UMEToastWidget::RemoveToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.METoastWidget.RemoveToast");

	UMEToastWidget_RemoveToast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.METoastWidget.OnToastShowing
// (Event, Protected, BlueprintEvent)
void UMEToastWidget::OnToastShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.METoastWidget.OnToastShowing");

	UMEToastWidget_OnToastShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.METoastWidget.OnToastReadyForRemove
// (Native, Event, Protected, BlueprintEvent)
void UMEToastWidget::OnToastReadyForRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.METoastWidget.OnToastReadyForRemove");

	UMEToastWidget_OnToastReadyForRemove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bTriggerBroadcast              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMESettingsStepper::SetSelectedOption(int idx, bool bTriggerBroadcast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.SetSelectedOption");

	UMESettingsStepper_SetSelectedOption_Params params;
	params.idx = idx;
	params.bTriggerBroadcast = bTriggerBroadcast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.SetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           Options                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMESettingsStepper::SetOptions(TArray<struct FText> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.SetOptions");

	UMESettingsStepper_SetOptions_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.PreviousOption
// (Final, Native, Public, BlueprintCallable)
void UMESettingsStepper::PreviousOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.PreviousOption");

	UMESettingsStepper_PreviousOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.OnPrevClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      WidgetClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMESettingsStepper::OnPrevClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.OnPrevClicked");

	UMESettingsStepper_OnPrevClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.WidgetClicked = WidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.OnNextClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      WidgetClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMESettingsStepper::OnNextClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.OnNextClicked");

	UMESettingsStepper_OnNextClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.WidgetClicked = WidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.NextOption
// (Final, Native, Public, BlueprintCallable)
void UMESettingsStepper::NextOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.NextOption");

	UMESettingsStepper_NextOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.MESettingsStepper.GetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMESettingsStepper::GetSelectedOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.GetSelectedOption");

	UMESettingsStepper_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.MESettingsStepper.GetOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FText> UMESettingsStepper::GetOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.MESettingsStepper.GetOptions");

	UMESettingsStepper_GetOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ObjectiveButtonWidget.OnObjectiveTrack
// (Final, Native, Public)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldTrack                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoTrackerUpdate               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveButtonWidget::OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveButtonWidget.OnObjectiveTrack");

	UObjectiveButtonWidget_OnObjectiveTrack_Params params;
	params.Objective = Objective;
	params.bShouldTrack = bShouldTrack;
	params.bNoTrackerUpdate = bNoTrackerUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveButtonWidget.GetFocusWidgetForNavigation
// (Final, Native, Protected)
// Parameters:
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UObjectiveButtonWidget::GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveButtonWidget.GetFocusWidgetForNavigation");

	UObjectiveButtonWidget_GetFocusWidgetForNavigation_Params params;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ObjectiveCollectionWidget.SetFocusedObjective
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObjectiveButtonWidget*  ObjectiveButton                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveCollectionWidget::SetFocusedObjective(class UObjectiveButtonWidget* ObjectiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveCollectionWidget.SetFocusedObjective");

	UObjectiveCollectionWidget_SetFocusedObjective_Params params;
	params.ObjectiveButton = ObjectiveButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_MouseEnter
// (Final, Native, Protected)
// Parameters:
// class UObjectiveButtonWidget*  ObjectiveButton                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveCollectionWidget::OnObjective_MouseEnter(class UObjectiveButtonWidget* ObjectiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_MouseEnter");

	UObjectiveCollectionWidget_OnObjective_MouseEnter_Params params;
	params.ObjectiveButton = ObjectiveButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_Focused
// (Final, Native, Protected)
// Parameters:
// class UObjectiveButtonWidget*  ObjectiveButton                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveCollectionWidget::OnObjective_Focused(class UObjectiveButtonWidget* ObjectiveButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_Focused");

	UObjectiveCollectionWidget_OnObjective_Focused_Params params;
	params.ObjectiveButton = ObjectiveButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.TutorialFinished
// (Final, Native, Protected)
void UObjectiveControllerWidget::TutorialFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.TutorialFinished");

	UObjectiveControllerWidget_TutorialFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnToastDestroyed
// (Final, Native, Public)
// Parameters:
// class UTwBaseWidget*           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnToastDestroyed(class UTwBaseWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnToastDestroyed");

	UObjectiveControllerWidget_OnToastDestroyed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnStoryEventProgress
// (Final, Native, Protected)
// Parameters:
// int                            CurrentStoryIndex              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ConditionText                  (Parm, NativeAccessSpecifierPublic)
// float                          StoryProgress                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnStoryEventProgress(int CurrentStoryIndex, const struct FText& ConditionText, float StoryProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnStoryEventProgress");

	UObjectiveControllerWidget_OnStoryEventProgress_Params params;
	params.CurrentStoryIndex = CurrentStoryIndex;
	params.ConditionText = ConditionText;
	params.StoryProgress = StoryProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnRegionChanged
// (Final, Native, Protected)
// Parameters:
// struct FRegionToastData        Data                           (ConstParm, Parm, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnRegionChanged(const struct FRegionToastData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnRegionChanged");

	UObjectiveControllerWidget_OnRegionChanged_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveUpdated
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnObjectiveUpdated(class UME_PlayerObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveUpdated");

	UObjectiveControllerWidget_OnObjectiveUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldTrack                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoTrackerUpdate               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveTrack");

	UObjectiveControllerWidget_OnObjectiveTrack_Params params;
	params.Objective = Objective;
	params.bShouldTrack = bShouldTrack;
	params.bNoTrackerUpdate = bNoTrackerUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStateChanged
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// Maneater_EObjectiveState       NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnObjectiveStateChanged(class UME_PlayerObjective* PlayerObjective, Maneater_EObjectiveState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStateChanged");

	UObjectiveControllerWidget_OnObjectiveStateChanged_Params params;
	params.PlayerObjective = PlayerObjective;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStarted
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnObjectiveStarted(class UME_PlayerObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStarted");

	UObjectiveControllerWidget_OnObjectiveStarted_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveDiscovered
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnObjectiveDiscovered(class UME_PlayerObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveDiscovered");

	UObjectiveControllerWidget_OnObjectiveDiscovered_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveComplete
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnObjectiveComplete(class UME_PlayerObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveComplete");

	UObjectiveControllerWidget_OnObjectiveComplete_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnNewQuestAvailableChanged
// (Final, Native, Protected)
void UObjectiveControllerWidget::OnNewQuestAvailableChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnNewQuestAvailableChanged");

	UObjectiveControllerWidget_OnNewQuestAvailableChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnLevelChanged
// (Final, Native, Protected)
// Parameters:
// int                            NewGrowthLevel                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bChangeFromTheoretical         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnLevelChanged(int NewGrowthLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnLevelChanged");

	UObjectiveControllerWidget_OnLevelChanged_Params params;
	params.NewGrowthLevel = NewGrowthLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkRegionComplete
// (Final, Native, Public)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnLandmarkRegionComplete(class UME_PlayerObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkRegionComplete");

	UObjectiveControllerWidget_OnLandmarkRegionComplete_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkObjectFound
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   LandmarkDescription            (Parm, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnLandmarkObjectFound(class UME_PlayerObjective* Objective, const struct FText& LandmarkDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkObjectFound");

	UObjectiveControllerWidget_OnLandmarkObjectFound_Params params;
	params.Objective = Objective;
	params.LandmarkDescription = LandmarkDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnInfamyRankUp
// (Final, Native, Protected)
// Parameters:
// int                            NewRank                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnInfamyRankUp(int NewRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnInfamyRankUp");

	UObjectiveControllerWidget_OnInfamyRankUp_Params params;
	params.NewRank = NewRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnHUDErrorMessage
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnHUDErrorMessage(const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnHUDErrorMessage");

	UObjectiveControllerWidget_OnHUDErrorMessage_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnBountyBossSpawned
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FBountyViewData         BountyData                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnBountyBossSpawned(const struct FBountyViewData& BountyData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnBountyBossSpawned");

	UObjectiveControllerWidget_OnBountyBossSpawned_Params params;
	params.BountyData = BountyData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnBossFightAvailable
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjectiveBoss* BossObjective                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnBossFightAvailable");

	UObjectiveControllerWidget_OnBossFightAvailable_Params params;
	params.BossObjective = BossObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveControllerWidget.OnAdvancedToNextEpisode
// (Final, Native, Protected)
// Parameters:
// int                            CurrentStoryEventIndex         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveControllerWidget::OnAdvancedToNextEpisode(int CurrentStoryEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveControllerWidget.OnAdvancedToNextEpisode");

	UObjectiveControllerWidget_OnAdvancedToNextEpisode_Params params;
	params.CurrentStoryEventIndex = CurrentStoryEventIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ObjectiveMapMarkerWidget.OnObjectiveTrack
// (Final, Native, Protected)
// Parameters:
// class UME_PlayerObjective*     PlayerObjective                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bShouldTrack                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bNoTrackerUpdate               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UObjectiveMapMarkerWidget::OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ObjectiveMapMarkerWidget.OnObjectiveTrack");

	UObjectiveMapMarkerWidget_OnObjectiveTrack_Params params;
	params.PlayerObjective = PlayerObjective;
	params.bShouldTrack = bShouldTrack;
	params.bNoTrackerUpdate = bNoTrackerUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerAbilitiesWidget::SetHealth(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerAbilitiesWidget.SetHealth");

	UPlayerAbilitiesWidget_SetHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetCooldownForAbilitySlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ManeaterUI_EAbilitySlot        AbilitySlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Cooldown                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerAbilitiesWidget::SetCooldownForAbilitySlot(ManeaterUI_EAbilitySlot AbilitySlot, float Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerAbilitiesWidget.SetCooldownForAbilitySlot");

	UPlayerAbilitiesWidget_SetCooldownForAbilitySlot_Params params;
	params.AbilitySlot = AbilitySlot;
	params.Cooldown = Cooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetCharges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Charges                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerAbilitiesWidget::SetCharges(float Charges)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerAbilitiesWidget.SetCharges");

	UPlayerAbilitiesWidget_SetCharges_Params params;
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerAbilitiesWidget.SetBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Boost                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerAbilitiesWidget::SetBoost(float Boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerAbilitiesWidget.SetBoost");

	UPlayerAbilitiesWidget_SetBoost_Params params;
	params.Boost = Boost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerHealthBarWidget.SetRemainingBreath
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          RemainingBreath                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthBarWidget::SetRemainingBreath(float RemainingBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerHealthBarWidget.SetRemainingBreath");

	UPlayerHealthBarWidget_SetRemainingBreath_Params params;
	params.RemainingBreath = RemainingBreath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerHealthBarWidget.SetHealthValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthBarWidget::SetHealthValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerHealthBarWidget.SetHealthValue");

	UPlayerHealthBarWidget_SetHealthValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerHealthBarWidget.OnTweenStep
// (Final, Native, Public)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthBarWidget::OnTweenStep(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerHealthBarWidget.OnTweenStep");

	UPlayerHealthBarWidget_OnTweenStep_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerHealthBarWidget.OnRemainingBreathChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthBarWidget::OnRemainingBreathChanged_BP(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerHealthBarWidget.OnRemainingBreathChanged_BP");

	UPlayerHealthBarWidget_OnRemainingBreathChanged_BP_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerHealthBarWidget.OnHealthValueChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerHealthBarWidget::OnHealthValueChanged_BP(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerHealthBarWidget.OnHealthValueChanged_BP");

	UPlayerHealthBarWidget_OnHealthValueChanged_BP_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerInfoWidget.OnStoryUpdated
// (Final, Native, Protected)
// Parameters:
// int                            ActiveStoryIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInfoWidget::OnStoryUpdated(int ActiveStoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerInfoWidget.OnStoryUpdated");

	UPlayerInfoWidget_OnStoryUpdated_Params params;
	params.ActiveStoryIndex = ActiveStoryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerInfoWidget.OnRegionChanged
// (Final, Native, Protected)
// Parameters:
// struct FRegionToastData        Data                           (ConstParm, Parm, NativeAccessSpecifierPublic)
void UPlayerInfoWidget::OnRegionChanged(const struct FRegionToastData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerInfoWidget.OnRegionChanged");

	UPlayerInfoWidget_OnRegionChanged_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerInfoWidget.OnPlayerHealthValueChanged
// (Final, Native, Protected, HasOutParms)
// Parameters:
// float                          Delta                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInfoWidget::OnPlayerHealthValueChanged(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerInfoWidget.OnPlayerHealthValueChanged");

	UPlayerInfoWidget_OnPlayerHealthValueChanged_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerInfoWidget.OnPlayerDamaged
// (Final, Native, Protected)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerInfoWidget::OnPlayerDamaged(float Damage, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerInfoWidget.OnPlayerDamaged");

	UPlayerInfoWidget_OnPlayerDamaged_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientImage.SetNutrientType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> Nutrient                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientImage::SetNutrientType(TEnumAsByte<Maneater_ENutrientType> Nutrient)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientImage.SetNutrientType");

	UPlayerNutrientImage_SetNutrientType_Params params;
	params.Nutrient = Nutrient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenStep
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientInstanceIcon::OnTweenStep(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenStep");

	UPlayerNutrientInstanceIcon_OnTweenStep_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientInstanceIcon::OnTweenFinished(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenFinished");

	UPlayerNutrientInstanceIcon_OnTweenFinished_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientInstanceIcon.OnFadeOutFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientInstanceIcon::OnFadeOutFinished(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientInstanceIcon.OnFadeOutFinished");

	UPlayerNutrientInstanceIcon_OnFadeOutFinished_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnZeroOutStats
// (Final, Native, Protected)
void UPlayerNutrientWidget::OnZeroOutStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnZeroOutStats");

	UPlayerNutrientWidget_OnZeroOutStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnTweenStarted
// (Final, Native, Protected)
void UPlayerNutrientWidget::OnTweenStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnTweenStarted");

	UPlayerNutrientWidget_OnTweenStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnTweenFinished
// (Final, Native, Protected)
void UPlayerNutrientWidget::OnTweenFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnTweenFinished");

	UPlayerNutrientWidget_OnTweenFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnPlayerNutrientGained
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NutrientGain                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bFromObjective                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientWidget::OnPlayerNutrientGained(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientGain, bool bFromObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnPlayerNutrientGained");

	UPlayerNutrientWidget_OnPlayerNutrientGained_Params params;
	params.NutrientType = NutrientType;
	params.NutrientGain = NutrientGain;
	params.bFromObjective = bFromObjective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnOpacityOutFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientWidget::OnOpacityOutFinished(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnOpacityOutFinished");

	UPlayerNutrientWidget_OnOpacityOutFinished_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnOpacityInFinished
// (Final, Native, Protected)
// Parameters:
// class UTwTweener*              Tweener                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientWidget::OnOpacityInFinished(class UTwTweener* Tweener)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnOpacityInFinished");

	UPlayerNutrientWidget_OnOpacityInFinished_Params params;
	params.Tweener = Tweener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnNutrientsSpent
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NutrientSpent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPlayerNutrientWidget::OnNutrientsSpent(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientSpent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnNutrientsSpent");

	UPlayerNutrientWidget_OnNutrientsSpent_Params params;
	params.NutrientType = NutrientType;
	params.NutrientSpent = NutrientSpent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.PlayerNutrientWidget.OnLifetimeEnded
// (Final, Native, Protected)
void UPlayerNutrientWidget::OnLifetimeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.PlayerNutrientWidget.OnLifetimeEnded");

	UPlayerNutrientWidget_OnLifetimeEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.QuestLogPanel.SetRegionFilterButton
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UTwBaseButton*           RegionFilterButton             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestLogPanel::SetRegionFilterButton(class UTwBaseButton* RegionFilterButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.QuestLogPanel.SetRegionFilterButton");

	UQuestLogPanel_SetRegionFilterButton_Params params;
	params.RegionFilterButton = RegionFilterButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.QuestLogPanel.PopulateObjectiveData
// (Final, Native, Public, BlueprintCallable)
void UQuestLogPanel::PopulateObjectiveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.QuestLogPanel.PopulateObjectiveData");

	UQuestLogPanel_PopulateObjectiveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.QuestLogPanel.OnRegionFilter_Clicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    Button                         (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestLogPanel::OnRegionFilter_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.QuestLogPanel.OnRegionFilter_Clicked");

	UQuestLogPanel_OnRegionFilter_Clicked_Params params;
	params.Button = Button;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusOOB
// (Final, Native, Protected)
// Parameters:
// class UObjectiveCollectionWidget* ObjectiveCollectionWidget      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// SlateCore_EUINavigation        NavigationDir                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestLogPanel::OnObjectiveCollection_FocusOOB(class UObjectiveCollectionWidget* ObjectiveCollectionWidget, SlateCore_EUINavigation NavigationDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusOOB");

	UQuestLogPanel_OnObjectiveCollection_FocusOOB_Params params;
	params.ObjectiveCollectionWidget = ObjectiveCollectionWidget;
	params.NavigationDir = NavigationDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusChanged
// (Final, Native, Protected)
// Parameters:
// class UObjectiveButtonWidget*  ObjectiveWidget                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UQuestLogPanel::OnObjectiveCollection_FocusChanged(class UObjectiveButtonWidget* ObjectiveWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusChanged");

	UQuestLogPanel_OnObjectiveCollection_FocusChanged_Params params;
	params.ObjectiveWidget = ObjectiveWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.QuestLogPanel.OnControllerDisconnectedModalDismissed
// (Final, Native, Protected)
void UQuestLogPanel::OnControllerDisconnectedModalDismissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.QuestLogPanel.OnControllerDisconnectedModalDismissed");

	UQuestLogPanel_OnControllerDisconnectedModalDismissed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.RegionInfoWidget.SetRegionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FRegionData             NewRegionData                  (Parm, NativeAccessSpecifierPublic)
void URegionInfoWidget::SetRegionData(const struct FRegionData& NewRegionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.RegionInfoWidget.SetRegionData");

	URegionInfoWidget_SetRegionData_Params params;
	params.NewRegionData = NewRegionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.RegionInfoWidget.SetCurrentlyHovered
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bCurrentlyHovered              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URegionInfoWidget::SetCurrentlyHovered(bool bCurrentlyHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.RegionInfoWidget.SetCurrentlyHovered");

	URegionInfoWidget_SetCurrentlyHovered_Params params;
	params.bCurrentlyHovered = bCurrentlyHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.RegionInfoWidget.OnRegionDataUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URegionInfoWidget::OnRegionDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.RegionInfoWidget.OnRegionDataUpdated");

	URegionInfoWidget_OnRegionDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.RegionInfoWidget.GetRegionName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText URegionInfoWidget::GetRegionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.RegionInfoWidget.GetRegionName");

	URegionInfoWidget_GetRegionName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.RegionInfoWidget.GetRegion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Maneater_EWorldRegion          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
Maneater_EWorldRegion URegionInfoWidget::GetRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.RegionInfoWidget.GetRegion");

	URegionInfoWidget_GetRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterUI.ResourceListWidget.UpdateResources
// (Final, Native, Public, BlueprintCallable)
void UResourceListWidget::UpdateResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ResourceListWidget.UpdateResources");

	UResourceListWidget_UpdateResources_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ResourceListWidget.OnNutrientsSpent
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> NutrientType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            NutrientSpent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UResourceListWidget::OnNutrientsSpent(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientSpent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ResourceListWidget.OnNutrientsSpent");

	UResourceListWidget_OnNutrientsSpent_Params params;
	params.NutrientType = NutrientType;
	params.NutrientSpent = NutrientSpent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.SaveSlotSelectWidget.SetSaveSlotIdx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveSlotSelectWidget::SetSaveSlotIdx(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.SaveSlotSelectWidget.SetSaveSlotIdx");

	USaveSlotSelectWidget_SetSaveSlotIdx_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.SaveSlotSelectWidget.OnRightButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      WidgetClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveSlotSelectWidget::OnRightButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.SaveSlotSelectWidget.OnRightButtonClicked");

	USaveSlotSelectWidget_OnRightButtonClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.WidgetClicked = WidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.SaveSlotSelectWidget.OnLeftButtonClicked
// (Final, Native, Protected)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      WidgetClicked                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USaveSlotSelectWidget::OnLeftButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.SaveSlotSelectWidget.OnLeftButtonClicked");

	USaveSlotSelectWidget_OnLeftButtonClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.WidgetClicked = WidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.SaveSlotSelectWidget.IncrementSaveSlot
// (Final, Native, Public, BlueprintCallable)
void USaveSlotSelectWidget::IncrementSaveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.SaveSlotSelectWidget.IncrementSaveSlot");

	USaveSlotSelectWidget_IncrementSaveSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.SaveSlotSelectWidget.DecrementSaveSlot
// (Final, Native, Public, BlueprintCallable)
void USaveSlotSelectWidget::DecrementSaveSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.SaveSlotSelectWidget.DecrementSaveSlot");

	USaveSlotSelectWidget_DecrementSaveSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.StoryCompleteWidget.OnDismissStatsButton_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      OnWidgetClicked                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStoryCompleteWidget::OnDismissStatsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.StoryCompleteWidget.OnDismissStatsButton_Clicked");

	UStoryCompleteWidget_OnDismissStatsButton_Clicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.StoryCompleteWidget.OnDismissCongratsButton_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      OnWidgetClicked                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UStoryCompleteWidget::OnDismissCongratsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.StoryCompleteWidget.OnDismissCongratsButton_Clicked");

	UStoryCompleteWidget_OnDismissCongratsButton_Clicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.SubtitleTextWidget.OnSubtitleTextUpdated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FText                   SubtitleText                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void USubtitleTextWidget::OnSubtitleTextUpdated(const struct FText& SubtitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.SubtitleTextWidget.OnSubtitleTextUpdated");

	USubtitleTextWidget_OnSubtitleTextUpdated_Params params;
	params.SubtitleText = SubtitleText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ThrashingWidget.OnUpdateThrashUI
// (Final, Native, Protected)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bPlayerSharkThrashed           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrashingWidget::OnUpdateThrashUI(bool bShow, bool bPlayerSharkThrashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ThrashingWidget.OnUpdateThrashUI");

	UThrashingWidget_OnUpdateThrashUI_Params params;
	params.bShow = bShow;
	params.bPlayerSharkThrashed = bPlayerSharkThrashed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ThrashingWidget.OnThrashPulse
// (Final, Native, Protected)
void UThrashingWidget::OnThrashPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ThrashingWidget.OnThrashPulse");

	UThrashingWidget_OnThrashPulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.ThrashingWidget.EnableThrashUI
// (Final, Native, Protected)
// Parameters:
// bool                           bPlayerSharkThrashed           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrashingWidget::EnableThrashUI(bool bPlayerSharkThrashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.ThrashingWidget.EnableThrashUI");

	UThrashingWidget_EnableThrashUI_Params params;
	params.bPlayerSharkThrashed = bPlayerSharkThrashed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.TutorialFinished
// (Final, Native, Private)
void UTutorialInfoWidget::TutorialFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.TutorialFinished");

	UTutorialInfoWidget_TutorialFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.StopTutorialTimer
// (Final, Native, Private)
void UTutorialInfoWidget::StopTutorialTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.StopTutorialTimer");

	UTutorialInfoWidget_StopTutorialTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.StartTutorialTimer
// (Final, Native, Private)
void UTutorialInfoWidget::StartTutorialTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.StartTutorialTimer");

	UTutorialInfoWidget_StartTutorialTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.SetObjectiveComplete
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialInfoWidget::SetObjectiveComplete(TEnumAsByte<Maneater_ETutorialEventId> Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.SetObjectiveComplete");

	UTutorialInfoWidget_SetObjectiveComplete_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.SetEnabled
// (Final, Native, Public)
// Parameters:
// bool                           _bEnabled                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialInfoWidget::SetEnabled(bool _bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.SetEnabled");

	UTutorialInfoWidget_SetEnabled_Params params;
	params._bEnabled = _bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.RepeatedTutorialStepCompleted
// (Final, Native, Private)
// Parameters:
// int                            Numberator                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Denomenator                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialInfoWidget::RepeatedTutorialStepCompleted(int Numberator, int Denomenator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.RepeatedTutorialStepCompleted");

	UTutorialInfoWidget_RepeatedTutorialStepCompleted_Params params;
	params.Numberator = Numberator;
	params.Denomenator = Denomenator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.RemoveObjective
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTutorialInfoWidget::RemoveObjective(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.RemoveObjective");

	UTutorialInfoWidget_RemoveObjective_Params params;
	params.TutorialEventId = TutorialEventId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.Disable
// (Final, Native, Public)
void UTutorialInfoWidget::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.Disable");

	UTutorialInfoWidget_Disable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.ClearAllObjectives
// (Final, Native, Private)
void UTutorialInfoWidget::ClearAllObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.ClearAllObjectives");

	UTutorialInfoWidget_ClearAllObjectives_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TutorialInfoWidget.AddObjective
// (Final, Native, Private, HasOutParms)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FME_TutorialEvent       EventData                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UTutorialInfoWidget::AddObjective(TEnumAsByte<Maneater_ETutorialEventId> Objective, const struct FME_TutorialEvent& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TutorialInfoWidget.AddObjective");

	UTutorialInfoWidget_AddObjective_Params params;
	params.Objective = Objective;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TUtorialPopupWidget.OnTutorialButton_BP_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      OnWidgetClicked                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTUtorialPopupWidget::OnTutorialButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TUtorialPopupWidget.OnTutorialButton_BP_Clicked");

	UTUtorialPopupWidget_OnTutorialButton_BP_Clicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TUtorialPopupWidget.Disable
// (Final, Native, Public)
void UTUtorialPopupWidget::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TUtorialPopupWidget.Disable");

	UTUtorialPopupWidget_Disable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.TUtorialSinglePopupWidget.OnOkButton_Clicked
// (Final, Native, Public)
// Parameters:
// struct FKey                    MouseButtonClicked             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTwClickableWidget*      OnWidgetClicked                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTUtorialSinglePopupWidget::OnOkButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.TUtorialSinglePopupWidget.OnOkButton_Clicked");

	UTUtorialSinglePopupWidget_OnOkButton_Clicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.VideoSettingsWidget.OnWindowModeChanged
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVideoSettingsWidget::OnWindowModeChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.VideoSettingsWidget.OnWindowModeChanged");

	UVideoSettingsWidget_OnWindowModeChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.VideoSettingsWidget.OnResolutionChanged
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVideoSettingsWidget::OnResolutionChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.VideoSettingsWidget.OnResolutionChanged");

	UVideoSettingsWidget_OnResolutionChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.VideoSettingsWidget.OnQualityChanged
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVideoSettingsWidget::OnQualityChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.VideoSettingsWidget.OnQualityChanged");

	UVideoSettingsWidget_OnQualityChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.VideoSettingsWidget.OnOptionChanged
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVideoSettingsWidget::OnOptionChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.VideoSettingsWidget.OnOptionChanged");

	UVideoSettingsWidget_OnOptionChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.WorldMapWidget.UpdateRegionInfoWidgets
// (Event, Protected, BlueprintEvent)
void UWorldMapWidget::UpdateRegionInfoWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.WorldMapWidget.UpdateRegionInfoWidgets");

	UWorldMapWidget_UpdateRegionInfoWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.WorldMapWidget.SetDataForRegions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FRegionData>     RegionData                     (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldMapWidget::SetDataForRegions(TArray<struct FRegionData>* RegionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.WorldMapWidget.SetDataForRegions");

	UWorldMapWidget_SetDataForRegions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionData != nullptr)
		*RegionData = params.RegionData;

}


// Function ManeaterUI.WorldMapWidget.SetDataForRegion
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FRegionData             RegionData                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UWorldMapWidget::SetDataForRegion(struct FRegionData* RegionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.WorldMapWidget.SetDataForRegion");

	UWorldMapWidget_SetDataForRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RegionData != nullptr)
		*RegionData = params.RegionData;

}


// Function ManeaterUI.WorldMapWidget.OnRegionDataChanged
// (Event, Protected, BlueprintEvent)
void UWorldMapWidget::OnRegionDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.WorldMapWidget.OnRegionDataChanged");

	UWorldMapWidget_OnRegionDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterUI.WorldMapWidget.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// TwUIFramework_EUserInputDevice Device                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWorldMapWidget::OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterUI.WorldMapWidget.OnInputDeviceChanged");

	UWorldMapWidget_OnInputDeviceChanged_Params params;
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
