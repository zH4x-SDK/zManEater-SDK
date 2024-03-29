﻿// Name: ManEater, Version: 1.0.0

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

// Function SHK_MenuSharkBase_ABP.SHK_MenuSharkBase_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void USHK_MenuSharkBase_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function SHK_MenuSharkBase_ABP.SHK_MenuSharkBase_ABP_C.AnimGraph");

	USHK_MenuSharkBase_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function SHK_MenuSharkBase_ABP.SHK_MenuSharkBase_ABP_C.ExecuteUbergraph_SHK_MenuSharkBase_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USHK_MenuSharkBase_ABP_C::ExecuteUbergraph_SHK_MenuSharkBase_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SHK_MenuSharkBase_ABP.SHK_MenuSharkBase_ABP_C.ExecuteUbergraph_SHK_MenuSharkBase_ABP");

	USHK_MenuSharkBase_ABP_C_ExecuteUbergraph_SHK_MenuSharkBase_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
