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

// BlueprintGeneratedClass Prologue_Sub_TutorialBlocking.Prologue_Sub_TutorialBlocking_C
// 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
class APrologue_Sub_TutorialBlocking_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_PlayerObjectiveManager*                  ObjectiveManager;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Tutorial_Objective;                                        // 0x0238(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	Maneater_EObjectiveState                           ObjectiveState;                                            // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D5LF[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATriggerVolume*                              PRO_TerrorizeTrigger_ExecuteUbergraph_Prologue_Sub_TutorialBlocking_RefProperty; // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Sub_TutorialBlocking.Prologue_Sub_TutorialBlocking_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void GetObjectiveManager();
	void BindObjectiveStarted();
	void StateChanged(class UME_PlayerObjective* PlayerObjective, Maneater_EObjectiveState NewState);
	void BndEvt__PRO_TerrorizeTrigger_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void SweepTriggerVolume();
	void Load_blocking_LEvel();
	void BreakOutOfSweep();
	void ExecuteUbergraph_Prologue_Sub_TutorialBlocking(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
