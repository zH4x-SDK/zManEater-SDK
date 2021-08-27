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

// Function Evolution_Tooltip_StatContainer_BP.Evolution_Tooltip_StatContainer_BP_C.SetStatData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   StatValue                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UEvolution_Tooltip_StatContainer_BP_C::SetStatData(const struct FText& StatName, const struct FText& StatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_StatContainer_BP.Evolution_Tooltip_StatContainer_BP_C.SetStatData");

	UEvolution_Tooltip_StatContainer_BP_C_SetStatData_Params params;
	params.StatName = StatName;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
