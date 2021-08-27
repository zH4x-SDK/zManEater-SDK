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

// Function BP_ElectroShield_Pete2.BP_ElectroShield_Pete2_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_ElectroShield_Pete2_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectroShield_Pete2.BP_ElectroShield_Pete2_C.ReceiveDestroyed");

	ABP_ElectroShield_Pete2_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElectroShield_Pete2.BP_ElectroShield_Pete2_C.ExecuteUbergraph_BP_ElectroShield_Pete2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElectroShield_Pete2_C::ExecuteUbergraph_BP_ElectroShield_Pete2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectroShield_Pete2.BP_ElectroShield_Pete2_C.ExecuteUbergraph_BP_ElectroShield_Pete2");

	ABP_ElectroShield_Pete2_C_ExecuteUbergraph_BP_ElectroShield_Pete2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
