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

// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.GetDefaultFocusWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UManeaterPauseMenuView_BP_C::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.GetDefaultFocusWidget");

	UManeaterPauseMenuView_BP_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnCloseClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    MouseButtonClicked             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTwClickableWidget*      OnWidgetClicked                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterPauseMenuView_BP_C::OnCloseClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnCloseClicked");

	UManeaterPauseMenuView_BP_C_OnCloseClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnExitClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    MouseButtonClicked             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTwClickableWidget*      OnWidgetClicked                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterPauseMenuView_BP_C::OnExitClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnExitClicked");

	UManeaterPauseMenuView_BP_C_OnExitClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewEnteringStack_BP
// (Event, Public, BlueprintEvent)
void UManeaterPauseMenuView_BP_C::OnViewEnteringStack_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewEnteringStack_BP");

	UManeaterPauseMenuView_BP_C_OnViewEnteringStack_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewLeavingStack_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FViewPoppingResponder   Responder                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UManeaterPauseMenuView_BP_C::OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewLeavingStack_BP");

	UManeaterPauseMenuView_BP_C_OnViewLeavingStack_BP_Params params;
	params.Responder = Responder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewShowing_BP
// (Event, Public, BlueprintEvent)
void UManeaterPauseMenuView_BP_C::OnViewShowing_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnViewShowing_BP");

	UManeaterPauseMenuView_BP_C_OnViewShowing_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UManeaterPauseMenuView_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.Construct");

	UManeaterPauseMenuView_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnettingsClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    MouseButtonClicked             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTwClickableWidget*      OnWidgetClicked                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterPauseMenuView_BP_C::OnettingsClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.OnettingsClicked");

	UManeaterPauseMenuView_BP_C_OnettingsClicked_Params params;
	params.MouseButtonClicked = MouseButtonClicked;
	params.OnWidgetClicked = OnWidgetClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.ExecuteUbergraph_ManeaterPauseMenuView_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterPauseMenuView_BP_C::ExecuteUbergraph_ManeaterPauseMenuView_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C.ExecuteUbergraph_ManeaterPauseMenuView_BP");

	UManeaterPauseMenuView_BP_C_ExecuteUbergraph_ManeaterPauseMenuView_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
