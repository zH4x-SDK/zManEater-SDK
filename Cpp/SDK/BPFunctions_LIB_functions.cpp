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

// Function BPFunctions_LIB.BPFunctions_LIB_C.CheckEnemyMassVSPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EAIThreatAlertState> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AME_Character*           AnimalCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AME_PlayerSharkCharacter* PlayerShark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsLargerThanPlayer_            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPFunctions_LIB_C::STATIC_CheckEnemyMassVSPlayer(TEnumAsByte<Maneater_EAIThreatAlertState> Selection, class AME_Character* AnimalCharacter, class AME_PlayerSharkCharacter* PlayerShark, class UObject* __WorldContext, bool* IsLargerThanPlayer_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFunctions_LIB.BPFunctions_LIB_C.CheckEnemyMassVSPlayer");

	UBPFunctions_LIB_C_CheckEnemyMassVSPlayer_Params params;
	params.Selection = Selection;
	params.AnimalCharacter = AnimalCharacter;
	params.PlayerShark = PlayerShark;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLargerThanPlayer_ != nullptr)
		*IsLargerThanPlayer_ = params.IsLargerThanPlayer_;

}


// Function BPFunctions_LIB.BPFunctions_LIB_C.TogglePlayerCinematic
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetTo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraAnim*             Camera_Animation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Anim_Montge                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*    Return_Sequence_Actor          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFunctions_LIB_C::STATIC_TogglePlayerCinematic(bool SetTo, class APlayerController** PlayerController, class UCameraAnim* Camera_Animation, class UAnimMontage* Montage, class ULevelSequence* LevelSequence, class UObject* __WorldContext, float* Anim_Montge, class ULevelSequencePlayer** Return_Sequence_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFunctions_LIB.BPFunctions_LIB_C.TogglePlayerCinematic");

	UBPFunctions_LIB_C_TogglePlayerCinematic_Params params;
	params.SetTo = SetTo;
	params.Camera_Animation = Camera_Animation;
	params.Montage = Montage;
	params.LevelSequence = LevelSequence;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerController != nullptr)
		*PlayerController = params.PlayerController;
	if (Anim_Montge != nullptr)
		*Anim_Montge = params.Anim_Montge;
	if (Return_Sequence_Actor != nullptr)
		*Return_Sequence_Actor = params.Return_Sequence_Actor;

}


// Function BPFunctions_LIB.BPFunctions_LIB_C.ToggleCinematicMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CinematicModeOn_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HideCharacter_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShouldPopViewsOnToggleOff_     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 WorldContextObject             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           KillMovement                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFunctions_LIB_C::STATIC_ToggleCinematicMode(bool CinematicModeOn_, bool HideCharacter_, bool ShouldPopViewsOnToggleOff_, class UObject* WorldContextObject, bool KillMovement, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFunctions_LIB.BPFunctions_LIB_C.ToggleCinematicMode");

	UBPFunctions_LIB_C_ToggleCinematicMode_Params params;
	params.CinematicModeOn_ = CinematicModeOn_;
	params.HideCharacter_ = HideCharacter_;
	params.ShouldPopViewsOnToggleOff_ = ShouldPopViewsOnToggleOff_;
	params.WorldContextObject = WorldContextObject;
	params.KillMovement = KillMovement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPFunctions_LIB.BPFunctions_LIB_C.PushCinematicNameView
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FirstName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   LastName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 WorldContextObject             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AlignTextRight_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFunctions_LIB_C::STATIC_PushCinematicNameView(const struct FText& FirstName, const struct FText& LastName, class UObject* WorldContextObject, bool AlignTextRight_, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFunctions_LIB.BPFunctions_LIB_C.PushCinematicNameView");

	UBPFunctions_LIB_C_PushCinematicNameView_Params params;
	params.FirstName = FirstName;
	params.LastName = LastName;
	params.WorldContextObject = WorldContextObject;
	params.AlignTextRight_ = AlignTextRight_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPFunctions_LIB.BPFunctions_LIB_C.SpawnEmitterLandmark
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieSceneSequencePlayer* Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneObjectBindingID ObjectBinding                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPFunctions_LIB_C::STATIC_SpawnEmitterLandmark(class UMovieSceneSequencePlayer* Target, const struct FMovieSceneObjectBindingID& ObjectBinding, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFunctions_LIB.BPFunctions_LIB_C.SpawnEmitterLandmark");

	UBPFunctions_LIB_C_SpawnEmitterLandmark_Params params;
	params.Target = Target;
	params.ObjectBinding = ObjectBinding;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPFunctions_LIB.BPFunctions_LIB_C.SplitActorsIntoArrays
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActorsPerGroup                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActorParce_ST>  GroupedArrays                  (Parm, OutParm, HasGetValueTypeHash)
void UBPFunctions_LIB_C::STATIC_SplitActorsIntoArrays(class UClass* Actor, int ActorsPerGroup, class UObject* __WorldContext, TArray<struct FActorParce_ST>* GroupedArrays)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFunctions_LIB.BPFunctions_LIB_C.SplitActorsIntoArrays");

	UBPFunctions_LIB_C_SplitActorsIntoArrays_Params params;
	params.Actor = Actor;
	params.ActorsPerGroup = ActorsPerGroup;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GroupedArrays != nullptr)
		*GroupedArrays = params.GroupedArrays;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
