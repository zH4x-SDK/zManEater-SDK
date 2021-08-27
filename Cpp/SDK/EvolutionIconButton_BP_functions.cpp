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

// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UEvolutionIconButton_BP_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.OnFocusReceived");

	UEvolutionIconButton_BP_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.GetTooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UEvolutionIconButton_BP_C::GetTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.GetTooltip");

	UEvolutionIconButton_BP_C_GetTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.PlayUpgradeFX
// (Event, Public, BlueprintEvent)
void UEvolutionIconButton_BP_C::PlayUpgradeFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.PlayUpgradeFX");

	UEvolutionIconButton_BP_C_PlayUpgradeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UEvolutionIconButton_BP_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.OnFocusLost");

	UEvolutionIconButton_BP_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.ToggleTooltipVisiblity
// (BlueprintCallable, BlueprintEvent)
void UEvolutionIconButton_BP_C::ToggleTooltipVisiblity()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.ToggleTooltipVisiblity");

	UEvolutionIconButton_BP_C_ToggleTooltipVisiblity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.InventoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsUpgrade                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEvolutionIconButton_BP_C::InventoryChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.InventoryChanged");

	UEvolutionIconButton_BP_C_InventoryChanged_Params params;
	params.Evolution = Evolution;
	params.IsUpgrade = IsUpgrade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolutionIconButton_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.SubscribeToEvents_BP");

	UEvolutionIconButton_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolutionIconButton_BP_C::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.UnsubscribeFromEvents_BP");

	UEvolutionIconButton_BP_C_UnsubscribeFromEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UEvolutionIconButton_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.Construct");

	UEvolutionIconButton_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.ExecuteUbergraph_EvolutionIconButton_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolutionIconButton_BP_C::ExecuteUbergraph_EvolutionIconButton_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EvolutionIconButton_BP.EvolutionIconButton_BP_C.ExecuteUbergraph_EvolutionIconButton_BP");

	UEvolutionIconButton_BP_C_ExecuteUbergraph_EvolutionIconButton_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
