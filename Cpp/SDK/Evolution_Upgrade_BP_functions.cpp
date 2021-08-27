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

// Function Evolution_Upgrade_BP.Evolution_Upgrade_BP_C.ConstructTooltip
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UME_PlayerEvolution*     Evolution                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEvolutionData          EvolutionData                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEvolutionData          UpgradedEvolutionData          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UEvolution_Upgrade_BP_C::ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, const struct FEvolutionData& UpgradedEvolutionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Upgrade_BP.Evolution_Upgrade_BP_C.ConstructTooltip");

	UEvolution_Upgrade_BP_C_ConstructTooltip_Params params;
	params.Evolution = Evolution;
	params.EvolutionData = EvolutionData;
	params.UpgradedEvolutionData = UpgradedEvolutionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Evolution_Upgrade_BP.Evolution_Upgrade_BP_C.ExecuteUbergraph_Evolution_Upgrade_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEvolution_Upgrade_BP_C::ExecuteUbergraph_Evolution_Upgrade_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Evolution_Upgrade_BP.Evolution_Upgrade_BP_C.ExecuteUbergraph_Evolution_Upgrade_BP");

	UEvolution_Upgrade_BP_C_ExecuteUbergraph_Evolution_Upgrade_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
