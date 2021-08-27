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

// Function TVShowLower3rd_BP.TVShowLower3rd_BP_C.PlayTVLower3rd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ShipName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   JobText                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UTVShowLower3rd_BP_C::PlayTVLower3rd(const struct FText& ShipName, const struct FText& CharacterName, const struct FText& JobText)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowLower3rd_BP.TVShowLower3rd_BP_C.PlayTVLower3rd");

	UTVShowLower3rd_BP_C_PlayTVLower3rd_Params params;
	params.ShipName = ShipName;
	params.CharacterName = CharacterName;
	params.JobText = JobText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVShowLower3rd_BP.TVShowLower3rd_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTVShowLower3rd_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowLower3rd_BP.TVShowLower3rd_BP_C.Construct");

	UTVShowLower3rd_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVShowLower3rd_BP.TVShowLower3rd_BP_C.ExecuteUbergraph_TVShowLower3rd_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTVShowLower3rd_BP_C::ExecuteUbergraph_TVShowLower3rd_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowLower3rd_BP.TVShowLower3rd_BP_C.ExecuteUbergraph_TVShowLower3rd_BP");

	UTVShowLower3rd_BP_C_ExecuteUbergraph_TVShowLower3rd_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
