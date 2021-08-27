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

// Function BP_ScalyPeteAwarenessWidget.BP_ScalyPeteAwarenessWidget_C.SetStoryCompletionColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CompletionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                  StoryImage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScalyPeteAwarenessWidget_C::SetStoryCompletionColor(bool CompletionState, class UImage* StoryImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScalyPeteAwarenessWidget.BP_ScalyPeteAwarenessWidget_C.SetStoryCompletionColor");

	UBP_ScalyPeteAwarenessWidget_C_SetStoryCompletionColor_Params params;
	params.CompletionState = CompletionState;
	params.StoryImage = StoryImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ScalyPeteAwarenessWidget.BP_ScalyPeteAwarenessWidget_C.SetAwareness
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Awareness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScalyPeteAwarenessWidget_C::SetAwareness(float Awareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScalyPeteAwarenessWidget.BP_ScalyPeteAwarenessWidget_C.SetAwareness");

	UBP_ScalyPeteAwarenessWidget_C_SetAwareness_Params params;
	params.Awareness = Awareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ScalyPeteAwarenessWidget.BP_ScalyPeteAwarenessWidget_C.ExecuteUbergraph_BP_ScalyPeteAwarenessWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScalyPeteAwarenessWidget_C::ExecuteUbergraph_BP_ScalyPeteAwarenessWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScalyPeteAwarenessWidget.BP_ScalyPeteAwarenessWidget_C.ExecuteUbergraph_BP_ScalyPeteAwarenessWidget");

	UBP_ScalyPeteAwarenessWidget_C_ExecuteUbergraph_BP_ScalyPeteAwarenessWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
