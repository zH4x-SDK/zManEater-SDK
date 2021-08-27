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

// Function ManeaterMapPanel_BP.ManeaterMapPanel_BP_C.GetDefaultFocusWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UManeaterMapPanel_BP_C::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterMapPanel_BP.ManeaterMapPanel_BP_C.GetDefaultFocusWidget");

	UManeaterMapPanel_BP_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ManeaterMapPanel_BP.ManeaterMapPanel_BP_C.ExecuteUbergraph_ManeaterMapPanel_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterMapPanel_BP_C::ExecuteUbergraph_ManeaterMapPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterMapPanel_BP.ManeaterMapPanel_BP_C.ExecuteUbergraph_ManeaterMapPanel_BP");

	UManeaterMapPanel_BP_C_ExecuteUbergraph_ManeaterMapPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
