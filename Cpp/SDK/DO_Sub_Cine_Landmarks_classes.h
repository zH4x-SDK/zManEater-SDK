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

// BlueprintGeneratedClass DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C
// 0x0050 (FullSize[0x0278] - InheritedSize[0x0228])
class ADO_Sub_Cine_Landmarks_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ALevelSequenceActor*                         Cine_Landmark_DO_Museum_SEQ_2_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_SeaSponge_SEQ_5_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_SpaceFairing_SEQ2_2_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_ForgottenWar_SEQ_2_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_Kaiju_SEQ_5_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_Replica_SEQ_9_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_MyLawn_SEQ_12_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_GoneFishin_SEQ_15_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                         Cine_Landmark_DO_Treasure_SEQ_2_ExecuteUbergraph_DO_Sub_Cine_Landmarks_RefProperty; // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C");
		return ptr;
	}



	void PlayCinematic(const struct FName& ObjectiveName);
	void StartCinematicMode();
	void StopCinematicMode();
	void ExecuteUbergraph_DO_Sub_Cine_Landmarks(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
