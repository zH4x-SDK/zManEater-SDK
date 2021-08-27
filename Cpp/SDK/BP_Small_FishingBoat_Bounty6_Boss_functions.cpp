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

// Function BP_Small_FishingBoat_Bounty6_Boss.BP_Small_FishingBoat_Bounty6_Boss_C.BindBossHunterSeqCamera
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Small_FishingBoat_Bounty6_Boss_C::BindBossHunterSeqCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Small_FishingBoat_Bounty6_Boss.BP_Small_FishingBoat_Bounty6_Boss_C.BindBossHunterSeqCamera");

	ABP_Small_FishingBoat_Bounty6_Boss_C_BindBossHunterSeqCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Small_FishingBoat_Bounty6_Boss.BP_Small_FishingBoat_Bounty6_Boss_C.ExecuteUbergraph_BP_Small_FishingBoat_Bounty6_Boss
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Small_FishingBoat_Bounty6_Boss_C::ExecuteUbergraph_BP_Small_FishingBoat_Bounty6_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Small_FishingBoat_Bounty6_Boss.BP_Small_FishingBoat_Bounty6_Boss_C.ExecuteUbergraph_BP_Small_FishingBoat_Bounty6_Boss");

	ABP_Small_FishingBoat_Bounty6_Boss_C_ExecuteUbergraph_BP_Small_FishingBoat_Bounty6_Boss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
