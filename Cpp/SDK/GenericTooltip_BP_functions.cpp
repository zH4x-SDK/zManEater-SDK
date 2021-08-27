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

// Function GenericTooltip_BP.GenericTooltip_BP_C.SetUnequipText
// (Public, BlueprintCallable, BlueprintEvent)
void UGenericTooltip_BP_C::SetUnequipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericTooltip_BP.GenericTooltip_BP_C.SetUnequipText");

	UGenericTooltip_BP_C_SetUnequipText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericTooltip_BP.GenericTooltip_BP_C.SetLockedText
// (Public, BlueprintCallable, BlueprintEvent)
void UGenericTooltip_BP_C::SetLockedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericTooltip_BP.GenericTooltip_BP_C.SetLockedText");

	UGenericTooltip_BP_C_SetLockedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
