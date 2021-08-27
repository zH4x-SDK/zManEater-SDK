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

// Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.SetMarkerCompleted
// (Public, BlueprintCallable, BlueprintEvent)
void UObjectiveMapMarkerWidget_BP_C::SetMarkerCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.SetMarkerCompleted");

	UObjectiveMapMarkerWidget_BP_C_SetMarkerCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.SetMarkerInProgress
// (Public, BlueprintCallable, BlueprintEvent)
void UObjectiveMapMarkerWidget_BP_C::SetMarkerInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.SetMarkerInProgress");

	UObjectiveMapMarkerWidget_BP_C_SetMarkerInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.SetMarkerAvailable
// (Public, BlueprintCallable, BlueprintEvent)
void UObjectiveMapMarkerWidget_BP_C::SetMarkerAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.SetMarkerAvailable");

	UObjectiveMapMarkerWidget_BP_C_SetMarkerAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.UpdateMarkerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UObjectiveMapMarkerWidget_BP_C::UpdateMarkerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.UpdateMarkerVisibility");

	UObjectiveMapMarkerWidget_BP_C_UpdateMarkerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.ExecuteUbergraph_ObjectiveMapMarkerWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UObjectiveMapMarkerWidget_BP_C::ExecuteUbergraph_ObjectiveMapMarkerWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C.ExecuteUbergraph_ObjectiveMapMarkerWidget_BP");

	UObjectiveMapMarkerWidget_BP_C_ExecuteUbergraph_ObjectiveMapMarkerWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
