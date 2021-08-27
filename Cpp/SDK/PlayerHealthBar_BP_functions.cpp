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

// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.OnHealthValueChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthBar_BP_C::OnHealthValueChanged_BP(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.OnHealthValueChanged_BP");

	UPlayerHealthBar_BP_C_OnHealthValueChanged_BP_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.GrowthLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewGrowthLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bChangeFromTheoretical         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerHealthBar_BP_C::GrowthLevelChanged(int NewGrowthLevel, bool bChangeFromTheoretical)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.GrowthLevelChanged");

	UPlayerHealthBar_BP_C_GrowthLevelChanged_Params params;
	params.NewGrowthLevel = NewGrowthLevel;
	params.bChangeFromTheoretical = bChangeFromTheoretical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthBar_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.SubscribeToEvents_BP");

	UPlayerHealthBar_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthBar_BP_C::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.UnsubscribeFromEvents_BP");

	UPlayerHealthBar_BP_C_UnsubscribeFromEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.ExecuteUbergraph_PlayerHealthBar_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerHealthBar_BP_C::ExecuteUbergraph_PlayerHealthBar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHealthBar_BP.PlayerHealthBar_BP_C.ExecuteUbergraph_PlayerHealthBar_BP");

	UPlayerHealthBar_BP_C_ExecuteUbergraph_PlayerHealthBar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
