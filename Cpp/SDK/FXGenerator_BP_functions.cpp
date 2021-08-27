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

// Function FXGenerator_BP.FXGenerator_BP_C.TurnSpawnedLightsOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::TurnSpawnedLightsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.TurnSpawnedLightsOn");

	AFXGenerator_BP_C_TurnSpawnedLightsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.TurnSpawnedLightsOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::TurnSpawnedLightsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.TurnSpawnedLightsOff");

	AFXGenerator_BP_C_TurnSpawnedLightsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.Manually Destroy FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::Manually_Destroy_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.Manually Destroy FX");

	AFXGenerator_BP_C_Manually_Destroy_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.Generate FX
// (Public, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::Generate_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.Generate FX");

	AFXGenerator_BP_C_Generate_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.SpawnFXAtLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         FX_Information                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                  StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   CustomTag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DrawDistiance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFXGenerator_BP_C::SpawnFXAtLocation(class UParticleSystem* FX_Information, const struct FTransform& Transform, class AActor* StaticMesh, const struct FName& CustomTag, const struct FName& SocketName, float DrawDistiance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.SpawnFXAtLocation");

	AFXGenerator_BP_C_SpawnFXAtLocation_Params params;
	params.FX_Information = FX_Information;
	params.Transform = Transform;
	params.StaticMesh = StaticMesh;
	params.CustomTag = CustomTag;
	params.SocketName = SocketName;
	params.DrawDistiance = DrawDistiance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.Get Socket Location And Call Spawn Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::Get_Socket_Location_And_Call_Spawn_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.Get Socket Location And Call Spawn Lights");

	AFXGenerator_BP_C_Get_Socket_Location_And_Call_Spawn_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.CreateFXInformation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::CreateFXInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.CreateFXInformation");

	AFXGenerator_BP_C_CreateFXInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.ParseMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::ParseMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.ParseMeshes");

	AFXGenerator_BP_C_ParseMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FXGenerator_BP.FXGenerator_BP_C.SetWorldMeshArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AFXGenerator_BP_C::SetWorldMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function FXGenerator_BP.FXGenerator_BP_C.SetWorldMeshArray");

	AFXGenerator_BP_C_SetWorldMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
