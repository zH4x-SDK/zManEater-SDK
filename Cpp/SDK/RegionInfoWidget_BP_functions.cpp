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

// Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.SetHighlightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void URegionInfoWidget_BP_C::SetHighlightVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.SetHighlightVisibility");

	URegionInfoWidget_BP_C_SetHighlightVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.OnRegionDataUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
void URegionInfoWidget_BP_C::OnRegionDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.OnRegionDataUpdated");

	URegionInfoWidget_BP_C_OnRegionDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.SetCurrentlyHovered
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bCurrentlyHovered              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URegionInfoWidget_BP_C::SetCurrentlyHovered(bool bCurrentlyHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.SetCurrentlyHovered");

	URegionInfoWidget_BP_C_SetCurrentlyHovered_Params params;
	params.bCurrentlyHovered = bCurrentlyHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.ExecuteUbergraph_RegionInfoWidget_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URegionInfoWidget_BP_C::ExecuteUbergraph_RegionInfoWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RegionInfoWidget_BP.RegionInfoWidget_BP_C.ExecuteUbergraph_RegionInfoWidget_BP");

	URegionInfoWidget_BP_C_ExecuteUbergraph_RegionInfoWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
