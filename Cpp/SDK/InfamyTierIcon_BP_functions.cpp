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

// Function InfamyTierIcon_BP.InfamyTierIcon_BP_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInfamyTierIcon_BP_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyTierIcon_BP.InfamyTierIcon_BP_C.SetSelected");

	UInfamyTierIcon_BP_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InfamyTierIcon_BP.InfamyTierIcon_BP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsLocked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInfamyTierIcon_BP_C::SetData(bool bIsLocked, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyTierIcon_BP.InfamyTierIcon_BP_C.SetData");

	UInfamyTierIcon_BP_C_SetData_Params params;
	params.bIsLocked = bIsLocked;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
