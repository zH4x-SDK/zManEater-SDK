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

// Function BP_Diver.BP_Diver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Diver_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver.BP_Diver_C.ReceiveBeginPlay");

	ABP_Diver_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Diver.BP_Diver_C.OnGrabPointConsumed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ConsumingAnimal                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FThrashGrabPoint        ConsumedGrabPoint              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GoreCapBoneName                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_C::OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver.BP_Diver_C.OnGrabPointConsumed");

	ABP_Diver_C_OnGrabPointConsumed_Params params;
	params.ConsumingAnimal = ConsumingAnimal;
	params.ConsumedGrabPoint = ConsumedGrabPoint;
	params.GoreCapBoneName = GoreCapBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Diver.BP_Diver_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_C::OnDied(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver.BP_Diver_C.OnDied");

	ABP_Diver_C_OnDied_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Diver.BP_Diver_C.ExecuteUbergraph_BP_Diver
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_C::ExecuteUbergraph_BP_Diver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver.BP_Diver_C.ExecuteUbergraph_BP_Diver");

	ABP_Diver_C_ExecuteUbergraph_BP_Diver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
