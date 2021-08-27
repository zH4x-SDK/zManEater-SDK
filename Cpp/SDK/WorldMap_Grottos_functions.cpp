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

// Function WorldMap_Grottos.WorldMap_Grottos_C.DisableProGrotto
// (BlueprintCallable, BlueprintEvent)
void AWorldMap_Grottos_C::DisableProGrotto()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Grottos.WorldMap_Grottos_C.DisableProGrotto");

	AWorldMap_Grottos_C_DisableProGrotto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Grottos.WorldMap_Grottos_C.EnableProGrotto
// (BlueprintCallable, BlueprintEvent)
void AWorldMap_Grottos_C::EnableProGrotto()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Grottos.WorldMap_Grottos_C.EnableProGrotto");

	AWorldMap_Grottos_C_EnableProGrotto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Grottos.WorldMap_Grottos_C.ExecuteUbergraph_WorldMap_Grottos
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Grottos_C::ExecuteUbergraph_WorldMap_Grottos(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Grottos.WorldMap_Grottos_C.ExecuteUbergraph_WorldMap_Grottos");

	AWorldMap_Grottos_C_ExecuteUbergraph_WorldMap_Grottos_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
