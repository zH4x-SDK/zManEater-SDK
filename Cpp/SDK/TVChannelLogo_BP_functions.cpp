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

// Function TVChannelLogo_BP.TVChannelLogo_BP_C.PlayTvChannelLogo
// (Public, BlueprintCallable, BlueprintEvent)
void UTVChannelLogo_BP_C::PlayTvChannelLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVChannelLogo_BP.TVChannelLogo_BP_C.PlayTvChannelLogo");

	UTVChannelLogo_BP_C_PlayTvChannelLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
