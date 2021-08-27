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

// Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.RemoveAura
// (Public, BlueprintCallable, BlueprintEvent)
void APoisonTheWaterBarrel_BP_C::RemoveAura()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.RemoveAura");

	APoisonTheWaterBarrel_BP_C_RemoveAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.SpawnAura
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APoisonTheWaterBarrel_BP_C::SpawnAura()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.SpawnAura");

	APoisonTheWaterBarrel_BP_C_SpawnAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APoisonTheWaterBarrel_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.ReceiveBeginPlay");

	APoisonTheWaterBarrel_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.ExecuteUbergraph_PoisonTheWaterBarrel_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APoisonTheWaterBarrel_BP_C::ExecuteUbergraph_PoisonTheWaterBarrel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheWaterBarrel_BP.PoisonTheWaterBarrel_BP_C.ExecuteUbergraph_PoisonTheWaterBarrel_BP");

	APoisonTheWaterBarrel_BP_C_ExecuteUbergraph_PoisonTheWaterBarrel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
