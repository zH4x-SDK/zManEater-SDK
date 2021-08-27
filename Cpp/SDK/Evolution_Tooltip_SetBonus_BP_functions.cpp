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

// Function Evolution_Tooltip_SetBonus_BP.Evolution_Tooltip_SetBonus_BP_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// Maneater_EEvolutionSetType     SetType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolution_Tooltip_SetBonus_BP_C::SetData(Maneater_EEvolutionSetType SetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Tooltip_SetBonus_BP.Evolution_Tooltip_SetBonus_BP_C.SetData");

	UEvolution_Tooltip_SetBonus_BP_C_SetData_Params params;
	params.SetType = SetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
