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

// Function LightGenerator_BP.LightGenerator_BP_C.CleanupLights
struct ALightGenerator_BP_C_CleanupLights_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.TurnSpawnedLightsOn
struct ALightGenerator_BP_C_TurnSpawnedLightsOn_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.TurnSpawnedLightsOff
struct ALightGenerator_BP_C_TurnSpawnedLightsOff_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.Manually Destroy Lights
struct ALightGenerator_BP_C_Manually_Destroy_Lights_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.Generate Lights
struct ALightGenerator_BP_C_Generate_Lights_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.SpawnLightAtLocation
struct ALightGenerator_BP_C_SpawnLightAtLocation_Params
{
	class UClass*                                      Light_Information;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      StaticMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CustomTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LightGenerator_BP.LightGenerator_BP_C.Get Socket Location And Call Spawn Lights
struct ALightGenerator_BP_C_Get_Socket_Location_And_Call_Spawn_Lights_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.CreateLightInformation
struct ALightGenerator_BP_C_CreateLightInformation_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.ParseMeshes
struct ALightGenerator_BP_C_ParseMeshes_Params
{
};

// Function LightGenerator_BP.LightGenerator_BP_C.SetWorldMeshArray
struct ALightGenerator_BP_C_SetWorldMeshArray_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
