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

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateShieldHealthPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::UpdateShieldHealthPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateShieldHealthPercent");

	UBossHealthWidget_BP_C_UpdateShieldHealthPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateDefeatProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumToDefeat                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::UpdateDefeatProgress(int Progress, int NumToDefeat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateDefeatProgress");

	UBossHealthWidget_BP_C_UpdateDefeatProgress_Params params;
	params.Progress = Progress;
	params.NumToDefeat = NumToDefeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.HandleVisiblityState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBossUIType_EBossUIType> BossUIType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::HandleVisiblityState(TEnumAsByte<EBossUIType_EBossUIType> BossUIType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.HandleVisiblityState");

	UBossHealthWidget_BP_C_HandleVisiblityState_Params params;
	params.BossUIType = BossUIType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::UpdateTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateTimer");

	UBossHealthWidget_BP_C_UpdateTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateHealthPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::UpdateHealthPercent(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateHealthPercent");

	UBossHealthWidget_BP_C_UpdateHealthPercent_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.OnHealthBarMadeVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FirstName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LastName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::OnHealthBarMadeVisible(const struct FText& FirstName, const struct FText& LastName, float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.OnHealthBarMadeVisible");

	UBossHealthWidget_BP_C_OnHealthBarMadeVisible_Params params;
	params.FirstName = FirstName;
	params.LastName = LastName;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.OnDefeatHuntersComplete
// (BlueprintCallable, BlueprintEvent)
void UBossHealthWidget_BP_C::OnDefeatHuntersComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.OnDefeatHuntersComplete");

	UBossHealthWidget_BP_C_OnDefeatHuntersComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BossHealthWidget_BP.BossHealthWidget_BP_C.ExecuteUbergraph_BossHealthWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBossHealthWidget_BP_C::ExecuteUbergraph_BossHealthWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BossHealthWidget_BP.BossHealthWidget_BP_C.ExecuteUbergraph_BossHealthWidget_BP");

	UBossHealthWidget_BP_C_ExecuteUbergraph_BossHealthWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
