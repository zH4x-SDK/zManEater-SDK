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

// Function InfamyReward_BP.InfamyReward_BP_C.HideDescription
// (Public, BlueprintCallable, BlueprintEvent)
void UInfamyReward_BP_C::HideDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyReward_BP.InfamyReward_BP_C.HideDescription");

	UInfamyReward_BP_C_HideDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
