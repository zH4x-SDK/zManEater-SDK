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

// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.EnablePoison
// (Public, BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::EnablePoison()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.EnablePoison");

	APoisonTheRegionController_BP_C_EnablePoison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.DisablePoison
// (Public, BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::DisablePoison()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.DisablePoison");

	APoisonTheRegionController_BP_C_DisablePoison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.SubLevelLoaded
// (BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::SubLevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.SubLevelLoaded");

	APoisonTheRegionController_BP_C_SubLevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.OnRegionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// Maneater_EWorldRegion          Region                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*              RegionIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APoisonTheRegionController_BP_C::OnRegionChanged(Maneater_EWorldRegion Region, class UTexture2D* RegionIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.OnRegionChanged");

	APoisonTheRegionController_BP_C_OnRegionChanged_Params params;
	params.Region = Region;
	params.RegionIcon = RegionIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APoisonTheRegionController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.ReceiveBeginPlay");

	APoisonTheRegionController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BeginAgain
// (BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::BeginAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BeginAgain");

	APoisonTheRegionController_BP_C_BeginAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.StoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewStoryIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APoisonTheRegionController_BP_C::StoryUpdated(int NewStoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.StoryUpdated");

	APoisonTheRegionController_BP_C_StoryUpdated_Params params;
	params.NewStoryIndex = NewStoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BindOnRegionChanged
// (BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::BindOnRegionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BindOnRegionChanged");

	APoisonTheRegionController_BP_C_BindOnRegionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BindOnStoryUpdated
// (BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::BindOnStoryUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.BindOnStoryUpdated");

	APoisonTheRegionController_BP_C_BindOnStoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.SpawnPoison
// (BlueprintCallable, BlueprintEvent)
void APoisonTheRegionController_BP_C::SpawnPoison()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.SpawnPoison");

	APoisonTheRegionController_BP_C_SpawnPoison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.ExecuteUbergraph_PoisonTheRegionController_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APoisonTheRegionController_BP_C::ExecuteUbergraph_PoisonTheRegionController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonTheRegionController_BP.PoisonTheRegionController_BP_C.ExecuteUbergraph_PoisonTheRegionController_BP");

	APoisonTheRegionController_BP_C_ExecuteUbergraph_PoisonTheRegionController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
