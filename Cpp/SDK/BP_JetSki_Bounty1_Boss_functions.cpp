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

// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_JetSki_Bounty1_Boss_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.CanAIAttackTarget");

	ABP_JetSki_Bounty1_Boss_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_JetSki_Bounty1_Boss_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.GetSizeLevel");

	ABP_JetSki_Bounty1_Boss_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.WallHit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_JetSki_Bounty1_Boss_C::WallHit(class UPrimitiveComponent* MyComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.WallHit");

	ABP_JetSki_Bounty1_Boss_C_WallHit_Params params;
	params.MyComp = MyComp;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_JetSki_Bounty1_Boss_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.BindBossHunterSeqCamera");

	ABP_JetSki_Bounty1_Boss_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.ExecuteUbergraph_BP_JetSki_Bounty1_Boss
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_JetSki_Bounty1_Boss_C::ExecuteUbergraph_BP_JetSki_Bounty1_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty1_Boss.BP_JetSki_Bounty1_Boss_C.ExecuteUbergraph_BP_JetSki_Bounty1_Boss");

	ABP_JetSki_Bounty1_Boss_C_ExecuteUbergraph_BP_JetSki_Bounty1_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
