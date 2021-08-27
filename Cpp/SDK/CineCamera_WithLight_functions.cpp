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

// Function CineCamera_WithLight.CineCamera_WithLight_C.AutoLightCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseLight                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACineCamera_WithLight_C::AutoLightCheck(bool* UseLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function CineCamera_WithLight.CineCamera_WithLight_C.AutoLightCheck");

	ACineCamera_WithLight_C_AutoLightCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseLight != nullptr)
		*UseLight = params.UseLight;

}


// Function CineCamera_WithLight.CineCamera_WithLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACineCamera_WithLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CineCamera_WithLight.CineCamera_WithLight_C.ReceiveBeginPlay");

	ACineCamera_WithLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CineCamera_WithLight.CineCamera_WithLight_C.ExecuteUbergraph_CineCamera_WithLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACineCamera_WithLight_C::ExecuteUbergraph_CineCamera_WithLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CineCamera_WithLight.CineCamera_WithLight_C.ExecuteUbergraph_CineCamera_WithLight");

	ACineCamera_WithLight_C_ExecuteUbergraph_CineCamera_WithLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
