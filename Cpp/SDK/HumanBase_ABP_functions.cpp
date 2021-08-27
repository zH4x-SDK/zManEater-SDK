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

// Function HumanBase_ABP.HumanBase_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UHumanBase_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.AnimGraph");

	UHumanBase_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function HumanBase_ABP.HumanBase_ABP_C.GetRandomBlendspace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlendSpace*             BlendSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UBlendSpace*>     Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UHumanBase_ABP_C::GetRandomBlendspace(class UBlendSpace** BlendSpace, TArray<class UBlendSpace*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.GetRandomBlendspace");

	UHumanBase_ABP_C_GetRandomBlendspace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlendSpace != nullptr)
		*BlendSpace = params.BlendSpace;
	if (Array != nullptr)
		*Array = params.Array;

}


// Function HumanBase_ABP.HumanBase_ABP_C.ChangePointingBool
// (Public, BlueprintCallable, BlueprintEvent)
void UHumanBase_ABP_C::ChangePointingBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.ChangePointingBool");

	UHumanBase_ABP_C_ChangePointingBool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HumanBase_ABP.HumanBase_ABP_C.BumpAnimationToPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitFromAngle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimMontage* UHumanBase_ABP_C::BumpAnimationToPlay(float HitFromAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.BumpAnimationToPlay");

	UHumanBase_ABP_C_BumpAnimationToPlay_Params params;
	params.HitFromAngle = HitFromAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HumanBase_ABP.HumanBase_ABP_C.AnimNotify_StartAdditiveFiring
// (BlueprintCallable, BlueprintEvent)
void UHumanBase_ABP_C::AnimNotify_StartAdditiveFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.AnimNotify_StartAdditiveFiring");

	UHumanBase_ABP_C_AnimNotify_StartAdditiveFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HumanBase_ABP.HumanBase_ABP_C.K2_Reset
// (Event, Public, BlueprintEvent)
void UHumanBase_ABP_C::K2_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.K2_Reset");

	UHumanBase_ABP_C_K2_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HumanBase_ABP.HumanBase_ABP_C.ExecuteUbergraph_HumanBase_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHumanBase_ABP_C::ExecuteUbergraph_HumanBase_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBase_ABP.HumanBase_ABP_C.ExecuteUbergraph_HumanBase_ABP");

	UHumanBase_ABP_C_ExecuteUbergraph_HumanBase_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
