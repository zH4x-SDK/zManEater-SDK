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

// Function EpisodeListItem_BP.EpisodeListItem_BP_C.EpisodeItemCompleteAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void UEpisodeListItem_BP_C::EpisodeItemCompleteAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpisodeListItem_BP.EpisodeListItem_BP_C.EpisodeItemCompleteAnimation");

	UEpisodeListItem_BP_C_EpisodeItemCompleteAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EpisodeListItem_BP.EpisodeListItem_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UEpisodeListItem_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpisodeListItem_BP.EpisodeListItem_BP_C.Construct");

	UEpisodeListItem_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EpisodeListItem_BP.EpisodeListItem_BP_C.ExecuteUbergraph_EpisodeListItem_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEpisodeListItem_BP_C::ExecuteUbergraph_EpisodeListItem_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpisodeListItem_BP.EpisodeListItem_BP_C.ExecuteUbergraph_EpisodeListItem_BP");

	UEpisodeListItem_BP_C_ExecuteUbergraph_EpisodeListItem_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
