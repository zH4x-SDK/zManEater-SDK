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

// BlueprintGeneratedClass BP_Boss_Support_Boat.BP_Boss_Support_Boat_C
// 0x003C (FullSize[0x0D18] - InheritedSize[0x0CDC])
class ABP_Boss_Support_Boat_C : public ABP_Airboat_Bounty_Shotguns_C
{
public:
	unsigned char                                      UnknownData_10HS[0x4];                                     // 0x0CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Boss1Phase1CineTriggered;                                  // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G5JK[0x3];                                     // 0x0CE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PhasePlayerLoc;                                            // 0x0CEC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    PhasePlayerRot;                                            // 0x0CF8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WNLC[0x4];                                     // 0x0D04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BossClass;                                                 // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Boss1Phase2CineTriggered;                                  // 0x0D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Boss3hase2CineTriggered;                                   // 0x0D11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Boss3hase3CineTriggered;                                   // 0x0D12(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H8DR[0x1];                                     // 0x0D13(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PhaseToCheck;                                              // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Boss_Support_Boat.BP_Boss_Support_Boat_C");
		return ptr;
	}



	void CheckBossCinematicStarted(int PhaseToCheck, bool* CineExists);
	void ReceiveBeginPlay();
	void OnBossCinematicStarted();
	void PlayCinematic(class UCameraAnim* CameraAnim, class UMovieSceneSequencePlayer* MovieSceneSequencePlayer);
	void OnCinematicComplete();
	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_Boss_Support_Boat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
