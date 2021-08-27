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

// Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPlayerCapturedByPete_Widget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.Construct");

	UPlayerCapturedByPete_Widget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.OnVisible
// (BlueprintCallable, BlueprintEvent)
void UPlayerCapturedByPete_Widget_BP_C::OnVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.OnVisible");

	UPlayerCapturedByPete_Widget_BP_C_OnVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.OnFinish
// (BlueprintCallable, BlueprintEvent)
void UPlayerCapturedByPete_Widget_BP_C::OnFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.OnFinish");

	UPlayerCapturedByPete_Widget_BP_C_OnFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.ExecuteUbergraph_PlayerCapturedByPete_Widget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerCapturedByPete_Widget_BP_C::ExecuteUbergraph_PlayerCapturedByPete_Widget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCapturedByPete_Widget_BP.PlayerCapturedByPete_Widget_BP_C.ExecuteUbergraph_PlayerCapturedByPete_Widget_BP");

	UPlayerCapturedByPete_Widget_BP_C_ExecuteUbergraph_PlayerCapturedByPete_Widget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
