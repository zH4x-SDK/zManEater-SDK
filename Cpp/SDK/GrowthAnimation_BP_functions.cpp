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

// Function GrowthAnimation_BP.GrowthAnimation_BP_C.GrowthIntro
// (Public, BlueprintCallable, BlueprintEvent)
void UGrowthAnimation_BP_C::GrowthIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrowthAnimation_BP.GrowthAnimation_BP_C.GrowthIntro");

	UGrowthAnimation_BP_C_GrowthIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
