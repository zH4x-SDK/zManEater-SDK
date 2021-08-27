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

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.ForceWaterColor
// (Public, BlueprintCallable, BlueprintEvent)
void UME_OceanColorComponent_C::ForceWaterColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.ForceWaterColor");

	UME_OceanColorComponent_C_ForceWaterColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_OceanColorComponent.ME_OceanColorComponent_C.TransitionWaterColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Transition                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UME_OceanColorComponent_C::TransitionWaterColor(float Transition)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.TransitionWaterColor");

	UME_OceanColorComponent_C_TransitionWaterColor_Params params;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetCurrentWaterColor
// (Public, BlueprintCallable, BlueprintEvent)
void UME_OceanColorComponent_C::SetCurrentWaterColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetCurrentWaterColor");

	UME_OceanColorComponent_C_SetCurrentWaterColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_OceanColorComponent.ME_OceanColorComponent_C.GetTargetWaterColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FME_WaterStruct         TargetWaterColorStruct         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UME_OceanColorComponent_C::GetTargetWaterColor(struct FME_WaterStruct* TargetWaterColorStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.GetTargetWaterColor");

	UME_OceanColorComponent_C_GetTargetWaterColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetWaterColorStruct != nullptr)
		*TargetWaterColorStruct = params.TargetWaterColorStruct;

}


// Function ME_OceanColorComponent.ME_OceanColorComponent_C.GetCurrentWaterColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FME_WaterStruct         CurrentWaterColorStruct        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UME_OceanColorComponent_C::GetCurrentWaterColor(struct FME_WaterStruct* CurrentWaterColorStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.GetCurrentWaterColor");

	UME_OceanColorComponent_C_GetCurrentWaterColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentWaterColorStruct != nullptr)
		*CurrentWaterColorStruct = params.CurrentWaterColorStruct;

}


// Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetWaterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ME_WaterTypeEnum_EME_WaterTypeEnum> WaterType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UME_OceanColorComponent_C::SetWaterType(TEnumAsByte<ME_WaterTypeEnum_EME_WaterTypeEnum> WaterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetWaterType");

	UME_OceanColorComponent_C_SetWaterType_Params params;
	params.WaterType = WaterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetWaterColor
// (Public, BlueprintCallable, BlueprintEvent)
void UME_OceanColorComponent_C::SetWaterColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetWaterColor");

	UME_OceanColorComponent_C_SetWaterColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
