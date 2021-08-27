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

// Function AttributeItem_BP.AttributeItem_BP_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentPercent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaPercent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAttributeItem_BP_C::SetPercent(float CurrentPercent, float DeltaPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributeItem_BP.AttributeItem_BP_C.SetPercent");

	UAttributeItem_BP_C_SetPercent_Params params;
	params.CurrentPercent = CurrentPercent;
	params.DeltaPercent = DeltaPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AttributeItem_BP.AttributeItem_BP_C.SetAttributeName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   AttributeName                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UAttributeItem_BP_C::SetAttributeName(const struct FText& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttributeItem_BP.AttributeItem_BP_C.SetAttributeName");

	UAttributeItem_BP_C_SetAttributeName_Params params;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
