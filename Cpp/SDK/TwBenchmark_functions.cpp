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

// Function TwBenchmark.TwGameplayProfilerActor.EndProfiling
// (Final, Native, Private)
void ATwGameplayProfilerActor::EndProfiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwBenchmark.TwGameplayProfilerActor.EndProfiling");

	ATwGameplayProfilerActor_EndProfiling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwBenchmark.TwGameplayProfilerActor.BeginProfiling
// (Final, Native, Private)
void ATwGameplayProfilerActor::BeginProfiling()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwBenchmark.TwGameplayProfilerActor.BeginProfiling");

	ATwGameplayProfilerActor_BeginProfiling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TwBenchmark.TwBenchmarkGameMode.OnBenchmarkLevelLoaded
// (Final, Native, Private)
void ATwBenchmarkGameMode::OnBenchmarkLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function TwBenchmark.TwBenchmarkGameMode.OnBenchmarkLevelLoaded");

	ATwBenchmarkGameMode_OnBenchmarkLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
