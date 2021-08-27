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

// Enum ManeaterUI.EAgeTierDiamondState
enum class ManeaterUI_EAgeTierDiamondState : uint8_t
{
	EDiamondState_Unfilled         = 0,
	EDiamondState_New              = 1,
	EDiamondState_Filled           = 2,
	EDiamondState_Hidden           = 3,
	EDiamondState_MAX              = 4,

};

// Enum ManeaterUI.ECompassDirection
enum class ManeaterUI_ECompassDirection : uint8_t
{
	ECompassDirection__INVALID     = 0,
	ECompassDirection__NORTH       = 1,
	ECompassDirection__SOUTH       = 2,
	ECompassDirection__EAST        = 3,
	ECompassDirection__WEST        = 4,
	ECompassDirection__ECompassDirection_MAX = 5,

};

// Enum ManeaterUI.EPSPlatform
enum class ManeaterUI_EPSPlatform : uint8_t
{
	PS4                            = 0,
	PS5                            = 1,
	EPSPlatform_MAX                = 2,

};

// Enum ManeaterUI.EXboxPlatform
enum class ManeaterUI_EXboxPlatform : uint8_t
{
	XBONE                          = 0,
	XSX                            = 1,
	EXboxPlatform_MAX              = 2,

};

// Enum ManeaterUI.EPlatformFamily
enum class ManeaterUI_EPlatformFamily : uint8_t
{
	XBOX                           = 0,
	PLAYSTATION                    = 1,
	EPlatformFamily_MAX            = 2,

};

// Enum ManeaterUI.EDTWidgetType
enum class ManeaterUI_EDTWidgetType : uint8_t
{
	EDTWidgetType__Damage          = 0,
	EDTWidgetType__Healing         = 1,
	EDTWidgetType__Nutrient_Protein = 2,
	EDTWidgetType__Nutrient_Fat    = 3,
	EDTWidgetType__Nutrient_Mineral = 4,
	EDTWidgetType__CriticalDamage  = 5,
	EDTWidgetType__Evade           = 6,
	EDTWidgetType__EDTWidgetType_MAX = 7,

};

// Enum ManeaterUI.EEnemyWidgetType
enum class ManeaterUI_EEnemyWidgetType : uint8_t
{
	EEnemyWidgetType__HUMAN        = 0,
	EEnemyWidgetType__BOAT         = 1,
	EEnemyWidgetType__SCHOOL       = 2,
	EEnemyWidgetType__WILDLIFE     = 3,
	EEnemyWidgetType__OTHER        = 4,
	EEnemyWidgetType__EEnemyWidgetType_MAX = 5,

};

// Enum ManeaterUI.EMenuPanelIndex
enum class ManeaterUI_EMenuPanelIndex : uint8_t
{
	MAP_INDEX                      = 0,
	LOG_INDEX                      = 1,
	INFAMY_INDEX                   = 2,
	INVENTORY_INDEX                = 3,
	EMenuPanelIndex_MAX            = 4,

};

// Enum ManeaterUI.ELevelProgressWidgetState
enum class ManeaterUI_ELevelProgressWidgetState : uint8_t
{
	ELevelProgressWidgetState__HIDDEN = 0,
	ELevelProgressWidgetState__FADE_IN = 1,
	ELevelProgressWidgetState__IDLE = 2,
	ELevelProgressWidgetState__FADE_OUT = 3,
	ELevelProgressWidgetState__ELevelProgressWidgetState_MAX = 4,

};

// Enum ManeaterUI.EMarkerType
enum class ManeaterUI_EMarkerType : uint8_t
{
	EMarkerType__None              = 0,
	EMarkerType__Player            = 1,
	EMarkerType__CustomWaypoint    = 2,
	EMarkerType__Landmark          = 3,
	EMarkerType__NutrientCache     = 4,
	EMarkerType__Terrorize         = 5,
	EMarkerType__PopulationControl = 6,
	EMarkerType__Hunter            = 7,
	EMarkerType__HunterLeader      = 8,
	EMarkerType__ApexPredator      = 9,
	EMarkerType__Boss              = 10,
	EMarkerType__Grotto            = 11,
	EMarkerType__Pete              = 12,
	EMarkerType__Hunt              = 13,
	EMarkerType__Undiscovered      = 14,
	EMarkerType__Collectable       = 15,
	EMarkerType__Landmark_Completed = 16,
	EMarkerType__NutrientCache_Completed = 17,
	EMarkerType__Terrorize_Completed = 18,
	EMarkerType__PopulationControl_Completed = 19,
	EMarkerType__ApexPredator_Completed = 20,
	EMarkerType__Hunt_Completed    = 21,
	EMarkerType__Collectable_Completed = 22,
	EMarkerType__Gates             = 23,
	EMarkerType__Grates            = 24,
	EMarkerType__Breaches          = 25,
	EMarkerType__Gates_Completed   = 26,
	EMarkerType__Grates_Completed  = 27,
	EMarkerType__Breaches_Completed = 28,
	EMarkerType__StoryEvent        = 29,
	EMarkerType__StoryEvent_Completed = 30,
	EMarkerType__EMarkerType_MAX   = 31,

};

// Enum ManeaterUI.EStatusChangeType
enum class ManeaterUI_EStatusChangeType : uint8_t
{
	EStatusChangeType__Updated     = 0,
	EStatusChangeType__Completed   = 1,
	EStatusChangeType__Untracked   = 2,
	EStatusChangeType__EStatusChangeType_MAX = 3,

};

// Enum ManeaterUI.EAbilitySlot
enum class ManeaterUI_EAbilitySlot : uint8_t
{
	EAbilitySlot__Top              = 0,
	EAbilitySlot__Right            = 1,
	EAbilitySlot__Left             = 2,
	EAbilitySlot__Bottom           = 3,
	EAbilitySlot__EAbilitySlot_MAX = 4,

};

// Enum ManeaterUI.ENutrientWidgetState
enum class ManeaterUI_ENutrientWidgetState : uint8_t
{
	ENutrientWidgetState__HIDDEN   = 0,
	ENutrientWidgetState__FADE_IN  = 1,
	ENutrientWidgetState__IDLE     = 2,
	ENutrientWidgetState__FADE_OUT = 3,
	ENutrientWidgetState__ENutrientWidgetState_MAX = 4,

};

// Enum ManeaterUI.ETutObjectiveStatus
enum class ManeaterUI_ETutObjectiveStatus : uint8_t
{
	ETutObjectiveStatus__DEFAULT   = 0,
	ETutObjectiveStatus__ACTIVE    = 1,
	ETutObjectiveStatus__COMPLETE  = 2,
	ETutObjectiveStatus__ETutObjectiveStatus_MAX = 3,

};

// Enum ManeaterUI.ETutorialPopupState
enum class ManeaterUI_ETutorialPopupState : uint8_t
{
	TUT_STATE_OFF                  = 0,
	TUT_STATE_NUTRIENTS            = 1,
	TUT_STATE_EVOLVE               = 2,
	TUT_STATE_MAX                  = 3,

};

// Enum ManeaterUI.EMarkerCompletedFilter
enum class ManeaterUI_EMarkerCompletedFilter : uint8_t
{
	EMarkerCompletedFilter__CompletedOnly = 0,
	EMarkerCompletedFilter__NonCompletedOnly = 1,
	EMarkerCompletedFilter__EMarkerCompletedFilter_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ManeaterUI.CompassDirection
// 0x0028
struct FCompassDirection
{
	class UCompassMarkerWidget*                        Widget;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DefaultPos;                                                // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ManeaterUI_ECompassDirection                       Direction;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LYID[0x13];                                    // 0x0015(0x0013) MISSED OFFSET (PADDING)

};

// ScriptStruct ManeaterUI.RegionToastData
// 0x0030
struct FRegionToastData
{
	float                                              Duration;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Maneater_EWorldRegion                              Region;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9REH[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RegionName;                                                // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RegionImage;                                               // 0x0020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFirstTime;                                                // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NB9[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RegionProgress;                                            // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ManeaterUI.TrackedCompassActor
// 0x0010
struct FTrackedCompassActor
{
	TWeakObjectPtr<class AActor>                       TargetActor;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Texture;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ManeaterUI.MapSettings
// 0x0050
struct FMapSettings
{
	TMap<ManeaterUI_EMarkerType, class UTexture2D*>    IconLibrary;                                               // 0x0000(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct ManeaterUI.MapMarkerData
// 0x0058
struct FMapMarkerData
{
	struct FText                                       MarkerName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	ManeaterUI_EMarkerType                             MarkerType;                                                // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E6RO[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Position;                                                  // 0x001C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3LXY[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      IconOverride[0x28];                                        // 0x002C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct ManeaterUI.RegionData
// 0x00F0
struct FRegionData
{
	Maneater_EWorldRegion                              Region;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5OJT[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       RegionName;                                                // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                                  RegionIcon;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RegionCompletionPercentage;                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LandmarkCompletionPercentage;                              // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       LandmarkProgressText;                                      // 0x0030(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              TerrorizeCompletionPercentage;                             // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PopControlCompletionPercentage;                            // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CacheCompletionPercentage;                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ML9M[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CacheProgressText;                                         // 0x0058(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              ApexCompletionPercentage;                                  // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HuntCompletionPercentage;                                  // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollectionCompletionPercentage;                            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6I9V[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       CollectionProgressText;                                    // 0x0080(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FMapMarkerData>                      MapMarkerData;                                             // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UME_PlayerObjective*>                 PlayerObjectives;                                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLandmarkSubObject>                  Landmarks;                                                 // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AME_Grotto>                   Grotto;                                                    // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionCol2DArray                           CollisionData;                                             // 0x00D0(0x0018) (NativeAccessSpecifierPublic)
	bool                                               bIsRegionPoisoned;                                         // 0x00E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EJPC[0x7];                                     // 0x00E9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct ManeaterUI.ResolutionValue
// 0x0008
struct FResolutionValue
{
	int                                                X;                                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ManeaterUI.TutorialEntry
// 0x00C0
struct FTutorialEntry
{
	unsigned char                                      UnknownData_7ISO[0xC0];                                    // 0x0000(0x00C0) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
