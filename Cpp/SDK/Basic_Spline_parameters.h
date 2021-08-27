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

// Function Basic_Spline.Basic_Spline_C.TurnSpawnedLightsOff
struct ABasic_Spline_C_TurnSpawnedLightsOff_Params
{
};

// Function Basic_Spline.Basic_Spline_C.TurnSpawnedLightsOn
struct ABasic_Spline_C_TurnSpawnedLightsOn_Params
{
};

// Function Basic_Spline.Basic_Spline_C.ManualDestroyLights
struct ABasic_Spline_C_ManualDestroyLights_Params
{
};

// Function Basic_Spline.Basic_Spline_C.GenerateLights
struct ABasic_Spline_C_GenerateLights_Params
{
};

// Function Basic_Spline.Basic_Spline_C.SpawnLightAtLocation
struct ABasic_Spline_C_SpawnLightAtLocation_Params
{
	class UClass*                                      LightInformation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class AActor*                                      StaticMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CustomTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Basic_Spline.Basic_Spline_C.DestroyLights
struct ABasic_Spline_C_DestroyLights_Params
{
};

// Function Basic_Spline.Basic_Spline_C.UpdateMesh
struct ABasic_Spline_C_UpdateMesh_Params
{
	int                                                MeshIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                        CurrentMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Basic_Spline.Basic_Spline_C.UserConstructionScript
struct ABasic_Spline_C_UserConstructionScript_Params
{
};

// Function Basic_Spline.Basic_Spline_C.CustomEvent_1
struct ABasic_Spline_C_CustomEvent_1_Params
{
};

// Function Basic_Spline.Basic_Spline_C.ExecuteUbergraph_Basic_Spline
struct ABasic_Spline_C_ExecuteUbergraph_Basic_Spline_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
