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

// Function CaveSpline_BP.CaveSpline_BP_C.GenerateRandomMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACaveSpline_BP_C::GenerateRandomMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.GenerateRandomMesh");

	ACaveSpline_BP_C_GenerateRandomMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveSpline_BP.CaveSpline_BP_C.GenerateSeed
// (Public, BlueprintCallable, BlueprintEvent)
void ACaveSpline_BP_C::GenerateSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.GenerateSeed");

	ACaveSpline_BP_C_GenerateSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveSpline_BP.CaveSpline_BP_C.GenerateTracePOints
// (Public, BlueprintCallable, BlueprintEvent)
void ACaveSpline_BP_C::GenerateTracePOints()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.GenerateTracePOints");

	ACaveSpline_BP_C_GenerateTracePOints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveSpline_BP.CaveSpline_BP_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MeshIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*    CurrentMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveSpline_BP_C::UpdateMesh(int MeshIndex, class USplineMeshComponent* CurrentMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.UpdateMesh");

	ACaveSpline_BP_C_UpdateMesh_Params params;
	params.MeshIndex = MeshIndex;
	params.CurrentMesh = CurrentMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveSpline_BP.CaveSpline_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACaveSpline_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.UserConstructionScript");

	ACaveSpline_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveSpline_BP.CaveSpline_BP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void ACaveSpline_BP_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.CustomEvent_1");

	ACaveSpline_BP_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveSpline_BP.CaveSpline_BP_C.ExecuteUbergraph_CaveSpline_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveSpline_BP_C::ExecuteUbergraph_CaveSpline_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveSpline_BP.CaveSpline_BP_C.ExecuteUbergraph_CaveSpline_BP");

	ACaveSpline_BP_C_ExecuteUbergraph_CaveSpline_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
