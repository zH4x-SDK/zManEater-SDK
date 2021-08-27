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

// Function LighthouseLight_BP.LighthouseLight_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALighthouseLight_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LighthouseLight_BP.LighthouseLight_BP_C.UserConstructionScript");

	ALighthouseLight_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LighthouseLight_BP.LighthouseLight_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALighthouseLight_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LighthouseLight_BP.LighthouseLight_BP_C.ReceiveBeginPlay");

	ALighthouseLight_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LighthouseLight_BP.LighthouseLight_BP_C.ToggleNight
// (Public, BlueprintCallable, BlueprintEvent)
void ALighthouseLight_BP_C::ToggleNight()
{
	static auto fn = UObject::FindObject<UFunction>("Function LighthouseLight_BP.LighthouseLight_BP_C.ToggleNight");

	ALighthouseLight_BP_C_ToggleNight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LighthouseLight_BP.LighthouseLight_BP_C.ToggleDay
// (Public, BlueprintCallable, BlueprintEvent)
void ALighthouseLight_BP_C::ToggleDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LighthouseLight_BP.LighthouseLight_BP_C.ToggleDay");

	ALighthouseLight_BP_C_ToggleDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LighthouseLight_BP.LighthouseLight_BP_C.ExecuteUbergraph_LighthouseLight_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALighthouseLight_BP_C::ExecuteUbergraph_LighthouseLight_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LighthouseLight_BP.LighthouseLight_BP_C.ExecuteUbergraph_LighthouseLight_BP");

	ALighthouseLight_BP_C_ExecuteUbergraph_LighthouseLight_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
