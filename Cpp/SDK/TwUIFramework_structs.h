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
// Enums
//---------------------------------------------------------------------------

// Enum TwUIFramework.EFlipbookPlayMode
enum class TwUIFramework_EFlipbookPlayMode : uint8_t
{
	EFlipbookPlayMode__ONE_SHOT    = 0,
	EFlipbookPlayMode__LOOP        = 1,
	EFlipbookPlayMode__STOP        = 2,
	EFlipbookPlayMode__PING_PONG   = 3,
	EFlipbookPlayMode__PING_PONG_FORWARD = 4,
	EFlipbookPlayMode__PING_PONG_BACKWARD = 5,
	EFlipbookPlayMode__EFlipbookPlayMode_MAX = 6,

};

// Enum TwUIFramework.EInputPlatform
enum class TwUIFramework_EInputPlatform : uint8_t
{
	EInputPlatform__Windows        = 0,
	EInputPlatform__XboxOne        = 1,
	EInputPlatform__Playstation4   = 2,
	EInputPlatform__Switch         = 3,
	EInputPlatform__Playstation5   = 4,
	EInputPlatform__XboxSeriesX    = 5,
	EInputPlatform__Unknown        = 6,
	EInputPlatform__EInputPlatform_MAX = 7,

};

// Enum TwUIFramework.ETweenPlayState
enum class TwUIFramework_ETweenPlayState : uint8_t
{
	ETweenPlayState__READY         = 0,
	ETweenPlayState__PLAYING_FORWARD = 1,
	ETweenPlayState__PLAYING_REVERSE = 2,
	ETweenPlayState__PAUSED        = 3,
	ETweenPlayState__DONE          = 4,
	ETweenPlayState__ETweenPlayState_MAX = 5,

};

// Enum TwUIFramework.EUserInputDevice
enum class TwUIFramework_EUserInputDevice : uint8_t
{
	EUserInputDevice__KEYBOARD_MOUSE = 0,
	EUserInputDevice__GAMEPAD      = 1,
	EUserInputDevice__EUserInputDevice_MAX = 2,

};

// Enum TwUIFramework.ETweenTarget
enum class TwUIFramework_ETweenTarget : uint8_t
{
	ETweenTarget__BackImage        = 0,
	ETweenTarget__MidImage         = 1,
	ETweenTarget__TopCanvas        = 2,
	ETweenTarget__IconImage        = 3,
	ETweenTarget__ETweenTarget_MAX = 4,

};

// Enum TwUIFramework.EAnimButtonState
enum class TwUIFramework_EAnimButtonState : uint8_t
{
	EAnimButtonState__DEFAULT      = 0,
	EAnimButtonState__HOVERED      = 1,
	EAnimButtonState__SELECTED     = 2,
	EAnimButtonState__EAnimButtonState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TwUIFramework.AnimTweenTargetData
// 0x0010
struct FAnimTweenTargetData
{
	struct FVector2D                                   Scale;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Angle;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Opacity;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TwUIFramework.TweenTargetDataMap
// 0x0058
struct FTweenTargetDataMap
{
	TMap<TwUIFramework_ETweenTarget, struct FAnimTweenTargetData> Data;                                                      // 0x0000(0x0050) (Edit, NativeAccessSpecifierPublic)
	float                                              TweenTime;                                                 // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HR8B[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct TwUIFramework.TwMenuData
// 0x0040
struct FTwMenuData
{
	class UClass*                                      Panel;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MenuBarItem;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                     // 0x0010(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       LookupName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnablePlatformSensitive;                                   // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TwUIFramework_EInputPlatform                       TargetPlatform;                                            // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableInputDeviceSensitive;                                // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TwUIFramework_EUserInputDevice                     TargetInputDevice;                                         // 0x003B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OML5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct TwUIFramework.PanelLifetimeResponder
// 0x0010
struct FPanelLifetimeResponder
{
	unsigned char                                      UnknownData_790T[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct TwUIFramework.ViewPoppingResponder
// 0x0010
struct FViewPoppingResponder
{
	unsigned char                                      UnknownData_9840[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct TwUIFramework.RadioWidgetData
// 0x0018
struct FRadioWidgetData
{
	struct FText                                       Label;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct TwUIFramework.RadioWidgetEntry
// 0x0020
struct FRadioWidgetEntry
{
	struct FRadioWidgetData                            Data;                                                      // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	class UTwBaseButton*                               Button;                                                    // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TwUIFramework.TwPlatformIconRow
// 0x0050 (0x0058 - 0x0008)
struct FTwPlatformIconRow : public FTableRowBase
{
	TMap<TwUIFramework_EInputPlatform, struct FSlateBrush> Icons;                                                     // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct TwUIFramework.ToastData
// 0x0070
struct FToastData
{
	float                                              Duration;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeDuration;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ToastText;                                                 // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ToastSubtext;                                              // 0x0020(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      ToastTexture[0x28];                                        // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FLinearColor                                BackgroundColor;                                           // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TwUIFramework.AnimTweenGroup
// 0x0010
struct FAnimTweenGroup
{
	TArray<class UTwTweener*>                          Tweens;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
