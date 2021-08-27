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

// Function GA_Bio-Electric_Body_AOE_T4.GA_Bio-Electric_Body_AOE_T4_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Bio_Electric_Body_AOE_T4_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bio-Electric_Body_AOE_T4.GA_Bio-Electric_Body_AOE_T4_C.K2_ActivateAbility");

	UGA_Bio_Electric_Body_AOE_T4_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bio-Electric_Body_AOE_T4.GA_Bio-Electric_Body_AOE_T4_C.ExecuteUbergraph_GA_Bio-Electric_Body_AOE_T4
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGA_Bio_Electric_Body_AOE_T4_C::ExecuteUbergraph_GA_Bio_Electric_Body_AOE_T4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Bio-Electric_Body_AOE_T4.GA_Bio-Electric_Body_AOE_T4_C.ExecuteUbergraph_GA_Bio-Electric_Body_AOE_T4");

	UGA_Bio_Electric_Body_AOE_T4_C_ExecuteUbergraph_GA_Bio_Electric_Body_AOE_T4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
