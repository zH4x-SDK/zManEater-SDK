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

// BlueprintGeneratedClass BPFunctions_LIB.BPFunctions_LIB_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPFunctions_LIB_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFunctions_LIB.BPFunctions_LIB_C");
		return ptr;
	}



	void STATIC_CheckEnemyMassVSPlayer(TEnumAsByte<Maneater_EAIThreatAlertState> Selection, class AME_Character* AnimalCharacter, class AME_PlayerSharkCharacter* PlayerShark, class UObject* __WorldContext, bool* IsLargerThanPlayer_);
	void STATIC_TogglePlayerCinematic(bool SetTo, class APlayerController** PlayerController, class UCameraAnim* Camera_Animation, class UAnimMontage* Montage, class ULevelSequence* LevelSequence, class UObject* __WorldContext, float* Anim_Montge, class ULevelSequencePlayer** Return_Sequence_Actor);
	void STATIC_ToggleCinematicMode(bool CinematicModeOn_, bool HideCharacter_, bool ShouldPopViewsOnToggleOff_, class UObject* WorldContextObject, bool KillMovement, class UObject* __WorldContext);
	void STATIC_PushCinematicNameView(const struct FText& FirstName, const struct FText& LastName, class UObject* WorldContextObject, bool AlignTextRight_, class UObject* __WorldContext);
	void STATIC_SpawnEmitterLandmark(class UMovieSceneSequencePlayer* Target, const struct FMovieSceneObjectBindingID& ObjectBinding, class UObject* __WorldContext);
	void STATIC_SplitActorsIntoArrays(class UClass* Actor, int ActorsPerGroup, class UObject* __WorldContext, TArray<struct FActorParce_ST>* GroupedArrays);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
