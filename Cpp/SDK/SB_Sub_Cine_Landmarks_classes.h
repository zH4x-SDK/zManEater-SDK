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

// BlueprintGeneratedClass SB_Sub_Cine_Landmarks.SB_Sub_Cine_Landmarks_C
// 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
class ASB_Sub_Cine_Landmarks_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ALevelSequenceActor*                         Cine_Landmark_SB_ToyTime_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_DoesItFloat_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_GoodFind_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_Saviors_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_BigFin_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_WeAllFloat_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_VandalismMasterpiece_SEQ_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_SB_QuickTurn_SEQ_2_ExecuteUbergraph_SB_Sub_Cine_Landmarks_RefProperty; // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SB_Sub_Cine_Landmarks.SB_Sub_Cine_Landmarks_C");
		return ptr;
	}



	void PlayCinematic(const struct FName& ObjectiveName);
	void StartCinematicMode();
	void StopCinematicMode();
	void ExecuteUbergraph_SB_Sub_Cine_Landmarks(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
