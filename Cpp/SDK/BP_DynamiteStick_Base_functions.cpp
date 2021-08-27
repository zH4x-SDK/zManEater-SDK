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

// Function BP_DynamiteStick_Base.BP_DynamiteStick_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_DynamiteStick_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamiteStick_Base.BP_DynamiteStick_Base_C.ReceiveBeginPlay");

	ABP_DynamiteStick_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamiteStick_Base.BP_DynamiteStick_Base_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_DynamiteStick_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamiteStick_Base.BP_DynamiteStick_Base_C.ReceiveDestroyed");

	ABP_DynamiteStick_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DynamiteStick_Base.BP_DynamiteStick_Base_C.ExecuteUbergraph_BP_DynamiteStick_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DynamiteStick_Base_C::ExecuteUbergraph_BP_DynamiteStick_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DynamiteStick_Base.BP_DynamiteStick_Base_C.ExecuteUbergraph_BP_DynamiteStick_Base");

	ABP_DynamiteStick_Base_C_ExecuteUbergraph_BP_DynamiteStick_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
