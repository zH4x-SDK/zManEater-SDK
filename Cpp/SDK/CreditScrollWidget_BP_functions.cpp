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

// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.SettingsMenuCreditsFadeIN
// (Public, BlueprintCallable, BlueprintEvent)
void UCreditScrollWidget_BP_C::SettingsMenuCreditsFadeIN()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.SettingsMenuCreditsFadeIN");

	UCreditScrollWidget_BP_C_SettingsMenuCreditsFadeIN_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.SettingMenuCreditsPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          In_DeltaTime                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditScrollWidget_BP_C::SettingMenuCreditsPlay(float* In_DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.SettingMenuCreditsPlay");

	UCreditScrollWidget_BP_C_SettingMenuCreditsPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In_DeltaTime != nullptr)
		*In_DeltaTime = params.In_DeltaTime;

}


// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.EndGameCreditsPlay
// (Public, BlueprintCallable, BlueprintEvent)
void UCreditScrollWidget_BP_C::EndGameCreditsPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.EndGameCreditsPlay");

	UCreditScrollWidget_BP_C_EndGameCreditsPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.ResetCredits
// (Public, BlueprintCallable, BlueprintEvent)
void UCreditScrollWidget_BP_C::ResetCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.ResetCredits");

	UCreditScrollWidget_BP_C_ResetCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCreditScrollWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.Construct");

	UCreditScrollWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditScrollWidget_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.Tick");

	UCreditScrollWidget_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.ExecuteUbergraph_CreditScrollWidget_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditScrollWidget_BP_C::ExecuteUbergraph_CreditScrollWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditScrollWidget_BP.CreditScrollWidget_BP_C.ExecuteUbergraph_CreditScrollWidget_BP");

	UCreditScrollWidget_BP_C_ExecuteUbergraph_CreditScrollWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
