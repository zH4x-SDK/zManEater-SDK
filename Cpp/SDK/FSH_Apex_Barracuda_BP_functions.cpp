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

// Function FSH_Apex_Barracuda_BP.FSH_Apex_Barracuda_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AFSH_Apex_Barracuda_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_Apex_Barracuda_BP.FSH_Apex_Barracuda_BP_C.ReceiveBeginPlay");

	AFSH_Apex_Barracuda_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_Apex_Barracuda_BP.FSH_Apex_Barracuda_BP_C.ExecuteUbergraph_FSH_Apex_Barracuda_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFSH_Apex_Barracuda_BP_C::ExecuteUbergraph_FSH_Apex_Barracuda_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_Apex_Barracuda_BP.FSH_Apex_Barracuda_BP_C.ExecuteUbergraph_FSH_Apex_Barracuda_BP");

	AFSH_Apex_Barracuda_BP_C_ExecuteUbergraph_FSH_Apex_Barracuda_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
