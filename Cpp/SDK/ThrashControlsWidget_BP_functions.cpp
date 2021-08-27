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

// Function ThrashControlsWidget_BP.ThrashControlsWidget_BP_C.PlayLoop
// (Public, BlueprintCallable, BlueprintEvent)
void UThrashControlsWidget_BP_C::PlayLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrashControlsWidget_BP.ThrashControlsWidget_BP_C.PlayLoop");

	UThrashControlsWidget_BP_C_PlayLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ThrashControlsWidget_BP.ThrashControlsWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UThrashControlsWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrashControlsWidget_BP.ThrashControlsWidget_BP_C.Construct");

	UThrashControlsWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ThrashControlsWidget_BP.ThrashControlsWidget_BP_C.ExecuteUbergraph_ThrashControlsWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UThrashControlsWidget_BP_C::ExecuteUbergraph_ThrashControlsWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrashControlsWidget_BP.ThrashControlsWidget_BP_C.ExecuteUbergraph_ThrashControlsWidget_BP");

	UThrashControlsWidget_BP_C_ExecuteUbergraph_ThrashControlsWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
