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

// Function TVShowHashtag_BP.TVShowHashtag_BP_C.TVShowHashtagAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   hashtagtext                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UTVShowHashtag_BP_C::TVShowHashtagAnimation(const struct FText& hashtagtext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowHashtag_BP.TVShowHashtag_BP_C.TVShowHashtagAnimation");

	UTVShowHashtag_BP_C_TVShowHashtagAnimation_Params params;
	params.hashtagtext = hashtagtext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
