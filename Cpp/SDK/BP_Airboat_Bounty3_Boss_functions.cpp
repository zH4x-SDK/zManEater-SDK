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

// Function BP_Airboat_Bounty3_Boss.BP_Airboat_Bounty3_Boss_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Airboat_Bounty3_Boss_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Airboat_Bounty3_Boss.BP_Airboat_Bounty3_Boss_C.BindBossHunterSeqCamera");

	ABP_Airboat_Bounty3_Boss_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Airboat_Bounty3_Boss.BP_Airboat_Bounty3_Boss_C.ExecuteUbergraph_BP_Airboat_Bounty3_Boss
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Airboat_Bounty3_Boss_C::ExecuteUbergraph_BP_Airboat_Bounty3_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Airboat_Bounty3_Boss.BP_Airboat_Bounty3_Boss_C.ExecuteUbergraph_BP_Airboat_Bounty3_Boss");

	ABP_Airboat_Bounty3_Boss_C_ExecuteUbergraph_BP_Airboat_Bounty3_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
