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

// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.OnTimeDilation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bStarted                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Maneater_ECharacterActionMode> ActionMode                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterHUDView_BP_C::OnTimeDilation(bool bStarted, TEnumAsByte<Maneater_ECharacterActionMode> ActionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.OnTimeDilation");

	UManeaterHUDView_BP_C_OnTimeDilation_Params params;
	params.bStarted = bStarted;
	params.ActionMode = ActionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterHUDView_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.SubscribeToEvents_BP");

	UManeaterHUDView_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterHUDView_BP_C::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.UnsubscribeFromEvents_BP");

	UManeaterHUDView_BP_C_UnsubscribeFromEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UManeaterHUDView_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.Construct");

	UManeaterHUDView_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.ExecuteUbergraph_ManeaterHUDView_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterHUDView_BP_C::ExecuteUbergraph_ManeaterHUDView_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.ExecuteUbergraph_ManeaterHUDView_BP");

	UManeaterHUDView_BP_C_ExecuteUbergraph_ManeaterHUDView_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
