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

// Function PipeJunction_BP.PipeJunction_BP_C.DestroySpawnedLights
struct APipeJunction_BP_C_DestroySpawnedLights_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.SpawnLights
struct APipeJunction_BP_C_SpawnLights_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Spawn Instance Static Mesh
struct APipeJunction_BP_C_Spawn_Instance_Static_Mesh_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Parse Detail Meshes Into Instance Groups
struct APipeJunction_BP_C_Parse_Detail_Meshes_Into_Instance_Groups_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Generate Grid Points
struct APipeJunction_BP_C_Generate_Grid_Points_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Set Mesh Bounds
struct APipeJunction_BP_C_Set_Mesh_Bounds_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Create Grid with % Chance
struct APipeJunction_BP_C_Create_Grid_with___Chance_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Remove Vectors Inside No Mesh Zone
struct APipeJunction_BP_C_Remove_Vectors_Inside_No_Mesh_Zone_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.ResetGeneratedMeshes
struct APipeJunction_BP_C_ResetGeneratedMeshes_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.GenerateSeed
struct APipeJunction_BP_C_GenerateSeed_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.ShowMicsMesh
struct APipeJunction_BP_C_ShowMicsMesh_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.GenerateDetailMesh
struct APipeJunction_BP_C_GenerateDetailMesh_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.Hide JunctionCaps
struct APipeJunction_BP_C_Hide_JunctionCaps_Params
{
};

// Function PipeJunction_BP.PipeJunction_BP_C.HideaPipeCapsPerSide
struct APipeJunction_BP_C_HideaPipeCapsPerSide_Params
{
	class UStaticMeshComponent*                        Cap_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cap_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cap_3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Light_1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Light_2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Light_3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DontHaveLights_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SecondarySide_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SecondarySideNumber;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PipeJunction_BP.PipeJunction_BP_C.UserConstructionScript
struct APipeJunction_BP_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
