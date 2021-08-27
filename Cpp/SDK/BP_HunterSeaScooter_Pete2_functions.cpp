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

// Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_HunterSeaScooter_Pete2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.ReceiveBeginPlay");

	UBP_HunterSeaScooter_Pete2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.Velocity particles
// (BlueprintCallable, BlueprintEvent)
void UBP_HunterSeaScooter_Pete2_C::Velocity_particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.Velocity particles");

	UBP_HunterSeaScooter_Pete2_C_Velocity_particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HunterSeaScooter_Pete2_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.ReceiveEndPlay");

	UBP_HunterSeaScooter_Pete2_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.ExecuteUbergraph_BP_HunterSeaScooter_Pete2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HunterSeaScooter_Pete2_C::ExecuteUbergraph_BP_HunterSeaScooter_Pete2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HunterSeaScooter_Pete2.BP_HunterSeaScooter_Pete2_C.ExecuteUbergraph_BP_HunterSeaScooter_Pete2");

	UBP_HunterSeaScooter_Pete2_C_ExecuteUbergraph_BP_HunterSeaScooter_Pete2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
