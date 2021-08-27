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

// Function TwAIFramework.TwAIHelperLibrary.InvalidRotation
struct UTwAIHelperLibrary_InvalidRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIHelperLibrary.InvalidOrientation
struct UTwAIHelperLibrary_InvalidOrientation_Params
{
	struct FQuat                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIHelperLibrary.InvalidLocation
struct UTwAIHelperLibrary_InvalidLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIHelperLibrary.InvalidDirection
struct UTwAIHelperLibrary_InvalidDirection_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolableInterface.SetAIPatrolPlotter
struct UTwAIPatrolableInterface_SetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          InPatrolPlotter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolableInterface.GetAIPatrolPlotter
struct UTwAIPatrolableInterface_GetAIPatrolPlotter_Params
{
	class ATwAIPatrolPlotter*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolPlotter.IsClosedLoopPatrol
struct ATwAIPatrolPlotter_IsClosedLoopPatrol_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolSplineComponent
struct ATwAIPatrolPlotter_GetPatrolSplineComponent_Params
{
	class UTwAIPatrolSplineComponent*                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolLocationAtPoint
struct ATwAIPatrolPlotter_GetPatrolLocationAtPoint_Params
{
	int                                                PointIdx;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolPlotter.GetNearestPatrolPointToLoc
struct ATwAIPatrolPlotter_GetNearestPatrolPointToLoc_Params
{
	struct FVector                                     TestLocation;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointIdx;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TwAIFramework.TwAIPatrolPlotter.GetMaxDefinedPatrolPoints
struct ATwAIPatrolPlotter_GetMaxDefinedPatrolPoints_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
