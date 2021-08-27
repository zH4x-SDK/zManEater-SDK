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

// Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateDamageRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributesWidget_BP_C::CalculateDamageRating(float* CurrentPercent, float* DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateDamageRating");

	UAttributesWidget_BP_C_CalculateDamageRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPercent != nullptr)
		*CurrentPercent = params.CurrentPercent;
	if (DeltaPercent != nullptr)
		*DeltaPercent = params.DeltaPercent;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateMassRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributesWidget_BP_C::CalculateMassRating(float* CurrentPercent, float* DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateMassRating");

	UAttributesWidget_BP_C_CalculateMassRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPercent != nullptr)
		*CurrentPercent = params.CurrentPercent;
	if (DeltaPercent != nullptr)
		*DeltaPercent = params.DeltaPercent;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateSpeedRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributesWidget_BP_C::CalculateSpeedRating(float* CurrentPercent, float* DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateSpeedRating");

	UAttributesWidget_BP_C_CalculateSpeedRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPercent != nullptr)
		*CurrentPercent = params.CurrentPercent;
	if (DeltaPercent != nullptr)
		*DeltaPercent = params.DeltaPercent;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateDefenseRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributesWidget_BP_C::CalculateDefenseRating(float* CurrentPercent, float* DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateDefenseRating");

	UAttributesWidget_BP_C_CalculateDefenseRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPercent != nullptr)
		*CurrentPercent = params.CurrentPercent;
	if (DeltaPercent != nullptr)
		*DeltaPercent = params.DeltaPercent;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateHealthRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributesWidget_BP_C::CalculateHealthRating(float* CurrentPercent, float* DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.CalculateHealthRating");

	UAttributesWidget_BP_C_CalculateHealthRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentPercent != nullptr)
		*CurrentPercent = params.CurrentPercent;
	if (DeltaPercent != nullptr)
		*DeltaPercent = params.DeltaPercent;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAttributesWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.Construct");

	UAttributesWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.UpdateAttributes
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UAttributesWidget_BP_C::UpdateAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.UpdateAttributes");

	UAttributesWidget_BP_C_UpdateAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AttributesWidget_BP.AttributesWidget_BP_C.ExecuteUbergraph_AttributesWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributesWidget_BP_C::ExecuteUbergraph_AttributesWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributesWidget_BP.AttributesWidget_BP_C.ExecuteUbergraph_AttributesWidget_BP");

	UAttributesWidget_BP_C_ExecuteUbergraph_AttributesWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
