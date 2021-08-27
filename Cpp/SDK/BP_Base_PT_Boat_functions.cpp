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

// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManagePetePassengerVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_PT_Boat_C::ManagePetePassengerVisiblity(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManagePetePassengerVisiblity");

	ABP_Base_PT_Boat_C_ManagePetePassengerVisiblity_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CleanupElectroShields
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::CleanupElectroShields()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CleanupElectroShields");

	ABP_Base_PT_Boat_C_CleanupElectroShields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManageDummyElectro2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_PT_Boat_C::ManageDummyElectro2(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManageDummyElectro2");

	ABP_Base_PT_Boat_C_ManageDummyElectro2_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManageDummyElectro1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_PT_Boat_C::ManageDummyElectro1(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ManageDummyElectro1");

	ABP_Base_PT_Boat_C_ManageDummyElectro1_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnAndAttachElectroShield2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::SpawnAndAttachElectroShield2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnAndAttachElectroShield2");

	ABP_Base_PT_Boat_C_SpawnAndAttachElectroShield2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnAndAttachElectroShield1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::SpawnAndAttachElectroShield1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnAndAttachElectroShield1");

	ABP_Base_PT_Boat_C_SpawnAndAttachElectroShield1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnElectroShields
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BossPhase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PT_Boat_C::SpawnElectroShields(int BossPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.SpawnElectroShields");

	ABP_Base_PT_Boat_C_SpawnElectroShields_Params params;
	params.BossPhase = BossPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Base_PT_Boat_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CanAIAttackTarget");

	ABP_Base_PT_Boat_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_Base_PT_Boat_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.GetSizeLevel");

	ABP_Base_PT_Boat_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Base_PT_Boat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ReceiveBeginPlay");

	ABP_Base_PT_Boat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.HandlePassengerVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewPassengerVisiblity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewCinePeteVisibility          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_PT_Boat_C::HandlePassengerVisiblity(bool NewPassengerVisiblity, bool NewCinePeteVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.HandlePassengerVisiblity");

	ABP_Base_PT_Boat_C_HandlePassengerVisiblity_Params params;
	params.NewPassengerVisiblity = NewPassengerVisiblity;
	params.NewCinePeteVisibility = NewCinePeteVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.PlayPlayerDeathCharacterAnims
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::PlayPlayerDeathCharacterAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.PlayPlayerDeathCharacterAnims");

	ABP_Base_PT_Boat_C_PlayPlayerDeathCharacterAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BossPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            NewPhaseNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PassengerRespawnDelay          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PT_Boat_C::BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BossPhaseChanged");

	ABP_Base_PT_Boat_C_BossPhaseChanged_Params params;
	params.NewPhaseNumber = NewPhaseNumber;
	params.PassengerRespawnDelay = PassengerRespawnDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.UpdateBossHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::UpdateBossHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.UpdateBossHealthBar");

	ABP_Base_PT_Boat_C_UpdateBossHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ElectroShield1Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PT_Boat_C::ElectroShield1Destroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ElectroShield1Destroyed");

	ABP_Base_PT_Boat_C_ElectroShield1Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ElectroShield2Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PT_Boat_C::ElectroShield2Destroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ElectroShield2Destroyed");

	ABP_Base_PT_Boat_C_ElectroShield2Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindDestroyedEventsToElectroShields
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::BindDestroyedEventsToElectroShields()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindDestroyedEventsToElectroShields");

	ABP_Base_PT_Boat_C_BindDestroyedEventsToElectroShields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CleanupSupportBoats
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::CleanupSupportBoats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.CleanupSupportBoats");

	ABP_Base_PT_Boat_C_CleanupSupportBoats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BeginPlayerDefeatedCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_Character*           Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PT_Boat_C::BeginPlayerDefeatedCine(class AME_Character* Victim, class AActor* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BeginPlayerDefeatedCine");

	ABP_Base_PT_Boat_C_BeginPlayerDefeatedCine_Params params;
	params.Victim = Victim;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindPlayerDefeatSequence
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::BindPlayerDefeatSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindPlayerDefeatSequence");

	ABP_Base_PT_Boat_C_BindPlayerDefeatSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.BindBossHunterSeqCamera");

	ABP_Base_PT_Boat_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.AddBoatDefeated
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::AddBoatDefeated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.AddBoatDefeated");

	ABP_Base_PT_Boat_C_AddBoatDefeated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.UpdateHunterSupportProgress
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::UpdateHunterSupportProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.UpdateHunterSupportProgress");

	ABP_Base_PT_Boat_C_UpdateHunterSupportProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.OnBossCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PT_Boat_C::OnBossCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.OnBossCinematicComplete");

	ABP_Base_PT_Boat_C_OnBossCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ExecuteUbergraph_BP_Base_PT_Boat
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PT_Boat_C::ExecuteUbergraph_BP_Base_PT_Boat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PT_Boat.BP_Base_PT_Boat_C.ExecuteUbergraph_BP_Base_PT_Boat");

	ABP_Base_PT_Boat_C_ExecuteUbergraph_BP_Base_PT_Boat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
