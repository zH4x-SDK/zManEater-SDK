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

// Enum TwAIFramework.EDistanceTypes
enum class TwAIFramework_EDistanceTypes : uint8_t
{
	EDistanceTypes__Distance3D     = 0,
	EDistanceTypes__Distance2D     = 1,
	EDistanceTypes__DistanceZ      = 2,
	EDistanceTypes__DistanceAbsoluteZ = 3,
	EDistanceTypes__EDistanceTypes_MAX = 4,

};

// Enum TwAIFramework.EAIFocusPriority_BP
enum class TwAIFramework_EAIFocusPriority_BP : uint8_t
{
	EAIFocusPriority_BP__EFP_None  = 0,
	EAIFocusPriority_BP__EFP_Move  = 1,
	EAIFocusPriority_BP__EFP_Gameplay = 2,
	EAIFocusPriority_BP__EFP_MAX   = 3,

};

// Enum TwAIFramework.EPatrolType
enum class TwAIFramework_EPatrolType : uint8_t
{
	EPatrolType__PT_SplineMovement = 0,
	EPatrolType__PT_DefinedPath    = 1,
	EPatrolType__PT_Circular       = 2,
	EPatrolType__PT_MAX            = 3,

};

// Enum TwAIFramework.EFoVType
enum class TwAIFramework_EFoVType : uint8_t
{
	EFoVType__FoV3D                = 0,
	EFoVType__FoV2D                = 1,
	EFoVType__EFoVType_MAX         = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TwAIFramework.RandomMemory
// 0x0008
struct FRandomMemory
{
	float                                              CachedDiceRoll;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastDiceRollTimestamp;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
