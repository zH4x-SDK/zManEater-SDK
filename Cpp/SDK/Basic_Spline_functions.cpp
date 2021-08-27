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

// Function Basic_Spline.Basic_Spline_C.TurnSpawnedLightsOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::TurnSpawnedLightsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.TurnSpawnedLightsOff");

	ABasic_Spline_C_TurnSpawnedLightsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.TurnSpawnedLightsOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::TurnSpawnedLightsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.TurnSpawnedLightsOn");

	ABasic_Spline_C_TurnSpawnedLightsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.ManualDestroyLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::ManualDestroyLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.ManualDestroyLights");

	ABasic_Spline_C_ManualDestroyLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.GenerateLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::GenerateLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.GenerateLights");

	ABasic_Spline_C_GenerateLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.SpawnLightAtLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  LightInformation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                  StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   CustomTag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasic_Spline_C::SpawnLightAtLocation(class UClass* LightInformation, const struct FTransform& Transform, class AActor* StaticMesh, const struct FName& CustomTag, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.SpawnLightAtLocation");

	ABasic_Spline_C_SpawnLightAtLocation_Params params;
	params.LightInformation = LightInformation;
	params.Transform = Transform;
	params.StaticMesh = StaticMesh;
	params.CustomTag = CustomTag;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.DestroyLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::DestroyLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.DestroyLights");

	ABasic_Spline_C_DestroyLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.UpdateMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MeshIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USplineMeshComponent*    CurrentMesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasic_Spline_C::UpdateMesh(int MeshIndex, class USplineMeshComponent* CurrentMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.UpdateMesh");

	ABasic_Spline_C_UpdateMesh_Params params;
	params.MeshIndex = MeshIndex;
	params.CurrentMesh = CurrentMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.UserConstructionScript");

	ABasic_Spline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void ABasic_Spline_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.CustomEvent_1");

	ABasic_Spline_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Basic_Spline.Basic_Spline_C.ExecuteUbergraph_Basic_Spline
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasic_Spline_C::ExecuteUbergraph_Basic_Spline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Spline.Basic_Spline_C.ExecuteUbergraph_Basic_Spline");

	ABasic_Spline_C_ExecuteUbergraph_Basic_Spline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
