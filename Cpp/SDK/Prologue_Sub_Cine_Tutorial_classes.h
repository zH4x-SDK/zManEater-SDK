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

// BlueprintGeneratedClass Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class APrologue_Sub_Cine_Tutorial_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_PlayerSharkCharacter*                    PlayerShark;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                            IntroCinematic_UnbreakableGrate_SM_00_ExecuteUbergraph_Prologue_Sub_Cine_Tutorial_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      PawnGoesHere_ExecuteUbergraph_Prologue_Sub_Cine_Tutorial_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Sub_Cine_Tutorial.Prologue_Sub_Cine_Tutorial_C");
		return ptr;
	}



	void IntroAnimationComplete();
	void ReceiveBeginPlay();
	void AdvancedToNextEpisodeDelegate_Event_1(int CurrentStoryEventIndex);
	void ExecuteUbergraph_Prologue_Sub_Cine_Tutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
