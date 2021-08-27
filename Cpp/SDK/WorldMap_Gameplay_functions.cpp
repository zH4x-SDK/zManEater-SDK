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

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWorldMap_Gameplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Gameplay.WorldMap_Gameplay_C.ReceiveBeginPlay");

	AWorldMap_Gameplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Gameplay.WorldMap_Gameplay_C.BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Gameplay_C::BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Gameplay.WorldMap_Gameplay_C.BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	AWorldMap_Gameplay_C_BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Gameplay.WorldMap_Gameplay_C.ActorFractured
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Gameplay_C::ActorFractured(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Gameplay.WorldMap_Gameplay_C.ActorFractured");

	AWorldMap_Gameplay_C_ActorFractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Gameplay.WorldMap_Gameplay_C.TutorialTriggered
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FME_TutorialEvent       EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AWorldMap_Gameplay_C::TutorialTriggered(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Gameplay.WorldMap_Gameplay_C.TutorialTriggered");

	AWorldMap_Gameplay_C_TutorialTriggered_Params params;
	params.TutorialEventId = TutorialEventId;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Gameplay.WorldMap_Gameplay_C.TutorialGateBrokenEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Gameplay_C::TutorialGateBrokenEvent(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Gameplay.WorldMap_Gameplay_C.TutorialGateBrokenEvent");

	AWorldMap_Gameplay_C_TutorialGateBrokenEvent_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WorldMap_Gameplay.WorldMap_Gameplay_C.ExecuteUbergraph_WorldMap_Gameplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWorldMap_Gameplay_C::ExecuteUbergraph_WorldMap_Gameplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WorldMap_Gameplay.WorldMap_Gameplay_C.ExecuteUbergraph_WorldMap_Gameplay");

	AWorldMap_Gameplay_C_ExecuteUbergraph_WorldMap_Gameplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
