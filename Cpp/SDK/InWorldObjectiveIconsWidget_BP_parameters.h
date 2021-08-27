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

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.show
struct UInWorldObjectiveIconsWidget_BP_C_show_Params
{
	bool                                               show;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IconIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.SetOwningActor
struct UInWorldObjectiveIconsWidget_BP_C_SetOwningActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.SetDistanceText
struct UInWorldObjectiveIconsWidget_BP_C_SetDistanceText_Params
{
	struct FText                                       Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.Construct
struct UInWorldObjectiveIconsWidget_BP_C_Construct_Params
{
};

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.Tick
struct UInWorldObjectiveIconsWidget_BP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.ExecuteUbergraph_InWorldObjectiveIconsWidget_BP
struct UInWorldObjectiveIconsWidget_BP_C_ExecuteUbergraph_InWorldObjectiveIconsWidget_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
