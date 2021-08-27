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

// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugVisibleThreatLoc
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Small_Bounty_C::DebugVisibleThreatLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugVisibleThreatLoc");

	ABP_Base_USCG_Small_Bounty_C_DebugVisibleThreatLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugLastVisibleThreatLoc
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Small_Bounty_C::DebugLastVisibleThreatLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugLastVisibleThreatLoc");

	ABP_Base_USCG_Small_Bounty_C_DebugLastVisibleThreatLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Base_USCG_Small_Bounty_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.CanAIAttackTarget");

	ABP_Base_USCG_Small_Bounty_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_Base_USCG_Small_Bounty_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.GetSizeLevel");

	ABP_Base_USCG_Small_Bounty_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugFloat
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Small_Bounty_C::DebugFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugFloat");

	ABP_Base_USCG_Small_Bounty_C_DebugFloat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugEscapePoint
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Small_Bounty_C::DebugEscapePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.DebugEscapePoint");

	ABP_Base_USCG_Small_Bounty_C_DebugEscapePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.HaveEverSeenPlayerDebug
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Small_Bounty_C::HaveEverSeenPlayerDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.HaveEverSeenPlayerDebug");

	ABP_Base_USCG_Small_Bounty_C_HaveEverSeenPlayerDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.ExecuteUbergraph_BP_Base_USCG_Small_Bounty
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_USCG_Small_Bounty_C::ExecuteUbergraph_BP_Base_USCG_Small_Bounty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C.ExecuteUbergraph_BP_Base_USCG_Small_Bounty");

	ABP_Base_USCG_Small_Bounty_C_ExecuteUbergraph_BP_Base_USCG_Small_Bounty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
