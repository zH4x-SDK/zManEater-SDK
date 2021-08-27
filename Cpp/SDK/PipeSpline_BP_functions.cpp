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

// Function PipeSpline_BP.PipeSpline_BP_C.DestroyLights
// (Public, BlueprintCallable, BlueprintEvent)
void APipeSpline_BP_C::DestroyLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeSpline_BP.PipeSpline_BP_C.DestroyLights");

	APipeSpline_BP_C_DestroyLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PipeSpline_BP.PipeSpline_BP_C.GenerateSeed
// (Public, BlueprintCallable, BlueprintEvent)
void APipeSpline_BP_C::GenerateSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeSpline_BP.PipeSpline_BP_C.GenerateSeed");

	APipeSpline_BP_C_GenerateSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PipeSpline_BP.PipeSpline_BP_C.GenerateDetailMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APipeSpline_BP_C::GenerateDetailMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeSpline_BP.PipeSpline_BP_C.GenerateDetailMesh");

	APipeSpline_BP_C_GenerateDetailMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PipeSpline_BP.PipeSpline_BP_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MeshIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*    CurrentMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APipeSpline_BP_C::UpdateMesh(int MeshIndex, class USplineMeshComponent* CurrentMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeSpline_BP.PipeSpline_BP_C.UpdateMesh");

	APipeSpline_BP_C_UpdateMesh_Params params;
	params.MeshIndex = MeshIndex;
	params.CurrentMesh = CurrentMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PipeSpline_BP.PipeSpline_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APipeSpline_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PipeSpline_BP.PipeSpline_BP_C.UserConstructionScript");

	APipeSpline_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
