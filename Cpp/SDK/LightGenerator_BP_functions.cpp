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

// Function LightGenerator_BP.LightGenerator_BP_C.CleanupLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::CleanupLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.CleanupLights");

	ALightGenerator_BP_C_CleanupLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.TurnSpawnedLightsOn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::TurnSpawnedLightsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.TurnSpawnedLightsOn");

	ALightGenerator_BP_C_TurnSpawnedLightsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.TurnSpawnedLightsOff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::TurnSpawnedLightsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.TurnSpawnedLightsOff");

	ALightGenerator_BP_C_TurnSpawnedLightsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.Manually Destroy Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::Manually_Destroy_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.Manually Destroy Lights");

	ALightGenerator_BP_C_Manually_Destroy_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.Generate Lights
// (Public, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::Generate_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.Generate Lights");

	ALightGenerator_BP_C_Generate_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.SpawnLightAtLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Light_Information              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class AActor*                  StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   CustomTag                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALightGenerator_BP_C::SpawnLightAtLocation(class UClass* Light_Information, const struct FTransform& Transform, class AActor* StaticMesh, const struct FName& CustomTag, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.SpawnLightAtLocation");

	ALightGenerator_BP_C_SpawnLightAtLocation_Params params;
	params.Light_Information = Light_Information;
	params.Transform = Transform;
	params.StaticMesh = StaticMesh;
	params.CustomTag = CustomTag;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.Get Socket Location And Call Spawn Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::Get_Socket_Location_And_Call_Spawn_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.Get Socket Location And Call Spawn Lights");

	ALightGenerator_BP_C_Get_Socket_Location_And_Call_Spawn_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.CreateLightInformation
// (Public, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::CreateLightInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.CreateLightInformation");

	ALightGenerator_BP_C_CreateLightInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.ParseMeshes
// (Public, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::ParseMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.ParseMeshes");

	ALightGenerator_BP_C_ParseMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightGenerator_BP.LightGenerator_BP_C.SetWorldMeshArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ALightGenerator_BP_C::SetWorldMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightGenerator_BP.LightGenerator_BP_C.SetWorldMeshArray");

	ALightGenerator_BP_C_SetWorldMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
