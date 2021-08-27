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

// Function BoostMeter_BP.BoostMeter_BP_C.ProcessTagChange
// (Public, BlueprintCallable, BlueprintEvent)
void UBoostMeter_BP_C::ProcessTagChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.ProcessTagChange");

	UBoostMeter_BP_C_ProcessTagChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.UpdateLocalTagContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bAdded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   TagContainer                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TagDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoostMeter_BP_C::UpdateLocalTagContainer(bool bAdded, const struct FGameplayTagContainer& TagContainer, float TagDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.UpdateLocalTagContainer");

	UBoostMeter_BP_C_UpdateLocalTagContainer_Params params;
	params.bAdded = bAdded;
	params.TagContainer = TagContainer;
	params.TagDuration = TagDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoostMeter_BP_C::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.UnsubscribeFromEvents_BP");

	UBoostMeter_BP_C_UnsubscribeFromEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.GameplayTagAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TagDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoostMeter_BP_C::GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.GameplayTagAdded");

	UBoostMeter_BP_C_GameplayTagAdded_Params params;
	params.TagsAdded = TagsAdded;
	params.TagDuration = TagDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoostMeter_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.SubscribeToEvents_BP");

	UBoostMeter_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.GameplayTagRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UBoostMeter_BP_C::GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.GameplayTagRemoved");

	UBoostMeter_BP_C_GameplayTagRemoved_Params params;
	params.TagsAdded = TagsAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBoostMeter_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.Construct");

	UBoostMeter_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BoostMeter_BP.BoostMeter_BP_C.ExecuteUbergraph_BoostMeter_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBoostMeter_BP_C::ExecuteUbergraph_BoostMeter_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BoostMeter_BP.BoostMeter_BP_C.ExecuteUbergraph_BoostMeter_BP");

	UBoostMeter_BP_C_ExecuteUbergraph_BoostMeter_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
