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

// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.UpdateSlider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SliderIncrement                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSubtract                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            BoatAmount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIMenu_C::UpdateSlider(float SliderIncrement, bool bSubtract, int* BoatAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.UpdateSlider");

	UTestMap_SpawnAIMenu_C_UpdateSlider_Params params;
	params.SliderIncrement = SliderIncrement;
	params.bSubtract = bSubtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BoatAmount != nullptr)
		*BoatAmount = params.BoatAmount;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.Construct");

	UTestMap_SpawnAIMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIMenu_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UTestMap_SpawnAIMenu_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.LeftSlider
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::LeftSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.LeftSlider");

	UTestMap_SpawnAIMenu_C_LeftSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.RightSlider
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::RightSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.RightSlider");

	UTestMap_SpawnAIMenu_C_RightSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SpawnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIMenu_C::SpawnButtonClicked(class UClass* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SpawnButtonClicked");

	UTestMap_SpawnAIMenu_C_SpawnButtonClicked_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.Start Menu Slider
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::Start_Menu_Slider()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.Start Menu Slider");

	UTestMap_SpawnAIMenu_C_Start_Menu_Slider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SpawnAI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIMenu_C::SpawnAI(class UClass* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SpawnAI");

	UTestMap_SpawnAIMenu_C_SpawnAI_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTestMap_SpawnAIMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTestMap_SpawnAIMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SpawnMenu
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::SpawnMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SpawnMenu");

	UTestMap_SpawnAIMenu_C_SpawnMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.FocusChanged
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::FocusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.FocusChanged");

	UTestMap_SpawnAIMenu_C_FocusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.CheckButtonFocusBINDS
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::CheckButtonFocusBINDS()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.CheckButtonFocusBINDS");

	UTestMap_SpawnAIMenu_C_CheckButtonFocusBINDS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SetMenu
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::SetMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.SetMenu");

	UTestMap_SpawnAIMenu_C_SetMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.ClickMenuSwitcher
// (BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::ClickMenuSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.ClickMenuSwitcher");

	UTestMap_SpawnAIMenu_C_ClickMenuSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.BndEvt__Button_308_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UTestMap_SpawnAIMenu_C::BndEvt__Button_308_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.BndEvt__Button_308_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UTestMap_SpawnAIMenu_C_BndEvt__Button_308_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.ExecuteUbergraph_TestMap_SpawnAIMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTestMap_SpawnAIMenu_C::ExecuteUbergraph_TestMap_SpawnAIMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.ExecuteUbergraph_TestMap_SpawnAIMenu");

	UTestMap_SpawnAIMenu_C_ExecuteUbergraph_TestMap_SpawnAIMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.Cancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTestMap_SpawnAIMenu_C::Cancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.Cancel__DelegateSignature");

	UTestMap_SpawnAIMenu_C_Cancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.TryingToSpawnAi__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActorToSpawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SpawnFish_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTestMap_SpawnAIMenu_C::TryingToSpawnAi__DelegateSignature(class UClass* ActorToSpawn, bool SpawnFish_)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestMap_SpawnAIMenu.TestMap_SpawnAIMenu_C.TryingToSpawnAi__DelegateSignature");

	UTestMap_SpawnAIMenu_C_TryingToSpawnAi__DelegateSignature_Params params;
	params.ActorToSpawn = ActorToSpawn;
	params.SpawnFish_ = SpawnFish_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
