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

// Function BP_Diver_Hunter.BP_Diver_Hunter_C.IsWeaponHoldingLimbGone?
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   GrabBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WeaponLimbIsGone               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Diver_Hunter_C::IsWeaponHoldingLimbGone_(const struct FName& GrabBoneName, bool* WeaponLimbIsGone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver_Hunter.BP_Diver_Hunter_C.IsWeaponHoldingLimbGone?");

	ABP_Diver_Hunter_C_IsWeaponHoldingLimbGone__Params params;
	params.GrabBoneName = GrabBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeaponLimbIsGone != nullptr)
		*WeaponLimbIsGone = params.WeaponLimbIsGone;

}


// Function BP_Diver_Hunter.BP_Diver_Hunter_C.OnGrabPointConsumed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ConsumingAnimal                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FThrashGrabPoint        ConsumedGrabPoint              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GoreCapBoneName                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_Hunter_C::OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver_Hunter.BP_Diver_Hunter_C.OnGrabPointConsumed");

	ABP_Diver_Hunter_C_OnGrabPointConsumed_Params params;
	params.ConsumingAnimal = ConsumingAnimal;
	params.ConsumedGrabPoint = ConsumedGrabPoint;
	params.GoreCapBoneName = GoreCapBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Diver_Hunter.BP_Diver_Hunter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_Hunter_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver_Hunter.BP_Diver_Hunter_C.ReceiveTick");

	ABP_Diver_Hunter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Diver_Hunter.BP_Diver_Hunter_C.ExecuteUbergraph_BP_Diver_Hunter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_Hunter_C::ExecuteUbergraph_BP_Diver_Hunter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver_Hunter.BP_Diver_Hunter_C.ExecuteUbergraph_BP_Diver_Hunter");

	ABP_Diver_Hunter_C_ExecuteUbergraph_BP_Diver_Hunter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
