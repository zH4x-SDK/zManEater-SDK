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
// Classes
//---------------------------------------------------------------------------

// Class ManeaterUI.AbilityTierWidget
// 0x0028 (FullSize[0x0280] - InheritedSize[0x0258])
class UAbilityTierWidget : public UTwBaseWidget
{
public:
	class UAgeTierDiamond*                             AgeTierDiamond1;                                           // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAgeTierDiamond*                             AgeTierDiamond2;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAgeTierDiamond*                             AgeTierDiamond3;                                           // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAgeTierDiamond*                             AgeTierDiamond4;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  AbilityDescription;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.AbilityTierWidget");
		return ptr;
	}



};

// Class ManeaterUI.AgeTierDiamond
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class UAgeTierDiamond : public UTwBaseWidget
{
public:
	class UImage*                                      PipBG;                                                     // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      PipFill;                                                   // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                                NewPip;                                                    // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.AgeTierDiamond");
		return ptr;
	}



};

// Class ManeaterUI.AgeTierInfographicWidget
// 0x0078 (FullSize[0x02D0] - InheritedSize[0x0258])
class UAgeTierInfographicWidget : public UTwBaseWidget
{
public:
	class UTwBaseButton*                               EvolutionUpgradeButton_BP;                                 // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  AgeTierText;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTierWidget*                          AbilityTierWidget1;                                        // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTierWidget*                          AbilityTierWidget2;                                        // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTierWidget*                          AbilityTierWidget3;                                        // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                                UpgradeVerticalBox;                                        // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  UpgradeAbilityText;                                        // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      AbilityIconImage;                                          // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AbilityIconTailwhip;                                       // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AbilityIconWhipshot;                                       // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            InAnimation;                                               // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AudioEventShowWidget;                                      // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6V64[0x18];                                    // 0x02B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.AgeTierInfographicWidget");
		return ptr;
	}



	void OnEvolutionUpgradeButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// Class ManeaterUI.AttributesWidget
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UAttributesWidget : public UTwBaseWidget
{
public:
	class AME_InventoryActor*                          InventoryActor;                                            // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.AttributesWidget");
		return ptr;
	}



	void UpdateAttributes();
};

// Class ManeaterUI.AwarenessWidget
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UAwarenessWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_B0DT[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.AwarenessWidget");
		return ptr;
	}



	void SetAwareness(float Awareness);
};

// Class ManeaterUI.BaseObjectiveDecorator
// 0x0030 (FullSize[0x0288] - InheritedSize[0x0258])
class UBaseObjectiveDecorator : public UTwBaseWidget
{
public:
	float                                              LifeTime;                                                  // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RV63[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            IdleAnimation;                                             // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UME_PlayerObjective*                         AssignedObjective;                                         // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T90O[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.BaseObjectiveDecorator");
		return ptr;
	}



	void DelayedOutAnimation();
};

// Class ManeaterUI.MapMarkerWidget
// 0x0098 (FullSize[0x02F0] - InheritedSize[0x0258])
class UMapMarkerWidget : public UTwBaseWidget
{
public:
	class UCanvasPanel*                                MarkerCanvas;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      MarkerImage;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       MarkerName;                                                // 0x0268(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       MarkerDescription;                                         // 0x0280(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	ManeaterUI_EMarkerType                             MarkerType;                                                // 0x0298(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I50V[0x3];                                     // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Position;                                                  // 0x029C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Rotation;                                                  // 0x02A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   Offset;                                                    // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      IconOverride[0x28];                                        // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              MarkerRadius;                                              // 0x02D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   MapScale;                                                  // 0x02DC(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZNYJ[0xC];                                     // 0x02E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MapMarkerWidget");
		return ptr;
	}



	void OnInteractButtonUp();
	void OnInteractButtonDown();
	void OnActiveFilterChanged(ManeaterUI_EMarkerType NewMarkerTypeFilter);
};

// Class ManeaterUI.BountyBoatMapMarkerWidget
// 0x0050 (FullSize[0x0340] - InheritedSize[0x02F0])
class UBountyBoatMapMarkerWidget : public UMapMarkerWidget
{
public:
	unsigned char                                      LeaderIcon[0x28];                                          // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      BoatIcon[0x28];                                            // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.BountyBoatMapMarkerWidget");
		return ptr;
	}



};

// Class ManeaterUI.BountyPanel
// 0x0168 (FullSize[0x0400] - InheritedSize[0x0298])
class UBountyPanel : public UTwBaseMenuPanel
{
public:
	unsigned char                                      InfamyRankIcons[0x10];                                     // 0x0298(0x0010) UNKNOWN PROPERTY: ArrayProperty
	class UTextBlock*                                  HunterFirstName;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  HunterLastName;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  GuideText;                                                 // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      HunterIcon;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      HunterPortrait;                                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  HunterBio;                                                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  HunterQuote;                                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      RankIcon;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              SupportBox;                                                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInfamyRewardWidget*                         RewardWidget;                                              // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                ProgressBox;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                Progress;                                                  // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CurrentLevel;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NextLevel;                                                 // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                RightContent;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                CenterContent;                                             // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                LeftContent;                                               // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  HunterNumber;                                              // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter1;                                                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter2;                                                   // 0x0340(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter3;                                                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter4;                                                   // 0x0350(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter5;                                                   // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter6;                                                   // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter7;                                                   // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter8;                                                   // 0x0370(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter9;                                                   // 0x0378(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                         Hunter10;                                                  // 0x0380(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G66P[0x18];                                    // 0x0388(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       GuideTextTemplate;                                         // 0x03A0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UHunterSupportIcon*>                  SupportEntries;                                            // 0x03B8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInfamyTierIcon*>                     TierIcons;                                                 // 0x03C8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      HunterSupportIconClass;                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TierIconClass;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumLevels;                                                 // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CFLX[0x4];                                     // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            NewRank;                                                   // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JFZ3[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.BountyPanel");
		return ptr;
	}



	void OnHunterButton_Focused(class UHunterButtonWidget* HunterButtonWidget);
	void OnControllerDisconnectedModalDismissed();
	class UME_BountyTier* GetBountyDataForRank(unsigned char Rank);
};

// Class ManeaterUI.BountyTimer
// 0x01A0 (FullSize[0x03F8] - InheritedSize[0x0258])
class UBountyTimer : public UTwBaseWidget
{
public:
	float                                              TierProgressLerpTime;                                      // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9S3F[0xC];                                     // 0x025C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                ProgressTime;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      InfamyProgressRadial;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      InfamyProgressRadialBackground;                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      TierIcon;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TimerText;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  InfamyTierText;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  StatusText;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       HuntingStatusText;                                         // 0x02A0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SearchingStatusText;                                       // 0x02B8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ReinforcementStatusText;                                   // 0x02D0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ThreatStatusText;                                          // 0x02E8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                                 ReinforcementTextColor;                                    // 0x0300(0x0028) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                                 BountyTextColor;                                           // 0x0328(0x0028) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                                 ThreatTextColor;                                           // 0x0350(0x0028) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                ReinforcementBGColor;                                      // 0x0378(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                HuntingBGColor;                                            // 0x0388(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SearchingBGColor;                                          // 0x0398(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ThreatBGColor;                                             // 0x03A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            RankUp;                                                    // 0x03B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            Idle_Searching;                                            // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      InfamyRankIcons[0x10];                                     // 0x03D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      UnknownData_15YH[0x10];                                    // 0x03E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.BountyTimer");
		return ptr;
	}



};

// Class ManeaterUI.CompassMarkerWidget
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UCompassMarkerWidget : public UTwBaseWidget
{
public:
	class UImage*                                      Icon;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  DirectionText;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.CompassMarkerWidget");
		return ptr;
	}



};

// Class ManeaterUI.CompassWidget
// 0x0140 (FullSize[0x0398] - InheritedSize[0x0258])
class UCompassWidget : public UTwBaseWidget
{
public:
	class UCanvasPanel*                                CompassStrip;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MarkerCanvas;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      CompassCombatBG;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      CompassBG;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                            StripSlot;                                                 // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                TotalSegments;                                             // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                UniqueSegments;                                            // 0x0284(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      MarkerClass;                                               // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BGOutOfCombatColor;                                        // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BGInCombatColor;                                           // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                CombatBGInCombatColor;                                     // 0x02B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                CombatBGOutOfCombatColor;                                  // 0x02C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  BoatIcon;                                                  // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  BossBoatIcon;                                              // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  ScalyPeteIcon;                                             // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  WaypointIcon;                                              // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  WildlifeEnemyIcon;                                         // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  UndiscoveredIcon;                                          // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>               TrackedActors;                                             // 0x0300(0x0010) (ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<TWeakObjectPtr<class AActor>, class UCompassMarkerWidget*> TrackedActorWidgetMap;                                     // 0x0310(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UEJU[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCompassMarkerWidget*                        PlayerWaypointMarker;                                      // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2LMN[0x10];                                    // 0x0370(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCompassDirection>                   DirectionWidgets;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  GrottoIcon;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.CompassWidget");
		return ptr;
	}



	void RemoveTrackedActor(class AActor* Actor);
	void OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor);
	void OnActorRequestingWidget(class AActor* Actor);
	void OnActorRequestingRemoval(class AActor* Actor);
	void AddTrackedActor(const struct FTrackedCompassActor& Actor);
};

// Class ManeaterUI.ContextualControlWidget
// 0x0088 (FullSize[0x02E0] - InheritedSize[0x0258])
class UContextualControlWidget : public UTwBaseWidget
{
public:
	TMap<struct FName, class UContextualControlWidgetEntry*> WidgetMap;                                                 // 0x0258(0x0050) (ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      EntryWidgetClass;                                          // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                WidgetContainer;                                           // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      ControlWidgetPoolSize;                                     // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RJ63[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UContextualControlWidgetEntry*>       ControlWidgetPool;                                         // 0x02C0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UContextualControlWidgetEntry*>       ControlWidgetUsedPool;                                     // 0x02D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ContextualControlWidget");
		return ptr;
	}



	void RemoveControlWidget(const struct FName& ControlName);
	void AddControlWidget(const struct FName& ControlName, const struct FText& ControlText, const struct FName& InputActionName);
};

// Class ManeaterUI.ContextualControlWidgetEntry
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UContextualControlWidgetEntry : public UTwBaseWidget
{
public:
	class UTwInputAwareRichTextBlockWidget*            ButtonText;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UContextualControlWidget*                    PoolOwner;                                                 // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ContextualControlWidgetEntry");
		return ptr;
	}



};

// Class ManeaterUI.ControlsSettingsWidget
// 0x0300 (FullSize[0x0598] - InheritedSize[0x0298])
class UControlsSettingsWidget : public UTwBaseMenuPanel
{
public:
	class UWidgetSwitcher*                             ControllerWidgetSwitcher;                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          LayoutStepper;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                             XboxPadTextureSwitcher;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  SpecialLeftText;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftTriggerText;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftShoulderText;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftStickClickText;                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftStickMoveText;                                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadUpText;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadLeftText;                                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadDownText;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadRightText;                                             // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  SpecialRightText;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightTriggerText;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightShoulderText;                                         // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonTopText;                                         // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonBottomText;                                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonLeftText;                                        // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonRightText;                                       // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightStickMoveText;                                        // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightStickClickText;                                       // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              SpecialLeftSlot;                                           // 0x0340(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftTriggerSlot;                                           // 0x0348(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftShoulderSlot;                                          // 0x0350(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftStickClickSlot;                                        // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftStickMoveSlot;                                         // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadUpSlot;                                                // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadLeftSlot;                                              // 0x0370(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadDownSlot;                                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadRightSlot;                                             // 0x0380(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              SpecialRightSlot;                                          // 0x0388(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightTriggerSlot;                                          // 0x0390(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightShoulderSlot;                                         // 0x0398(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonTopSlot;                                         // 0x03A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonBottomSlot;                                      // 0x03A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonLeftSlot;                                        // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonRightSlot;                                       // 0x03B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightStickMoveSlot;                                        // 0x03C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightStickClickSlot;                                       // 0x03C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      ControllerImage;                                           // 0x03D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                             PS5PadTextureSwitcher;                                     // 0x03D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  SpecialLeftTextPS;                                         // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftTriggerTextPS;                                         // 0x03E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftShoulderTextPS;                                        // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftStickClickTextPS;                                      // 0x03F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  LeftStickMoveTextPS;                                       // 0x0400(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadUpTextPS;                                              // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadLeftTextPS;                                            // 0x0410(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadDownTextPS;                                            // 0x0418(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  DpadRightTextPS;                                           // 0x0420(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  SpecialRightTextPS;                                        // 0x0428(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightTriggerTextPS;                                        // 0x0430(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightShoulderTextPS;                                       // 0x0438(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonTopTextPS;                                       // 0x0440(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonBottomTextPS;                                    // 0x0448(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonLeftTextPS;                                      // 0x0450(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  FaceButtonRightTextPS;                                     // 0x0458(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightStickMoveTextPS;                                      // 0x0460(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  RightStickClickTextPS;                                     // 0x0468(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              SpecialLeftSlotPS;                                         // 0x0470(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftTriggerSlotPS;                                         // 0x0478(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftShoulderSlotPS;                                        // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftStickClickSlotPS;                                      // 0x0488(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              LeftStickMoveSlotPS;                                       // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadUpSlotPS;                                              // 0x0498(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadLeftSlotPS;                                            // 0x04A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadDownSlotPS;                                            // 0x04A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              DpadRightSlotPS;                                           // 0x04B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              SpecialRightSlotPS;                                        // 0x04B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightTriggerSlotPS;                                        // 0x04C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightShoulderSlotPS;                                       // 0x04C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonTopSlotPS;                                       // 0x04D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonBottomSlotPS;                                    // 0x04D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonLeftSlotPS;                                      // 0x04E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              FaceButtonRightSlotPS;                                     // 0x04E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightStickMoveSlotPS;                                      // 0x04F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                              RightStickClickSlotPS;                                     // 0x04F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      ControllerImagePS;                                         // 0x0500(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ResetDefaultKey;                                           // 0x0508(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ResetDefaultControllerInput;                               // 0x0520(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalSubject;                                  // 0x0538(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalTitle;                                    // 0x0550(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalYes;                                      // 0x0568(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalCancel;                                   // 0x0580(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ControlsSettingsWidget");
		return ptr;
	}



	void OnLayoutChanged(int Index);
};

// Class ManeaterUI.CreditsScreenView
// 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
class UCreditsScreenView : public UTwBaseView
{
public:
	class UUserWidget*                                 CreditScrollWidget_BP;                                     // 0x0298(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UME_RadialProgressWidget*                    RadialProgressWidget;                                      // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AMF3[0x10];                                    // 0x02A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.CreditsScreenView");
		return ptr;
	}



};

// Class ManeaterUI.CrosshairNavigationWidget
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UCrosshairNavigationWidget : public UTwBaseWidget
{
public:
	TWeakObjectPtr<class UMapMarkerWidget>             FocusedMarker;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.CrosshairNavigationWidget");
		return ptr;
	}



	void SetFocusedMarker(class UMapMarkerWidget* _MapMarkerWidget);
	void OnFocusedMarkerChanged();
};

// Class ManeaterUI.DamageTextController
// 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
class UDamageTextController : public UTwBaseWidget
{
public:
	class UCanvasPanel*                                WidgetContainer;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PoolSize;                                                  // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DrawDist;                                                  // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DamageTextWidgetClass;                                     // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDamageTextWidget*>                   WidgetPool;                                                // 0x0270(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDamageTextWidget*>                   UsedPool;                                                  // 0x0280(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.DamageTextController");
		return ptr;
	}



	void SpawnHealingText(const struct FVector& SpawnPos, float Value);
	void SpawnEvadeText(const struct FVector& SpawnPos);
	void SpawnDamageText(const struct FVector& SpawnPos, float Value, bool bVulnerableVictim, const struct FGameplayTagContainer& AttackGameplayTags);
	void OnPlayerCausedCombatEvent(TEnumAsByte<Maneater_ECombatEventType> CombatEventType, const struct FVector& WorldPos, float Amount, bool bVulnerableVictim, const struct FGameplayTagContainer& AttackGameplayTags);
};

// Class ManeaterUI.DamageTextWidget
// 0x0090 (FullSize[0x02E8] - InheritedSize[0x0258])
class UDamageTextWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_3M1E[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  DamageText;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ShadowDamage;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  BoneDamage;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  PoisonDamage;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ElectricDamage;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CriticalDamage;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EvadeText;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      HealthIcon;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                SubCanvas;                                                 // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Radius;                                                    // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LifeTime;                                                  // 0x02B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    EasingFunc;                                                // 0x02B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UWQU[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwVector2DTweener*                          Tweener;                                                   // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDamageTextController*                       Controller;                                                // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ND8D[0x10];                                    // 0x02D0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.DamageTextWidget");
		return ptr;
	}



};

// Class ManeaterUI.DeathView
// 0x0100 (FullSize[0x0398] - InheritedSize[0x0298])
class UDeathView : public UTwBaseView
{
public:
	class UImage*                                      BackgroundImage;                                           // 0x0298(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               QuitButton;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               RespawnBtn;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  DeathText;                                                 // 0x02C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       BossDeathText;                                             // 0x02C8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ApexDeathText;                                             // 0x02E0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DrowningDeathText;                                         // 0x02F8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       WildlifeDeathText;                                         // 0x0310(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       BountyHunterDeathText;                                     // 0x0328(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       GenericDeathText;                                          // 0x0340(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FName                                       BossDeathNarration;                                        // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       ApexDeathNarration;                                        // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       DrowningDeathNarration;                                    // 0x0368(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       WildlifeDeathNarration;                                    // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       BountyHunterDeathNarration;                                // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       GenericDeathNarration;                                     // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_679I[0x10];                                    // 0x0388(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.DeathView");
		return ptr;
	}



	void OnButtonMouseOver(class UTwBaseButton* MouseOverWidget);
	void OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused);
};

// Class ManeaterUI.EnemyHealthWidget
// 0x0040 (FullSize[0x0298] - InheritedSize[0x0258])
class UEnemyHealthWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                                HealthBar;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NameText;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                EnemyLevelNumberContainer;                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  LevelNumber;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                HostileFillColor;                                          // 0x0278(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                NeutralFillColor;                                          // 0x0288(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EnemyHealthWidget");
		return ptr;
	}



};

// Class ManeaterUI.EnemyOverheadWidgetComponent
// 0x0018 (FullSize[0x0570] - InheritedSize[0x0558])
class UEnemyOverheadWidgetComponent : public UWidgetComponent
{
public:
	TWeakObjectPtr<class AME_Character>                TargetCharacter;                                           // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ContainerClass;                                            // 0x0560(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RB80[0x8];                                     // 0x0568(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EnemyOverheadWidgetComponent");
		return ptr;
	}



	class UEnemyOverheadWidgetContainer* GetContainer();
};

// Class ManeaterUI.EnemyOverheadWidgetContainer
// 0x0138 (FullSize[0x03C0] - InheritedSize[0x0288])
class UEnemyOverheadWidgetContainer : public UTwScreenSpaceConstrainedWidget
{
public:
	unsigned char                                      UnknownData_NI27[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                Arrow;                                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnemyHealthWidget*                          HealthWidget;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                RootCanvas;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                OnScreenContainer;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                            Invalidator;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        NutrientImage;                                             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      LockOnIcon;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      MassDifferentialIndicator;                                 // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  BottomText;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            IdleAnimation;                                             // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            LockAnimation;                                             // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            BlinkAnimation;                                            // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            SimpleQuestIndicatorIdleAnimation;                         // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  MassDiffImage_Lessthan;                                    // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  MassDiffImage_SignificantlyLessthan;                       // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  MassDiffImage_Greaterthan;                                 // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  MassDiffImage_SignificantlyGreaterthan;                    // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  MassDiffImage_EqualTo;                                     // 0x0318(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ObjectiveIndicatorIcon;                                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SimpleQuestIndicatorIcon;                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                WaypointNumberContainer;                                   // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  WaypointDistanceText;                                      // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AME_AIController>             TargetController;                                          // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Maneater_EAIThreatAlertState>          CurrentAlertState;                                         // 0x0348(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4Z2G[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Maneater_EHunterRank, class UTexture2D*>      HunterRankIconMap;                                         // 0x0350(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UME_PlayerTargetingSystem>    CachedTargetingSystem;                                     // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnemyScreenSpaceWidgetContainer*            PoolOwner;                                                 // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SignificantDifferenceThreshold;                            // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EquivalentThreshold;                                       // 0x03B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JXGG[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EnemyOverheadWidgetContainer");
		return ptr;
	}



	void OnViewControllerVisibilityChanged(UMG_ESlateVisibility ControllerVisibility);
	void OnThreatStateChanged(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor);
	void OnRelatedObjectiveChanged(Maneater_EObjectiveType ObjectiveType);
	void OnPawnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnPawnKilled(class AME_Character* Victim, class AActor* Killer);
	void OnHUDVisiblityChanged(bool bVisible);
	void OnGamePauseStateChanged(bool bPaused);
	void OnCinematicModeChanged(bool bCinematicMode);
	void OnBoatKilled(class AME_VehiclePawn* Victim);
};

// Class ManeaterUI.EnemyScreenSpaceWidgetContainer
// 0x0060 (FullSize[0x02B8] - InheritedSize[0x0258])
class UEnemyScreenSpaceWidgetContainer : public UTwBaseWidget
{
public:
	class UCanvasPanel*                                WidgetContainer;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      EnemyWidgetClass;                                          // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ExplodingBarrelWidgetClass;                                // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      EnemyWidgetPoolSize;                                       // 0x0270(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      ExplosiveBarrelPoolSize;                                   // 0x0271(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BEMU[0x6];                                     // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UEnemyOverheadWidgetContainer*>       EnemyWidgetPool;                                           // 0x0278(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UEnemyOverheadWidgetContainer*>       EnemyWidgetUsedPool;                                       // 0x0288(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UExplosiveIndicatorScreenSpaceWidget*> ExplosiveBarrelWidgetPool;                                 // 0x0298(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UExplosiveIndicatorScreenSpaceWidget*> ExplosiveBarrelWidgetUsedPool;                             // 0x02A8(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EnemyScreenSpaceWidgetContainer");
		return ptr;
	}



	void UpdateWidgetDangerSense(class AActor* DangerousActor, bool bActive);
	void OnScreenSpaceWidgetRequested(class AActor* Actor);
};

// Class ManeaterUI.EnemySuspicionWidget
// 0x0058 (FullSize[0x02B0] - InheritedSize[0x0258])
class UEnemySuspicionWidget : public UTwBaseWidget
{
public:
	struct FLinearColor                                AtEaseColor;                                               // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SuspicionColor;                                            // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ThreatColor;                                               // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ThreatIcon;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            IdleAnimation;                                             // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            PulseAnimation;                                            // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OnAlertAnimation;                                          // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WMYW[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EnemySuspicionWidget");
		return ptr;
	}



};

// Class ManeaterUI.EpisodeItemListWidget
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class UEpisodeItemListWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                                  ItemText;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            Complete;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            CompletedState;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EpisodeItemListWidget");
		return ptr;
	}



};

// Class ManeaterUI.EvolutionAbilityWidget
// 0x00E8 (FullSize[0x0340] - InheritedSize[0x0258])
class UEvolutionAbilityWidget : public UTwBaseWidget
{
public:
	class UImage*                                      Glow;                                                      // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            Blink;                                                     // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            MeterFull;                                                 // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ChargedBarColor;                                           // 0x0270(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ChargedBGColor;                                            // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                DefaultBGColor;                                            // 0x0290(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ChargeEndingColor;                                         // 0x02A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BindDisabledOpacity;                                       // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T3CI[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                EvolutionChargeBar;                                        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*            EvolutionBindName;                                         // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      EvolutionAbilityIcon;                                      // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      EvolutionAbilityIconBg;                                    // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                EvolutionCanvasPanel;                                      // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            TigerBodyActive;                                           // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B2X6[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                SonarChargeBar;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*            SonarBindName;                                             // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            SonarFull;                                                 // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               SonarFullAkEvent;                                          // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0AAM[0x30];                                    // 0x0310(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EvolutionAbilityWidget");
		return ptr;
	}



	void OnSonarAbilityActivated(float Duration);
	void OnSlottedEvolutionChanged(Maneater_EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution);
	void OnEvolutionAbilityActivated(float Duration);
	void OnCinematicModeChanged(bool bCinematicMode);
	void OnCharacterAttributesChanged();
};

// Class ManeaterUI.EvolutionIconButtonWidget
// 0x0100 (FullSize[0x0538] - InheritedSize[0x0438])
class UEvolutionIconButtonWidget : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_VYIY[0x30];                                    // 0x0438(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OnErrorAkEvent;                                            // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               OnUnequipAkEvent;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               OnDenyEquipAkEvent;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  SlotNameText;                                              // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      RarityColor;                                               // 0x0488(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SelectedFrameImage;                                        // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SelectedFlashBorder;                                       // 0x0498(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      LockedImage;                                               // 0x04A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      UnlockedImage;                                             // 0x04A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseWidget*                               EvolutionIconUpgradeFX;                                    // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            NewEvolutionAnimation;                                     // 0x04B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SlotName;                                                  // 0x04C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  DefaultBackgroundImage;                                    // 0x04D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Maneater_EEvolutionSlot                            SlotType;                                                  // 0x04E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Maneater_EEvolutionRarity                          EvolutionRarity;                                           // 0x04E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               SelectedFrameEnabled;                                      // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DJNR[0x1];                                     // 0x04E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                InvalidAgeTierColor;                                       // 0x04E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ValidAgeTierColor;                                         // 0x04F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                NewEvolutionColor;                                         // 0x0504(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4KHY[0x4];                                     // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEvolutionData                              EvolutionData;                                             // 0x0518(0x0010) (BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               IsLocked;                                                  // 0x0528(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               UseCustomFocus;                                            // 0x0529(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsEquipped;                                                // 0x052A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_M51Z[0x5];                                     // 0x052B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEvolutionListWidget*                        ParentListWidget;                                          // 0x0530(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EvolutionIconButtonWidget");
		return ptr;
	}



	void PlayUpgradeFX();
	Maneater_EEvolutionSlot GetSlotType();
	struct FText GetSlotName();
	Maneater_EEvolutionRarity GetRarity();
	bool GetLocked();
	bool GetIsEquipped();
	class UWidget* GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir);
};

// Class ManeaterUI.EvolutionListWidget
// 0x0098 (FullSize[0x02F0] - InheritedSize[0x0258])
class UEvolutionListWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_Q0BJ[0x40];                                    // 0x0258(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUniformGridPanel*                           EvolutionList;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TitleText;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               BackBtn;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      EvolutionListItemWidgetClass;                              // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  EvolutionListItemBackgroundImage;                          // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                EvolutionsPerRow;                                          // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Maneater_EEvolutionSlot                            EvolutionSlotFilter;                                       // 0x02C4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TNC5[0x3];                                     // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEvolutionIconButtonWidget*                  FocusedInventoryEvolution;                                 // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SZ22[0x20];                                    // 0x02D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EvolutionListWidget");
		return ptr;
	}



	void OnInventoryEvolutionUpgrade_Pressed(class UME_PlayerEvolution* Evolution);
	void OnInventoryEvolution_MouseLeave(class UTwBaseButton* Widget);
	void OnInventoryEvolution_Focused(class UEvolutionIconButtonWidget* IconWidget);
	void OnInventoryEvolution_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
	void OnBackButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
};

// Class ManeaterUI.EvolutionsPanel
// 0x0170 (FullSize[0x0408] - InheritedSize[0x0298])
class UEvolutionsPanel : public UTwBaseMenuPanel
{
public:
	class UUniformGridPanel*                           SlotContainer;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  JawSlot;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  HeadSlot;                                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  BodySlot;                                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  FinSlot;                                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  TailSlot;                                                  // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  Organ1Slot;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  Organ2Slot;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*                  Organ3Slot;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionListWidget*                        EvolutionListWidget;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionUpgradeWidget*                     EvolutionUpgradeWidget;                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            TransitionToList;                                          // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            TransitionToSlots;                                         // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            TransitionToUpgrade;                                       // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            TransitionOutOfUpgrade;                                    // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelProgressWidget*                        LevelProgressWidget;                                       // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAttributesWidget*                           AttributesWidget;                                          // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      PaperDollImage;                                            // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnMenuBackTransitionAkEvent;                               // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               UpgradeTransitionAkEvent;                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAgeTierInfographicWidget*                   AgeTierInfographic;                                        // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTUtorialSinglePopupWidget*                  TutorialpopupWidget_BP;                                    // 0x0340(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InventoryActorClass;                                       // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AME_InventoryActor*                          InventoryActor;                                            // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QVO0[0x68];                                    // 0x0358(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SelectDisabledFooterText;                                  // 0x03C0(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DefaultFooterText;                                         // 0x03D8(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U9T5[0x10];                                    // 0x03F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInGameMenuView*                             GameMenuView;                                              // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EvolutionsPanel");
		return ptr;
	}



	void ShowTutorialPopupWidget(int Index);
	void PlayTransitionToUpgrade();
	void PlayTransitionToSlots();
	void PlayTransitionToList();
	void PlayTransitionOutOfUpgrade();
	void PlayGrowthAnimation();
	void OnSlottedEvolutionChanged(Maneater_EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution);
	void OnSlotButtonWidget_Focused(class UEvolutionIconButtonWidget* IconWidge);
	void OnSlotButtonWidget_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnShark_GrowthStageChanged(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose);
	void OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade);
	void OnControllerDisconnectedModalDismissed();
	void OnAgeTierWidgetDismissed();
	void HandleUpgradeButton_Pressed(class UME_PlayerEvolution* Evolution);
	void HandleEvolutionListItem_Focused(class UEvolutionIconButtonWidget* IconWidget, Maneater_EEvolutionSlot SlotType);
	void ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, bool HideCost, bool HideUpgrade);
	void CantUseUntilGrottoPopup();
};

// Class ManeaterUI.EvolutionUpgradeWidget
// 0x0068 (FullSize[0x02C0] - InheritedSize[0x0258])
class UEvolutionUpgradeWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_NMGH[0x20];                                    // 0x0258(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  UpgradeCostText1;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  UpgradeCostText2;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        NutrientImage1;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        NutrientImage2;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               UpgradeButton;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               CancelButton;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UME_PlayerEvolution*                         EvolutionToBeUpgraded;                                     // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.EvolutionUpgradeWidget");
		return ptr;
	}



	void OnUpgradeButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnCancelButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, const struct FEvolutionData& UpgradedEvolutionData);
};

// Class ManeaterUI.ExplosiveIndicatorScreenSpaceWidget
// 0x0040 (FullSize[0x02C8] - InheritedSize[0x0288])
class UExplosiveIndicatorScreenSpaceWidget : public UTwScreenSpaceConstrainedWidget
{
public:
	class UWidgetAnimation*                            BlinkAnim;                                                 // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      Icon;                                                      // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinBlinkSpeed;                                             // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxBlinkSpeed;                                             // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLerpSpeed;                                                // 0x02A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VNFO[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SplitPercent;                                              // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RV0N[0x18];                                    // 0x02A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnemyScreenSpaceWidgetContainer*            PoolOwner;                                                 // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ExplosiveIndicatorScreenSpaceWidget");
		return ptr;
	}



	void OnViewControllerVisibilityChanged(UMG_ESlateVisibility ControllerVisibility);
	void OnHUDVisiblityChanged(bool bVisible);
	void OnGamePauseStateChanged(bool bPaused);
	void OnCinematicModeChanged(bool bCinematicMode);
};

// Class ManeaterUI.FastTravelConfirmationWidget
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UFastTravelConfirmationWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_DXBH[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.FastTravelConfirmationWidget");
		return ptr;
	}



};

// Class ManeaterUI.GameplaySettingsWidget
// 0x0048 (FullSize[0x02E0] - InheritedSize[0x0298])
class UGameplaySettingsWidget : public UTwBaseMenuPanel
{
public:
	class UMESettingsStepper*                          SubtitlesWidget;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          TUtorialPopupWidget;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          InvertMouseY;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          MouseSensitivity;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          InvertGamepadY;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          RightStickSensitivity;                                     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          VibrationWidget;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          BrightnessStepper;                                         // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          RaytracingWidget;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.GameplaySettingsWidget");
		return ptr;
	}



	void OnVibrationChanged(int Index);
	void OnTutorialPopupChanged(int Index);
	void OnSubtitlesChanged(int Index);
	void OnSprintChanged(int Index);
	void OnRightStickSensitivityChanged(int Index);
	void OnRaytracingChanged(int Index);
	void OnMouseSensitivityChanged(int Index);
	void OnInvertMouseYChanged(int Index);
	void OnInvertGamepadYChanged(int Index);
};

// Class ManeaterUI.GrottoMapMarkerWidget
// 0x0020 (FullSize[0x0310] - InheritedSize[0x02F0])
class UGrottoMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class AME_Grotto>                   OwningGrottoActor;                                         // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FastTravelHoldTime;                                        // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentFastTravelHoldTime;                                 // 0x02FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventFastTravel;                                      // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_32VQ[0x8];                                     // 0x0308(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.GrottoMapMarkerWidget");
		return ptr;
	}



	void OnMarkerUpdated();
	void FastTravel();
};

// Class ManeaterUI.HUDErrorMessageWidget
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class UHUDErrorMessageWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                                  ErrorText;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObjectiveControllerWidget>   ObjController;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.HUDErrorMessageWidget");
		return ptr;
	}



};

// Class ManeaterUI.HUDRewardQueueWidget
// 0x0090 (FullSize[0x0318] - InheritedSize[0x0288])
class UHUDRewardQueueWidget : public UTwWidgetQueue
{
public:
	class UClass*                                      RewardWidgetClass;                                         // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserWidgetPool                             CurrentWidgetPool;                                         // 0x0290(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                MaxWidgetCount;                                            // 0x0310(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H138[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.HUDRewardQueueWidget");
		return ptr;
	}



	void OnWidgetQueueDestruction(class UTwBaseWidget* Widget);
	void OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade);
};

// Class ManeaterUI.HUDRewardWidget
// 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
class UHUDRewardWidget : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                                  RewardName;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      RewardIcon;                                                // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                      RarityBG;                                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerNutrientImage*                        NutrientRewardImage;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.HUDRewardWidget");
		return ptr;
	}



};

// Class ManeaterUI.HUDTipInfo
// 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
class UHUDTipInfo : public UTwBaseWidget
{
public:
	class UTextBlock*                                  HeaderText;                                                // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                              BodyText;                                                  // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*            InputText;                                                 // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CurrentTipTimeOnScreen;                                    // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsTipShowing;                                             // 0x0274(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9LKS[0x1B];                                    // 0x0275(0x001B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.HUDTipInfo");
		return ptr;
	}



	void Disable();
};

// Class ManeaterUI.HunterButtonWidget
// 0x0038 (FullSize[0x0470] - InheritedSize[0x0438])
class UHunterButtonWidget : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_G7TQ[0x10];                                    // 0x0438(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HunterIndex;                                               // 0x0448(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsKilled;                                                 // 0x044C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsCurrentTarget;                                          // 0x044D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VJHK[0x2];                                     // 0x044E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  HunterTexture;                                             // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ButtonFrameGlow;                                           // 0x0458(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      CurrentHunterMarker;                                       // 0x0460(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      HunterKilled;                                              // 0x0468(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.HunterButtonWidget");
		return ptr;
	}



};

// Class ManeaterUI.HunterSupportIcon
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UHunterSupportIcon : public UTwBaseWidget
{
public:
	class UImage*                                      SupportIcon;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SupportName;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.HunterSupportIcon");
		return ptr;
	}



};

// Class ManeaterUI.InfamyRankUpWidget
// 0x0060 (FullSize[0x02B8] - InheritedSize[0x0258])
class UInfamyRankUpWidget : public UTwBaseWidget
{
public:
	class UImage*                                      ImageTarget;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutRank10Animation;                                        // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               RankUpSoundEvent;                                          // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  InfamyRankUpText;                                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             InfamyWidgetSwitcher;                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      TierTextures[0x10];                                        // 0x0290(0x0010) UNKNOWN PROPERTY: ArrayProperty
	class UCanvasPanel*                                RootCanvas;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObjectiveControllerWidget>   ObjController;                                             // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumLevels;                                                 // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_84N0[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InfamyRankUpWidget");
		return ptr;
	}



	void OnAnimStart_BP();
	void OnAnimEnd_BP();
};

// Class ManeaterUI.InfamyRewardWidget
// 0x0078 (FullSize[0x02D0] - InheritedSize[0x0258])
class UInfamyRewardWidget : public UTwBaseWidget
{
public:
	bool                                               IsComplete;                                                // 0x0258(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4E24[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UImage*                                      RewardIcon;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                RewardPanel;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                NutrientPanel;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                CompletePanel;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RewardName;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RewardDescription;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        FatRewardImage;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FatRewardAmountText;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        ProteinRewardImage;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ProteinRewardAmountText;                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        MineralRewardImage;                                        // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  MineralRewardAmountText;                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        MutagenRewardImage;                                        // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  MutagenRewardAmountText;                                   // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InfamyRewardWidget");
		return ptr;
	}



};

// Class ManeaterUI.InfamyTierIcon
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class UInfamyTierIcon : public UTwBaseWidget
{
public:
	class UTextBlock*                                  LevelText;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      LockIcon;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            Selected;                                                  // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            Deselected;                                                // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InfamyTierIcon");
		return ptr;
	}



};

// Class ManeaterUI.InGameMenuButton
// 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
class UInGameMenuButton : public UTwBaseButton
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InGameMenuButton");
		return ptr;
	}



};

// Class ManeaterUI.InGameMenuController
// 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
class UInGameMenuController : public UTwBaseMenu
{
public:
	class UImage*                                      NewQuestNotificationImage;                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      NewEvolutionNotificationImage;                             // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InGameMenuController");
		return ptr;
	}



};

// Class ManeaterUI.InGameMenuView
// 0x0018 (FullSize[0x02C0] - InheritedSize[0x02A8])
class UInGameMenuView : public UTwBaseMenuView
{
public:
	class AME_InventoryActor*                          InventoryActor;                                            // 0x02A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8LBP[0x10];                                    // 0x02B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InGameMenuView");
		return ptr;
	}



	void OpenEvolutionPanel_BP();
	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
};

// Class ManeaterUI.InvertedControlsWidget
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UInvertedControlsWidget : public UTwBaseModal
{
public:
	unsigned char                                      UnknownData_ZP0V[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwBaseButton*                               AcceptButton;                                              // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               InvertButton;                                              // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               UnInvertButton;                                            // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SHIJ[0x8];                                     // 0x0288(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.InvertedControlsWidget");
		return ptr;
	}



	void OnAnyButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
};

// Class ManeaterUI.KeyMappingMultiOptionModal
// 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
class UKeyMappingMultiOptionModal : public UTwMultiOptionModal
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.KeyMappingMultiOptionModal");
		return ptr;
	}



};

// Class ManeaterUI.KeyMappingSettingsWidget
// 0x0118 (FullSize[0x03B0] - InheritedSize[0x0298])
class UKeyMappingSettingsWidget : public UTwBaseMenuPanel
{
public:
	class UKeyMappingWidget*                           MoveForwardWidget;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           MoveLeftWidget;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           MoveBackwardWidget;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           MoveRightWidget;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           BiteWidget;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           TailwhipWidget;                                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           EvadeLeftWidget;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           EvadeRightWidget;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           EvadeUpWidget;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           EvadeDownWidget;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           LungeWidget;                                               // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           ActivateEvolutionWidget;                                   // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           MapMenuWidget;                                             // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           InfamyMenuWidget;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           EvolutionsMenuWidget;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           SonarWidget;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                           FocusThreatWidget;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ResetDefaultKey;                                           // 0x0320(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ResetDefaultControllerInput;                               // 0x0338(0x0018) (Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalSubject;                                  // 0x0350(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalTitle;                                    // 0x0368(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalYes;                                      // 0x0380(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       ResetDefaultModalCancel;                                   // 0x0398(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.KeyMappingSettingsWidget");
		return ptr;
	}



	void RedrawKeybinds();
};

// Class ManeaterUI.KeyMappingWidget
// 0x0108 (FullSize[0x0540] - InheritedSize[0x0438])
class UKeyMappingWidget : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_CXHT[0x10];                                    // 0x0438(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  SettingsLabel;                                             // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*            SelectedSettingsLabel;                                     // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SettingName;                                               // 0x0458(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       BindFormatting;                                            // 0x0470(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       EmptyBindText;                                             // 0x0488(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FName                                       SettingActionName;                                         // 0x04A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SettingAxisScale;                                          // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CK14[0x4];                                     // 0x04AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        SettingDefaultKey;                                         // 0x04B0(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      KeyMappingMultiOptionModalAssetRef[0x28];                  // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FText                                       KeyModalTitle;                                             // 0x04F0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       KeyModalSubject;                                           // 0x0508(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       KeyModalCancel;                                            // 0x0520(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P1I9[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.KeyMappingWidget");
		return ptr;
	}



};

// Class ManeaterUI.LandmarkMapMarkerWidget
// 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
class ULandmarkMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class AActor>                       OwningWorldLandmarkActor;                                  // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.LandmarkMapMarkerWidget");
		return ptr;
	}



	void OnMarkerUpdated();
};

// Class ManeaterUI.LevelProgressWidget
// 0x0090 (FullSize[0x02E8] - InheritedSize[0x0258])
class ULevelProgressWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                                  AgeTierText;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  LevelText;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                PercentToNextLevelBar;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                DeltaBar;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                            Invalidator;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwFloatTweener*                             ValueTweener;                                              // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  VisitGrottoText;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FightPeteText;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                LevelUpImageContainer;                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            MessageLoop;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             NutrientWidgetSwitcher;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShowText;                                                  // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShowGrottoText;                                            // 0x02B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShouldFadeOut;                                             // 0x02B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               ShowNutrientText;                                          // 0x02B3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P5VC[0x14];                                    // 0x02B4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwUMGOpacityTweener*                        CachedOpacityTween;                                        // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityInTweenTime;                                        // 0x02D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              VisibleTime;                                               // 0x02D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityOutTweenTime;                                       // 0x02D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IdleOpactity;                                              // 0x02DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    OpacityInEaseFunc;                                         // 0x02E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    OpacityOutEaseFunc;                                        // 0x02E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_89E8[0x6];                                     // 0x02E2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.LevelProgressWidget");
		return ptr;
	}



	void UpdateProgress();
	void OnTweenStep(class UTwTweener* Tweener);
	void OnShark_NutrientGained(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientGain, bool bFromObjective);
	void OnShark_LevelChanged(int NewLevel, bool bChangeFromTheoretical);
	void OnShark_GrowthStageAvailable(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose);
	void OnShark_GrowthLevelChanged(TEnumAsByte<Maneater_EPlayerGrowthStage> OldGrowthStage, TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage, bool bReinitPose);
	void OnOpacityTweenStep(class UTwTweener* Tweener);
	void OnOpacityOutFinished(class UTwTweener* Tweener);
	void OnOpacityInFinished(class UTwTweener* Tweener);
	void OnLifetimeEnded();
};

// Class ManeaterUI.LoadGameButtonWidget
// 0x0110 (FullSize[0x0548] - InheritedSize[0x0438])
class ULoadGameButtonWidget : public UTwBaseButton
{
public:
	int                                                SaveSlotIndex;                                             // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SV11[0x14];                                    // 0x043C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSaveSlotDeleted;                                         // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint32_t                                           EmptyPadding;                                              // 0x0460(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VDYH[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetSwitcher*                             FrameSwitcher;                                             // 0x0468(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EmptySlotNameText;                                         // 0x0470(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SlotNameText;                                              // 0x0478(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  DateTimeText;                                              // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CurrentRegionText;                                         // 0x0488(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  PlayerLevelText;                                           // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TimePlayedText;                                            // 0x0498(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SaveImage;                                                 // 0x04A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     NewGameMap;                                                // 0x04A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        DeleteSaveKey;                                             // 0x04B8(0x0018) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        DeleteSaveControllerInput;                                 // 0x04D0(0x0018) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalSubject;                                    // 0x04E8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalTitle;                                      // 0x0500(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalYes;                                        // 0x0518(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalCancel;                                     // 0x0530(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.LoadGameButtonWidget");
		return ptr;
	}



	void SetProfileData(const struct FText& SlotName, const struct FDateTime& SaveTime, const struct FText& CurrentRegion, const struct FText& PlayerLevel, const struct FText& TimePlayed, class UTexture2D* SaveImage);
	void SetIsEmpty(bool Empty);
	void LoadGame();
};

// Class ManeaterUI.MacroObjectiveMeterWidget
// 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
class UMacroObjectiveMeterWidget : public UTwBaseWidget
{
public:
	class UTwFloatTweener*                             RegionTweener;                                             // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwFloatTweener*                             GameTweener;                                               // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwUMGOpacityTweener*                        OpacityTweener;                                            // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ObjectiveVisibleDuration;                                  // 0x0270(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    EasingFunc;                                                // 0x0274(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6I2U[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                RegionBar;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                RegionBarBg;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RegionPctText;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                GameBar;                                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                GameBarBg;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RegionNameText;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      RegionImage;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              PoisonWarning;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J2SH[0x10];                                    // 0x02B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MacroObjectiveMeterWidget");
		return ptr;
	}



	void UpdateMeters(const struct FText& RegionName, class UTexture2D* RegionIcon, bool bIsRegionPoisoned, float OldRegionPerc, float NewRegionPerc, float OldGamePerc, float NewGamePerc);
	void PostCompleteDelay();
	void OnRegionStepEvent(class UTwTweener* Tweener);
	void OnRegionCompleteEvent(class UTwTweener* Tweener);
	void OnOpacityFadeOutComplete(class UTwTweener* Tweener);
	void OnOpacityFadeInComplete(class UTwTweener* Tweener);
	void OnGameStepEvent(class UTwTweener* Tweener);
};

// Class ManeaterUI.ManeaterBaseHUD
// 0x0000 (FullSize[0x0358] - InheritedSize[0x0358])
class AManeaterBaseHUD : public ATwHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterBaseHUD");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterBaseViewController
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UManeaterBaseViewController : public UTwViewController
{
public:
	unsigned char                                      UnknownData_DCA3[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterBaseViewController");
		return ptr;
	}



	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
};

// Class ManeaterUI.ManeaterCinematicView
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class UManeaterCinematicView : public UTwBaseView
{
public:
	class UME_RadialProgressWidget*                    RadialProgressWidget;                                      // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterCinematicView");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterCinematicViewController
// 0x0000 (FullSize[0x0308] - InheritedSize[0x0308])
class UManeaterCinematicViewController : public UTwBaseMenu
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterCinematicViewController");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterHUD
// 0x0470 (FullSize[0x07C8] - InheritedSize[0x0358])
class AManeaterHUD : public AManeaterBaseHUD
{
public:
	struct FScriptMulticastDelegate                    OnPlayerSkippedCinematic;                                  // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerDamaged;                                           // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNutrientsChanged;                                        // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNutrientGained;                                          // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRegionChanged;                                           // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCharacterAbilityTriggered;                               // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameplayTagAdded;                                          // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    GameplayTagRemoved;                                        // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimeDilationEventDelegate;                               // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerMovementModeChangedDelegate;                       // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnScreenSpaceWidgetRequested;                              // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRemoveScreenSpaceWidgetRequested;                        // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGamePauseStateChanged;                                   // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerCausedCombatEvent;                                 // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectiveCompleteEvent;                                  // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStoryEventProgressEvent;                                 // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAdvancedToNextEpisodeEvent;                              // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBossFightAvailableEvent;                                 // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBountyBossSpawnedEvent;                                  // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLandmarkObjectFoundEvent;                                // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectiveStartedEvent;                                   // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectiveUpdatedEvent;                                   // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectiveDiscoveredEvent;                                // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectiveTrackEvent;                                     // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnObjectiveStateChangedEvent;                              // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewQuestAvailableChangedEvent;                           // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHUDErrorMessageEvent;                                    // 0x04F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBasicTooltipRequestedEvent;                              // 0x0508(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerKnifingStateChanged;                               // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAICombatStatusChangedEvent;                              // 0x0528(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnThrashUIChangedEvent;                                    // 0x0538(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerLevelChanged;                                      // 0x0548(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YWT[0x1D8];                                   // 0x0558(0x01D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                DeathScreenTimerHandle;                                    // 0x0730(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      HUDViewClass;                                              // 0x0738(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AME_PlayerSharkCharacter*                    OwnerCharacter;                                            // 0x0740(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DeathViewClass;                                            // 0x0748(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ManeaterCinematicViewClass;                                // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CreditsScreenViewClass;                                    // 0x0758(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DKUZ[0x68];                                    // 0x0760(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterHUD");
		return ptr;
	}



	void TutorialPopupDismissed();
	void ToggleSpeedometer();
	void ThreatAdded();
	void StoryCompleteWidgetDismissed();
	void ShowTutorialSinglePopupWidget(int Index, int PageCount);
	void ShowStoryCompletePopup();
	void ShowRegionToast(const struct FRegionToastData& Data);
	void ShowInvertedControlsPopup();
	void ShowDevSettings();
	void ShowBasicTooltip(const struct FText& Header, const struct FText& Body, const struct FText& InputText, float Duration);
	void SetPlayerWaypoint(const struct FVector2D& Pos);
	void SetDeathScreenEnabled(bool bEnabled);
	void RemoveContextualControlPrompt(const struct FName& ControlName);
	void PushDeathView();
	void PushDeathScreen(class AActor* DamageCauser);
	void PushCreditsScreen();
	void PushCinematicView();
	void PopCinematicView();
	void PlayerKnifingStateChanged(bool bIsKnifing, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext);
	void PlayerInfamyRankUp(int Rank);
	void PauseGame();
	void OnZeroOutStats();
	void OnTimeDilationEvent(bool bStarted, TEnumAsByte<Maneater_ECharacterActionMode> ActionMode);
	void OnThrashUIChanged(bool bShow, bool bPlayerSharkThrashed);
	void OnStoryEventProgress(int CurrentStoryIndex, const struct FText& ConditionText, float StoryProgress);
	void OnSonarUntarget(class AActor* NewTarget);
	void OnSonarTarget(class AActor* NewTarget);
	void OnSonarRefreshTarget(class AActor* NewTarget);
	void OnSonarAbilityActivated(float Duration);
	void OnPlayerTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnPlayerThrash();
	void OnPlayerStruggle();
	void OnPlayerRegionChanged(Maneater_EWorldRegion Region, class UTexture2D* RegionIcon);
	void OnPlayerNutrientGained(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientGain, bool bFromObjective);
	void OnPlayerMovementModeChanged(class AME_PlayerSharkCharacter* PlayerShark, TEnumAsByte<Engine_EMovementMode> OldMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode);
	void OnObjectiveUpdated(class UME_PlayerObjective* PlayerObjective);
	void OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnObjectiveStateChanged(class UME_PlayerObjective* Objective, Maneater_EObjectiveState NewState);
	void OnObjectiveStarted(class UME_PlayerObjective* PlayerObjective);
	void OnObjectiveDiscovered(class UME_PlayerObjective* PlayerObjective);
	void OnObjectiveComplete(class UME_PlayerObjective* PlayerObjective);
	void OnNewSoftTarget(class AActor* NewTarget);
	void OnNewRelevantTarget(class AActor* NewTarget);
	void OnNewQuestAvailableChanged();
	void OnLevelChanged(int growthLevel, bool bChangeFromTheoretical);
	void OnLandmarkObjectFound(class UME_PlayerObjective* PlayerObjective, const struct FText& LandmarkDescription);
	void OnHudTipRequested(const struct FME_TutorialTipEvent& ME_TutorialEvent);
	void OnHUDErrorMessage(const struct FText& ErrorMessage);
	void OnGameplayTagRemoved(const struct FGameplayTagContainer& TagsRemoved);
	void OnGameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration);
	void OnEvolutionAbilityActivated(float Duration);
	void OnDangerSenseUpdated(class AActor* DangerousActor, bool bActive);
	void OnCharacterAttributesChanged();
	void OnBountyBossSpawned(const struct FBountyViewData& BountyData);
	void OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective);
	void OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor);
	void OnAdvancedToNextEpisode(int CurrentStoryEventIndex);
	void OnAbilityTriggered(Maneater_EME_CharacterAbility CharacterAbilityEnum, const struct FGameplayTag& AbilityTag);
	void InvertedControlsPopupDismissed();
	class UTwBaseWidget* GetTutorialModal();
	class UManeaterHUDViewController* GetHUDViewController();
	void EnableCinematicMode();
	void DisableCinematicMode();
	void ClearPlayerWaypoint();
	void BountyEnding();
	void BountyBeginning();
	void AddContextualControlPrompt(const struct FName& ControlName, const struct FText& ButtonText, const struct FName& InputActionName);
};

// Class ManeaterUI.ManeaterHUDPauseMenuView
// 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
class UManeaterHUDPauseMenuView : public UTwBaseView
{
public:
	class UTwBaseButton*                               QuitButton;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               MainMenu;                                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               Settings;                                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       QuitModalAccept;                                           // 0x02B0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       QuitModalCancel;                                           // 0x02C8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       QuitModalSubtext;                                          // 0x02E0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterHUDPauseMenuView");
		return ptr;
	}



	void OnQuit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnButtonMouseOver(class UTwBaseButton* MouseOverWidget);
	void OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused);
};

// Class ManeaterUI.ManeaterHUDView
// 0x00F8 (FullSize[0x0390] - InheritedSize[0x0298])
class UManeaterHUDView : public UTwBaseView
{
public:
	unsigned char                                      UnknownData_TWL4[0x10];                                    // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget*                                     SavingThrobber;                                            // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Speedometer;                                               // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              SavingBox;                                                 // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHUDTipInfo*                                 HudTipInfoWidget;                                          // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTutorialInfoWidget*                         TutorialInfoWidget;                                        // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GOF0[0x8];                                     // 0x02D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInvertedControlsWidget*                     InvertedControlsWidget;                                    // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GUY5[0x8];                                     // 0x02E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TutorialSinglePopupWidgetClass;                            // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InvertedControlsWidgetClass;                               // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      StoryCompleteWidgetClass;                                  // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ObjectiveWidgetClass;                                      // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ObjectiveWidgetPoolSize;                                   // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4N12[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUserWidgetPool                             ObjectiveWidgetPool;                                       // 0x0310(0x0080) (Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterHUDView");
		return ptr;
	}



	void TutorialSinglePopupDismissed();
	void StoryCompleteWidgetDismissed();
	class UTwBaseWidget* ShowTutorialSinglePopupWidget(int Index, int PageCount);
	class UStoryCompleteWidget* ShowStoryCompleteWidget();
	void ShowSavingIcon();
	class UInvertedControlsWidget* ShowInvertedControlsWidget();
	void InvertedControlsPopupDismissed();
	void HideSavingIcon();
};

// Class ManeaterUI.ManeaterHUDViewController
// 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
class UManeaterHUDViewController : public UManeaterBaseViewController
{
public:
	bool                                               bDisablePause;                                             // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7L4[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PauseViewClass;                                            // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterHUDViewController");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterMapPanel
// 0x0130 (FullSize[0x03C8] - InheritedSize[0x0298])
class UManeaterMapPanel : public UTwBaseMenuPanel
{
public:
	unsigned char                                      UnknownData_8IYL[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FastTravelConfirmationWidgetClass;                         // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorldMapWidget*                             WorldMapWidget;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrosshairNavigationWidget*                  CrosshairNavigationWidget;                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapMarkerPopupWidget*                       MapMarkerPopupWidget;                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                                 PoisonWaterMessage;                                        // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapProgressWidget*                          CurrentRegionProgressWidget;                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Maneater_EWorldRegion                              CurrentFocusedRegion;                                      // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S9ET[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRegionData>                         Regions;                                                   // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MapToRealWorldScale;                                       // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               RegionMapInFocus;                                          // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_U3BW[0x2F];                                    // 0x02ED(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MapScrollSpeed;                                            // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              GamepadMapZoomSpeed;                                       // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MouseScrollingScale;                                       // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MouseZoomingScale;                                         // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RXHV[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        PlayAudioGamepadKey;                                       // 0x0330(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        PlayAudioKeyboardKey;                                      // 0x0348(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        TrackObjectiveGamepadKey;                                  // 0x0360(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        TrackObjectiveKeyboardKey;                                 // 0x0378(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTUtorialSinglePopupWidget*                  TutorialSimplePopupWidget;                                 // 0x0390(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            LegendIn;                                                  // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            LegendOut;                                                 // 0x03A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZYWP[0x10];                                    // 0x03A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               TrackObjectiveAudioEvent;                                  // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               UntrackObjectiveAudioEvent;                                // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterMapPanel");
		return ptr;
	}



	void OnTutorialPopupWidgetDismissed();
	void OnRegionDataLoaded();
	void OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnNewPlayerWaypointSet(const struct FVector2D& Pos);
	void OnControllerDisconnectedModalDismissed();
};

// Class ManeaterUI.ManeaterModalViewController
// 0x0000 (FullSize[0x02B8] - InheritedSize[0x02B8])
class UManeaterModalViewController : public UManeaterBaseViewController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterModalViewController");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterSettingsMenuView
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UManeaterSettingsMenuView : public UTwBaseMenuView
{
public:
	class UWidget*                                     SavingThrobber;                                            // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterSettingsMenuView");
		return ptr;
	}



	void ShowSavingIcon();
	void HideSavingIcon();
};

// Class ManeaterUI.ManeaterTitleMenuHUD
// 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
class AManeaterTitleMenuHUD : public AManeaterBaseHUD
{
public:
	class UClass*                                      TitleSplashViewClass;                                      // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterTitleMenuHUD");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterTitleMenuView
// 0x00E8 (FullSize[0x0380] - InheritedSize[0x0298])
class UManeaterTitleMenuView : public UTwBaseView
{
public:
	class UWidget*                                     SavingThrobber;                                            // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            SaveSlotsIn;                                               // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            SaveSlotsOut;                                              // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             SaveSlotSwitcher;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULoadGameButtonWidget*                       LoadSlot1Button;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULoadGameButtonWidget*                       LoadSlot2Button;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULoadGameButtonWidget*                       LoadSlot3Button;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               ContinueGameButton;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               PlayGameButton;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               SettingsButton;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               ExitButton;                                                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                ExitPanel;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       QuitModalAccept;                                           // 0x02F8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       QuitModalCancel;                                           // 0x0310(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       QuitModalSubtext;                                          // 0x0328(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      SettingsView;                                              // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      StatsView;                                                 // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     NewGameMap;                                                // 0x0350(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UME_SaveGameObject*>                  CachedSaveGames;                                           // 0x0360(0x0010) (ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KR60[0x8];                                     // 0x0370(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OnNavigateBackAkEvent;                                     // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterTitleMenuView");
		return ptr;
	}



	void ShowSavingIcon();
	void RecacheSaveGames();
	class UME_SaveGameObject* PeekSaveGame(int SlotIndex);
	void OnSettings_MouseEnter(class UTwBaseButton* Widget);
	void OnSettings_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnPlayGame_Focused(class UTwClickableWidget* Widget);
	void OnPlayGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnMenuButton_FocusLost(class UTwClickableWidget* Widget);
	void OnExit_MouseEnter(class UTwBaseButton* Widget);
	void OnExit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnContinueGame_Focused(class UTwClickableWidget* Widget);
	void OnContinueGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnContinueButton_MouseLeave(class UTwBaseButton* Widget);
	void OnContinueButton_MouseEnter(class UTwBaseButton* Widget);
	void HideSavingIcon();
	bool DoesSaveGameExist(int SlotIndex);
	void ContinueGame_BP();
};

// Class ManeaterUI.ManeaterTitleMenuViewController
// 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
class UManeaterTitleMenuViewController : public UManeaterBaseViewController
{
public:
	class UTextBlock*                                  ActiveUserID;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterTitleMenuViewController");
		return ptr;
	}



};

// Class ManeaterUI.ManeaterTitleSplashView
// 0x0038 (FullSize[0x02D0] - InheritedSize[0x0298])
class UManeaterTitleSplashView : public UTwBaseView
{
public:
	class URichTextBlock*                              ProfileText;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               StartButton;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TitleMenuClass;                                            // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnSplashClosingAkEvent;                                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JWFM[0x18];                                    // 0x02B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterTitleSplashView");
		return ptr;
	}



	void OnStartButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// Class ManeaterUI.ManeaterUIFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UManeaterUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterUIFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsKeyValidForUpgrade(const struct FKey& Key);
	struct FText STATIC_GetTextForKeybind(const struct FName& ActionName, bool bGamepad, int IconSize, int IconOffset, float AxisScale);
	bool STATIC_GetShouldDisplayAttributeAsPercentage(const struct FString& AttributeName);
	struct FText STATIC_GetReadableNameForAttribute(const struct FString& AttributeName);
	struct FLinearColor STATIC_GetNutrientColor(TEnumAsByte<Maneater_ENutrientType> Nutrient);
	class AManeaterHUD* STATIC_GetManeaterHUD(class UObject* WorldContextObject);
	struct FText STATIC_GetLocalizedSlotName(Maneater_EEvolutionSlot Slot);
	struct FText STATIC_GetLocalizedRarityName(Maneater_EEvolutionRarity Rarity);
	struct FText STATIC_GetLocalizedGrowthName(TEnumAsByte<Maneater_EPlayerGrowthStage> GrowthStage);
	struct FText STATIC_GetLocalizedEvolutionProcName(Maneater_EEvolutionProcType ProcType);
	bool STATIC_GetIsDisplayAttributeMultiplier(const struct FString& AttributeName);
	class UTexture2D* STATIC_GetIconForObjectiveType(Maneater_EObjectiveType ObjectiveType, bool bStoryObjective, bool bCompleted);
	class UTexture2D* STATIC_GetIconForMarkerType(ManeaterUI_EMarkerType MarkerType);
	struct FLinearColor STATIC_GetEvolutionColor(Maneater_EEvolutionRarity Rarity);
	class UTexture2D* STATIC_GetEpisodeImage(int StoryIndex);
};

// Class ManeaterUI.ManeaterUISettings
// 0x0150 (FullSize[0x0188] - InheritedSize[0x0038])
class UManeaterUISettings : public UDeveloperSettings
{
public:
	unsigned char                                      EpisodeImages[0x10];                                       // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
	struct FMapSettings                                MapSettings;                                               // 0x0048(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	unsigned char                                      DisplayStatLookupDataTable[0x28];                          // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TMap<Maneater_EEvolutionRarity, struct FLinearColor> RarityToColorMap;                                          // 0x00C0(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	TMap<TEnumAsByte<Maneater_ENutrientType>, struct FLinearColor> NutrientTypeToColorMap;                                    // 0x0110(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	struct FText                                       InputTextFormat;                                           // 0x0160(0x0018) (Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                RestrictedKeys;                                            // 0x0178(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ManeaterUISettings");
		return ptr;
	}



};

// Class ManeaterUI.MapMarkerPopupWidget
// 0x00A8 (FullSize[0x0300] - InheritedSize[0x0258])
class UMapMarkerPopupWidget : public UTwBaseWidget
{
public:
	struct FVector2D                                   RightOfCenterPos;                                          // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LeftOfCenterPos;                                           // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  QuestTitleText;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      QuestImage;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  DefaultQuestImage;                                         // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestDescriptionText;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SubtitleText;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ShortObjectiveText;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestProgressText;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              AudioLog;                                                  // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInfamyRewardWidget*                         ObjectiveRewards;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestTypeText;                                             // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMapMarkerWidget>             FocusedMarker;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ErrorText;                                                 // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*            FastTravelRTB;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       InCombatErrorText;                                         // 0x02D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FText                                       AlreadyAtGrottoErrorText;                                  // 0x02E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MapMarkerPopupWidget");
		return ptr;
	}



	void SetObjectiveData(class UME_PlayerObjective* Objective);
	void OnHoveredMapMarkerWidgetUpdated();
	void HandleInput(const struct FKey& Key);
};

// Class ManeaterUI.MapProgressButtonWidget
// 0x00A0 (FullSize[0x04D8] - InheritedSize[0x0438])
class UMapProgressButtonWidget : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_M9D3[0x20];                                    // 0x0438(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  IconTexture;                                               // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SectionName;                                               // 0x0460(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DefaultActionName;                                         // 0x0478(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       SelectedActionName;                                        // 0x0490(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	int                                                WidgetSwitcherIndex;                                       // 0x04A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               DisplayProgress;                                           // 0x04AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFocused;                                                  // 0x04AD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableActionContainer;                                   // 0x04AE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZPOD[0x1];                                     // 0x04AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  SectionText;                                               // 0x04B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ActionText;                                                // 0x04B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SectionIconImage;                                          // 0x04C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                SectionProgressBar;                                        // 0x04C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                ClickActionContainer;                                      // 0x04D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MapProgressButtonWidget");
		return ptr;
	}



	void ToggleFocus();
	void SetWidgetSwitcherIndex(int Index);
	void SetShowProgress(bool show);
	void SetSectionTexture(class UTexture2D* Texture);
	void SetSectionName(const struct FText& Name);
	void SetProgress(float Progress);
	void SetActionContainerDisabled(bool Disable);
	bool IsFocused();
	int GetWidgetSwitcherIndex();
};

// Class ManeaterUI.MapProgressWidget
// 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
class UMapProgressWidget : public UTwBaseWidget
{
public:
	class UTexture2D*                                  IconTexture;                                               // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SectionName;                                               // 0x0260(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SectionText;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  LandmarkProgressText;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  NutrientCacheProgressText;                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CollectableProgressText;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              LandmarkContainer;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              NutrientCacheContainer;                                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              CollectableContainer;                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SectionIconImage;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                SectionProgressBar;                                        // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SectionPercentage;                                         // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MapProgressWidget");
		return ptr;
	}



	void SetSectionTexture(class UTexture2D* Texture);
	void SetSectionName(const struct FText& Name);
	void SetProgress(float Progress);
	void SetNutrientCacheProgress(const struct FText& Progress);
	void SetLandmarkProgress(const struct FText& Progress);
	void SetCollectibleProgress(const struct FText& Progress);
};

// Class ManeaterUI.MapWidget
// 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
class UMapWidget : public UTwBaseWidget
{
public:
	class UCanvasPanel*                                MapContainerCanvas;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                MapCanvasPanel;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScaleBox*                                   MapScaleBox;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      MapImage;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   FocalTarget;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FocusInterpSpeed;                                          // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MapZoomSpeed;                                              // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinZoomLevel;                                              // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxZoomLevel;                                              // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TransitionZoomLevel;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MapScale;                                                  // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E826[0x8];                                     // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UCanvasPanelSlot>             MapContainerCanvasSlot;                                    // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MapWidget");
		return ptr;
	}



};

// Class ManeaterUI.ME_CinematicMovieWidget
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class UME_CinematicMovieWidget : public UTwBaseWidget
{
public:
	class UME_RadialProgressWidget*                    RadialProgressWidget;                                      // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                Movie_720p;                                                // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSource*                                Movie_1080p;                                               // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSource*                                Movie_1088p;                                               // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ME_CinematicMovieWidget");
		return ptr;
	}



	class UMediaSource* GetMediaSourceForPlatform();
};

// Class ManeaterUI.ME_RadialProgressWidget
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UME_RadialProgressWidget : public UTwBaseWidget
{
public:
	class UImage*                                      HoldProgressImage;                                         // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WEL6[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ME_RadialProgressWidget");
		return ptr;
	}



};

// Class ManeaterUI.METoastWidget
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class UMEToastWidget : public UTwBaseWidget
{
public:
	float                                              Duration;                                                  // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObjectiveControllerWidget>   ObjController;                                             // 0x025C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LMGL[0xC];                                     // 0x0264(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.METoastWidget");
		return ptr;
	}



	void RemoveToast();
	void OnToastShowing();
	void OnToastReadyForRemove();
};

// Class ManeaterUI.MEApexSpawnToast
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class UMEApexSpawnToast : public UMEToastWidget
{
public:
	class UTextBlock*                                  ApexNameText;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MEApexSpawnToast");
		return ptr;
	}



};

// Class ManeaterUI.MEControllerDisconnectedModal
// 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
class UMEControllerDisconnectedModal : public UTwControllerDisconnectedModal
{
public:
	unsigned char                                      UnknownData_V645[0x10];                                    // 0x0268(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MEControllerDisconnectedModal");
		return ptr;
	}



};

// Class ManeaterUI.MELevelUpToast
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UMELevelUpToast : public UMEToastWidget
{
public:
	class UTextBlock*                                  HeaderText;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventLevelUp;                                         // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MELevelUpToast");
		return ptr;
	}



};

// Class ManeaterUI.MENewEpisodeToast
// 0x0018 (FullSize[0x0288] - InheritedSize[0x0270])
class UMENewEpisodeToast : public UMEToastWidget
{
public:
	class UTextBlock*                                  EpisodeTitleText;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EpisodeNumberText;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventNewEpisode;                                      // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MENewEpisodeToast");
		return ptr;
	}



};

// Class ManeaterUI.MERegionToast
// 0x0050 (FullSize[0x02C0] - InheritedSize[0x0270])
class UMERegionToast : public UMEToastWidget
{
public:
	class UTextBlock*                                  HeaderText;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RegionText;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RegionProgressText;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      RegionImage;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DiscoveredText;                                            // 0x0290(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       EnteringText;                                              // 0x02A8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MERegionToast");
		return ptr;
	}



};

// Class ManeaterUI.MESettingsStepper
// 0x0060 (FullSize[0x0498] - InheritedSize[0x0438])
class UMESettingsStepper : public UTwBaseButton
{
public:
	struct FScriptMulticastDelegate                    OnStepperValueChanged;                                     // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTextBlock*                                  SettingsLabel;                                             // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SelectedSettingsLabel;                                     // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               PrevButton;                                                // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               NextButton;                                                // 0x0460(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FText>                               OptionsList;                                               // 0x0468(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       SettingName;                                               // 0x0478(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_H4CL[0x8];                                     // 0x0490(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MESettingsStepper");
		return ptr;
	}



	void SetSelectedOption(int idx, bool bTriggerBroadcast);
	void SetOptions(TArray<struct FText> Options);
	void PreviousOption();
	void OnPrevClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void OnNextClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void NextOption();
	int GetSelectedOption();
	TArray<struct FText> GetOptions();
};

// Class ManeaterUI.MEStoryProgressToast
// 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
class UMEStoryProgressToast : public UMEToastWidget
{
public:
	TArray<class UTexture2D*>                          EpisodeTextures;                                           // 0x0270(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      CurrentEpisodeImage;                                       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      NextEpisodeImage;                                          // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                EpisodeProgressBar;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EpisodeTitleText;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EpisodeListItemText;                                       // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventStoryProgress;                                   // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.MEStoryProgressToast");
		return ptr;
	}



};

// Class ManeaterUI.METooltipContainer
// 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
class UMETooltipContainer : public UTwTooltipContainer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.METooltipContainer");
		return ptr;
	}



};

// Class ManeaterUI.NotorietyMeterWidget
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UNotorietyMeterWidget : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.NotorietyMeterWidget");
		return ptr;
	}



};

// Class ManeaterUI.ObjectiveButtonWidget
// 0x0090 (FullSize[0x04C8] - InheritedSize[0x0438])
class UObjectiveButtonWidget : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_9OX0[0x48];                                    // 0x0438(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UME_PlayerObjective*                         ObjectiveData;                                             // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ObjectiveNameText;                                         // 0x0488(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ObjectiveIcon;                                             // 0x0490(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      TrackIcon;                                                 // 0x0498(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              CompletedTextOpacity;                                      // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NormalTextOpacity;                                         // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                CompletedImageColor;                                       // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                NormalImageColor;                                          // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveButtonWidget");
		return ptr;
	}



	void OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate);
	class UWidget* GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir);
};

// Class ManeaterUI.ObjectiveCollectionWidget
// 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
class UObjectiveCollectionWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_U7SG[0x20];                                    // 0x0258(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UVerticalBox*                                ObjectiveList;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TitleText;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ObjectiveButtonWidgetClass;                                // 0x0288(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       StoryTitleText;                                            // 0x0290(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	class UObjectiveButtonWidget*                      FocusedObjective;                                          // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                FocusedObjectiveIndex;                                     // 0x02B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QV6I[0x14];                                    // 0x02B4(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveCollectionWidget");
		return ptr;
	}



	void SetFocusedObjective(class UObjectiveButtonWidget* ObjectiveButton);
	void OnObjective_MouseEnter(class UObjectiveButtonWidget* ObjectiveButton);
	void OnObjective_Focused(class UObjectiveButtonWidget* ObjectiveButton);
};

// Class ManeaterUI.ObjectiveCompletionDecorator
// 0x0100 (FullSize[0x0388] - InheritedSize[0x0288])
class UObjectiveCompletionDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                                  LocationText;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ObjectiveText;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CompletedText;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ObjectiveIcon;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               CompleteAkEvent;                                           // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               TutorialCompleteAkEvent;                                   // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               BossFightAvailableAkEvent;                                 // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DefaultCompletedText;                                      // 0x02C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       TutorialCompletedText;                                     // 0x02D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  TutorialCompletedIcon;                                     // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WTCJ[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RegionCompletedText;                                       // 0x0300(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EVTO[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       GameCompletedTitleText;                                    // 0x0320(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       GameCompletedText;                                         // 0x0338(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  GameCompletedIcon;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J8LI[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       BossFightText;                                             // 0x0360(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  BossFightIcon;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LXKC[0x8];                                     // 0x0380(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveCompletionDecorator");
		return ptr;
	}



};

// Class ManeaterUI.ObjectiveControllerWidget
// 0x01B8 (FullSize[0x0410] - InheritedSize[0x0258])
class UObjectiveControllerWidget : public UTwBaseWidget
{
public:
	float                                              NewQuestDuration;                                          // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OVRZ[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Maneater_EObjectiveType, class UClass*>       IncrementalObjectiveDecoratorMap;                          // 0x0260(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<Maneater_EObjectiveType, class UClass*>       CenterProgressObjectiveDecoratorMap;                       // 0x02B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UClass*                                      CompletionObjectiveDecorator;                              // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DiscoveredObjectiveDecorator;                              // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TrackObjectiveDecorator;                                   // 0x0310(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      RegionToastClass;                                          // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LevelUpToastClass;                                         // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      StoryProgressToastClass;                                   // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      NewEpisodeToastClass;                                      // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      InfamyRankUpClass;                                         // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ApexSpawnToastClass;                                       // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      HUDErrorMessageClass;                                      // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMacroObjectiveMeterWidget*                  MacroObjectiveWidget;                                      // 0x0350(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveDecoratorQueueWidget*              IncrementalQueue;                                          // 0x0358(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveDecoratorQueueWidget*              CenterQueue;                                               // 0x0360(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveDecoratorQueueWidget*              TopQueue;                                                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveTrackerQueueWidget*                DiscoveredQueue;                                           // 0x0370(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseWidget*                               NewQuestNotificationWidget;                                // 0x0378(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VFQ0[0x10];                                    // 0x0380(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUserWidgetPool                             ToastWidgetPool;                                           // 0x0390(0x0080) (Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveControllerWidget");
		return ptr;
	}



	void TutorialFinished();
	void OnToastDestroyed(class UTwBaseWidget* Widget);
	void OnStoryEventProgress(int CurrentStoryIndex, const struct FText& ConditionText, float StoryProgress);
	void OnRegionChanged(const struct FRegionToastData& Data);
	void OnObjectiveUpdated(class UME_PlayerObjective* Objective);
	void OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnObjectiveStateChanged(class UME_PlayerObjective* PlayerObjective, Maneater_EObjectiveState NewState);
	void OnObjectiveStarted(class UME_PlayerObjective* Objective);
	void OnObjectiveDiscovered(class UME_PlayerObjective* Objective);
	void OnObjectiveComplete(class UME_PlayerObjective* Objective);
	void OnNewQuestAvailableChanged();
	void OnLevelChanged(int NewGrowthLevel, bool bChangeFromTheoretical);
	void OnLandmarkRegionComplete(class UME_PlayerObjective* Objective);
	void OnLandmarkObjectFound(class UME_PlayerObjective* Objective, const struct FText& LandmarkDescription);
	void OnInfamyRankUp(int NewRank);
	void OnHUDErrorMessage(const struct FText& ErrorMessage);
	void OnBountyBossSpawned(const struct FBountyViewData& BountyData);
	void OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective);
	void OnAdvancedToNextEpisode(int CurrentStoryEventIndex);
};

// Class ManeaterUI.ObjectiveDecoratorQueueWidget
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UObjectiveDecoratorQueueWidget : public UTwWidgetQueue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveDecoratorQueueWidget");
		return ptr;
	}



};

// Class ManeaterUI.ObjectiveDiscoveredDecorator
// 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
class UObjectiveDiscoveredDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                                  ObjectiveNameText;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      QuestIcon;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveDiscoveredDecorator");
		return ptr;
	}



};

// Class ManeaterUI.ObjectiveMapMarkerWidget
// 0x0030 (FullSize[0x0320] - InheritedSize[0x02F0])
class UObjectiveMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class UME_PlayerObjective>          OwningPlayerObjective;                                     // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Maneater_EObjectiveState                           ObjectiveState;                                            // 0x02F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LXQU[0x3];                                     // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ObjectiveIndex;                                            // 0x02FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScaleBox*                                   MarkerScale;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      TrackedState;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                InProgressColor;                                           // 0x0310(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveMapMarkerWidget");
		return ptr;
	}



	void OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
};

// Class ManeaterUI.ObjectiveProgressDecorator
// 0x00F0 (FullSize[0x0378] - InheritedSize[0x0288])
class UObjectiveProgressDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                                  MainText;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SubtitleText;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ObjectiveIcon;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<Maneater_EObjectiveType, struct FText>        ObjectiveMainTextMap;                                      // 0x02A0(0x0050) (Edit, Protected, NativeAccessSpecifierProtected)
	TMap<Maneater_EObjectiveType, struct FText>        ObjectiveSubtitleTextMap;                                  // 0x02F0(0x0050) (Edit, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                                  ScalyPeteTexture;                                          // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       HunterSubtitleText;                                        // 0x0348(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XYRM[0x8];                                     // 0x0360(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               LandmarkFoundAkEvent;                                      // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FIJB[0x8];                                     // 0x0370(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveProgressDecorator");
		return ptr;
	}



};

// Class ManeaterUI.ObjectiveTrackDecorator
// 0x0038 (FullSize[0x02C0] - InheritedSize[0x0288])
class UObjectiveTrackDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                                  QuestTitle;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestProgress;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestDescription;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      QuestIcon;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            ProgressUpdate;                                            // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            QuestComplete;                                             // 0x02B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JGR8[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveTrackDecorator");
		return ptr;
	}



};

// Class ManeaterUI.ObjectiveTrackerQueueWidget
// 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
class UObjectiveTrackerQueueWidget : public UTwMultiWidgetQueue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ObjectiveTrackerQueueWidget");
		return ptr;
	}



};

// Class ManeaterUI.OverheadAgroWidget
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UOverheadAgroWidget : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.OverheadAgroWidget");
		return ptr;
	}



};

// Class ManeaterUI.PercentageUpdateDecorator
// 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
class UPercentageUpdateDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                                  Progress;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      IconImage;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               ObjectiveCompleteAkEvent;                                  // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               NutrientCacheOpenedAkEvent;                                // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PercentageUpdateDecorator");
		return ptr;
	}



};

// Class ManeaterUI.PlayerAbilitiesWidget
// 0x0078 (FullSize[0x02D0] - InheritedSize[0x0258])
class UPlayerAbilitiesWidget : public UTwBaseWidget
{
public:
	class UPlayerAbilityInstanceWidget*                LeftAbility;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerAbilityInstanceWidget*                RightAbility;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerAbilityInstanceWidget*                TopAbility;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerAbilityInstanceWidget*                BottomAbility;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<ManeaterUI_EAbilitySlot, class UPlayerAbilityInstanceWidget*> AbilitySlotMap;                                            // 0x0278(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TISN[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerAbilitiesWidget");
		return ptr;
	}



	void SetHealth(float Health);
	void SetCooldownForAbilitySlot(ManeaterUI_EAbilitySlot AbilitySlot, float Cooldown);
	void SetCharges(float Charges);
	void SetBoost(float Boost);
};

// Class ManeaterUI.PlayerAbilityInstanceWidget
// 0x0080 (FullSize[0x02D8] - InheritedSize[0x0258])
class UPlayerAbilityInstanceWidget : public UTwBaseWidget
{
public:
	ManeaterUI_EAbilitySlot                            AbilitySlot;                                               // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NN8P[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      AbilityImage;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      AbilityIcon;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  CooldownText;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMaterialInterface>           TopBottomMat;                                              // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMaterialInterface>           LeftMat;                                                   // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMaterialInterface>           RightMat;                                                  // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MatDynamic;                                                // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IconCooldownOpacity;                                       // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                AbilityCooldownColorActive;                                // 0x02A4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                AbilityCooldownColorReady;                                 // 0x02B4(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MMXR[0x14];                                    // 0x02C4(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerAbilityInstanceWidget");
		return ptr;
	}



};

// Class ManeaterUI.PlayerEvolutionContainer
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UPlayerEvolutionContainer : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerEvolutionContainer");
		return ptr;
	}



};

// Class ManeaterUI.PlayerHealthBarWidget
// 0x0068 (FullSize[0x02C0] - InheritedSize[0x0258])
class UPlayerHealthBarWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                                ProgressBar;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                DeltaBar;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                BreathBar;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                BreathCanvas;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwFloatTweener*                             ValueTweener;                                              // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TweenDuration;                                             // 0x0280(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F8PF[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            LightAttackAnim;                                           // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            HeavyAttackAnim;                                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            Suffocating;                                               // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            BreathBarOn;                                               // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            BreathBarOff;                                              // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                            Invalidator;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HeavyHitPercentage;                                        // 0x02B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_332O[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerHealthBarWidget");
		return ptr;
	}



	void SetRemainingBreath(float RemainingBreath);
	void SetHealthValue(float Value);
	void OnTweenStep(class UTwTweener* Tweener);
	void OnRemainingBreathChanged_BP(float NewValue);
	void OnHealthValueChanged_BP(float NewValue);
};

// Class ManeaterUI.PlayerInfoWidget
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UPlayerInfoWidget : public UTwBaseWidget
{
public:
	class UPlayerHealthBarWidget*                      HealthWidget;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      PoisonDebuff;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerInfoWidget");
		return ptr;
	}



	void OnStoryUpdated(int ActiveStoryIndex);
	void OnRegionChanged(const struct FRegionToastData& Data);
	void OnPlayerHealthValueChanged(float Delta);
	void OnPlayerDamaged(float Damage, class AController* InstigatedBy, class AActor* DamageCauser);
};

// Class ManeaterUI.PlayerNutrientImage
// 0x0058 (FullSize[0x0268] - InheritedSize[0x0210])
class UPlayerNutrientImage : public UImage
{
public:
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O3LJ[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<Maneater_ENutrientType>, class UTexture2D*> NutrientDictionary;                                        // 0x0218(0x0050) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerNutrientImage");
		return ptr;
	}



	void SetNutrientType(TEnumAsByte<Maneater_ENutrientType> Nutrient);
};

// Class ManeaterUI.PlayerNutrientInstanceIcon
// 0x0068 (FullSize[0x02C0] - InheritedSize[0x0258])
class UPlayerNutrientInstanceIcon : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_0BA3[0x20];                                    // 0x0258(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  IncreaseText;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ValueText;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                        NutrientImage;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Maneater_ENutrientType>                NutrientType;                                              // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V1Y5[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwFloatTweener*                             CachedValueTweener;                                        // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwUMGOpacityTweener*                        CachedOpacityTweener;                                      // 0x02A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IncreaseOpacityInTime;                                     // 0x02A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              IncreaseOpacityOutTime;                                    // 0x02AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ValueIncreaseTime;                                         // 0x02B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    IncreaseInEasingFunc;                                      // 0x02B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    IncreaseOutEasingFunc;                                     // 0x02B5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    ValueIncreaseEasingFunc;                                   // 0x02B6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BJRN[0x9];                                     // 0x02B7(0x0009) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerNutrientInstanceIcon");
		return ptr;
	}



	void OnTweenStep(class UTwTweener* Tweener);
	void OnTweenFinished(class UTwTweener* Tweener);
	void OnFadeOutFinished(class UTwTweener* Tweener);
};

// Class ManeaterUI.PlayerNutrientWidget
// 0x0060 (FullSize[0x02B8] - InheritedSize[0x0258])
class UPlayerNutrientWidget : public UTwBaseWidget
{
public:
	class UPlayerNutrientInstanceIcon*                 ProteinIcon;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientInstanceIcon*                 FatIcon;                                                   // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientInstanceIcon*                 MineralIcon;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientInstanceIcon*                 MutagenIcon;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CYSU[0x10];                                    // 0x0278(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwUMGOpacityTweener*                        CachedOpacityTween;                                        // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityInTweenTime;                                        // 0x0290(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              VisibleTime;                                               // 0x0294(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityOutTweenTime;                                       // 0x0298(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    OpacityInEaseFunc;                                         // 0x029C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    OpacityOutEaseFunc;                                        // 0x029D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3NUU[0x2];                                     // 0x029E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               StartNutrientTickAkEvent;                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               StoptNutrientTickAkEvent;                                  // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               IsPlayingNutrientSfx;                                      // 0x02B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_VUGI[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerNutrientWidget");
		return ptr;
	}



	void OnZeroOutStats();
	void OnTweenStarted();
	void OnTweenFinished();
	void OnPlayerNutrientGained(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientGain, bool bFromObjective);
	void OnOpacityOutFinished(class UTwTweener* Tweener);
	void OnOpacityInFinished(class UTwTweener* Tweener);
	void OnNutrientsSpent(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientSpent);
	void OnLifetimeEnded();
};

// Class ManeaterUI.PlayerSkillContainer
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UPlayerSkillContainer : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerSkillContainer");
		return ptr;
	}



};

// Class ManeaterUI.PlayerSkillWIdget
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UPlayerSkillWIdget : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerSkillWIdget");
		return ptr;
	}



};

// Class ManeaterUI.PlayerWaypointMapMarkerWidget
// 0x0028 (FullSize[0x0318] - InheritedSize[0x02F0])
class UPlayerWaypointMapMarkerWidget : public UMapMarkerWidget
{
public:
	unsigned char                                      LeaderIcon[0x28];                                          // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.PlayerWaypointMapMarkerWidget");
		return ptr;
	}



};

// Class ManeaterUI.QuestLogPanel
// 0x0188 (FullSize[0x0420] - InheritedSize[0x0298])
class UQuestLogPanel : public UTwBaseMenuPanel
{
public:
	class UHorizontalBox*                              RegionFilter;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      RegionFilterButtonWidgetClass;                             // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                ObjectiveCollectionsList;                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                                EpisodeItemList;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ObjectiveCollectionWidgetClass;                            // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      EpisodeListItemWidgetClass;                                // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                CenterPanel;                                               // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                                  ObjectiveScrollBox;                                        // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestTitleText;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      QuestImage;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  DefaultQuestImage;                                         // 0x02E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  StoryRegionImage;                                          // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestDescriptionText;                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  SubtitleText;                                              // 0x0300(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ShortObjectiveText;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestProgressText;                                         // 0x0310(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EpisodeTitleText;                                          // 0x0318(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              AudioLog;                                                  // 0x0320(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInfamyRewardWidget*                         ObjectiveRewards;                                          // 0x0328(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAwarenessWidget*                            AwarenessWidget;                                           // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  QuestTypeText;                                             // 0x0338(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct FString, class UObjectiveCollectionWidget*> ObjectiveCollections;                                      // 0x0340(0x0050) (BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, class UTwBaseButton*>         RegionFilterButtons;                                       // 0x0390(0x0050) (BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               CurrentFilterButton;                                       // 0x03E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveButtonWidget*                      CurrentObjectiveWidget;                                    // 0x03E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        PlayAudioGamepadKey;                                       // 0x03F0(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        PlayAudioKeyboardKey;                                      // 0x0408(0x0018) (Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.QuestLogPanel");
		return ptr;
	}



	void SetRegionFilterButton(class UTwBaseButton* RegionFilterButton);
	void PopulateObjectiveData();
	void OnRegionFilter_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnObjectiveCollection_FocusOOB(class UObjectiveCollectionWidget* ObjectiveCollectionWidget, SlateCore_EUINavigation NavigationDir);
	void OnObjectiveCollection_FocusChanged(class UObjectiveButtonWidget* ObjectiveWidget);
	void OnControllerDisconnectedModalDismissed();
};

// Class ManeaterUI.QuestStatusHUDWidget
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class UQuestStatusHUDWidget : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.QuestStatusHUDWidget");
		return ptr;
	}



};

// Class ManeaterUI.RegionHUDWidget
// 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
class URegionHUDWidget : public UTwBaseWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.RegionHUDWidget");
		return ptr;
	}



};

// Class ManeaterUI.RegionInfoListEntry
// 0x0040 (FullSize[0x0298] - InheritedSize[0x0258])
class URegionInfoListEntry : public UTwBaseWidget
{
public:
	struct FText                                       Entry;                                                     // 0x0258(0x0018) (Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	float                                              UncheckedAlpha;                                            // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YOWG[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UImage*                                      Checkmark;                                                 // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      SelectedImage;                                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EntryName;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3TQX[0x8];                                     // 0x0290(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.RegionInfoListEntry");
		return ptr;
	}



};

// Class ManeaterUI.RegionInfoWidget
// 0x0160 (FullSize[0x03B8] - InheritedSize[0x0258])
class URegionInfoWidget : public UTwBaseWidget
{
public:
	bool                                               ViewingRegionMap;                                          // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V4IG[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   WorldMapPosition;                                          // 0x025C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_27S9[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRegionData                                 RegionData;                                                // 0x0268(0x00F0) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                              MapScale;                                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OUT2[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      RegionBoundsTexture[0x28];                                 // 0x035C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PoisonBoundsTexture[0x28];                                 // 0x0388(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bIsZoomed;                                                 // 0x03B0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5465[0x7];                                     // 0x03B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.RegionInfoWidget");
		return ptr;
	}



	void SetRegionData(const struct FRegionData& NewRegionData);
	void SetCurrentlyHovered(bool bCurrentlyHovered);
	void OnRegionDataUpdated();
	struct FText GetRegionName();
	Maneater_EWorldRegion GetRegion();
};

// Class ManeaterUI.RegionObjectiveProgressWidget
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class URegionObjectiveProgressWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                                ObjectiveProgress;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ProgressLabel;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.RegionObjectiveProgressWidget");
		return ptr;
	}



};

// Class ManeaterUI.RegionProgressWidget
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class URegionProgressWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                                RegionProgress;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RegionName;                                                // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RegionPercentage;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.RegionProgressWidget");
		return ptr;
	}



};

// Class ManeaterUI.ResolutionSettingsStepper
// 0x0010 (FullSize[0x04A8] - InheritedSize[0x0498])
class UResolutionSettingsStepper : public UMESettingsStepper
{
public:
	TArray<struct FResolutionValue>                    ResolutionOptions;                                         // 0x0498(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ResolutionSettingsStepper");
		return ptr;
	}



};

// Class ManeaterUI.ResourceListWidget
// 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
class UResourceListWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                                  ProtienCountText;                                          // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FatCountText;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  MineralCountText;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  MutagenCountText;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ResourceListWidget");
		return ptr;
	}



	void UpdateResources();
	void OnNutrientsSpent(TEnumAsByte<Maneater_ENutrientType> NutrientType, int NutrientSpent);
};

// Class ManeaterUI.SaveSlotSelectWidget
// 0x00C8 (FullSize[0x0500] - InheritedSize[0x0438])
class USaveSlotSelectWidget : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_46HZ[0x10];                                    // 0x0438(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  ProfileName;                                               // 0x0448(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               LeftButton;                                                // 0x0450(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               RightButton;                                               // 0x0458(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnSubClickAkEvent;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KB7Y[0x8];                                     // 0x0468(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        DeleteSaveKey;                                             // 0x0470(0x0018) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        DeleteSaveControllerInput;                                 // 0x0488(0x0018) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalSubject;                                    // 0x04A0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalTitle;                                      // 0x04B8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalYes;                                        // 0x04D0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       DeleteSaveModalCancel;                                     // 0x04E8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.SaveSlotSelectWidget");
		return ptr;
	}



	void SetSaveSlotIdx(int idx);
	void OnRightButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void OnLeftButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void IncrementSaveSlot();
	void DecrementSaveSlot();
};

// Class ManeaterUI.SettingsMenuController
// 0x0008 (FullSize[0x0310] - InheritedSize[0x0308])
class USettingsMenuController : public UTwBaseMenu
{
public:
	unsigned char                                      UnknownData_E3J5[0x8];                                     // 0x0308(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.SettingsMenuController");
		return ptr;
	}



};

// Class ManeaterUI.StoryCompleteWidget
// 0x00A8 (FullSize[0x0308] - InheritedSize[0x0260])
class UStoryCompleteWidget : public UTwBaseModal
{
public:
	unsigned char                                      UnknownData_0NBJ[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                               ME_BaseButton_BP;                                          // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                               StoryContinue;                                             // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               PlayerLevel;                                               // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               EvolutionsFound;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               InfamyRank;                                                // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               TimePlayed;                                                // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               CrawfishBayCompletion;                                     // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               FawtickBayouCompletion;                                    // 0x02B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               DeadHorseLakeCompletion;                                   // 0x02B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               GoldenShoresCompletion;                                    // 0x02C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               CaviarKeyCompletion;                                       // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               ProsperitySandsCompletion;                                 // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               SapphireBayCompletion;                                     // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                               TheGulfCompletion;                                         // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            Background_IntroAnim;                                      // 0x02E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            Congrats_IntroAnim;                                        // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            EndgameStats_IntroAnim;                                    // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AudioEvent;                                                // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.StoryCompleteWidget");
		return ptr;
	}



	void OnDismissStatsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void OnDismissCongratsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// Class ManeaterUI.SubtitleTextWidget
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class USubtitleTextWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                                  SubtitleTextBlock;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                                     SubtitleBorder;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.SubtitleTextWidget");
		return ptr;
	}



	void OnSubtitleTextUpdated(const struct FText& SubtitleText);
};

// Class ManeaterUI.ThrashingControlsWidget
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UThrashingControlsWidget : public UTwBaseWidget
{
public:
	class UWidgetAnimation*                            ThrashLoop;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ThrashingControlsWidget");
		return ptr;
	}



};

// Class ManeaterUI.ThrashingWidget
// 0x00C0 (FullSize[0x0318] - InheritedSize[0x0258])
class UThrashingWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_75OL[0x4];                                     // 0x0258(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                LowColor;                                                  // 0x025C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                MediumColor;                                               // 0x026C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                HighColor;                                                 // 0x027C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XD0N[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UProgressBar*                                ProgressBar;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                BarPanel;                                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UThrashingControlsWidget*                    ThrashingControlsWidget;                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      TopJaw;                                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      BottomJaw;                                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ActionText;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            ThrashPulseAnimation;                                      // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       ThrashText;                                                // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       BreakFreeText;                                             // 0x02F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                                ThrashEnableTimerHandle;                                   // 0x0308(0x0008) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ThrashEnableDelay;                                         // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WNEY[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.ThrashingWidget");
		return ptr;
	}



	void OnUpdateThrashUI(bool bShow, bool bPlayerSharkThrashed);
	void OnThrashPulse();
	void EnableThrashUI(bool bPlayerSharkThrashed);
};

// Class ManeaterUI.TutorialInfoWidget
// 0x0098 (FullSize[0x02F0] - InheritedSize[0x0258])
class UTutorialInfoWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_LW6V[0x8];                                     // 0x0258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AudioEventInfo;                                            // 0x0260(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                            Invalidator;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TutName;                                                   // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  Counter;                                                   // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                              TutBody;                                                   // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*            InputText;                                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            IdleAnimation;                                             // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OPGO[0x48];                                    // 0x02A8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.TutorialInfoWidget");
		return ptr;
	}



	void TutorialFinished();
	void StopTutorialTimer();
	void StartTutorialTimer();
	void SetObjectiveComplete(TEnumAsByte<Maneater_ETutorialEventId> Objective);
	void SetEnabled(bool _bEnabled);
	void RepeatedTutorialStepCompleted(int Numberator, int Denomenator);
	void RemoveObjective(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId);
	void Disable();
	void ClearAllObjectives();
	void AddObjective(TEnumAsByte<Maneater_ETutorialEventId> Objective, const struct FME_TutorialEvent& EventData);
};

// Class ManeaterUI.TutorialObjectiveListEntry
// 0x00E0 (FullSize[0x0338] - InheritedSize[0x0258])
class UTutorialObjectiveListEntry : public UTwBaseWidget
{
public:
	ManeaterUI_ETutObjectiveStatus                     CurrentStatus;                                             // 0x0258(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MS01[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FME_TutorialEvent                           ObjectiveData;                                             // 0x0260(0x00C0) (NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            CompletedAnim;                                             // 0x0320(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ActivatedAnim;                                             // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  ObjectiveName;                                             // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.TutorialObjectiveListEntry");
		return ptr;
	}



};

// Class ManeaterUI.TUtorialPopupWidget
// 0x0058 (FullSize[0x02B0] - InheritedSize[0x0258])
class UTUtorialPopupWidget : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_P34X[0x10];                                    // 0x0258(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AudioEventDisplayPopup;                                    // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                                  Heading;                                                   // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SizeBox_2;                                                 // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SizeBox_3;                                                 // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SizeBox_4;                                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SizeBox_5;                                                 // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                                    SizeBox_6;                                                 // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                               TutorialButton_BP;                                         // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XX1H[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.TUtorialPopupWidget");
		return ptr;
	}



	void OnTutorialButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void Disable();
};

// Class ManeaterUI.TUtorialSinglePopupWidget
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UTUtorialSinglePopupWidget : public UTwBaseModal
{
public:
	unsigned char                                      UnknownData_BQ2X[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetSwitcher*                             HeadingSwitcher;                                           // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                             IconSwitcher;                                              // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                             DescriptionSwitcher;                                       // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                               OkButton;                                                  // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AudioEventDisplayPopup;                                    // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       NextPageText;                                              // 0x0298(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       OkText;                                                    // 0x02B0(0x0018) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1J7[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.TUtorialSinglePopupWidget");
		return ptr;
	}



	void OnOkButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// Class ManeaterUI.VideoSettingsWidget
// 0x0158 (FullSize[0x03F0] - InheritedSize[0x0298])
class UVideoSettingsWidget : public UTwBaseMenuPanel
{
public:
	class UMESettingsStepper*                          WindowModeStepper;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UResolutionSettingsStepper*                  ResolutionStepper;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          QualityStepper;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          ViewDistanceStepper;                                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          ShadowsStepper;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          AATypeStepper;                                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          TexturesStepper;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          EffectsStepper;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          PostProcessingStepper;                                     // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          VsyncStepper;                                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          BrightnessStepper;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                          FoliageStepper;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ResetDefaultKey;                                           // 0x02F8(0x0018) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                        ResetDefaultControllerInput;                               // 0x0310(0x0018) (Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       ResetDefaultModalSubject;                                  // 0x0328(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ResetDefaultModalTitle;                                    // 0x0340(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ResetDefaultModalYes;                                      // 0x0358(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ResetDefaultModalCancel;                                   // 0x0370(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ConfirmDefaultModalSubject;                                // 0x0388(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ConfirmDefaultModalTitle;                                  // 0x03A0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ConfirmDefaultModalYes;                                    // 0x03B8(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ConfirmDefaultModalCancel;                                 // 0x03D0(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FJQK[0x8];                                     // 0x03E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.VideoSettingsWidget");
		return ptr;
	}



	void OnWindowModeChanged(int Index);
	void OnResolutionChanged(int Index);
	void OnQualityChanged(int Index);
	void OnOptionChanged(int Index);
};

// Class ManeaterUI.WorldMapWidget
// 0x0158 (FullSize[0x0400] - InheritedSize[0x02A8])
class UWorldMapWidget : public UMapWidget
{
public:
	unsigned char                                      UnknownData_TK56[0x48];                                    // 0x02A8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOverlay*                                    MapMarkerOverlay;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6R38[0x10];                                    // 0x02F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      MapMarkerWidgetClass;                                      // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ObjectiveMapMarkerWidgetClass;                             // 0x0310(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      LandmarkMapMarkerWidgetClass;                              // 0x0318(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      BountyBoatMapMarkerWidgetClass;                            // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      PlayerWaypointWidgetClass;                                 // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      GrottoMapMarkerWidgetClass;                                // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ScalyPeteMapMarkerWidgetClass;                             // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventZoomIn;                                          // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventZoomOut;                                         // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventOutlineAppear;                                   // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventWaypointPlacement;                               // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventWaypointRemoved;                                 // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UBountyBoatMapMarkerWidget*>          BountyBoatMapMarkers;                                      // 0x0368(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapMarkerWidget*                            PlayerLocationMapMarker;                                   // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerWaypointMapMarkerWidget*              PlayerWaypointMapMarker;                                   // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UMapMarkerWidget>>     AllMarkers;                                                // 0x0388(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMapMarkerWidget*>                    MapMarkerWidgets;                                          // 0x0398(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MapMarkerSnapDistance;                                     // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMapMarkerWidget>             HoveredMapMarkerWidget;                                    // 0x03AC(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W7W4[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UOverlay*                                    RegionInfoOverlay;                                         // 0x03B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Maneater_EWorldRegion                              HoveredRegion;                                             // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4JCX[0x7];                                     // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRegionData>                         Regions;                                                   // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URegionInfoWidget*>                   RegionInfoWidgets;                                         // 0x03D8(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NGAY[0x8];                                     // 0x03E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          WorldMapMaterial;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_23RS[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ManeaterUI.WorldMapWidget");
		return ptr;
	}



	void UpdateRegionInfoWidgets();
	void SetDataForRegions(TArray<struct FRegionData>* RegionData);
	void SetDataForRegion(struct FRegionData* RegionData);
	void OnRegionDataChanged();
	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
