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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldMap_Gameplay.WorldMap_Gameplay_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class AWorldMap_Gameplay_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_BreakableGate_Adult_C*                   BP_BreakableGate_Adult4_2_ExecuteUbergraph_WorldMap_Gameplay_RefProperty; // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATriggerBox*                                 TriggerBox_3_ExecuteUbergraph_WorldMap_Gameplay_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                            MeetPeteTeleportLocation_ExecuteUbergraph_WorldMap_Gameplay_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_Gameplay.WorldMap_Gameplay_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__TriggerBox_3_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ActorFractured(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void TutorialTriggered(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData);
	void TutorialGateBrokenEvent(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_WorldMap_Gameplay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
