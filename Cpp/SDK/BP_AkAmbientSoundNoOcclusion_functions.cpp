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

// Function BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C.OnTimeOfDayChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHour                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NextHour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AkAmbientSoundNoOcclusion_C::OnTimeOfDayChanged_Event_1(float CurrentHour, float NextHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C.OnTimeOfDayChanged_Event_1");

	ABP_AkAmbientSoundNoOcclusion_C_OnTimeOfDayChanged_Event_1_Params params;
	params.CurrentHour = CurrentHour;
	params.NextHour = NextHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AkAmbientSoundNoOcclusion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C.ReceiveBeginPlay");

	ABP_AkAmbientSoundNoOcclusion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C.ExecuteUbergraph_BP_AkAmbientSoundNoOcclusion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AkAmbientSoundNoOcclusion_C::ExecuteUbergraph_BP_AkAmbientSoundNoOcclusion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C.ExecuteUbergraph_BP_AkAmbientSoundNoOcclusion");

	ABP_AkAmbientSoundNoOcclusion_C_ExecuteUbergraph_BP_AkAmbientSoundNoOcclusion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
