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

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* APetesHandGoreChunk_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.GetDetectableComponent");

	APetesHandGoreChunk_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.HideInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void APetesHandGoreChunk_BP_C::HideInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.HideInWorldWidget");

	APetesHandGoreChunk_BP_C_HideInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ShowInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void APetesHandGoreChunk_BP_C::ShowInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ShowInWorldWidget");

	APetesHandGoreChunk_BP_C_ShowInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnGrabPointConsumed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ConsumingAnimal                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FThrashGrabPoint        ConsumedGrabPoint              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GoreCapBoneName                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APetesHandGoreChunk_BP_C::OnGrabPointConsumed(class AME_AnimalCharacter* ConsumingAnimal, const struct FThrashGrabPoint& ConsumedGrabPoint, const struct FName& GoreCapBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnGrabPointConsumed");

	APetesHandGoreChunk_BP_C_OnGrabPointConsumed_Params params;
	params.ConsumingAnimal = ConsumingAnimal;
	params.ConsumedGrabPoint = ConsumedGrabPoint;
	params.GoreCapBoneName = GoreCapBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APetesHandGoreChunk_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ReceiveTick");

	APetesHandGoreChunk_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnConsumedWhole
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ConsumingAnimal                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APetesHandGoreChunk_BP_C::OnConsumedWhole(class AME_AnimalCharacter* ConsumingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnConsumedWhole");

	APetesHandGoreChunk_BP_C_OnConsumedWhole_Params params;
	params.ConsumingAnimal = ConsumingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnCinematicModeChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCinematicMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APetesHandGoreChunk_BP_C::OnCinematicModeChanged_Event_1(bool bCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnCinematicModeChanged_Event_1");

	APetesHandGoreChunk_BP_C_OnCinematicModeChanged_Event_1_Params params;
	params.bCinematicMode = bCinematicMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APetesHandGoreChunk_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ReceiveBeginPlay");

	APetesHandGoreChunk_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ExecuteUbergraph_PetesHandGoreChunk_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APetesHandGoreChunk_BP_C::ExecuteUbergraph_PetesHandGoreChunk_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ExecuteUbergraph_PetesHandGoreChunk_BP");

	APetesHandGoreChunk_BP_C_ExecuteUbergraph_PetesHandGoreChunk_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
