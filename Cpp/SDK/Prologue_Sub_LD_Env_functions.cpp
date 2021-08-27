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

// Function Prologue_Sub_LD_Env.Prologue_Sub_LD_Env_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APrologue_Sub_LD_Env_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_LD_Env.Prologue_Sub_LD_Env_C.ReceiveBeginPlay");

	APrologue_Sub_LD_Env_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Prologue_Sub_LD_Env.Prologue_Sub_LD_Env_C.ExecuteUbergraph_Prologue_Sub_LD_Env
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APrologue_Sub_LD_Env_C::ExecuteUbergraph_Prologue_Sub_LD_Env(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_Sub_LD_Env.Prologue_Sub_LD_Env_C.ExecuteUbergraph_Prologue_Sub_LD_Env");

	APrologue_Sub_LD_Env_C_ExecuteUbergraph_Prologue_Sub_LD_Env_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
