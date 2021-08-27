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

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.ReceiveBeginPlay
struct ACutSceneLocation_BP_C_ReceiveBeginPlay_Params
{
};

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.BindObjectiveStarted
struct ACutSceneLocation_BP_C_BindObjectiveStarted_Params
{
};

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.GetObjectiveManager
struct ACutSceneLocation_BP_C_GetObjectiveManager_Params
{
};

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.StateChanged
struct ACutSceneLocation_BP_C_StateChanged_Params
{
	class UME_PlayerObjective*                         PlayerObjective;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Maneater_EObjectiveState                           NewState;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.FirstTimeCheck
struct ACutSceneLocation_BP_C_FirstTimeCheck_Params
{
};

// Function CutSceneLocation_BP.CutSceneLocation_BP_C.ExecuteUbergraph_CutSceneLocation_BP
struct ACutSceneLocation_BP_C_ExecuteUbergraph_CutSceneLocation_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
