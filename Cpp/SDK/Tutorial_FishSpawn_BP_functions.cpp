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

// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ToggleOnOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATutorial_FishSpawn_BP_C::ToggleOnOff(bool Enabled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ToggleOnOff");

	ATutorial_FishSpawn_BP_C_ToggleOnOff_Params params;
	params.Enabled_ = Enabled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.SpawnFish
// (BlueprintCallable, BlueprintEvent)
void ATutorial_FishSpawn_BP_C::SpawnFish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.SpawnFish");

	ATutorial_FishSpawn_BP_C_SpawnFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATutorial_FishSpawn_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ReceiveBeginPlay");

	ATutorial_FishSpawn_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.FishDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AIController*        KilledAIC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATutorial_FishSpawn_BP_C::FishDied(class AME_AIController* KilledAIC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.FishDied");

	ATutorial_FishSpawn_BP_C_FishDied_Params params;
	params.KilledAIC = KilledAIC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ExecuteUbergraph_Tutorial_FishSpawn_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATutorial_FishSpawn_BP_C::ExecuteUbergraph_Tutorial_FishSpawn_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_FishSpawn_BP.Tutorial_FishSpawn_BP_C.ExecuteUbergraph_Tutorial_FishSpawn_BP");

	ATutorial_FishSpawn_BP_C_ExecuteUbergraph_Tutorial_FishSpawn_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
