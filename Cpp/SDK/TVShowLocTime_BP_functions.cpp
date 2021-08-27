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

// Function TVShowLocTime_BP.TVShowLocTime_BP_C.PlayTVTimeLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UTVShowLocTime_BP_C::PlayTVTimeLocation(const struct FText& Location, const struct FText& TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowLocTime_BP.TVShowLocTime_BP_C.PlayTVTimeLocation");

	UTVShowLocTime_BP_C_PlayTVTimeLocation_Params params;
	params.Location = Location;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVShowLocTime_BP.TVShowLocTime_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTVShowLocTime_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowLocTime_BP.TVShowLocTime_BP_C.Construct");

	UTVShowLocTime_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVShowLocTime_BP.TVShowLocTime_BP_C.ExecuteUbergraph_TVShowLocTime_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTVShowLocTime_BP_C::ExecuteUbergraph_TVShowLocTime_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TVShowLocTime_BP.TVShowLocTime_BP_C.ExecuteUbergraph_TVShowLocTime_BP");

	UTVShowLocTime_BP_C_ExecuteUbergraph_TVShowLocTime_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
