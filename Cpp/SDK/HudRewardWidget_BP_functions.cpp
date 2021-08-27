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

// Function HudRewardWidget_BP.HudRewardWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHudRewardWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudRewardWidget_BP.HudRewardWidget_BP_C.Construct");

	UHudRewardWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HudRewardWidget_BP.HudRewardWidget_BP_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHudRewardWidget_BP_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudRewardWidget_BP.HudRewardWidget_BP_C.OnAnimationStarted");

	UHudRewardWidget_BP_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HudRewardWidget_BP.HudRewardWidget_BP_C.ExecuteUbergraph_HudRewardWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHudRewardWidget_BP_C::ExecuteUbergraph_HudRewardWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudRewardWidget_BP.HudRewardWidget_BP_C.ExecuteUbergraph_HudRewardWidget_BP");

	UHudRewardWidget_BP_C_ExecuteUbergraph_HudRewardWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
