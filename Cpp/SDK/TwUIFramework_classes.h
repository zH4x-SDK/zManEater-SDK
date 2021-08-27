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

// Class TwUIFramework.TwBaseWidget
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UTwBaseWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_JM28[0x12];                                    // 0x0230(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bCanEverBeFocused;                                         // 0x0242(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J7TR[0x1];                                     // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SortPriority;                                              // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NRUO[0x4];                                     // 0x0248(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UTwBaseView>                  ParentView;                                                // 0x024C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LF7M[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseWidget");
		return ptr;
	}



	void UnsubscribeFromEvents_BP(class AHUD* HUD);
	void SubscribeToEvents_BP(class AHUD* HUD);
	void OnPostInitProperties();
	void OnMouseLeave_BP(const struct FPointerEvent& InMouseEvent);
	void OnMouseEnter_BP(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);
	void OnMouseButtonDown_BP(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);
	class AHUD* GetHUD();
};

// Class TwUIFramework.BaseSlider
// 0x01A0 (FullSize[0x03F8] - InheritedSize[0x0258])
class UBaseSlider : public UTwBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnSliderValueChanged;                                      // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class USlider*                                     SliderWidget;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ThumbImage;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                                     ThumbButton;                                               // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSlateBrush                                 ThumbImageBrush;                                           // 0x0280(0x0088) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                ThumbHoverColor;                                           // 0x0308(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                ThumbNormalColor;                                          // 0x0318(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ThumbLengthOffset;                                         // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ThumbWidth;                                                // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DefaultValue;                                              // 0x0330(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MMPH[0x18];                                    // 0x0334(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bVertical;                                                 // 0x034C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_58EE[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CursorMultiplier;                                          // 0x0350(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              StickDeadZone;                                             // 0x0354(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BarThickness;                                              // 0x0358(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SliderBarColor;                                            // 0x035C(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4CSR[0x4];                                     // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 SliderBarImageBrush;                                       // 0x0370(0x0088) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.BaseSlider");
		return ptr;
	}



	void SetSliderValue(float Perc, bool bSurpressEvent);
	float GetSliderValue();
};

// Class TwUIFramework.TwClickableWidget
// 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
class UTwClickableWidget : public UTwBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnWidgetClicked;                                           // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWidgetFocused;                                           // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWidgetFocusLost;                                         // 0x0278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FText                                       FooterText;                                                // 0x0288(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsToggleable;                                             // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3536[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwClickableWidget");
		return ptr;
	}



	void ToggleSelectedState(bool bForceSetState, bool bNewState);
	void SetLabelText(const struct FText& Label);
	void SetIsToggleable(bool bToggle);
	void SetIconTexture(class UTexture2D* Texture);
};

// Class TwUIFramework.TwAnimatedButton
// 0x0118 (FullSize[0x03C0] - InheritedSize[0x02A8])
class UTwAnimatedButton : public UTwClickableWidget
{
public:
	struct FScriptMulticastDelegate                    OnAnimInvIconClicked;                                      // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TwUIFramework_EAnimButtonState                     ButtonState;                                               // 0x02B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JJAQ[0x7];                                     // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UImage*                                      BackImage;                                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      MidImage;                                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      FrontImage;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                TopCanvas;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      IconImage;                                                 // 0x02E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAnimationOverride;                                        // 0x02E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GVJG[0x7];                                     // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TwUIFramework_ETweenTarget, struct FAnimTweenGroup> TargetToTweenMap;                                          // 0x02F0(0x0050) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<TwUIFramework_EAnimButtonState, struct FTweenTargetDataMap> TweenAnimTargetData;                                       // 0x0340(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_EEasingFunc>                    EasingFunc;                                                // 0x0390(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3EV8[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  BackImageTexture;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  MidImageTexture;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  FrontImageTexture;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  IconTexture;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LJRY[0x8];                                     // 0x03B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwAnimatedButton");
		return ptr;
	}



	void SetSelected(bool bSelected);
	bool IsSelected();
	void AnimateState_BP(TwUIFramework_EAnimButtonState State);
};

// Class TwUIFramework.TwBaseButton
// 0x0190 (FullSize[0x0438] - InheritedSize[0x02A8])
class UTwBaseButton : public UTwClickableWidget
{
public:
	unsigned char                                      UnknownData_WCXW[0x30];                                    // 0x02A8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSelectedState;                                            // 0x02D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bForceHighlighted;                                         // 0x02D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsDisabled;                                               // 0x02DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_03SL[0x5];                                     // 0x02DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwColorTweener*                             BorderTween;                                               // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       ButtonLabel;                                               // 0x02E8(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                                FrameColorDefault;                                         // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                FrameColorHighlight;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BodyColorDefault;                                          // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BodyColorHighlightAndClicked;                              // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BodyColorClicked;                                          // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BodyColorHighlight;                                        // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                DisabledButtonColor;                                       // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                DefaultButtonColor;                                        // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseBodyColorHighlight;                                    // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2MS7[0x3];                                     // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                TextColorDefault;                                          // 0x0384(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TextColorClicked;                                          // 0x0394(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TextColorHighlight;                                        // 0x03A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseTextColorHighlight;                                    // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8EMW[0x3];                                     // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              ButtonFont;                                                // 0x03B8(0x0050) (Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ButtonTextBlock;                                           // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                ButtonCanvasPanel;                                         // 0x0410(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ButtonFrameImage;                                          // 0x0418(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ButtonBodyImage;                                           // 0x0420(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnHoverAkEvent;                                            // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnClickAkEvent;                                            // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseButton");
		return ptr;
	}



	void StopBorderPulseTween();
	void StartBorderPulseTween();
	void SetForcedHighlight(bool bForced);
	void SetDisabled(bool bDisabled);
	void OnTweenStep(class UTwTweener* Tweener);
	bool GetSelectedState();
	bool GetDisabled();
	struct FText GetButtonLabelText();
	class UImage* GetButtonFrameImage();
};

// Class TwUIFramework.TwBaseMenu
// 0x00B0 (FullSize[0x0308] - InheritedSize[0x0258])
class UTwBaseMenu : public UTwBaseWidget
{
public:
	unsigned char                                      UnknownData_WDIA[0x20];                                    // 0x0258(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      DefaultPanel;                                              // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6ATX[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTwMenuData>                         MenuData;                                                  // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseMenuPanel*>                    MenuPanels;                                                // 0x0290(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseMenuBarItem*>                  MenuBarItems;                                              // 0x02A0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bParalaxEnabled;                                           // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_13M2[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPanelWidget*                                MenuBarContainer;                                          // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                             PanelContainer;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOpenDefault;                                              // 0x02C8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I46Z[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OnSubBackAkEvent;                                          // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CY27[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OnPanelOpenAkEvent;                                        // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseMenuPanel*                            OpenPanel;                                                 // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTwBaseMenuBarItem*                          OpenPanelBarItem;                                          // 0x02F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9GIG[0x4];                                     // 0x02F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UTwBaseMenuPanel>             PendingPanel;                                              // 0x02FC(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JDEE[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseMenu");
		return ptr;
	}



	void SetDefaultPanel(unsigned char Panel);
	class UTwBaseMenuPanel* OpenMenuPanelByLookup(const struct FName& LookupName);
	class UTwBaseMenuPanel* OpenMenuPanel(int Index);
	void OpenMenu();
	void OnMenuBarItemClicked(class UTwBaseMenuBarItem* MenuBarItem);
	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
	void MoveMenus(const struct FVector2D& MoveVector);
	bool IsOpenDefault();
	void HandleInput(const struct FText& InputName);
	class UTwBaseMenuPanel* GetPanelForLookup(const struct FName& LookUp);
	struct FText GetLabelForLookup(const struct FName& LookUp);
	class UWidget* GetFocusWidgetForNavigation_BP(SlateCore_EUINavigation NavigationDir);
	class UWidget* GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir);
	class UTwBaseMenuPanel* GetCurrentPanel();
	void CloseMenu();
};

// Class TwUIFramework.TwBaseMenuBarHorizontal
// 0x0050 (FullSize[0x0180] - InheritedSize[0x0130])
class UTwBaseMenuBarHorizontal : public UHorizontalBox
{
public:
	TMap<class UTwBaseMenuBarItem*, class UTwBaseMenuPanel*> MenuItems;                                                 // 0x0130(0x0050) (Edit, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseMenuBarHorizontal");
		return ptr;
	}



};

// Class TwUIFramework.TwBaseMenuBarItem
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class UTwBaseMenuBarItem : public UTwBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnMenuBarItemClicked;                                      // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTwClickableWidget*                          ClickableWidget;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseMenuBarItem");
		return ptr;
	}



	void SetSelected_BP(bool bIsSelected);
	void OnButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked);
};

// Class TwUIFramework.TwBaseMenuPanel
// 0x0040 (FullSize[0x0298] - InheritedSize[0x0258])
class UTwBaseMenuPanel : public UTwBaseWidget
{
public:
	TArray<class UTwBaseMenuWidgetContainer*>          WidgetContainers;                                          // 0x0258(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseMenu*                                 ParentMenu;                                                // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       PanelFooterText;                                           // 0x0270(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseMenuPanel");
		return ptr;
	}



	void OnPanelOpen_BP();
	void OnPanelFinishedClosing(const struct FPanelLifetimeResponder& Responder);
	void OnPanelClosing_BP(const struct FPanelLifetimeResponder& Responder, class UTwBaseMenuPanel* IncomingPanel);
	void MovePanel(const struct FVector2D& MoveVector);
	class UWidget* GetFocusWidgetForNavigation_BP(SlateCore_EUINavigation NavigationDir);
	class UWidget* GetFocusWidgetForNavigation(SlateCore_EUINavigation NavigationDir);
	class UWidget* GetDefaultFocusWidget();
};

// Class TwUIFramework.TwBaseView
// 0x0040 (FullSize[0x0298] - InheritedSize[0x0258])
class UTwBaseView : public UTwBaseWidget
{
public:
	class UTwViewController*                           ViewController;                                            // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UWidget>                      FocusWidget;                                               // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       FooterText;                                                // 0x0268(0x0018) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	bool                                               bShowFooter;                                               // 0x0280(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RBRY[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               OnViewPoppedAkEvent;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               OnViewPushedAkEvent;                                       // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseView");
		return ptr;
	}



	void OnViewShowing_BP();
	void OnViewShowing();
	void OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder);
	void OnViewHiding_BP();
	void OnViewHiding();
	void OnViewEnteringStack_BP();
	void OnViewEnteringStack(class UTwViewController* Controller);
	void OnFinishLeavingStack(const struct FViewPoppingResponder& Responder);
	class UWidget* GetDefaultFocusWidget();
	bool DoesRequireInputUIMode();
};

// Class TwUIFramework.TwBaseMenuView
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UTwBaseMenuView : public UTwBaseView
{
public:
	class UTwBaseMenu*                                 MenuController;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                               AudioEventMenuPanelChanged;                                // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseMenuView");
		return ptr;
	}



	void OnOpenPanelRequest(const struct FName& LookupName);
	void OnMenuPanel_Changed();
	class UTwBaseMenu* GetMenuController();
};

// Class TwUIFramework.TwBaseMenuWidgetContainer
// 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
class UTwBaseMenuWidgetContainer : public UCanvasPanel
{
public:
	float                                              ParallaxMoveScale;                                         // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   WidgetStartPos;                                            // 0x0134(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     WidgetStartOffsets;                                        // 0x013C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ARAP[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseMenuWidgetContainer");
		return ptr;
	}



};

// Class TwUIFramework.TwBaseModal
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UTwBaseModal : public UTwBaseWidget
{
public:
	class UTwViewController*                           ViewController;                                            // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseModal");
		return ptr;
	}



	void OnModalShowing_BP();
	void OnModalShowing();
	void OnModalLeavingStack_BP();
	void OnModalLeavingStack();
	void OnModalHiding_BP();
	void OnModalHiding();
	void OnModalEnteringStack_BP();
	void OnModalEnteringStack(class UTwViewController* Controller);
	class UWidget* GetDefaultFocusWidget();
};

// Class TwUIFramework.TwBaseSlider
// 0x0068 (FullSize[0x0460] - InheritedSize[0x03F8])
class UTwBaseSlider : public UBaseSlider
{
public:
	class UTextBlock*                                  Label;                                                     // 0x03F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                FillBar;                                                   // 0x0400(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                TextMask;                                                  // 0x0408(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  EmptyText;                                                 // 0x0410(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  FillText;                                                  // 0x0418(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       DefaultLabelText;                                          // 0x0420(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	float                                              MinSliderValue;                                            // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSliderValue;                                            // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxFractionalDigits;                                       // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B3K6[0x4];                                     // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ValueSuffix;                                               // 0x0448(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwBaseSlider");
		return ptr;
	}



	void SetLabelText(const struct FText& LabelText);
};

// Class TwUIFramework.TwCheckboxButton
// 0x0050 (FullSize[0x0488] - InheritedSize[0x0438])
class UTwCheckboxButton : public UTwBaseButton
{
public:
	struct FText                                       OptionLabel;                                               // 0x0438(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ButtonSelectedLabel;                                       // 0x0450(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ButtonUnselectedLabel;                                     // 0x0468(0x0018) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                                  OptionLabelTextBlock;                                      // 0x0480(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwCheckboxButton");
		return ptr;
	}



};

// Class TwUIFramework.TwTweener
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UTwTweener : public UObject
{
public:
	unsigned char                                      UnknownData_ECLX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<Engine_EEasingFunc>                    EasingFunc;                                                // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5QSN[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               PingPong;                                                  // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4UA5[0x2B];                                    // 0x0039(0x002B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TwUIFramework_ETweenPlayState                      PlayState;                                                 // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LZT0[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwTweener");
		return ptr;
	}



	void Stop(bool bSkipToEnd);
	void Play();
	void Pause();
};

// Class TwUIFramework.TwColorTweener
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UTwColorTweener : public UTwTweener
{
public:
	struct FLinearColor                                From;                                                      // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                To;                                                        // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HE3L[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwColorTweener");
		return ptr;
	}



	struct FLinearColor GetCurrentValue();
	class UTwColorTweener* STATIC_CreateColorTween(const struct FLinearColor& FromValue, const struct FLinearColor& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, bool AutoStart);
};

// Class TwUIFramework.TwConfirmModal
// 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
class UTwConfirmModal : public UTwBaseModal
{
public:
	unsigned char                                      UnknownData_3G2D[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnModalSubmitted_BP;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTextBlock*                                  TitleLabel;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  Body;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  DeclineButtonLabel;                                        // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ConfirmButtonLabel;                                        // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                                     ConfirmButton;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UButton*                                     DeclineButton;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwConfirmModal");
		return ptr;
	}



	void OnModalDecline();
	void OnModalConfirm();
};

// Class TwUIFramework.TwControllerDisconnectedModal
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UTwControllerDisconnectedModal : public UTwBaseModal
{
public:
	class UTwClickableWidget*                          DefaultWidget;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwControllerDisconnectedModal");
		return ptr;
	}



};

// Class TwUIFramework.TwFlipbookImageWidget
// 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
class UTwFlipbookImageWidget : public UTwBaseWidget
{
public:
	class UImage*                                      ImageWidget;                                               // 0x0258(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       FlipbookPlayScalarName;                                    // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstance*                           MaterialAsset;                                             // 0x0268(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TwUIFramework_EFlipbookPlayMode                    PlayMode;                                                  // 0x0278(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6VAU[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlaySpeed;                                                 // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnFlipbookEnded;                                           // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnFlipbookReset;                                           // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZKNG[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwFlipbookImageWidget");
		return ptr;
	}



	void SetPlayMode(TwUIFramework_EFlipbookPlayMode NewPlayMode);
	void Reset();
};

// Class TwUIFramework.TwFloatTweener
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UTwFloatTweener : public UTwTweener
{
public:
	float                                              From;                                                      // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRWK[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwFloatTweener");
		return ptr;
	}



	float GetCurrentValue();
	class UTwFloatTweener* STATIC_CreateFloatTween(float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, class UTwFloatTweener* ReusableTweener, bool AutoStart);
};

// Class TwUIFramework.TwHUD
// 0x0048 (FullSize[0x0358] - InheritedSize[0x0310])
class ATwHUD : public AHUD
{
public:
	struct FScriptMulticastDelegate                    OnUserInputDeviceChanged;                                  // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V3RO[0x10];                                    // 0x0320(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwViewController*                           ViewController;                                            // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ViewControllerClass;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ControllerDisconnectModalClass;                            // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ControllerContinueModalClass;                              // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JY9P[0x8];                                     // 0x0350(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwHUD");
		return ptr;
	}



	void OnInputDeviceEvent(TwUIFramework_EUserInputDevice Device);
	void OnControllerDisconnectedAnyPlatform();
	void OnControllerDisconnected(bool bShowGenericAlertInstead);
	TwUIFramework_EUserInputDevice GetCurrentInputDevice();
};

// Class TwUIFramework.TwInputAwareRichTextBlock
// 0x0028 (FullSize[0x0690] - InheritedSize[0x0668])
class UTwInputAwareRichTextBlock : public URichTextBlock
{
public:
	unsigned char                                      UnknownData_QFDL[0x8];                                     // 0x0668(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ShadowedText;                                              // 0x0670(0x0018) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KUZ9[0x8];                                     // 0x0688(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwInputAwareRichTextBlock");
		return ptr;
	}



	void SetTextAware(const struct FText& InText);
	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
};

// Class TwUIFramework.TwInputAwareRichTextBlockWidget
// 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
class UTwInputAwareRichTextBlockWidget : public UTwBaseWidget
{
public:
	struct FText                                       AssignedText;                                              // 0x0258(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       KeybindText;                                               // 0x0270(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       GamepadKeybindText;                                        // 0x0288(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ActionStrings;                                             // 0x02A0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DGGN[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class URichTextBlock*                              RTB;                                                       // 0x02B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ROZG[0x8];                                     // 0x02C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwInputAwareRichTextBlockWidget");
		return ptr;
	}



	void SetTextAware(const struct FText& InText);
	void SetKeybindText(const struct FText& InText, bool bGamepad);
	void OnInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
};

// Class TwUIFramework.TwLambdaButton
// 0x0048 (FullSize[0x0480] - InheritedSize[0x0438])
class UTwLambdaButton : public UTwBaseButton
{
public:
	unsigned char                                      UnknownData_3Y32[0x48];                                    // 0x0438(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwLambdaButton");
		return ptr;
	}



	void OnWidgetClickedInternal(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
};

// Class TwUIFramework.TwLoadingScreen
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class UTwLoadingScreen : public UUserWidget
{
public:
	class UTextBlock*                                  MapText;                                                   // 0x0230(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  TooltipsText;                                              // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      BG;                                                        // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      Image_4;                                                   // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      Image_1;                                                   // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_CVJZ[0x18];                                    // 0x0258(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwLoadingScreen");
		return ptr;
	}



};

// Class TwUIFramework.TwLoadingScreenSettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UTwLoadingScreenSettings : public UDeveloperSettings
{
public:
	TArray<struct FText>                               TooltipEntries;                                            // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TooltipCycleTime;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LZER[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwLoadingScreenSettings");
		return ptr;
	}



};

// Class TwUIFramework.TwMatFloatScalarTweener
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UTwMatFloatScalarTweener : public UTwTweener
{
public:
	float                                              From;                                                      // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O2VC[0x18];                                    // 0x0070(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwMatFloatScalarTweener");
		return ptr;
	}



	float GetCurrentValue();
	class UTwMatFloatScalarTweener* STATIC_CreateMatFloatScalarTween(class UMaterialInstanceDynamic* Mat, const struct FName& Param, float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, bool AutoStart);
};

// Class TwUIFramework.TwMoviePlayerView
// 0x00C8 (FullSize[0x0360] - InheritedSize[0x0298])
class UTwMoviePlayerView : public UTwBaseView
{
public:
	struct FScriptMulticastDelegate                    OnMovieFinished;                                           // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlaylist*                              Playlist;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            FadePrompt;                                                // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                                SkipProgressBar;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O372[0x30];                                    // 0x02C8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkipPromptTime;                                            // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3HZ2[0x64];                                    // 0x02FC(0x0064) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwMoviePlayerView");
		return ptr;
	}



	void OnTracksChanged();
	void OnInteractReleased();
	void OnInteractPressed();
	void OnEndReached();
	void OnAnyButtonPressed();
};

// Class TwUIFramework.TwMultiOptionModal
// 0x0100 (FullSize[0x0360] - InheritedSize[0x0260])
class UTwMultiOptionModal : public UTwBaseModal
{
public:
	unsigned char                                      UnknownData_U6H5[0x40];                                    // 0x0260(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  Header;                                                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  Body;                                                      // 0x02A8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              OptionsContainer;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ButtonClass;                                               // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            IntroAnim;                                                 // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                               DefaultFocusButton;                                        // 0x02C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_03SO[0x90];                                    // 0x02D0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwMultiOptionModal");
		return ptr;
	}



	void STATIC_CreateModalWithOptions_BP(class APlayerController* OwningPlayer, TArray<struct FText> Options, const struct FText& TitleText, const struct FText& BodyText, const struct FScriptDelegate& Callback, bool bDismissable, const struct FText& DismissAction);
};

// Class TwUIFramework.TwWidgetQueue
// 0x0030 (FullSize[0x0288] - InheritedSize[0x0258])
class UTwWidgetQueue : public UTwBaseWidget
{
public:
	TArray<class UTwBaseWidget*>                       WidgetQueue;                                               // 0x0258(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                                WidgetContainer;                                           // 0x0268(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseWidget*                               CurrentWidget;                                             // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bSortByPriority;                                           // 0x0278(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6EF8[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PumpQueueDelay;                                            // 0x027C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WCA0[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwWidgetQueue");
		return ptr;
	}



	void PumpQueue();
	void OnWidgetReadyForDestruction(class UTwBaseWidget* Widget);
};

// Class TwUIFramework.TwMultiWidgetQueue
// 0x0088 (FullSize[0x0310] - InheritedSize[0x0288])
class UTwMultiWidgetQueue : public UTwWidgetQueue
{
public:
	struct FUserWidgetPool                             CurrentWidgetPool;                                         // 0x0288(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                MaxWidgetCount;                                            // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPTL[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwMultiWidgetQueue");
		return ptr;
	}



	void OnWidgetQueueDestruction(class UTwBaseWidget* Widget);
};

// Class TwUIFramework.TwRadialProgressIcon
// 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
class UTwRadialProgressIcon : public UTwBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UImage*                                      RadialImage;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          RadMat;                                                    // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          RadMatFilled;                                              // 0x0278(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    RadialMatDynamic;                                          // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Progress;                                                  // 0x0288(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                DefaultColor;                                              // 0x028C(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DefaultRadius;                                             // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bFilled;                                                   // 0x02A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2HM8[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwRadialProgressIcon");
		return ptr;
	}



	void SetRadius(float NewRadius);
	void SetProgress(float Val);
	void SetColor(const struct FLinearColor& NewColor);
};

// Class TwUIFramework.TwRadioWidget
// 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
class UTwRadioWidget : public UTwBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnRadioOptionChanged;                                      // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FRadioWidgetData>                    Entries;                                                   // 0x0268(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRadioWidgetEntry>                   Buttons;                                                   // 0x0278(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USpacer*>                             Spacers;                                                   // 0x0288(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  RadioLabelTextBlock;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                              ButtonBox;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ButtonClass;                                               // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       RadioLabel;                                                // 0x02B0(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwRadioWidget");
		return ptr;
	}



	void OnProcessButtonClick(const struct FKey& MouseButtonClicked, class UTwClickableWidget* ButtonClicked);
};

// Class TwUIFramework.TwRichTextBlockPlatformIconDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTwRichTextBlockPlatformIconDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwRichTextBlockPlatformIconDecorator");
		return ptr;
	}



};

// Class TwUIFramework.TwScreenSpaceConstrainedWidget
// 0x0030 (FullSize[0x0288] - InheritedSize[0x0258])
class UTwScreenSpaceConstrainedWidget : public UTwBaseWidget
{
public:
	TWeakObjectPtr<class AActor>                       TargetActor;                                               // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                BaseHResolution;                                           // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinHResolution;                                            // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     ActorOffset;                                               // 0x0268(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8VHG[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ConstrainRadiusVerticalPerc;                               // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EQ06[0xC];                                     // 0x027C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwScreenSpaceConstrainedWidget");
		return ptr;
	}



	void SetTargetActor(class AActor* Actor);
};

// Class TwUIFramework.TwToastManagerWidget
// 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
class UTwToastManagerWidget : public UTwBaseWidget
{
public:
	class UVerticalBox*                                ToastPanel;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwToastManagerWidget");
		return ptr;
	}



	class UTwToastWidget* AddNewToast(class UClass* ToastWidgetClass, const struct FToastData& ToastData);
};

// Class TwUIFramework.TwToastWidget
// 0x0050 (FullSize[0x02A8] - InheritedSize[0x0258])
class UTwToastWidget : public UTwBaseWidget
{
public:
	float                                              Duration;                                                  // 0x0258(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeDuration;                                              // 0x025C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwUMGOpacityTweener*                        OpacityTweener;                                            // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ToastImage;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      ToastImageBackground;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                      BackgroundImage;                                           // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_USGM[0x10];                                    // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  ToastText;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                                  ToastSubtext;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bFadingAway;                                               // 0x02A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RL1E[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwToastWidget");
		return ptr;
	}



	class UTwToastWidget* STATIC_CreateToast(class UClass* ToastWidgetClass, class APlayerController* Player, class UVerticalBox* VerticalBoxParent, const struct FToastData& ToastData);
};

// Class TwUIFramework.TwToggleButton
// 0x0030 (FullSize[0x0468] - InheritedSize[0x0438])
class UTwToggleButton : public UTwBaseButton
{
public:
	struct FText                                       ToggleOffLabel;                                            // 0x0438(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FText                                       ToggleOnLabel;                                             // 0x0450(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwToggleButton");
		return ptr;
	}



};

// Class TwUIFramework.TwTooltipContainer
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UTwTooltipContainer : public UTwBaseWidget
{
public:
	class UTwWidgetQueue*                              BasicTooltipQueue;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      TooltipWidgetClass;                                        // 0x0260(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwTooltipContainer");
		return ptr;
	}



	void CreateBasicTooltip(const struct FText& Header, const struct FText& Body, const struct FText& InputText, float Duration);
};

// Class TwUIFramework.TwTooltipWidget
// 0x0038 (FullSize[0x0290] - InheritedSize[0x0258])
class UTwTooltipWidget : public UTwBaseWidget
{
public:
	float                                              LifeTime;                                                  // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NNNH[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                            OutAnimation;                                              // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AG3Z[0x8];                                     // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextBlock*                                  HeaderText;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                              BodyText;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                              InputText;                                                 // 0x0288(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwTooltipWidget");
		return ptr;
	}



};

// Class TwUIFramework.TwUIFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTwUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwUIFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsKeyValidForViewPop(const struct FKey& Key);
	bool STATIC_IsKeyValidForUITab(const struct FKey& Key);
	bool STATIC_IsKeyValidForRightNavigation(const struct FKey& Key);
	bool STATIC_IsKeyValidForRightMenu(const struct FKey& Key);
	bool STATIC_IsKeyValidForNavigation(const struct FKey& Key);
	bool STATIC_IsKeyValidForLeftNavigation(const struct FKey& Key);
	bool STATIC_IsKeyValidForLeftMenu(const struct FKey& Key);
	bool STATIC_IsKeyValidForHNavigation(const struct FKey& Key);
	bool STATIC_IsKeyValidForConfirm(const struct FKey& Key);
	bool STATIC_IsConsoleActive(class UObject* WorldContextObject);
};

// Class TwUIFramework.TwUISettings
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UTwUISettings : public UDeveloperSettings
{
public:
	unsigned char                                      MultiOptionModalAssetRef[0x28];                            // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwUISettings");
		return ptr;
	}



};

// Class TwUIFramework.TwUMGAngleTweener
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UTwUMGAngleTweener : public UTwTweener
{
public:
	float                                              From;                                                      // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZH4[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwUMGAngleTweener");
		return ptr;
	}



	float GetCurrentValue();
	class UTwUMGAngleTweener* STATIC_CreateUMGAngleTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, bool AutoStart);
};

// Class TwUIFramework.TwUMGOpacityTweener
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UTwUMGOpacityTweener : public UTwTweener
{
public:
	float                                              From;                                                      // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H71H[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwUMGOpacityTweener");
		return ptr;
	}



	float GetCurrentValue();
	class UTwUMGOpacityTweener* STATIC_CreateUMGOpacityTween(class UWidget* Widget, float FromValue, float ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, class UTwUMGOpacityTweener* ReusableTweener, bool AutoStart);
};

// Class TwUIFramework.TwUMGScaleTweener
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UTwUMGScaleTweener : public UTwTweener
{
public:
	struct FVector2D                                   From;                                                      // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   To;                                                        // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8TEZ[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwUMGScaleTweener");
		return ptr;
	}



	struct FVector2D GetCurrentValue();
	class UTwUMGScaleTweener* STATIC_CreateUMGScaleTween(class UWidget* Widget, const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, bool AutoStart);
};

// Class TwUIFramework.TwVector2DTweener
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UTwVector2DTweener : public UTwTweener
{
public:
	struct FVector2D                                   From;                                                      // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   To;                                                        // 0x0070(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4UDH[0x48];                                    // 0x0078(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwVector2DTweener");
		return ptr;
	}



	struct FVector2D GetCurrentValue();
	class UTwVector2DTweener* STATIC_CreateVector2DTween_BP(const struct FVector2D& FromValue, const struct FVector2D& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, const struct FScriptDelegate& OnTweenFinished, bool AutoStart);
};

// Class TwUIFramework.TwVector3DTweener
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTwVector3DTweener : public UTwTweener
{
public:
	struct FVector                                     From;                                                      // 0x0068(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     To;                                                        // 0x0074(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0XQS[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwVector3DTweener");
		return ptr;
	}



	struct FVector GetCurrentValue();
	class UTwVector3DTweener* STATIC_CreateVector3DTween(const struct FVector& FromValue, const struct FVector& ToValue, float TweenDuration, TEnumAsByte<Engine_EEasingFunc> Easing, bool TweenPingPong, const struct FScriptDelegate& OnTweenStep, bool AutoStart);
};

// Class TwUIFramework.TwViewController
// 0x0058 (FullSize[0x02B0] - InheritedSize[0x0258])
class UTwViewController : public UTwBaseWidget
{
public:
	class UCanvasPanel*                                ViewOverlay;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                ModalOverlay;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                                FooterOverlay;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseView*>                         ViewStack;                                                 // 0x0270(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTwBaseModal*>                        ModalStack;                                                // 0x0280(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ViewFooterClass;                                           // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UPVW[0x18];                                    // 0x0298(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwViewController");
		return ptr;
	}



	class UTwBaseView* PushView(class UClass* ViewClass);
	class UTwBaseModal* PushModalInstance(class UTwBaseModal* NewModal);
	class UTwBaseModal* PushModal(class UClass* ModalClass);
	void PopViewInstance(class UTwBaseView* ViewToPop);
	void PopViewClass(class UClass* ModalClass);
	void PopView();
	void PopModal();
	bool IsViewClassOnStack(class UClass* View);
	bool IsModalClassOnStack(class UClass* Modal);
	class UTwBaseView* GetActiveView();
	class UTwBaseModal* GetActiveModal();
};

// Class TwUIFramework.TwViewFooter
// 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
class UTwViewFooter : public UTwBaseWidget
{
public:
	class UTwInputAwareRichTextBlock*                  WidgetControlsText;                                        // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlock*                  ViewControlsText;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YRFJ[0x8];                                     // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ViewText;                                                  // 0x0270(0x0018) (Protected, NativeAccessSpecifierProtected)
	struct FText                                       WidgetText;                                                // 0x0288(0x0018) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwUIFramework.TwViewFooter");
		return ptr;
	}



	void OnUserInputDeviceChanged(TwUIFramework_EUserInputDevice Device);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
