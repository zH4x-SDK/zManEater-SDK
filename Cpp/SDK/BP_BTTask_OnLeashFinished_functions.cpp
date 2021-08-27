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

// Function BP_BTTask_OnLeashFinished.BP_BTTask_OnLeashFinished_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTTask_OnLeashFinished_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTTask_OnLeashFinished.BP_BTTask_OnLeashFinished_C.ReceiveExecute");

	UBP_BTTask_OnLeashFinished_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTTask_OnLeashFinished.BP_BTTask_OnLeashFinished_C.ExecuteUbergraph_BP_BTTask_OnLeashFinished
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTTask_OnLeashFinished_C::ExecuteUbergraph_BP_BTTask_OnLeashFinished(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTTask_OnLeashFinished.BP_BTTask_OnLeashFinished_C.ExecuteUbergraph_BP_BTTask_OnLeashFinished");

	UBP_BTTask_OnLeashFinished_C_ExecuteUbergraph_BP_BTTask_OnLeashFinished_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
