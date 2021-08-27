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

// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.CleanHarpoonSEQ
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V1_C::CleanHarpoonSEQ()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.CleanHarpoonSEQ");

	ABP_Base_PetesBoat_V1_C_CleanHarpoonSEQ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BindHarpoonSEQ
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V1_C::BindHarpoonSEQ()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BindHarpoonSEQ");

	ABP_Base_PetesBoat_V1_C_BindHarpoonSEQ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.SpawnAndAttachHarpoonSEQ
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V1_C::SpawnAndAttachHarpoonSEQ()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.SpawnAndAttachHarpoonSEQ");

	ABP_Base_PetesBoat_V1_C_SpawnAndAttachHarpoonSEQ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.SpawnScriptedBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V1_C::SpawnScriptedBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.SpawnScriptedBeam");

	ABP_Base_PetesBoat_V1_C_SpawnScriptedBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.UpdateTargetPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SourceLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 TargetLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V1_C::UpdateTargetPoint(struct FVector* SourceLoc, struct FVector* TargetLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.UpdateTargetPoint");

	ABP_Base_PetesBoat_V1_C_UpdateTargetPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceLoc != nullptr)
		*SourceLoc = params.SourceLoc;
	if (TargetLoc != nullptr)
		*TargetLoc = params.TargetLoc;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Base_PetesBoat_V1_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.CanAIAttackTarget");

	ABP_Base_PetesBoat_V1_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_Base_PetesBoat_V1_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.GetSizeLevel");

	ABP_Base_PetesBoat_V1_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.OnBossCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V1_C::OnBossCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.OnBossCinematicComplete");

	ABP_Base_PetesBoat_V1_C_OnBossCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BossPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            NewPhaseNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PassengerRespawnDelay          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V1_C::BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BossPhaseChanged");

	ABP_Base_PetesBoat_V1_C_BossPhaseChanged_Params params;
	params.NewPhaseNumber = NewPhaseNumber;
	params.PassengerRespawnDelay = PassengerRespawnDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V1_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.BindBossHunterSeqCamera");

	ABP_Base_PetesBoat_V1_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.ExecuteUbergraph_BP_Base_PetesBoat_V1
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V1_C::ExecuteUbergraph_BP_Base_PetesBoat_V1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V1.BP_Base_PetesBoat_V1_C.ExecuteUbergraph_BP_Base_PetesBoat_V1");

	ABP_Base_PetesBoat_V1_C_ExecuteUbergraph_BP_Base_PetesBoat_V1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
