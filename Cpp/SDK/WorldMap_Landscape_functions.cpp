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

// Function WorldMap_Landscape.WorldMap_Landscape_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWorldMap_Landscape_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Landscape.WorldMap_Landscape_C.ReceiveBeginPlay");

	AWorldMap_Landscape_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Landscape.WorldMap_Landscape_C.ExecuteUbergraph_WorldMap_Landscape
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Landscape_C::ExecuteUbergraph_WorldMap_Landscape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Landscape.WorldMap_Landscape_C.ExecuteUbergraph_WorldMap_Landscape");

	AWorldMap_Landscape_C_ExecuteUbergraph_WorldMap_Landscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
