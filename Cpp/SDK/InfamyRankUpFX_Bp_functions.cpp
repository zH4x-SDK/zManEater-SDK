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

// Function InfamyRankUpFX_Bp.InfamyRankUpFX_BP_C.PlayIntro
// (Public, BlueprintCallable, BlueprintEvent)
void UInfamyRankUpFX_BP_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function InfamyRankUpFX_Bp.InfamyRankUpFX_BP_C.PlayIntro");

	UInfamyRankUpFX_BP_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
