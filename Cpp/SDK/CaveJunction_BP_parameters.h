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

// Function CaveJunction_BP.CaveJunction_BP_C.DestroyLocalCaveLights
struct ACaveJunction_BP_C_DestroyLocalCaveLights_Params
{
};

// Function CaveJunction_BP.CaveJunction_BP_C.SetLightSettings
struct ACaveJunction_BP_C_SetLightSettings_Params
{
	class ALG_Pointlight_Base_C*                       LightActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnedLightInformation_ST                 SpawnedLightInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaveJunction_BP.CaveJunction_BP_C.DestroyAllCaveLights
struct ACaveJunction_BP_C_DestroyAllCaveLights_Params
{
};

// Function CaveJunction_BP.CaveJunction_BP_C.GenerateCaveLights
struct ACaveJunction_BP_C_GenerateCaveLights_Params
{
	class AGenerateDetail_BP_C*                        GenerateDetailBP;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaveJunction_BP.CaveJunction_BP_C.SpawnLights
struct ACaveJunction_BP_C_SpawnLights_Params
{
	struct FDetailMesh_Info_ST                         DetailMeshInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function CaveJunction_BP.CaveJunction_BP_C.ApplyTransforms
struct ACaveJunction_BP_C_ApplyTransforms_Params
{
	struct FDetailMesh_Info_ST                         DetailMesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transforms;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FDetailMesh_Info_ST                         NewDetailMesh;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaveJunction_BP.CaveJunction_BP_C.GenerateRandomAngle
struct ACaveJunction_BP_C_GenerateRandomAngle_Params
{
	class AGenerateDetail_BP_C*                        Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotator;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CaveJunction_BP.CaveJunction_BP_C.ProcessTraceInfo
struct ACaveJunction_BP_C_ProcessTraceInfo_Params
{
	struct FName                                       InstanceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDetailMesh_Info_ST                         DetailMeshInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transforms;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function CaveJunction_BP.CaveJunction_BP_C.GetGenerateDetailPoint_RandMesh
struct ACaveJunction_BP_C_GetGenerateDetailPoint_RandMesh_Params
{
	class AGenerateDetail_BP_C*                        Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowNameUsed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDetailMesh_Info_ST                         Output;                                                    // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaveJunction_BP.CaveJunction_BP_C.GenerateSeed
struct ACaveJunction_BP_C_GenerateSeed_Params
{
};

// Function CaveJunction_BP.CaveJunction_BP_C.GenerateISM
struct ACaveJunction_BP_C_GenerateISM_Params
{
	bool                                               DestroyLightsFirst;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FoliageOnly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LightsOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CaveJunction_BP.CaveJunction_BP_C.Hide Junction Caps
struct ACaveJunction_BP_C_Hide_Junction_Caps_Params
{
};

// Function CaveJunction_BP.CaveJunction_BP_C.HideCapsPerSide
struct ACaveJunction_BP_C_HideCapsPerSide_Params
{
	class UStaticMeshComponent*                        Cap_1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cap_2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cap_3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CaveJunction_BP.CaveJunction_BP_C.GenerateTracePOints
struct ACaveJunction_BP_C_GenerateTracePOints_Params
{
	class AGenerateDetail_BP_C*                        Point;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValid_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transforms;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function CaveJunction_BP.CaveJunction_BP_C.UserConstructionScript
struct ACaveJunction_BP_C_UserConstructionScript_Params
{
};

// Function CaveJunction_BP.CaveJunction_BP_C. Preview Foliage
struct ACaveJunction_BP_C__Preview_Foliage_Params
{
};

// Function CaveJunction_BP.CaveJunction_BP_C.ExecuteUbergraph_CaveJunction_BP
struct ACaveJunction_BP_C_ExecuteUbergraph_CaveJunction_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
