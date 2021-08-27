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

// Function FXGenerator_BP.FXGenerator_BP_C.TurnSpawnedLightsOn
struct AFXGenerator_BP_C_TurnSpawnedLightsOn_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.TurnSpawnedLightsOff
struct AFXGenerator_BP_C_TurnSpawnedLightsOff_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.Manually Destroy FX
struct AFXGenerator_BP_C_Manually_Destroy_FX_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.Generate FX
struct AFXGenerator_BP_C_Generate_FX_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.SpawnFXAtLocation
struct AFXGenerator_BP_C_SpawnFXAtLocation_Params
{
	class UParticleSystem*                             FX_Information;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      StaticMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CustomTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrawDistiance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FXGenerator_BP.FXGenerator_BP_C.Get Socket Location And Call Spawn Lights
struct AFXGenerator_BP_C_Get_Socket_Location_And_Call_Spawn_Lights_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.CreateFXInformation
struct AFXGenerator_BP_C_CreateFXInformation_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.ParseMeshes
struct AFXGenerator_BP_C_ParseMeshes_Params
{
};

// Function FXGenerator_BP.FXGenerator_BP_C.SetWorldMeshArray
struct AFXGenerator_BP_C_SetWorldMeshArray_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
