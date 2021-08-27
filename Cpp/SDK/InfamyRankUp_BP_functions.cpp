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

// Function InfamyRankUp_BP.InfamyRankUp_BP_C.OnAnimStart_BP
// (Event, Public, BlueprintEvent)
void UInfamyRankUp_BP_C::OnAnimStart_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyRankUp_BP.InfamyRankUp_BP_C.OnAnimStart_BP");

	UInfamyRankUp_BP_C_OnAnimStart_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfamyRankUp_BP.InfamyRankUp_BP_C.OnAnimEnd_BP
// (Event, Public, BlueprintEvent)
void UInfamyRankUp_BP_C::OnAnimEnd_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyRankUp_BP.InfamyRankUp_BP_C.OnAnimEnd_BP");

	UInfamyRankUp_BP_C_OnAnimEnd_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfamyRankUp_BP.InfamyRankUp_BP_C.ExecuteUbergraph_InfamyRankUp_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfamyRankUp_BP_C::ExecuteUbergraph_InfamyRankUp_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyRankUp_BP.InfamyRankUp_BP_C.ExecuteUbergraph_InfamyRankUp_BP");

	UInfamyRankUp_BP_C_ExecuteUbergraph_InfamyRankUp_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
