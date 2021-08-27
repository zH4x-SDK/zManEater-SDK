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

// Function BP_PlayerSharkState.BP_PlayerSharkState_C.GetClosestGrotto
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_PlayerGrotto_C*      ClosestGrotto                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerSharkState_C::GetClosestGrotto(class ABP_PlayerGrotto_C** ClosestGrotto)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.GetClosestGrotto");

	ABP_PlayerSharkState_C_GetClosestGrotto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClosestGrotto != nullptr)
		*ClosestGrotto = params.ClosestGrotto;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnWorldRegionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class AME_WorldRegionVolume*   NewRegion                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerSharkState_C::OnWorldRegionChanged(class AME_WorldRegionVolume* NewRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnWorldRegionChanged");

	ABP_PlayerSharkState_C_OnWorldRegionChanged_Params params;
	params.NewRegion = NewRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnIncreasedGrowthStage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerSharkState_C::OnIncreasedGrowthStage(TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnIncreasedGrowthStage");

	ABP_PlayerSharkState_C_OnIncreasedGrowthStage_Params params;
	params.NewGrowthStage = NewGrowthStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnGainedGrowthLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            NewGrowthLevel                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerSharkState_C::OnGainedGrowthLevel(int NewGrowthLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnGainedGrowthLevel");

	ABP_PlayerSharkState_C_OnGainedGrowthLevel_Params params;
	params.NewGrowthLevel = NewGrowthLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnGainedEvolutionPoints_2
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerSharkState_C::OnGainedEvolutionPoints_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.OnGainedEvolutionPoints_2");

	ABP_PlayerSharkState_C_OnGainedEvolutionPoints_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_PlayerSharkState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.ReceiveBeginPlay");

	ABP_PlayerSharkState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.BindOnInventoryChanged
// (BlueprintCallable, BlueprintEvent)
void ABP_PlayerSharkState_C::BindOnInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.BindOnInventoryChanged");

	ABP_PlayerSharkState_C_BindOnInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.InventoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpgrade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerSharkState_C::InventoryChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.InventoryChanged");

	ABP_PlayerSharkState_C_InventoryChanged_Params params;
	params.Evolution = Evolution;
	params.IsUpgrade = IsUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerSharkState.BP_PlayerSharkState_C.ExecuteUbergraph_BP_PlayerSharkState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerSharkState_C::ExecuteUbergraph_BP_PlayerSharkState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerSharkState.BP_PlayerSharkState_C.ExecuteUbergraph_BP_PlayerSharkState");

	ABP_PlayerSharkState_C_ExecuteUbergraph_BP_PlayerSharkState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
