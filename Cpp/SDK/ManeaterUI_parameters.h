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

// Function ManeaterUI.AgeTierInfographicWidget.OnEvolutionUpgradeButton_BP_Clicked
struct UAgeTierInfographicWidget_OnEvolutionUpgradeButton_BP_Clicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.AttributesWidget.UpdateAttributes
struct UAttributesWidget_UpdateAttributes_Params
{
};

// Function ManeaterUI.AwarenessWidget.SetAwareness
struct UAwarenessWidget_SetAwareness_Params
{
	float                                              Awareness;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.BaseObjectiveDecorator.DelayedOutAnimation
struct UBaseObjectiveDecorator_DelayedOutAnimation_Params
{
};

// Function ManeaterUI.MapMarkerWidget.OnInteractButtonUp
struct UMapMarkerWidget_OnInteractButtonUp_Params
{
};

// Function ManeaterUI.MapMarkerWidget.OnInteractButtonDown
struct UMapMarkerWidget_OnInteractButtonDown_Params
{
};

// Function ManeaterUI.MapMarkerWidget.OnActiveFilterChanged
struct UMapMarkerWidget_OnActiveFilterChanged_Params
{
	ManeaterUI_EMarkerType                             NewMarkerTypeFilter;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.BountyPanel.OnHunterButton_Focused
struct UBountyPanel_OnHunterButton_Focused_Params
{
	class UHunterButtonWidget*                         HunterButtonWidget;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.BountyPanel.OnControllerDisconnectedModalDismissed
struct UBountyPanel_OnControllerDisconnectedModalDismissed_Params
{
};

// Function ManeaterUI.BountyPanel.GetBountyDataForRank
struct UBountyPanel_GetBountyDataForRank_Params
{
	unsigned char                                      Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_BountyTier*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CompassWidget.RemoveTrackedActor
struct UCompassWidget_RemoveTrackedActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CompassWidget.OnAICombatStatusChanged
struct UCompassWidget_OnAICombatStatusChanged_Params
{
	bool                                               bInCombat;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIController*                            AIActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CompassWidget.OnActorRequestingWidget
struct UCompassWidget_OnActorRequestingWidget_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CompassWidget.OnActorRequestingRemoval
struct UCompassWidget_OnActorRequestingRemoval_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CompassWidget.AddTrackedActor
struct UCompassWidget_AddTrackedActor_Params
{
	struct FTrackedCompassActor                        Actor;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ContextualControlWidget.RemoveControlWidget
struct UContextualControlWidget_RemoveControlWidget_Params
{
	struct FName                                       ControlName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ContextualControlWidget.AddControlWidget
struct UContextualControlWidget_AddControlWidget_Params
{
	struct FName                                       ControlName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ControlText;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FName                                       InputActionName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ControlsSettingsWidget.OnLayoutChanged
struct UControlsSettingsWidget_OnLayoutChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CrosshairNavigationWidget.SetFocusedMarker
struct UCrosshairNavigationWidget_SetFocusedMarker_Params
{
	class UMapMarkerWidget*                            _MapMarkerWidget;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.CrosshairNavigationWidget.OnFocusedMarkerChanged
struct UCrosshairNavigationWidget_OnFocusedMarkerChanged_Params
{
};

// Function ManeaterUI.DamageTextController.SpawnHealingText
struct UDamageTextController_SpawnHealingText_Params
{
	struct FVector                                     SpawnPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.DamageTextController.SpawnEvadeText
struct UDamageTextController_SpawnEvadeText_Params
{
	struct FVector                                     SpawnPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.DamageTextController.SpawnDamageText
struct UDamageTextController_SpawnDamageText_Params
{
	struct FVector                                     SpawnPos;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVulnerableVictim;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AttackGameplayTags;                                        // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.DamageTextController.OnPlayerCausedCombatEvent
struct UDamageTextController_OnPlayerCausedCombatEvent_Params
{
	TEnumAsByte<Maneater_ECombatEventType>             CombatEventType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldPos;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVulnerableVictim;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       AttackGameplayTags;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.DeathView.OnButtonMouseOver
struct UDeathView_OnButtonMouseOver_Params
{
	class UTwBaseButton*                               MouseOverWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.DeathView.OnButtonGainFoucus
struct UDeathView_OnButtonGainFoucus_Params
{
	class UTwClickableWidget*                          OnWidgetFocused;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetComponent.GetContainer
struct UEnemyOverheadWidgetComponent_GetContainer_Params
{
	class UEnemyOverheadWidgetContainer*               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnViewControllerVisibilityChanged
struct UEnemyOverheadWidgetContainer_OnViewControllerVisibilityChanged_Params
{
	UMG_ESlateVisibility                               ControllerVisibility;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnThreatStateChanged
struct UEnemyOverheadWidgetContainer_OnThreatStateChanged_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InstigatingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnRelatedObjectiveChanged
struct UEnemyOverheadWidgetContainer_OnRelatedObjectiveChanged_Params
{
	Maneater_EObjectiveType                            ObjectiveType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnTakeDamage
struct UEnemyOverheadWidgetContainer_OnPawnTakeDamage_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnPawnKilled
struct UEnemyOverheadWidgetContainer_OnPawnKilled_Params
{
	class AME_Character*                               Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Killer;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnHUDVisiblityChanged
struct UEnemyOverheadWidgetContainer_OnHUDVisiblityChanged_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnGamePauseStateChanged
struct UEnemyOverheadWidgetContainer_OnGamePauseStateChanged_Params
{
	bool                                               bPaused;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnCinematicModeChanged
struct UEnemyOverheadWidgetContainer_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyOverheadWidgetContainer.OnBoatKilled
struct UEnemyOverheadWidgetContainer_OnBoatKilled_Params
{
	class AME_VehiclePawn*                             Victim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.UpdateWidgetDangerSense
struct UEnemyScreenSpaceWidgetContainer_UpdateWidgetDangerSense_Params
{
	class AActor*                                      DangerousActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EnemyScreenSpaceWidgetContainer.OnScreenSpaceWidgetRequested
struct UEnemyScreenSpaceWidgetContainer_OnScreenSpaceWidgetRequested_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionAbilityWidget.OnSonarAbilityActivated
struct UEvolutionAbilityWidget_OnSonarAbilityActivated_Params
{
	float                                              Duration;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionAbilityWidget.OnSlottedEvolutionChanged
struct UEvolutionAbilityWidget_OnSlottedEvolutionChanged_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionAbilityWidget.OnEvolutionAbilityActivated
struct UEvolutionAbilityWidget_OnEvolutionAbilityActivated_Params
{
	float                                              Duration;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionAbilityWidget.OnCinematicModeChanged
struct UEvolutionAbilityWidget_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionAbilityWidget.OnCharacterAttributesChanged
struct UEvolutionAbilityWidget_OnCharacterAttributesChanged_Params
{
};

// Function ManeaterUI.EvolutionIconButtonWidget.PlayUpgradeFX
struct UEvolutionIconButtonWidget_PlayUpgradeFX_Params
{
};

// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotType
struct UEvolutionIconButtonWidget_GetSlotType_Params
{
	Maneater_EEvolutionSlot                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionIconButtonWidget.GetSlotName
struct UEvolutionIconButtonWidget_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionIconButtonWidget.GetRarity
struct UEvolutionIconButtonWidget_GetRarity_Params
{
	Maneater_EEvolutionRarity                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionIconButtonWidget.GetLocked
struct UEvolutionIconButtonWidget_GetLocked_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionIconButtonWidget.GetIsEquipped
struct UEvolutionIconButtonWidget_GetIsEquipped_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionIconButtonWidget.GetFocusWidgetForNavigation
struct UEvolutionIconButtonWidget_GetFocusWidgetForNavigation_Params
{
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolutionUpgrade_Pressed
struct UEvolutionListWidget_OnInventoryEvolutionUpgrade_Pressed_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_MouseLeave
struct UEvolutionListWidget_OnInventoryEvolution_MouseLeave_Params
{
	class UTwBaseButton*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Focused
struct UEvolutionListWidget_OnInventoryEvolution_Focused_Params
{
	class UEvolutionIconButtonWidget*                  IconWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionListWidget.OnInventoryEvolution_Clicked
struct UEvolutionListWidget_OnInventoryEvolution_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionListWidget.OnInputDeviceChanged
struct UEvolutionListWidget_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionListWidget.OnBackButton_Clicked
struct UEvolutionListWidget_OnBackButton_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.ShowTutorialPopupWidget
struct UEvolutionsPanel_ShowTutorialPopupWidget_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.PlayTransitionToUpgrade
struct UEvolutionsPanel_PlayTransitionToUpgrade_Params
{
};

// Function ManeaterUI.EvolutionsPanel.PlayTransitionToSlots
struct UEvolutionsPanel_PlayTransitionToSlots_Params
{
};

// Function ManeaterUI.EvolutionsPanel.PlayTransitionToList
struct UEvolutionsPanel_PlayTransitionToList_Params
{
};

// Function ManeaterUI.EvolutionsPanel.PlayTransitionOutOfUpgrade
struct UEvolutionsPanel_PlayTransitionOutOfUpgrade_Params
{
};

// Function ManeaterUI.EvolutionsPanel.PlayGrowthAnimation
struct UEvolutionsPanel_PlayGrowthAnimation_Params
{
};

// Function ManeaterUI.EvolutionsPanel.OnSlottedEvolutionChanged
struct UEvolutionsPanel_OnSlottedEvolutionChanged_Params
{
	Maneater_EEvolutionSlot                            EvolutionSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Focused
struct UEvolutionsPanel_OnSlotButtonWidget_Focused_Params
{
	class UEvolutionIconButtonWidget*                  IconWidge;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.OnSlotButtonWidget_Clicked
struct UEvolutionsPanel_OnSlotButtonWidget_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.OnShark_GrowthStageChanged
struct UEvolutionsPanel_OnShark_GrowthStageChanged_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitPose;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.OnInventoryEvolutionChanged
struct UEvolutionsPanel_OnInventoryEvolutionChanged_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUpgrade;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.OnControllerDisconnectedModalDismissed
struct UEvolutionsPanel_OnControllerDisconnectedModalDismissed_Params
{
};

// Function ManeaterUI.EvolutionsPanel.OnAgeTierWidgetDismissed
struct UEvolutionsPanel_OnAgeTierWidgetDismissed_Params
{
};

// Function ManeaterUI.EvolutionsPanel.HandleUpgradeButton_Pressed
struct UEvolutionsPanel_HandleUpgradeButton_Pressed_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.HandleEvolutionListItem_Focused
struct UEvolutionsPanel_HandleEvolutionListItem_Focused_Params
{
	class UEvolutionIconButtonWidget*                  IconWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EEvolutionSlot                            SlotType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.ConstructTooltip
struct UEvolutionsPanel_ConstructTooltip_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEvolutionData                              EvolutionData;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               HideCost;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HideUpgrade;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionsPanel.CantUseUntilGrottoPopup
struct UEvolutionsPanel_CantUseUntilGrottoPopup_Params
{
};

// Function ManeaterUI.EvolutionUpgradeWidget.OnUpgradeButton_Clicked
struct UEvolutionUpgradeWidget_OnUpgradeButton_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionUpgradeWidget.OnCancelButton_Clicked
struct UEvolutionUpgradeWidget_OnCancelButton_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.EvolutionUpgradeWidget.ConstructTooltip
struct UEvolutionUpgradeWidget_ConstructTooltip_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEvolutionData                              EvolutionData;                                             // (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEvolutionData                              UpgradedEvolutionData;                                     // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnViewControllerVisibilityChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnViewControllerVisibilityChanged_Params
{
	UMG_ESlateVisibility                               ControllerVisibility;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnHUDVisiblityChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnHUDVisiblityChanged_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnGamePauseStateChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnGamePauseStateChanged_Params
{
	bool                                               bPaused;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ExplosiveIndicatorScreenSpaceWidget.OnCinematicModeChanged
struct UExplosiveIndicatorScreenSpaceWidget_OnCinematicModeChanged_Params
{
	bool                                               bCinematicMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnVibrationChanged
struct UGameplaySettingsWidget_OnVibrationChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnTutorialPopupChanged
struct UGameplaySettingsWidget_OnTutorialPopupChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnSubtitlesChanged
struct UGameplaySettingsWidget_OnSubtitlesChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnSprintChanged
struct UGameplaySettingsWidget_OnSprintChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnRightStickSensitivityChanged
struct UGameplaySettingsWidget_OnRightStickSensitivityChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnRaytracingChanged
struct UGameplaySettingsWidget_OnRaytracingChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnMouseSensitivityChanged
struct UGameplaySettingsWidget_OnMouseSensitivityChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnInvertMouseYChanged
struct UGameplaySettingsWidget_OnInvertMouseYChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GameplaySettingsWidget.OnInvertGamepadYChanged
struct UGameplaySettingsWidget_OnInvertGamepadYChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.GrottoMapMarkerWidget.OnMarkerUpdated
struct UGrottoMapMarkerWidget_OnMarkerUpdated_Params
{
};

// Function ManeaterUI.GrottoMapMarkerWidget.FastTravel
struct UGrottoMapMarkerWidget_FastTravel_Params
{
};

// Function ManeaterUI.HUDRewardQueueWidget.OnWidgetQueueDestruction
struct UHUDRewardQueueWidget_OnWidgetQueueDestruction_Params
{
	class UTwBaseWidget*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.HUDRewardQueueWidget.OnInventoryEvolutionChanged
struct UHUDRewardQueueWidget_OnInventoryEvolutionChanged_Params
{
	class UME_PlayerEvolution*                         Evolution;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUpgrade;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.HUDTipInfo.Disable
struct UHUDTipInfo_Disable_Params
{
};

// Function ManeaterUI.InfamyRankUpWidget.OnAnimStart_BP
struct UInfamyRankUpWidget_OnAnimStart_BP_Params
{
};

// Function ManeaterUI.InfamyRankUpWidget.OnAnimEnd_BP
struct UInfamyRankUpWidget_OnAnimEnd_BP_Params
{
};

// Function ManeaterUI.InGameMenuView.OpenEvolutionPanel_BP
struct UInGameMenuView_OpenEvolutionPanel_BP_Params
{
};

// Function ManeaterUI.InGameMenuView.OnInputDeviceChanged
struct UInGameMenuView_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.InvertedControlsWidget.OnAnyButtonClicked
struct UInvertedControlsWidget_OnAnyButtonClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          WidgetClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.KeyMappingSettingsWidget.RedrawKeybinds
struct UKeyMappingSettingsWidget_RedrawKeybinds_Params
{
};

// Function ManeaterUI.LandmarkMapMarkerWidget.OnMarkerUpdated
struct ULandmarkMapMarkerWidget_OnMarkerUpdated_Params
{
};

// Function ManeaterUI.LevelProgressWidget.UpdateProgress
struct ULevelProgressWidget_UpdateProgress_Params
{
};

// Function ManeaterUI.LevelProgressWidget.OnTweenStep
struct ULevelProgressWidget_OnTweenStep_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnShark_NutrientGained
struct ULevelProgressWidget_OnShark_NutrientGained_Params
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NutrientGain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromObjective;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnShark_LevelChanged
struct ULevelProgressWidget_OnShark_LevelChanged_Params
{
	int                                                NewLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthStageAvailable
struct ULevelProgressWidget_OnShark_GrowthStageAvailable_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitPose;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnShark_GrowthLevelChanged
struct ULevelProgressWidget_OnShark_GrowthLevelChanged_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           OldGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           NewGrowthStage;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReinitPose;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnOpacityTweenStep
struct ULevelProgressWidget_OnOpacityTweenStep_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnOpacityOutFinished
struct ULevelProgressWidget_OnOpacityOutFinished_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnOpacityInFinished
struct ULevelProgressWidget_OnOpacityInFinished_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LevelProgressWidget.OnLifetimeEnded
struct ULevelProgressWidget_OnLifetimeEnded_Params
{
};

// Function ManeaterUI.LoadGameButtonWidget.SetProfileData
struct ULoadGameButtonWidget_SetProfileData_Params
{
	struct FText                                       SlotName;                                                  // (Parm, NativeAccessSpecifierPublic)
	struct FDateTime                                   SaveTime;                                                  // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CurrentRegion;                                             // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       PlayerLevel;                                               // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       TimePlayed;                                                // (Parm, NativeAccessSpecifierPublic)
	class UTexture2D*                                  SaveImage;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LoadGameButtonWidget.SetIsEmpty
struct ULoadGameButtonWidget_SetIsEmpty_Params
{
	bool                                               Empty;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.LoadGameButtonWidget.LoadGame
struct ULoadGameButtonWidget_LoadGame_Params
{
};

// Function ManeaterUI.MacroObjectiveMeterWidget.UpdateMeters
struct UMacroObjectiveMeterWidget_UpdateMeters_Params
{
	struct FText                                       RegionName;                                                // (Parm, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RegionIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRegionPoisoned;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldRegionPerc;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewRegionPerc;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OldGamePerc;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewGamePerc;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MacroObjectiveMeterWidget.PostCompleteDelay
struct UMacroObjectiveMeterWidget_PostCompleteDelay_Params
{
};

// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionStepEvent
struct UMacroObjectiveMeterWidget_OnRegionStepEvent_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MacroObjectiveMeterWidget.OnRegionCompleteEvent
struct UMacroObjectiveMeterWidget_OnRegionCompleteEvent_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeOutComplete
struct UMacroObjectiveMeterWidget_OnOpacityFadeOutComplete_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MacroObjectiveMeterWidget.OnOpacityFadeInComplete
struct UMacroObjectiveMeterWidget_OnOpacityFadeInComplete_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MacroObjectiveMeterWidget.OnGameStepEvent
struct UMacroObjectiveMeterWidget_OnGameStepEvent_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterBaseViewController.OnInputDeviceChanged
struct UManeaterBaseViewController_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.TutorialPopupDismissed
struct AManeaterHUD_TutorialPopupDismissed_Params
{
};

// Function ManeaterUI.ManeaterHUD.ToggleSpeedometer
struct AManeaterHUD_ToggleSpeedometer_Params
{
};

// Function ManeaterUI.ManeaterHUD.ThreatAdded
struct AManeaterHUD_ThreatAdded_Params
{
};

// Function ManeaterUI.ManeaterHUD.StoryCompleteWidgetDismissed
struct AManeaterHUD_StoryCompleteWidgetDismissed_Params
{
};

// Function ManeaterUI.ManeaterHUD.ShowTutorialSinglePopupWidget
struct AManeaterHUD_ShowTutorialSinglePopupWidget_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.ShowStoryCompletePopup
struct AManeaterHUD_ShowStoryCompletePopup_Params
{
};

// Function ManeaterUI.ManeaterHUD.ShowRegionToast
struct AManeaterHUD_ShowRegionToast_Params
{
	struct FRegionToastData                            Data;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.ShowInvertedControlsPopup
struct AManeaterHUD_ShowInvertedControlsPopup_Params
{
};

// Function ManeaterUI.ManeaterHUD.ShowDevSettings
struct AManeaterHUD_ShowDevSettings_Params
{
};

// Function ManeaterUI.ManeaterHUD.ShowBasicTooltip
struct AManeaterHUD_ShowBasicTooltip_Params
{
	struct FText                                       Header;                                                    // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                      // (Parm, NativeAccessSpecifierPublic)
	struct FText                                       InputText;                                                 // (Parm, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.SetPlayerWaypoint
struct AManeaterHUD_SetPlayerWaypoint_Params
{
	struct FVector2D                                   Pos;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.SetDeathScreenEnabled
struct AManeaterHUD_SetDeathScreenEnabled_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.RemoveContextualControlPrompt
struct AManeaterHUD_RemoveContextualControlPrompt_Params
{
	struct FName                                       ControlName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.PushDeathView
struct AManeaterHUD_PushDeathView_Params
{
};

// Function ManeaterUI.ManeaterHUD.PushDeathScreen
struct AManeaterHUD_PushDeathScreen_Params
{
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.PushCreditsScreen
struct AManeaterHUD_PushCreditsScreen_Params
{
};

// Function ManeaterUI.ManeaterHUD.PushCinematicView
struct AManeaterHUD_PushCinematicView_Params
{
};

// Function ManeaterUI.ManeaterHUD.PopCinematicView
struct AManeaterHUD_PopCinematicView_Params
{
};

// Function ManeaterUI.ManeaterHUD.PlayerKnifingStateChanged
struct AManeaterHUD_PlayerKnifingStateChanged_Params
{
	bool                                               bIsKnifing;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         ChangeContext;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.PlayerInfamyRankUp
struct AManeaterHUD_PlayerInfamyRankUp_Params
{
	int                                                Rank;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.PauseGame
struct AManeaterHUD_PauseGame_Params
{
};

// Function ManeaterUI.ManeaterHUD.OnZeroOutStats
struct AManeaterHUD_OnZeroOutStats_Params
{
};

// Function ManeaterUI.ManeaterHUD.OnTimeDilationEvent
struct AManeaterHUD_OnTimeDilationEvent_Params
{
	bool                                               bStarted;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnThrashUIChanged
struct AManeaterHUD_OnThrashUIChanged_Params
{
	bool                                               bShow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerSharkThrashed;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnStoryEventProgress
struct AManeaterHUD_OnStoryEventProgress_Params
{
	int                                                CurrentStoryIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ConditionText;                                             // (Parm, NativeAccessSpecifierPublic)
	float                                              StoryProgress;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnSonarUntarget
struct AManeaterHUD_OnSonarUntarget_Params
{
	class AActor*                                      NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnSonarTarget
struct AManeaterHUD_OnSonarTarget_Params
{
	class AActor*                                      NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnSonarRefreshTarget
struct AManeaterHUD_OnSonarRefreshTarget_Params
{
	class AActor*                                      NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnSonarAbilityActivated
struct AManeaterHUD_OnSonarAbilityActivated_Params
{
	float                                              Duration;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnPlayerTookDamage
struct AManeaterHUD_OnPlayerTookDamage_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnPlayerThrash
struct AManeaterHUD_OnPlayerThrash_Params
{
};

// Function ManeaterUI.ManeaterHUD.OnPlayerStruggle
struct AManeaterHUD_OnPlayerStruggle_Params
{
};

// Function ManeaterUI.ManeaterHUD.OnPlayerRegionChanged
struct AManeaterHUD_OnPlayerRegionChanged_Params
{
	Maneater_EWorldRegion                              Region;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RegionIcon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnPlayerNutrientGained
struct AManeaterHUD_OnPlayerNutrientGained_Params
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NutrientGain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromObjective;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnPlayerMovementModeChanged
struct AManeaterHUD_OnPlayerMovementModeChanged_Params
{
	class AME_PlayerSharkCharacter*                    PlayerShark;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  OldMovementMode;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnObjectiveUpdated
struct AManeaterHUD_OnObjectiveUpdated_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnObjectiveTrack
struct AManeaterHUD_OnObjectiveTrack_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTrackerUpdate;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnObjectiveStateChanged
struct AManeaterHUD_OnObjectiveStateChanged_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EObjectiveState                           NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnObjectiveStarted
struct AManeaterHUD_OnObjectiveStarted_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnObjectiveDiscovered
struct AManeaterHUD_OnObjectiveDiscovered_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnObjectiveComplete
struct AManeaterHUD_OnObjectiveComplete_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnNewSoftTarget
struct AManeaterHUD_OnNewSoftTarget_Params
{
	class AActor*                                      NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnNewRelevantTarget
struct AManeaterHUD_OnNewRelevantTarget_Params
{
	class AActor*                                      NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnNewQuestAvailableChanged
struct AManeaterHUD_OnNewQuestAvailableChanged_Params
{
};

// Function ManeaterUI.ManeaterHUD.OnLevelChanged
struct AManeaterHUD_OnLevelChanged_Params
{
	int                                                growthLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnLandmarkObjectFound
struct AManeaterHUD_OnLandmarkObjectFound_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LandmarkDescription;                                       // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnHudTipRequested
struct AManeaterHUD_OnHudTipRequested_Params
{
	struct FME_TutorialTipEvent                        ME_TutorialEvent;                                          // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnHUDErrorMessage
struct AManeaterHUD_OnHUDErrorMessage_Params
{
	struct FText                                       ErrorMessage;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnGameplayTagRemoved
struct AManeaterHUD_OnGameplayTagRemoved_Params
{
	struct FGameplayTagContainer                       TagsRemoved;                                               // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnGameplayTagAdded
struct AManeaterHUD_OnGameplayTagAdded_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (ConstParm, Parm, NativeAccessSpecifierPublic)
	float                                              TagDuration;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnEvolutionAbilityActivated
struct AManeaterHUD_OnEvolutionAbilityActivated_Params
{
	float                                              Duration;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnDangerSenseUpdated
struct AManeaterHUD_OnDangerSenseUpdated_Params
{
	class AActor*                                      DangerousActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnCharacterAttributesChanged
struct AManeaterHUD_OnCharacterAttributesChanged_Params
{
};

// Function ManeaterUI.ManeaterHUD.OnBountyBossSpawned
struct AManeaterHUD_OnBountyBossSpawned_Params
{
	struct FBountyViewData                             BountyData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnBossFightAvailable
struct AManeaterHUD_OnBossFightAvailable_Params
{
	class UME_PlayerObjectiveBoss*                     BossObjective;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnAICombatStatusChanged
struct AManeaterHUD_OnAICombatStatusChanged_Params
{
	bool                                               bInCombat;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AME_AIController*                            AIActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnAdvancedToNextEpisode
struct AManeaterHUD_OnAdvancedToNextEpisode_Params
{
	int                                                CurrentStoryEventIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.OnAbilityTriggered
struct AManeaterHUD_OnAbilityTriggered_Params
{
	Maneater_EME_CharacterAbility                      CharacterAbilityEnum;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                                AbilityTag;                                                // (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.InvertedControlsPopupDismissed
struct AManeaterHUD_InvertedControlsPopupDismissed_Params
{
};

// Function ManeaterUI.ManeaterHUD.GetTutorialModal
struct AManeaterHUD_GetTutorialModal_Params
{
	class UTwBaseWidget*                               ReturnValue;                                               // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.GetHUDViewController
struct AManeaterHUD_GetHUDViewController_Params
{
	class UManeaterHUDViewController*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUD.EnableCinematicMode
struct AManeaterHUD_EnableCinematicMode_Params
{
};

// Function ManeaterUI.ManeaterHUD.DisableCinematicMode
struct AManeaterHUD_DisableCinematicMode_Params
{
};

// Function ManeaterUI.ManeaterHUD.ClearPlayerWaypoint
struct AManeaterHUD_ClearPlayerWaypoint_Params
{
};

// Function ManeaterUI.ManeaterHUD.BountyEnding
struct AManeaterHUD_BountyEnding_Params
{
};

// Function ManeaterUI.ManeaterHUD.BountyBeginning
struct AManeaterHUD_BountyBeginning_Params
{
};

// Function ManeaterUI.ManeaterHUD.AddContextualControlPrompt
struct AManeaterHUD_AddContextualControlPrompt_Params
{
	struct FName                                       ControlName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ButtonText;                                                // (Parm, NativeAccessSpecifierPublic)
	struct FName                                       InputActionName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDPauseMenuView.OnQuit_Clicked
struct UManeaterHUDPauseMenuView_OnQuit_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonMouseOver
struct UManeaterHUDPauseMenuView_OnButtonMouseOver_Params
{
	class UTwBaseButton*                               MouseOverWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDPauseMenuView.OnButtonGainFoucus
struct UManeaterHUDPauseMenuView_OnButtonGainFoucus_Params
{
	class UTwClickableWidget*                          OnWidgetFocused;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDView.TutorialSinglePopupDismissed
struct UManeaterHUDView_TutorialSinglePopupDismissed_Params
{
};

// Function ManeaterUI.ManeaterHUDView.StoryCompleteWidgetDismissed
struct UManeaterHUDView_StoryCompleteWidgetDismissed_Params
{
};

// Function ManeaterUI.ManeaterHUDView.ShowTutorialSinglePopupWidget
struct UManeaterHUDView_ShowTutorialSinglePopupWidget_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PageCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDView.ShowStoryCompleteWidget
struct UManeaterHUDView_ShowStoryCompleteWidget_Params
{
	class UStoryCompleteWidget*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDView.ShowSavingIcon
struct UManeaterHUDView_ShowSavingIcon_Params
{
};

// Function ManeaterUI.ManeaterHUDView.ShowInvertedControlsWidget
struct UManeaterHUDView_ShowInvertedControlsWidget_Params
{
	class UInvertedControlsWidget*                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterHUDView.InvertedControlsPopupDismissed
struct UManeaterHUDView_InvertedControlsPopupDismissed_Params
{
};

// Function ManeaterUI.ManeaterHUDView.HideSavingIcon
struct UManeaterHUDView_HideSavingIcon_Params
{
};

// Function ManeaterUI.ManeaterMapPanel.OnTutorialPopupWidgetDismissed
struct UManeaterMapPanel_OnTutorialPopupWidgetDismissed_Params
{
};

// Function ManeaterUI.ManeaterMapPanel.OnRegionDataLoaded
struct UManeaterMapPanel_OnRegionDataLoaded_Params
{
};

// Function ManeaterUI.ManeaterMapPanel.OnObjectiveTrack
struct UManeaterMapPanel_OnObjectiveTrack_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTrackerUpdate;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterMapPanel.OnNewPlayerWaypointSet
struct UManeaterMapPanel_OnNewPlayerWaypointSet_Params
{
	struct FVector2D                                   Pos;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterMapPanel.OnControllerDisconnectedModalDismissed
struct UManeaterMapPanel_OnControllerDisconnectedModalDismissed_Params
{
};

// Function ManeaterUI.ManeaterSettingsMenuView.ShowSavingIcon
struct UManeaterSettingsMenuView_ShowSavingIcon_Params
{
};

// Function ManeaterUI.ManeaterSettingsMenuView.HideSavingIcon
struct UManeaterSettingsMenuView_HideSavingIcon_Params
{
};

// Function ManeaterUI.ManeaterTitleMenuView.ShowSavingIcon
struct UManeaterTitleMenuView_ShowSavingIcon_Params
{
};

// Function ManeaterUI.ManeaterTitleMenuView.RecacheSaveGames
struct UManeaterTitleMenuView_RecacheSaveGames_Params
{
};

// Function ManeaterUI.ManeaterTitleMenuView.PeekSaveGame
struct UManeaterTitleMenuView_PeekSaveGame_Params
{
	int                                                SlotIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UME_SaveGameObject*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_MouseEnter
struct UManeaterTitleMenuView_OnSettings_MouseEnter_Params
{
	class UTwBaseButton*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnSettings_Clicked
struct UManeaterTitleMenuView_OnSettings_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Focused
struct UManeaterTitleMenuView_OnPlayGame_Focused_Params
{
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnPlayGame_Clicked
struct UManeaterTitleMenuView_OnPlayGame_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnMenuButton_FocusLost
struct UManeaterTitleMenuView_OnMenuButton_FocusLost_Params
{
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnExit_MouseEnter
struct UManeaterTitleMenuView_OnExit_MouseEnter_Params
{
	class UTwBaseButton*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnExit_Clicked
struct UManeaterTitleMenuView_OnExit_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Focused
struct UManeaterTitleMenuView_OnContinueGame_Focused_Params
{
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnContinueGame_Clicked
struct UManeaterTitleMenuView_OnContinueGame_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseLeave
struct UManeaterTitleMenuView_OnContinueButton_MouseLeave_Params
{
	class UTwBaseButton*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.OnContinueButton_MouseEnter
struct UManeaterTitleMenuView_OnContinueButton_MouseEnter_Params
{
	class UTwBaseButton*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.HideSavingIcon
struct UManeaterTitleMenuView_HideSavingIcon_Params
{
};

// Function ManeaterUI.ManeaterTitleMenuView.DoesSaveGameExist
struct UManeaterTitleMenuView_DoesSaveGameExist_Params
{
	int                                                SlotIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterTitleMenuView.ContinueGame_BP
struct UManeaterTitleMenuView_ContinueGame_BP_Params
{
};

// Function ManeaterUI.ManeaterTitleSplashView.OnStartButtonClicked
struct UManeaterTitleSplashView_OnStartButtonClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.IsKeyValidForUpgrade
struct UManeaterUIFunctionLibrary_IsKeyValidForUpgrade_Params
{
	struct FKey                                        Key;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetTextForKeybind
struct UManeaterUIFunctionLibrary_GetTextForKeybind_Params
{
	struct FName                                       ActionName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IconSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IconOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetShouldDisplayAttributeAsPercentage
struct UManeaterUIFunctionLibrary_GetShouldDisplayAttributeAsPercentage_Params
{
	struct FString                                     AttributeName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetReadableNameForAttribute
struct UManeaterUIFunctionLibrary_GetReadableNameForAttribute_Params
{
	struct FString                                     AttributeName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetNutrientColor
struct UManeaterUIFunctionLibrary_GetNutrientColor_Params
{
	TEnumAsByte<Maneater_ENutrientType>                Nutrient;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetManeaterHUD
struct UManeaterUIFunctionLibrary_GetManeaterHUD_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AManeaterHUD*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedSlotName
struct UManeaterUIFunctionLibrary_GetLocalizedSlotName_Params
{
	Maneater_EEvolutionSlot                            Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedRarityName
struct UManeaterUIFunctionLibrary_GetLocalizedRarityName_Params
{
	Maneater_EEvolutionRarity                          Rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedGrowthName
struct UManeaterUIFunctionLibrary_GetLocalizedGrowthName_Params
{
	TEnumAsByte<Maneater_EPlayerGrowthStage>           GrowthStage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetLocalizedEvolutionProcName
struct UManeaterUIFunctionLibrary_GetLocalizedEvolutionProcName_Params
{
	Maneater_EEvolutionProcType                        ProcType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIsDisplayAttributeMultiplier
struct UManeaterUIFunctionLibrary_GetIsDisplayAttributeMultiplier_Params
{
	struct FString                                     AttributeName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForObjectiveType
struct UManeaterUIFunctionLibrary_GetIconForObjectiveType_Params
{
	Maneater_EObjectiveType                            ObjectiveType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStoryObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompleted;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetIconForMarkerType
struct UManeaterUIFunctionLibrary_GetIconForMarkerType_Params
{
	ManeaterUI_EMarkerType                             MarkerType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEvolutionColor
struct UManeaterUIFunctionLibrary_GetEvolutionColor_Params
{
	Maneater_EEvolutionRarity                          Rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ManeaterUIFunctionLibrary.GetEpisodeImage
struct UManeaterUIFunctionLibrary_GetEpisodeImage_Params
{
	int                                                StoryIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapMarkerPopupWidget.SetObjectiveData
struct UMapMarkerPopupWidget_SetObjectiveData_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapMarkerPopupWidget.OnHoveredMapMarkerWidgetUpdated
struct UMapMarkerPopupWidget_OnHoveredMapMarkerWidgetUpdated_Params
{
};

// Function ManeaterUI.MapMarkerPopupWidget.HandleInput
struct UMapMarkerPopupWidget_HandleInput_Params
{
	struct FKey                                        Key;                                                       // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.ToggleFocus
struct UMapProgressButtonWidget_ToggleFocus_Params
{
};

// Function ManeaterUI.MapProgressButtonWidget.SetWidgetSwitcherIndex
struct UMapProgressButtonWidget_SetWidgetSwitcherIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.SetShowProgress
struct UMapProgressButtonWidget_SetShowProgress_Params
{
	bool                                               show;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.SetSectionTexture
struct UMapProgressButtonWidget_SetSectionTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.SetSectionName
struct UMapProgressButtonWidget_SetSectionName_Params
{
	struct FText                                       Name;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.SetProgress
struct UMapProgressButtonWidget_SetProgress_Params
{
	float                                              Progress;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.SetActionContainerDisabled
struct UMapProgressButtonWidget_SetActionContainerDisabled_Params
{
	bool                                               Disable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.IsFocused
struct UMapProgressButtonWidget_IsFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressButtonWidget.GetWidgetSwitcherIndex
struct UMapProgressButtonWidget_GetWidgetSwitcherIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressWidget.SetSectionTexture
struct UMapProgressWidget_SetSectionTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressWidget.SetSectionName
struct UMapProgressWidget_SetSectionName_Params
{
	struct FText                                       Name;                                                      // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressWidget.SetProgress
struct UMapProgressWidget_SetProgress_Params
{
	float                                              Progress;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressWidget.SetNutrientCacheProgress
struct UMapProgressWidget_SetNutrientCacheProgress_Params
{
	struct FText                                       Progress;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressWidget.SetLandmarkProgress
struct UMapProgressWidget_SetLandmarkProgress_Params
{
	struct FText                                       Progress;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MapProgressWidget.SetCollectibleProgress
struct UMapProgressWidget_SetCollectibleProgress_Params
{
	struct FText                                       Progress;                                                  // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ME_CinematicMovieWidget.GetMediaSourceForPlatform
struct UME_CinematicMovieWidget_GetMediaSourceForPlatform_Params
{
	class UMediaSource*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.METoastWidget.RemoveToast
struct UMEToastWidget_RemoveToast_Params
{
};

// Function ManeaterUI.METoastWidget.OnToastShowing
struct UMEToastWidget_OnToastShowing_Params
{
};

// Function ManeaterUI.METoastWidget.OnToastReadyForRemove
struct UMEToastWidget_OnToastReadyForRemove_Params
{
};

// Function ManeaterUI.MESettingsStepper.SetSelectedOption
struct UMESettingsStepper_SetSelectedOption_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerBroadcast;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MESettingsStepper.SetOptions
struct UMESettingsStepper_SetOptions_Params
{
	TArray<struct FText>                               Options;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MESettingsStepper.PreviousOption
struct UMESettingsStepper_PreviousOption_Params
{
};

// Function ManeaterUI.MESettingsStepper.OnPrevClicked
struct UMESettingsStepper_OnPrevClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          WidgetClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MESettingsStepper.OnNextClicked
struct UMESettingsStepper_OnNextClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          WidgetClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MESettingsStepper.NextOption
struct UMESettingsStepper_NextOption_Params
{
};

// Function ManeaterUI.MESettingsStepper.GetSelectedOption
struct UMESettingsStepper_GetSelectedOption_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.MESettingsStepper.GetOptions
struct UMESettingsStepper_GetOptions_Params
{
	TArray<struct FText>                               ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveButtonWidget.OnObjectiveTrack
struct UObjectiveButtonWidget_OnObjectiveTrack_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTrackerUpdate;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveButtonWidget.GetFocusWidgetForNavigation
struct UObjectiveButtonWidget_GetFocusWidgetForNavigation_Params
{
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveCollectionWidget.SetFocusedObjective
struct UObjectiveCollectionWidget_SetFocusedObjective_Params
{
	class UObjectiveButtonWidget*                      ObjectiveButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_MouseEnter
struct UObjectiveCollectionWidget_OnObjective_MouseEnter_Params
{
	class UObjectiveButtonWidget*                      ObjectiveButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveCollectionWidget.OnObjective_Focused
struct UObjectiveCollectionWidget_OnObjective_Focused_Params
{
	class UObjectiveButtonWidget*                      ObjectiveButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.TutorialFinished
struct UObjectiveControllerWidget_TutorialFinished_Params
{
};

// Function ManeaterUI.ObjectiveControllerWidget.OnToastDestroyed
struct UObjectiveControllerWidget_OnToastDestroyed_Params
{
	class UTwBaseWidget*                               Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnStoryEventProgress
struct UObjectiveControllerWidget_OnStoryEventProgress_Params
{
	int                                                CurrentStoryIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ConditionText;                                             // (Parm, NativeAccessSpecifierPublic)
	float                                              StoryProgress;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnRegionChanged
struct UObjectiveControllerWidget_OnRegionChanged_Params
{
	struct FRegionToastData                            Data;                                                      // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveUpdated
struct UObjectiveControllerWidget_OnObjectiveUpdated_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveTrack
struct UObjectiveControllerWidget_OnObjectiveTrack_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTrackerUpdate;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStateChanged
struct UObjectiveControllerWidget_OnObjectiveStateChanged_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EObjectiveState                           NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveStarted
struct UObjectiveControllerWidget_OnObjectiveStarted_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveDiscovered
struct UObjectiveControllerWidget_OnObjectiveDiscovered_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnObjectiveComplete
struct UObjectiveControllerWidget_OnObjectiveComplete_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnNewQuestAvailableChanged
struct UObjectiveControllerWidget_OnNewQuestAvailableChanged_Params
{
};

// Function ManeaterUI.ObjectiveControllerWidget.OnLevelChanged
struct UObjectiveControllerWidget_OnLevelChanged_Params
{
	int                                                NewGrowthLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChangeFromTheoretical;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkRegionComplete
struct UObjectiveControllerWidget_OnLandmarkRegionComplete_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnLandmarkObjectFound
struct UObjectiveControllerWidget_OnLandmarkObjectFound_Params
{
	class UME_PlayerObjective*                         Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LandmarkDescription;                                       // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnInfamyRankUp
struct UObjectiveControllerWidget_OnInfamyRankUp_Params
{
	int                                                NewRank;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnHUDErrorMessage
struct UObjectiveControllerWidget_OnHUDErrorMessage_Params
{
	struct FText                                       ErrorMessage;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnBountyBossSpawned
struct UObjectiveControllerWidget_OnBountyBossSpawned_Params
{
	struct FBountyViewData                             BountyData;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnBossFightAvailable
struct UObjectiveControllerWidget_OnBossFightAvailable_Params
{
	class UME_PlayerObjectiveBoss*                     BossObjective;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveControllerWidget.OnAdvancedToNextEpisode
struct UObjectiveControllerWidget_OnAdvancedToNextEpisode_Params
{
	int                                                CurrentStoryEventIndex;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ObjectiveMapMarkerWidget.OnObjectiveTrack
struct UObjectiveMapMarkerWidget_OnObjectiveTrack_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldTrack;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoTrackerUpdate;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerAbilitiesWidget.SetHealth
struct UPlayerAbilitiesWidget_SetHealth_Params
{
	float                                              Health;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerAbilitiesWidget.SetCooldownForAbilitySlot
struct UPlayerAbilitiesWidget_SetCooldownForAbilitySlot_Params
{
	ManeaterUI_EAbilitySlot                            AbilitySlot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerAbilitiesWidget.SetCharges
struct UPlayerAbilitiesWidget_SetCharges_Params
{
	float                                              Charges;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerAbilitiesWidget.SetBoost
struct UPlayerAbilitiesWidget_SetBoost_Params
{
	float                                              Boost;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerHealthBarWidget.SetRemainingBreath
struct UPlayerHealthBarWidget_SetRemainingBreath_Params
{
	float                                              RemainingBreath;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerHealthBarWidget.SetHealthValue
struct UPlayerHealthBarWidget_SetHealthValue_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerHealthBarWidget.OnTweenStep
struct UPlayerHealthBarWidget_OnTweenStep_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerHealthBarWidget.OnRemainingBreathChanged_BP
struct UPlayerHealthBarWidget_OnRemainingBreathChanged_BP_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerHealthBarWidget.OnHealthValueChanged_BP
struct UPlayerHealthBarWidget_OnHealthValueChanged_BP_Params
{
	float                                              NewValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerInfoWidget.OnStoryUpdated
struct UPlayerInfoWidget_OnStoryUpdated_Params
{
	int                                                ActiveStoryIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerInfoWidget.OnRegionChanged
struct UPlayerInfoWidget_OnRegionChanged_Params
{
	struct FRegionToastData                            Data;                                                      // (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerInfoWidget.OnPlayerHealthValueChanged
struct UPlayerInfoWidget_OnPlayerHealthValueChanged_Params
{
	float                                              Delta;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerInfoWidget.OnPlayerDamaged
struct UPlayerInfoWidget_OnPlayerDamaged_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientImage.SetNutrientType
struct UPlayerNutrientImage_SetNutrientType_Params
{
	TEnumAsByte<Maneater_ENutrientType>                Nutrient;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenStep
struct UPlayerNutrientInstanceIcon_OnTweenStep_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientInstanceIcon.OnTweenFinished
struct UPlayerNutrientInstanceIcon_OnTweenFinished_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientInstanceIcon.OnFadeOutFinished
struct UPlayerNutrientInstanceIcon_OnFadeOutFinished_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientWidget.OnZeroOutStats
struct UPlayerNutrientWidget_OnZeroOutStats_Params
{
};

// Function ManeaterUI.PlayerNutrientWidget.OnTweenStarted
struct UPlayerNutrientWidget_OnTweenStarted_Params
{
};

// Function ManeaterUI.PlayerNutrientWidget.OnTweenFinished
struct UPlayerNutrientWidget_OnTweenFinished_Params
{
};

// Function ManeaterUI.PlayerNutrientWidget.OnPlayerNutrientGained
struct UPlayerNutrientWidget_OnPlayerNutrientGained_Params
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NutrientGain;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromObjective;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientWidget.OnOpacityOutFinished
struct UPlayerNutrientWidget_OnOpacityOutFinished_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientWidget.OnOpacityInFinished
struct UPlayerNutrientWidget_OnOpacityInFinished_Params
{
	class UTwTweener*                                  Tweener;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientWidget.OnNutrientsSpent
struct UPlayerNutrientWidget_OnNutrientsSpent_Params
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NutrientSpent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.PlayerNutrientWidget.OnLifetimeEnded
struct UPlayerNutrientWidget_OnLifetimeEnded_Params
{
};

// Function ManeaterUI.QuestLogPanel.SetRegionFilterButton
struct UQuestLogPanel_SetRegionFilterButton_Params
{
	class UTwBaseButton*                               RegionFilterButton;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.QuestLogPanel.PopulateObjectiveData
struct UQuestLogPanel_PopulateObjectiveData_Params
{
};

// Function ManeaterUI.QuestLogPanel.OnRegionFilter_Clicked
struct UQuestLogPanel_OnRegionFilter_Clicked_Params
{
	struct FKey                                        Button;                                                    // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusOOB
struct UQuestLogPanel_OnObjectiveCollection_FocusOOB_Params
{
	class UObjectiveCollectionWidget*                  ObjectiveCollectionWidget;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EUINavigation                            NavigationDir;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.QuestLogPanel.OnObjectiveCollection_FocusChanged
struct UQuestLogPanel_OnObjectiveCollection_FocusChanged_Params
{
	class UObjectiveButtonWidget*                      ObjectiveWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.QuestLogPanel.OnControllerDisconnectedModalDismissed
struct UQuestLogPanel_OnControllerDisconnectedModalDismissed_Params
{
};

// Function ManeaterUI.RegionInfoWidget.SetRegionData
struct URegionInfoWidget_SetRegionData_Params
{
	struct FRegionData                                 NewRegionData;                                             // (Parm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.RegionInfoWidget.SetCurrentlyHovered
struct URegionInfoWidget_SetCurrentlyHovered_Params
{
	bool                                               bCurrentlyHovered;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.RegionInfoWidget.OnRegionDataUpdated
struct URegionInfoWidget_OnRegionDataUpdated_Params
{
};

// Function ManeaterUI.RegionInfoWidget.GetRegionName
struct URegionInfoWidget_GetRegionName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.RegionInfoWidget.GetRegion
struct URegionInfoWidget_GetRegion_Params
{
	Maneater_EWorldRegion                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ResourceListWidget.UpdateResources
struct UResourceListWidget_UpdateResources_Params
{
};

// Function ManeaterUI.ResourceListWidget.OnNutrientsSpent
struct UResourceListWidget_OnNutrientsSpent_Params
{
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NutrientSpent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.SaveSlotSelectWidget.SetSaveSlotIdx
struct USaveSlotSelectWidget_SetSaveSlotIdx_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.SaveSlotSelectWidget.OnRightButtonClicked
struct USaveSlotSelectWidget_OnRightButtonClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          WidgetClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.SaveSlotSelectWidget.OnLeftButtonClicked
struct USaveSlotSelectWidget_OnLeftButtonClicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          WidgetClicked;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.SaveSlotSelectWidget.IncrementSaveSlot
struct USaveSlotSelectWidget_IncrementSaveSlot_Params
{
};

// Function ManeaterUI.SaveSlotSelectWidget.DecrementSaveSlot
struct USaveSlotSelectWidget_DecrementSaveSlot_Params
{
};

// Function ManeaterUI.StoryCompleteWidget.OnDismissStatsButton_Clicked
struct UStoryCompleteWidget_OnDismissStatsButton_Clicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.StoryCompleteWidget.OnDismissCongratsButton_Clicked
struct UStoryCompleteWidget_OnDismissCongratsButton_Clicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.SubtitleTextWidget.OnSubtitleTextUpdated
struct USubtitleTextWidget_OnSubtitleTextUpdated_Params
{
	struct FText                                       SubtitleText;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ThrashingWidget.OnUpdateThrashUI
struct UThrashingWidget_OnUpdateThrashUI_Params
{
	bool                                               bShow;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerSharkThrashed;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.ThrashingWidget.OnThrashPulse
struct UThrashingWidget_OnThrashPulse_Params
{
};

// Function ManeaterUI.ThrashingWidget.EnableThrashUI
struct UThrashingWidget_EnableThrashUI_Params
{
	bool                                               bPlayerSharkThrashed;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TutorialInfoWidget.TutorialFinished
struct UTutorialInfoWidget_TutorialFinished_Params
{
};

// Function ManeaterUI.TutorialInfoWidget.StopTutorialTimer
struct UTutorialInfoWidget_StopTutorialTimer_Params
{
};

// Function ManeaterUI.TutorialInfoWidget.StartTutorialTimer
struct UTutorialInfoWidget_StartTutorialTimer_Params
{
};

// Function ManeaterUI.TutorialInfoWidget.SetObjectiveComplete
struct UTutorialInfoWidget_SetObjectiveComplete_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TutorialInfoWidget.SetEnabled
struct UTutorialInfoWidget_SetEnabled_Params
{
	bool                                               _bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TutorialInfoWidget.RepeatedTutorialStepCompleted
struct UTutorialInfoWidget_RepeatedTutorialStepCompleted_Params
{
	int                                                Numberator;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Denomenator;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TutorialInfoWidget.RemoveObjective
struct UTutorialInfoWidget_RemoveObjective_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             TutorialEventId;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TutorialInfoWidget.Disable
struct UTutorialInfoWidget_Disable_Params
{
};

// Function ManeaterUI.TutorialInfoWidget.ClearAllObjectives
struct UTutorialInfoWidget_ClearAllObjectives_Params
{
};

// Function ManeaterUI.TutorialInfoWidget.AddObjective
struct UTutorialInfoWidget_AddObjective_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FME_TutorialEvent                           EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TUtorialPopupWidget.OnTutorialButton_BP_Clicked
struct UTUtorialPopupWidget_OnTutorialButton_BP_Clicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.TUtorialPopupWidget.Disable
struct UTUtorialPopupWidget_Disable_Params
{
};

// Function ManeaterUI.TUtorialSinglePopupWidget.OnOkButton_Clicked
struct UTUtorialSinglePopupWidget_OnOkButton_Clicked_Params
{
	struct FKey                                        MouseButtonClicked;                                        // (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          OnWidgetClicked;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.VideoSettingsWidget.OnWindowModeChanged
struct UVideoSettingsWidget_OnWindowModeChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.VideoSettingsWidget.OnResolutionChanged
struct UVideoSettingsWidget_OnResolutionChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.VideoSettingsWidget.OnQualityChanged
struct UVideoSettingsWidget_OnQualityChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.VideoSettingsWidget.OnOptionChanged
struct UVideoSettingsWidget_OnOptionChanged_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.WorldMapWidget.UpdateRegionInfoWidgets
struct UWorldMapWidget_UpdateRegionInfoWidgets_Params
{
};

// Function ManeaterUI.WorldMapWidget.SetDataForRegions
struct UWorldMapWidget_SetDataForRegions_Params
{
	TArray<struct FRegionData>                         RegionData;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.WorldMapWidget.SetDataForRegion
struct UWorldMapWidget_SetDataForRegion_Params
{
	struct FRegionData                                 RegionData;                                                // (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function ManeaterUI.WorldMapWidget.OnRegionDataChanged
struct UWorldMapWidget_OnRegionDataChanged_Params
{
};

// Function ManeaterUI.WorldMapWidget.OnInputDeviceChanged
struct UWorldMapWidget_OnInputDeviceChanged_Params
{
	TwUIFramework_EUserInputDevice                     Device;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
