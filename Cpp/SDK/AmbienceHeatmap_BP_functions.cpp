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

// Function AmbienceHeatmap_BP.AmbienceHeatmap_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAmbienceHeatmap_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbienceHeatmap_BP.AmbienceHeatmap_BP_C.ReceiveTick");

	AAmbienceHeatmap_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AmbienceHeatmap_BP.AmbienceHeatmap_BP_C.ExecuteUbergraph_AmbienceHeatmap_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAmbienceHeatmap_BP_C::ExecuteUbergraph_AmbienceHeatmap_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbienceHeatmap_BP.AmbienceHeatmap_BP_C.ExecuteUbergraph_AmbienceHeatmap_BP");

	AAmbienceHeatmap_BP_C_ExecuteUbergraph_AmbienceHeatmap_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
