#pragma once

// Name: ManEater, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.ReceiveBeginPlay
struct AWorldMap_Gameplay_C_ReceiveBeginPlay_Params
{
};

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct AWorldMap_Gameplay_C_BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.ActorFractured
struct AWorldMap_Gameplay_C_ActorFractured_Params
{
	struct FVector                                     HitPoint;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.TutorialTriggered
struct AWorldMap_Gameplay_C_TutorialTriggered_Params
{
	TEnumAsByte<Maneater_ETutorialEventId>             TutorialEventId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_TutorialEvent                           EventData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.TutorialGateBrokenEvent
struct AWorldMap_Gameplay_C_TutorialGateBrokenEvent_Params
{
	struct FVector                                     HitPoint;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WorldMap_Gameplay.WorldMap_Gameplay_C.ExecuteUbergraph_WorldMap_Gameplay
struct AWorldMap_Gameplay_C_ExecuteUbergraph_WorldMap_Gameplay_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
