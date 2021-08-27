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

// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DepthChargeBarrel_Bounty_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.CanBeFocused");

	ABP_DepthChargeBarrel_Bounty_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.CanBeConsumedWholeBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DepthChargeBarrel_Bounty_C::CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.CanBeConsumedWholeBy");

	ABP_DepthChargeBarrel_Bounty_C_CanBeConsumedWholeBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.CanBeLockedOnTo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_DepthChargeBarrel_Bounty_C::CanBeLockedOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.CanBeLockedOnTo");

	ABP_DepthChargeBarrel_Bounty_C_CanBeLockedOnTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.GetFocusPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_DepthChargeBarrel_Bounty_C::GetFocusPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.GetFocusPriority");

	ABP_DepthChargeBarrel_Bounty_C_GetFocusPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_DepthChargeBarrel_Bounty_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.GetSizeLevel");

	ABP_DepthChargeBarrel_Bounty_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.MaterialTimeline__FinishedFunc
// (BlueprintEvent)
void ABP_DepthChargeBarrel_Bounty_C::MaterialTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.MaterialTimeline__FinishedFunc");

	ABP_DepthChargeBarrel_Bounty_C_MaterialTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.MaterialTimeline__UpdateFunc
// (BlueprintEvent)
void ABP_DepthChargeBarrel_Bounty_C::MaterialTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.MaterialTimeline__UpdateFunc");

	ABP_DepthChargeBarrel_Bounty_C_MaterialTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.MaterialTimeline__Events__EventFunc
// (BlueprintEvent)
void ABP_DepthChargeBarrel_Bounty_C::MaterialTimeline__Events__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.MaterialTimeline__Events__EventFunc");

	ABP_DepthChargeBarrel_Bounty_C_MaterialTimeline__Events__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_DepthChargeBarrel_Bounty_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.ReceiveBeginPlay");

	ABP_DepthChargeBarrel_Bounty_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.UpdateMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExplosionTimer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DepthChargeBarrel_Bounty_C::UpdateMaterial(float ExplosionTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.UpdateMaterial");

	ABP_DepthChargeBarrel_Bounty_C_UpdateMaterial_Params params;
	params.ExplosionTimer = ExplosionTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.ExecuteUbergraph_BP_DepthChargeBarrel_Bounty
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DepthChargeBarrel_Bounty_C::ExecuteUbergraph_BP_DepthChargeBarrel_Bounty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthChargeBarrel_Bounty.BP_DepthChargeBarrel_Bounty_C.ExecuteUbergraph_BP_DepthChargeBarrel_Bounty");

	ABP_DepthChargeBarrel_Bounty_C_ExecuteUbergraph_BP_DepthChargeBarrel_Bounty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
