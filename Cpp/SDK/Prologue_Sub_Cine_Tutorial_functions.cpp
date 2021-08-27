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

// Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.IntroAnimationComplete
// (BlueprintCallable, BlueprintEvent)
void APrologue_Sub_Cine_Tutorial_C::IntroAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.IntroAnimationComplete");

	APrologue_Sub_Cine_Tutorial_C_IntroAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APrologue_Sub_Cine_Tutorial_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.ReceiveBeginPlay");

	APrologue_Sub_Cine_Tutorial_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.AdvancedToNextEpisodeDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentStoryEventIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_Cine_Tutorial_C::AdvancedToNextEpisodeDelegate_Event_1(int CurrentStoryEventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.AdvancedToNextEpisodeDelegate_Event_1");

	APrologue_Sub_Cine_Tutorial_C_AdvancedToNextEpisodeDelegate_Event_1_Params params;
	params.CurrentStoryEventIndex = CurrentStoryEventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.ExecuteUbergraph_Prologue_Sub_Cine_Tutorial
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_Cine_Tutorial_C::ExecuteUbergraph_Prologue_Sub_Cine_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C.ExecuteUbergraph_Prologue_Sub_Cine_Tutorial");

	APrologue_Sub_Cine_Tutorial_C_ExecuteUbergraph_Prologue_Sub_Cine_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
