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

// Function BP_Ocean.BP_Ocean_C.SetWaveDirection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewWaveAmplitude               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Ocean_C::SetWaveDirection(const struct FVector2D& NewWaveAmplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.SetWaveDirection");

	ABP_Ocean_C_SetWaveDirection_Params params;
	params.NewWaveAmplitude = NewWaveAmplitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ocean.BP_Ocean_C.SetWaveAmplitude
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewWaveAmplitude               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Ocean_C::SetWaveAmplitude(float NewWaveAmplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.SetWaveAmplitude");

	ABP_Ocean_C_SetWaveAmplitude_Params params;
	params.NewWaveAmplitude = NewWaveAmplitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Ocean_C::Set_Global_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Set Global Parameters");

	ABP_Ocean_C_Set_Global_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ocean.BP_Ocean_C.Create Wave Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Ocean_C::Create_Wave_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.Create Wave Set");

	ABP_Ocean_C_Create_Wave_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Ocean_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.UserConstructionScript");

	ABP_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Ocean_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay");

	ABP_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Ocean_C::ExecuteUbergraph_BP_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean");

	ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
