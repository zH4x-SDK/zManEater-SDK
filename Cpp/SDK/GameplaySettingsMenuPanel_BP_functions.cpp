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

// Function GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C.GetDefaultFocusWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UGameplaySettingsMenuPanel_BP_C::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C.GetDefaultFocusWidget");

	UGameplaySettingsMenuPanel_BP_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplaySettingsMenuPanel_BP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C.PreConstruct");

	UGameplaySettingsMenuPanel_BP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C.ExecuteUbergraph_GameplaySettingsMenuPanel_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplaySettingsMenuPanel_BP_C::ExecuteUbergraph_GameplaySettingsMenuPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C.ExecuteUbergraph_GameplaySettingsMenuPanel_BP");

	UGameplaySettingsMenuPanel_BP_C_ExecuteUbergraph_GameplaySettingsMenuPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
