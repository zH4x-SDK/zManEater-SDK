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

// Function WorldMapWidget_BP.WorldMapWidget_BP_C.UpdateRegionInfoWidgets
// (Event, Protected, BlueprintEvent)
void UWorldMapWidget_BP_C::UpdateRegionInfoWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMapWidget_BP.WorldMapWidget_BP_C.UpdateRegionInfoWidgets");

	UWorldMapWidget_BP_C_UpdateRegionInfoWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMapWidget_BP.WorldMapWidget_BP_C.ExecuteUbergraph_WorldMapWidget_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWorldMapWidget_BP_C::ExecuteUbergraph_WorldMapWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMapWidget_BP.WorldMapWidget_BP_C.ExecuteUbergraph_WorldMapWidget_BP");

	UWorldMapWidget_BP_C_ExecuteUbergraph_WorldMapWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
