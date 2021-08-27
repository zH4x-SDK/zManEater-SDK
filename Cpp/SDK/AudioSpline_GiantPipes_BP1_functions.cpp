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

// Function AudioSpline_GiantPipes_BP1.AudioSpline_GiantPipes_BP1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAudioSpline_GiantPipes_BP1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSpline_GiantPipes_BP1.AudioSpline_GiantPipes_BP1_C.ReceiveBeginPlay");

	AAudioSpline_GiantPipes_BP1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSpline_GiantPipes_BP1.AudioSpline_GiantPipes_BP1_C.ExecuteUbergraph_AudioSpline_GiantPipes_BP1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAudioSpline_GiantPipes_BP1_C::ExecuteUbergraph_AudioSpline_GiantPipes_BP1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSpline_GiantPipes_BP1.AudioSpline_GiantPipes_BP1_C.ExecuteUbergraph_AudioSpline_GiantPipes_BP1");

	AAudioSpline_GiantPipes_BP1_C_ExecuteUbergraph_AudioSpline_GiantPipes_BP1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
