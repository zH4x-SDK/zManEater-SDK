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

// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UTestMap_SpawnAIButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnFocusReceived");

	UTestMap_SpawnAIButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UTestMap_SpawnAIButton_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnFocusLost");

	UTestMap_SpawnAIButton_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.CheckButtonFocus
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIButton_C::CheckButtonFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.CheckButtonFocus");

	UTestMap_SpawnAIButton_C_CheckButtonFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTestMap_SpawnAIButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnMouseEnter");

	UTestMap_SpawnAIButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTestMap_SpawnAIButton_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.OnMouseLeave");

	UTestMap_SpawnAIButton_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTestMap_SpawnAIButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTestMap_SpawnAIButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTestMap_SpawnAIButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.Construct");

	UTestMap_SpawnAIButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UTestMap_SpawnAIButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTestMap_SpawnAIButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UTestMap_SpawnAIButton_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTestMap_SpawnAIButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.ExecuteUbergraph_TestMap_SpawnAIButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIButton_C::ExecuteUbergraph_TestMap_SpawnAIButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.ExecuteUbergraph_TestMap_SpawnAIButton");

	UTestMap_SpawnAIButton_C_ExecuteUbergraph_TestMap_SpawnAIButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.ButtonFocusedChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIButton_C::ButtonFocusedChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.ButtonFocusedChanged__DelegateSignature");

	UTestMap_SpawnAIButton_C_ButtonFocusedChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.ButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIButton_C::ButtonClicked__DelegateSignature(class UClass* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIButton.TestMap_SpawnAIButton_C.ButtonClicked__DelegateSignature");

	UTestMap_SpawnAIButton_C_ButtonClicked__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
