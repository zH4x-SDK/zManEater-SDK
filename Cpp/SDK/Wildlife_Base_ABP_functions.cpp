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

// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UWildlife_Base_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimGraph");

	UWildlife_Base_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_ExtremeLeft
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_Tail_ExtremeLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_ExtremeLeft");

	UWildlife_Base_ABP_C_AnimNotify_Tail_ExtremeLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_ExtremeRight
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_Tail_ExtremeRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_ExtremeRight");

	UWildlife_Base_ABP_C_AnimNotify_Tail_ExtremeRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_MiddleGoingLeft
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_Tail_MiddleGoingLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_MiddleGoingLeft");

	UWildlife_Base_ABP_C_AnimNotify_Tail_MiddleGoingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_MiddleGoingRight
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_Tail_MiddleGoingRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_Tail_MiddleGoingRight");

	UWildlife_Base_ABP_C_AnimNotify_Tail_MiddleGoingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWildlife_Base_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.BlueprintUpdateAnimation");

	UWildlife_Base_ABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_StartDeathPhysicsBlend
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_StartDeathPhysicsBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_StartDeathPhysicsBlend");

	UWildlife_Base_ABP_C_AnimNotify_StartDeathPhysicsBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactATriggered
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_HitReactATriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactATriggered");

	UWildlife_Base_ABP_C_AnimNotify_HitReactATriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactAComplete
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_HitReactAComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactAComplete");

	UWildlife_Base_ABP_C_AnimNotify_HitReactAComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactBTriggered
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_HitReactBTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactBTriggered");

	UWildlife_Base_ABP_C_AnimNotify_HitReactBTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactBComplete
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_HitReactBComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactBComplete");

	UWildlife_Base_ABP_C_AnimNotify_HitReactBComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactCTriggered
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_HitReactCTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactCTriggered");

	UWildlife_Base_ABP_C_AnimNotify_HitReactCTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactCComplete
// (BlueprintCallable, BlueprintEvent)
void UWildlife_Base_ABP_C::AnimNotify_HitReactCComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.AnimNotify_HitReactCComplete");

	UWildlife_Base_ABP_C_AnimNotify_HitReactCComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.K2_Reset
// (Event, Public, BlueprintEvent)
void UWildlife_Base_ABP_C::K2_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.K2_Reset");

	UWildlife_Base_ABP_C_K2_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.ExecuteUbergraph_Wildlife_Base_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWildlife_Base_ABP_C::ExecuteUbergraph_Wildlife_Base_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_ABP.Wildlife_Base_ABP_C.ExecuteUbergraph_Wildlife_Base_ABP");

	UWildlife_Base_ABP_C_ExecuteUbergraph_Wildlife_Base_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
