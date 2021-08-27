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

// Function DeathView_BP.DeathView_BP_C.GetDefaultFocusWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UDeathView_BP_C::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathView_BP.DeathView_BP_C.GetDefaultFocusWidget");

	UDeathView_BP_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DeathView_BP.DeathView_BP_C.BndEvt__RespawnBtn_K2Node_ComponentBoundEvent_0_TwClickableWidgetClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    MouseButtonClicked             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTwClickableWidget*      OnWidgetClicked                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeathView_BP_C::BndEvt__RespawnBtn_K2Node_ComponentBoundEvent_0_TwClickableWidgetClickDelegate__DelegateSignature(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathView_BP.DeathView_BP_C.BndEvt__RespawnBtn_K2Node_ComponentBoundEvent_0_TwClickableWidgetClickDelegate__DelegateSignature");

	UDeathView_BP_C_BndEvt__RespawnBtn_K2Node_ComponentBoundEvent_0_TwClickableWidgetClickDelegate__DelegateSignature_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeathView_BP.DeathView_BP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_TwClickableWidgetClickDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FKey                    MouseButtonClicked             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTwClickableWidget*      OnWidgetClicked                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeathView_BP_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_TwClickableWidgetClickDelegate__DelegateSignature(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathView_BP.DeathView_BP_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_TwClickableWidgetClickDelegate__DelegateSignature");

	UDeathView_BP_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_TwClickableWidgetClickDelegate__DelegateSignature_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DeathView_BP.DeathView_BP_C.ExecuteUbergraph_DeathView_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDeathView_BP_C::ExecuteUbergraph_DeathView_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathView_BP.DeathView_BP_C.ExecuteUbergraph_DeathView_BP");

	UDeathView_BP_C_ExecuteUbergraph_DeathView_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
