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

// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterCinematicView_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Tick");

	UManeaterCinematicView_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UManeaterCinematicView_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Construct");

	UManeaterCinematicView_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTVShowLower3rd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ShipName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ChracterName                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   JobText                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UManeaterCinematicView_BP_C::PlayTVShowLower3rd(const struct FText& ShipName, const struct FText& ChracterName, const struct FText& JobText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTVShowLower3rd");

	UManeaterCinematicView_BP_C_PlayTVShowLower3rd_Params params;
	params.ShipName = ShipName;
	params.ChracterName = ChracterName;
	params.JobText = JobText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayHashTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   hashtagtext                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UManeaterCinematicView_BP_C::PlayHashTag(const struct FText& hashtagtext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayHashTag");

	UManeaterCinematicView_BP_C_PlayHashTag_Params params;
	params.hashtagtext = hashtagtext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTVShowLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Location                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UManeaterCinematicView_BP_C::PlayTVShowLocation(const struct FText& Location, const struct FText& TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTVShowLocation");

	UManeaterCinematicView_BP_C_PlayTVShowLocation_Params params;
	params.Location = Location;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTvShowBug
// (BlueprintCallable, BlueprintEvent)
void UManeaterCinematicView_BP_C::PlayTvShowBug()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTvShowBug");

	UManeaterCinematicView_BP_C_PlayTvShowBug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.RollCredits
// (BlueprintCallable, BlueprintEvent)
void UManeaterCinematicView_BP_C::RollCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.RollCredits");

	UManeaterCinematicView_BP_C_RollCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTvChannelLogo
// (BlueprintCallable, BlueprintEvent)
void UManeaterCinematicView_BP_C::PlayTvChannelLogo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.PlayTvChannelLogo");

	UManeaterCinematicView_BP_C_PlayTvChannelLogo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Reset
// (BlueprintCallable, BlueprintEvent)
void UManeaterCinematicView_BP_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.Reset");

	UManeaterCinematicView_BP_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.ExecuteUbergraph_ManeaterCinematicView_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterCinematicView_BP_C::ExecuteUbergraph_ManeaterCinematicView_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterCinematicView_BP.ManeaterCinematicView_BP_C.ExecuteUbergraph_ManeaterCinematicView_BP");

	UManeaterCinematicView_BP_C_ExecuteUbergraph_ManeaterCinematicView_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
