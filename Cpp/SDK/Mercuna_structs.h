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

// Enum Mercuna.EMerOctreeDebugDrawMode
enum class Mercuna_EMerOctreeDebugDrawMode : uint8_t
{
	EMerOctreeDebugDrawMode__DISABLED = 0,
	EMerOctreeDebugDrawMode__UNNAVIGABLE = 1,
	EMerOctreeDebugDrawMode__NAVIGABLE = 2,
	EMerOctreeDebugDrawMode__BOTH  = 3,
	EMerOctreeDebugDrawMode__REACHABLE = 4,
	EMerOctreeDebugDrawMode__PATHFIND = 5,
	EMerOctreeDebugDrawMode__REGION = 6,
	EMerOctreeDebugDrawMode__EMerOctreeDebugDrawMode_MAX = 7,

};

// Enum Mercuna.EMercunaSplineEvent
enum class Mercuna_EMercunaSplineEvent : uint8_t
{
	EMercunaSplineEvent__Ready     = 0,
	EMercunaSplineEvent__Updated   = 1,
	EMercunaSplineEvent__Invalid   = 2,
	EMercunaSplineEvent__EMercunaSplineEvent_MAX = 3,

};

// Enum Mercuna.EMercunaMoveResult
enum class Mercuna_EMercunaMoveResult : uint8_t
{
	EMercunaMoveResult__Success    = 0,
	EMercunaMoveResult__Failed     = 1,
	EMercunaMoveResult__Cancelled  = 2,
	EMercunaMoveResult__Blocked    = 3,
	EMercunaMoveResult__Invalid    = 4,
	EMercunaMoveResult__EMercunaMoveResult_MAX = 5,

};

// Enum Mercuna.EMercunaPathEvent
enum class Mercuna_EMercunaPathEvent : uint8_t
{
	EMercunaPathEvent__Ready       = 0,
	EMercunaPathEvent__Updated     = 1,
	EMercunaPathEvent__Invalid     = 2,
	EMercunaPathEvent__EMercunaPathEvent_MAX = 3,

};

// Enum Mercuna.EMercunaPointDistribution
enum class Mercuna_EMercunaPointDistribution : uint8_t
{
	EMercunaPointDistribution__Uniform = 0,
	EMercunaPointDistribution__Random = 1,
	EMercunaPointDistribution__EMercunaPointDistribution_MAX = 2,

};

// Enum Mercuna.EMercunaMoveGoal
enum class Mercuna_EMercunaMoveGoal : uint8_t
{
	EMercunaMoveGoal__Actor        = 0,
	EMercunaMoveGoal__Vector       = 1,
	EMercunaMoveGoal__None         = 2,
	EMercunaMoveGoal__EMercunaMoveGoal_MAX = 3,

};

// Enum Mercuna.EMercunaLevelOfDetail
enum class Mercuna_EMercunaLevelOfDetail : uint8_t
{
	EMercunaLevelOfDetail__Full    = 0,
	EMercunaLevelOfDetail__Half    = 1,
	EMercunaLevelOfDetail__Quarter = 2,
	EMercunaLevelOfDetail__Eighth  = 3,
	EMercunaLevelOfDetail__Sixteenth = 4,
	EMercunaLevelOfDetail__EMercunaLevelOfDetail_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Mercuna.MercunaNavigationConfiguration
// 0x001C
struct FMercunaNavigationConfiguration
{
	float                                              MaxPitch;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRoll;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MoveOnlyInLookDirection;                                   // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StopAtDestination;                                         // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QX9S[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HeightChangePenalty;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SmoothPaths;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YPEH[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAheadTime;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RollAnticipationTime;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mercuna.MercunaNavUsageTypes
// 0x0004
struct FMercunaNavUsageTypes
{
	unsigned char                                      bUsageType0 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType1 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType2 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType3 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType4 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType5 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType6 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType7 : 1;                                           // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType8 : 1;                                           // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType9 : 1;                                           // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType10 : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType11 : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType12 : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType13 : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType14 : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType15 : 1;                                          // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType16 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType17 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType18 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType19 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType20 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType21 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType22 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType23 : 1;                                          // 0x0002(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType24 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType25 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType26 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType27 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType28 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType29 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType30 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsageType31 : 1;                                          // 0x0003(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mercuna.MercunaPawnUsageFlags
// 0x0008
struct FMercunaPawnUsageFlags
{
	struct FMercunaNavUsageTypes                       RequiredUsageFlags;                                        // 0x0000(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMercunaNavUsageTypes                       AllowedUsageFlags;                                         // 0x0004(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mercuna.MercunaMoveRequest
// 0x0028
struct FMercunaMoveRequest
{
	unsigned char                                      UnknownData_HWC7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      GoalActor;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1C0I[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
