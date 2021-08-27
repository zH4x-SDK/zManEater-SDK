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

// Function NetSpline_BP.NetSpline_BP_C.MakeRandomLocationArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ANetSpline_BP_C::MakeRandomLocationArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetSpline_BP.NetSpline_BP_C.MakeRandomLocationArray");

	ANetSpline_BP_C_MakeRandomLocationArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetSpline_BP.NetSpline_BP_C.GenerateSeed
// (Public, BlueprintCallable, BlueprintEvent)
void ANetSpline_BP_C::GenerateSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetSpline_BP.NetSpline_BP_C.GenerateSeed");

	ANetSpline_BP_C_GenerateSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetSpline_BP.NetSpline_BP_C.GenerateDetailMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           GenerateAtPoints_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ANetSpline_BP_C::GenerateDetailMesh(bool GenerateAtPoints_)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetSpline_BP.NetSpline_BP_C.GenerateDetailMesh");

	ANetSpline_BP_C_GenerateDetailMesh_Params params;
	params.GenerateAtPoints_ = GenerateAtPoints_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetSpline_BP.NetSpline_BP_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MeshIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*    CurrentMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ANetSpline_BP_C::UpdateMesh(int MeshIndex, class USplineMeshComponent* CurrentMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function NetSpline_BP.NetSpline_BP_C.UpdateMesh");

	ANetSpline_BP_C_UpdateMesh_Params params;
	params.MeshIndex = MeshIndex;
	params.CurrentMesh = CurrentMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NetSpline_BP.NetSpline_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ANetSpline_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetSpline_BP.NetSpline_BP_C.UserConstructionScript");

	ANetSpline_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
