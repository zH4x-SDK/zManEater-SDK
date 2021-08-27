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

// Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.GetDefaultFocusWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UCreditsSettingsMenuPanel_BP_C::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.GetDefaultFocusWidget");

	UCreditsSettingsMenuPanel_BP_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCreditsSettingsMenuPanel_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.Construct");

	UCreditsSettingsMenuPanel_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsSettingsMenuPanel_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.Tick");

	UCreditsSettingsMenuPanel_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.OnPanelOpen_BP
// (Event, Public, BlueprintEvent)
void UCreditsSettingsMenuPanel_BP_C::OnPanelOpen_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.OnPanelOpen_BP");

	UCreditsSettingsMenuPanel_BP_C_OnPanelOpen_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.ExecuteUbergraph_CreditsSettingsMenuPanel_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsSettingsMenuPanel_BP_C::ExecuteUbergraph_CreditsSettingsMenuPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C.ExecuteUbergraph_CreditsSettingsMenuPanel_BP");

	UCreditsSettingsMenuPanel_BP_C_ExecuteUbergraph_CreditsSettingsMenuPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
