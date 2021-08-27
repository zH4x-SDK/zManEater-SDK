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

// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.SpawnAndAttachElectroShield
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::SpawnAndAttachElectroShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.SpawnAndAttachElectroShield");

	ABP_Base_PetesBoat_V2_C_SpawnAndAttachElectroShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ManageDummyElectro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_PetesBoat_V2_C::ManageDummyElectro(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ManageDummyElectro");

	ABP_Base_PetesBoat_V2_C_ManageDummyElectro_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.CanAIAttackTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAttackTarget           PotentialTarget                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Base_PetesBoat_V2_C::CanAIAttackTarget(const struct FAttackTarget& PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.CanAIAttackTarget");

	ABP_Base_PetesBoat_V2_C_CanAIAttackTarget_Params params;
	params.PotentialTarget = PotentialTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_Base_PetesBoat_V2_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.GetSizeLevel");

	ABP_Base_PetesBoat_V2_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BossPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            NewPhaseNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PassengerRespawnDelay          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V2_C::BossPhaseChanged(int NewPhaseNumber, float PassengerRespawnDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BossPhaseChanged");

	ABP_Base_PetesBoat_V2_C_BossPhaseChanged_Params params;
	params.NewPhaseNumber = NewPhaseNumber;
	params.PassengerRespawnDelay = PassengerRespawnDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnBossCinematicStarted
// (Event, Public, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::OnBossCinematicStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnBossCinematicStarted");

	ABP_Base_PetesBoat_V2_C_OnBossCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ReceiveBeginPlay");

	ABP_Base_PetesBoat_V2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnBossCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::OnBossCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnBossCinematicComplete");

	ABP_Base_PetesBoat_V2_C_OnBossCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.HandleKyleVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::HandleKyleVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.HandleKyleVisiblity");

	ABP_Base_PetesBoat_V2_C_HandleKyleVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.PlayPlayerDeathCharacterAnims
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::PlayPlayerDeathCharacterAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.PlayPlayerDeathCharacterAnims");

	ABP_Base_PetesBoat_V2_C_PlayPlayerDeathCharacterAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.HandlePassengerVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewPassengerVisiblity          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewCinePeteVisibility          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Base_PetesBoat_V2_C::HandlePassengerVisiblity(bool NewPassengerVisiblity, bool NewCinePeteVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.HandlePassengerVisiblity");

	ABP_Base_PetesBoat_V2_C_HandlePassengerVisiblity_Params params;
	params.NewPassengerVisiblity = NewPassengerVisiblity;
	params.NewCinePeteVisibility = NewCinePeteVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.UpdateBossHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::UpdateBossHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.UpdateBossHealthBar");

	ABP_Base_PetesBoat_V2_C_UpdateBossHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ReceiveTick");

	ABP_Base_PetesBoat_V2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindElectroShieldDestroyed
// (BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::BindElectroShieldDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindElectroShieldDestroyed");

	ABP_Base_PetesBoat_V2_C_BindElectroShieldDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnSink
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             SinkInstigator                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V2_C::OnSink(class AController* SinkInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.OnSink");

	ABP_Base_PetesBoat_V2_C_OnSink_Params params;
	params.SinkInstigator = SinkInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ElectroShieldDestoryed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V2_C::ElectroShieldDestoryed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ElectroShieldDestoryed");

	ABP_Base_PetesBoat_V2_C_ElectroShieldDestoryed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BeginPlayerDefeatedCine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_Character*           Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V2_C::BeginPlayerDefeatedCine(class AME_Character* Victim, class AActor* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BeginPlayerDefeatedCine");

	ABP_Base_PetesBoat_V2_C_BeginPlayerDefeatedCine_Params params;
	params.Victim = Victim;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindPlayerDefeatSequence
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::BindPlayerDefeatSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindPlayerDefeatSequence");

	ABP_Base_PetesBoat_V2_C_BindPlayerDefeatSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_PetesBoat_V2_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.BindBossHunterSeqCamera");

	ABP_Base_PetesBoat_V2_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ExecuteUbergraph_BP_Base_PetesBoat_V2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_PetesBoat_V2_C::ExecuteUbergraph_BP_Base_PetesBoat_V2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_PetesBoat_V2.BP_Base_PetesBoat_V2_C.ExecuteUbergraph_BP_Base_PetesBoat_V2");

	ABP_Base_PetesBoat_V2_C_ExecuteUbergraph_BP_Base_PetesBoat_V2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
