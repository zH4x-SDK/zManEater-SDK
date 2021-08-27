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

// Function TwAIFramework.TwAIHelperLibrary.InvalidRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UTwAIHelperLibrary::STATIC_InvalidRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIHelperLibrary.InvalidRotation");

	UTwAIHelperLibrary_InvalidRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIHelperLibrary.InvalidOrientation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FQuat UTwAIHelperLibrary::STATIC_InvalidOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIHelperLibrary.InvalidOrientation");

	UTwAIHelperLibrary_InvalidOrientation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIHelperLibrary.InvalidLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTwAIHelperLibrary::STATIC_InvalidLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIHelperLibrary.InvalidLocation");

	UTwAIHelperLibrary_InvalidLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIHelperLibrary.InvalidDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UTwAIHelperLibrary::STATIC_InvalidDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIHelperLibrary.InvalidDirection");

	UTwAIHelperLibrary_InvalidDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIPatrolableInterface.SetAIPatrolPlotter
// (Native, Public)
// Parameters:
// class ATwAIPatrolPlotter*      InPatrolPlotter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTwAIPatrolableInterface::SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolableInterface.SetAIPatrolPlotter");

	UTwAIPatrolableInterface_SetAIPatrolPlotter_Params params;
	params.InPatrolPlotter = InPatrolPlotter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwAIFramework.TwAIPatrolableInterface.GetAIPatrolPlotter
// (Native, Public, Const)
// Parameters:
// class ATwAIPatrolPlotter*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ATwAIPatrolPlotter* UTwAIPatrolableInterface::GetAIPatrolPlotter()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolableInterface.GetAIPatrolPlotter");

	UTwAIPatrolableInterface_GetAIPatrolPlotter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIPatrolPlotter.IsClosedLoopPatrol
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ATwAIPatrolPlotter::IsClosedLoopPatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolPlotter.IsClosedLoopPatrol");

	ATwAIPatrolPlotter_IsClosedLoopPatrol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTwAIPatrolSplineComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTwAIPatrolSplineComponent* ATwAIPatrolPlotter::GetPatrolSplineComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolPlotter.GetPatrolSplineComponent");

	ATwAIPatrolPlotter_GetPatrolSplineComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIPatrolPlotter.GetPatrolLocationAtPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIdx                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ATwAIPatrolPlotter::GetPatrolLocationAtPoint(int PointIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolPlotter.GetPatrolLocationAtPoint");

	ATwAIPatrolPlotter_GetPatrolLocationAtPoint_Params params;
	params.PointIdx = PointIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIPatrolPlotter.GetNearestPatrolPointToLoc
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 TestLocation                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PointIdx                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector ATwAIPatrolPlotter::GetNearestPatrolPointToLoc(const struct FVector& TestLocation, int* PointIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolPlotter.GetNearestPatrolPointToLoc");

	ATwAIPatrolPlotter_GetNearestPatrolPointToLoc_Params params;
	params.TestLocation = TestLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PointIdx != nullptr)
		*PointIdx = params.PointIdx;


	return params.ReturnValue;
}


// Function TwAIFramework.TwAIPatrolPlotter.GetMaxDefinedPatrolPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int ATwAIPatrolPlotter::GetMaxDefinedPatrolPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwAIFramework.TwAIPatrolPlotter.GetMaxDefinedPatrolPoints");

	ATwAIPatrolPlotter_GetMaxDefinedPatrolPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
