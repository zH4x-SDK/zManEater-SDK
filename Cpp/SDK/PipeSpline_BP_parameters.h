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

// Function PipeSpline_BP.PipeSpline_BP_C.DestroyLights
struct APipeSpline_BP_C_DestroyLights_Params
{
};

// Function PipeSpline_BP.PipeSpline_BP_C.GenerateSeed
struct APipeSpline_BP_C_GenerateSeed_Params
{
};

// Function PipeSpline_BP.PipeSpline_BP_C.GenerateDetailMesh
struct APipeSpline_BP_C_GenerateDetailMesh_Params
{
};

// Function PipeSpline_BP.PipeSpline_BP_C.UpdateMesh
struct APipeSpline_BP_C_UpdateMesh_Params
{
	int                                                MeshIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                        CurrentMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PipeSpline_BP.PipeSpline_BP_C.UserConstructionScript
struct APipeSpline_BP_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
