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

// Function WorldMap_Regions.WorldMap_Regions_C.BindRegionTransitions
// (BlueprintCallable, BlueprintEvent)
void AWorldMap_Regions_C::BindRegionTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Regions.WorldMap_Regions_C.BindRegionTransitions");

	AWorldMap_Regions_C_BindRegionTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Regions.WorldMap_Regions_C.EnteredDMI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Regions_C::EnteredDMI(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Regions.WorldMap_Regions_C.EnteredDMI");

	AWorldMap_Regions_C_EnteredDMI_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Regions.WorldMap_Regions_C.EnteredIC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Regions_C::EnteredIC(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Regions.WorldMap_Regions_C.EnteredIC");

	AWorldMap_Regions_C_EnteredIC_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Regions.WorldMap_Regions_C.EnteredWB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Regions_C::EnteredWB(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Regions.WorldMap_Regions_C.EnteredWB");

	AWorldMap_Regions_C_EnteredWB_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Regions.WorldMap_Regions_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWorldMap_Regions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Regions.WorldMap_Regions_C.ReceiveBeginPlay");

	AWorldMap_Regions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Regions.WorldMap_Regions_C.ExecuteUbergraph_WorldMap_Regions
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Regions_C::ExecuteUbergraph_WorldMap_Regions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Regions.WorldMap_Regions_C.ExecuteUbergraph_WorldMap_Regions");

	AWorldMap_Regions_C_ExecuteUbergraph_WorldMap_Regions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
