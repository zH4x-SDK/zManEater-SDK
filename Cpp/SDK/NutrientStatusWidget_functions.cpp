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

// Function NutrientStatusWidget.NutrientStatusWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNutrientStatusWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NutrientStatusWidget.NutrientStatusWidget_C.PreConstruct");

	UNutrientStatusWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NutrientStatusWidget.NutrientStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNutrientStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NutrientStatusWidget.NutrientStatusWidget_C.Construct");

	UNutrientStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NutrientStatusWidget.NutrientStatusWidget_C.ExecuteUbergraph_NutrientStatusWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNutrientStatusWidget_C::ExecuteUbergraph_NutrientStatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NutrientStatusWidget.NutrientStatusWidget_C.ExecuteUbergraph_NutrientStatusWidget");

	UNutrientStatusWidget_C_ExecuteUbergraph_NutrientStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
