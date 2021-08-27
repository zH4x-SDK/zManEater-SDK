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

// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UTRT_Turtle_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.AnimGraph");

	UTRT_Turtle_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_ModifyBone_7DC5042D4B035C55C747AC9F78DD98EC
// (BlueprintEvent)
void UTRT_Turtle_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_ModifyBone_7DC5042D4B035C55C747AC9F78DD98EC()
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_ModifyBone_7DC5042D4B035C55C747AC9F78DD98EC");

	UTRT_Turtle_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_ModifyBone_7DC5042D4B035C55C747AC9F78DD98EC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_BlendListByBool_2CDA0B3F4386C9BE3022BE8B00611E04
// (BlueprintEvent)
void UTRT_Turtle_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_BlendListByBool_2CDA0B3F4386C9BE3022BE8B00611E04()
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_BlendListByBool_2CDA0B3F4386C9BE3022BE8B00611E04");

	UTRT_Turtle_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_BlendListByBool_2CDA0B3F4386C9BE3022BE8B00611E04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_TransitionResult_C08CF1B14FAB1C53435AB0BFF76E494E
// (BlueprintEvent)
void UTRT_Turtle_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_TransitionResult_C08CF1B14FAB1C53435AB0BFF76E494E()
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_TransitionResult_C08CF1B14FAB1C53435AB0BFF76E494E");

	UTRT_Turtle_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_TransitionResult_C08CF1B14FAB1C53435AB0BFF76E494E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.AnimNotify_EndHitReactATransition
// (BlueprintCallable, BlueprintEvent)
void UTRT_Turtle_ABP_C::AnimNotify_EndHitReactATransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.AnimNotify_EndHitReactATransition");

	UTRT_Turtle_ABP_C_AnimNotify_EndHitReactATransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.AnimNotify_HitReactAComplete
// (BlueprintCallable, BlueprintEvent)
void UTRT_Turtle_ABP_C::AnimNotify_HitReactAComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.AnimNotify_HitReactAComplete");

	UTRT_Turtle_ABP_C_AnimNotify_HitReactAComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTRT_Turtle_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.BlueprintUpdateAnimation");

	UTRT_Turtle_ABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.ExecuteUbergraph_TRT_Turtle_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTRT_Turtle_ABP_C::ExecuteUbergraph_TRT_Turtle_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TRT_Turtle_ABP.TRT_Turtle_ABP_C.ExecuteUbergraph_TRT_Turtle_ABP");

	UTRT_Turtle_ABP_C_ExecuteUbergraph_TRT_Turtle_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
