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

// Function BP_ElectroShield_Bounty.BP_ElectroShield_Bounty_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ElectroShield_Bounty_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectroShield_Bounty.BP_ElectroShield_Bounty_C.ReceiveBeginPlay");

	ABP_ElectroShield_Bounty_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElectroShield_Bounty.BP_ElectroShield_Bounty_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElectroShield_Bounty_C::CustomEvent(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectroShield_Bounty.BP_ElectroShield_Bounty_C.CustomEvent");

	ABP_ElectroShield_Bounty_C_CustomEvent_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ElectroShield_Bounty.BP_ElectroShield_Bounty_C.ExecuteUbergraph_BP_ElectroShield_Bounty
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ElectroShield_Bounty_C::ExecuteUbergraph_BP_ElectroShield_Bounty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectroShield_Bounty.BP_ElectroShield_Bounty_C.ExecuteUbergraph_BP_ElectroShield_Bounty");

	ABP_ElectroShield_Bounty_C_ExecuteUbergraph_BP_ElectroShield_Bounty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
