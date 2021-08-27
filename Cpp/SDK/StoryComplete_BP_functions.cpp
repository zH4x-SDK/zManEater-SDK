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

// Function StoryComplete_BP.StoryComplete_BP_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoryComplete_BP_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoryComplete_BP.StoryComplete_BP_C.OnAnimationStarted");

	UStoryComplete_BP_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoryComplete_BP.StoryComplete_BP_C.OnModalShowing_BP
// (Event, Public, BlueprintEvent)
void UStoryComplete_BP_C::OnModalShowing_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoryComplete_BP.StoryComplete_BP_C.OnModalShowing_BP");

	UStoryComplete_BP_C_OnModalShowing_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoryComplete_BP.StoryComplete_BP_C.ExecuteUbergraph_StoryComplete_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStoryComplete_BP_C::ExecuteUbergraph_StoryComplete_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoryComplete_BP.StoryComplete_BP_C.ExecuteUbergraph_StoryComplete_BP");

	UStoryComplete_BP_C_ExecuteUbergraph_StoryComplete_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
