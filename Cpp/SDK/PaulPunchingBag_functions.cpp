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

// Function PaulPunchingBag.PaulPunchingBag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APaulPunchingBag_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PaulPunchingBag.PaulPunchingBag_C.ReceiveBeginPlay");

	APaulPunchingBag_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PaulPunchingBag.PaulPunchingBag_C.ExecuteUbergraph_PaulPunchingBag
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APaulPunchingBag_C::ExecuteUbergraph_PaulPunchingBag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PaulPunchingBag.PaulPunchingBag_C.ExecuteUbergraph_PaulPunchingBag");

	APaulPunchingBag_C_ExecuteUbergraph_PaulPunchingBag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
