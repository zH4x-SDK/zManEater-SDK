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

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.HideGoreParts
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_HideGoreParts(class USkeletalMeshComponent* SkeletalMesh, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.HideGoreParts");

	UManeaterBlueprintStatics_C_HideGoreParts_Params params;
	params.SkeletalMesh = SkeletalMesh;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.TriggerApexCutscene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  AnimatingMesh                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*           Cutscene_Audio                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_TriggerApexCutscene(class USkeletalMeshComponent* AnimatingMesh, class UAkAudioEvent* Cutscene_Audio, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.TriggerApexCutscene");

	UManeaterBlueprintStatics_C_TriggerApexCutscene_Params params;
	params.AnimatingMesh = AnimatingMesh;
	params.Cutscene_Audio = Cutscene_Audio;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerSize
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrrentLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Size                           (Parm, OutParm)
void UManeaterBlueprintStatics_C::STATIC_GetSharkPlayerSize(class UObject* Context, int CurrrentLevel, class UObject* __WorldContext, struct FText* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerSize");

	UManeaterBlueprintStatics_C_GetSharkPlayerSize_Params params;
	params.Context = Context;
	params.CurrrentLevel = CurrrentLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetNutrientColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Maneater_ENutrientType> InNutrientType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetNutrientColor(TEnumAsByte<Maneater_ENutrientType> InNutrientType, class UObject* __WorldContext, struct FLinearColor* OutColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetNutrientColor");

	UManeaterBlueprintStatics_C_GetNutrientColor_Params params;
	params.InNutrientType = InNutrientType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.ToDistance
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   FormattedDistance              (Parm, OutParm)
void UManeaterBlueprintStatics_C::STATIC_ToDistance(float Distance, class UObject* __WorldContext, struct FText* FormattedDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.ToDistance");

	UManeaterBlueprintStatics_C_ToDistance_Params params;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedDistance != nullptr)
		*FormattedDistance = params.FormattedDistance;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.ToSpeed
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   FormattedSpped                 (Parm, OutParm)
void UManeaterBlueprintStatics_C::STATIC_ToSpeed(float Speed, class UObject* __WorldContext, struct FText* FormattedSpped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.ToSpeed");

	UManeaterBlueprintStatics_C_ToSpeed_Params params;
	params.Speed = Speed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedSpped != nullptr)
		*FormattedSpped = params.FormattedSpped;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetStrikeDamage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AME_AnimalCharacter*     InAnimal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   OutThrashDamage                (Parm, OutParm)
void UManeaterBlueprintStatics_C::STATIC_GetStrikeDamage(class AME_AnimalCharacter* InAnimal, class UObject* __WorldContext, struct FText* OutThrashDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetStrikeDamage");

	UManeaterBlueprintStatics_C_GetStrikeDamage_Params params;
	params.InAnimal = InAnimal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutThrashDamage != nullptr)
		*OutThrashDamage = params.OutThrashDamage;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetThrashDamage
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AME_AnimalCharacter*     InAnimal                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   OutThrashDamage                (Parm, OutParm)
void UManeaterBlueprintStatics_C::STATIC_GetThrashDamage(class AME_AnimalCharacter* InAnimal, class UObject* __WorldContext, struct FText* OutThrashDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetThrashDamage");

	UManeaterBlueprintStatics_C_GetThrashDamage_Params params;
	params.InAnimal = InAnimal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutThrashDamage != nullptr)
		*OutThrashDamage = params.OutThrashDamage;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetManeaterGameMode
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ManeaterGameMode_C*  GameMode                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetManeaterGameMode(class UObject* Context, class UObject* __WorldContext, class ABP_ManeaterGameMode_C** GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetManeaterGameMode");

	UManeaterBlueprintStatics_C_GetManeaterGameMode_Params params;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameMode != nullptr)
		*GameMode = params.GameMode;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerPawn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerShark_C*       SharkPlayer                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetSharkPlayerPawn(class UObject* Context, class UObject* __WorldContext, class ABP_PlayerShark_C** SharkPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerPawn");

	UManeaterBlueprintStatics_C_GetSharkPlayerPawn_Params params;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SharkPlayer != nullptr)
		*SharkPlayer = params.SharkPlayer;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetMapColor_Background
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetMapColor_Background(class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetMapColor_Background");

	UManeaterBlueprintStatics_C_GetMapColor_Background_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetUIColor_Secondary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetUIColor_Secondary(class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetUIColor_Secondary");

	UManeaterBlueprintStatics_C_GetUIColor_Secondary_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetUIColor_Primary
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetUIColor_Primary(class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetUIColor_Primary");

	UManeaterBlueprintStatics_C_GetUIColor_Primary_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerSharkController_C* PlayerSharkController          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetSharkPlayerController(class UObject* Context, class UObject* __WorldContext, class ABP_PlayerSharkController_C** PlayerSharkController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerController");

	UManeaterBlueprintStatics_C_GetSharkPlayerController_Params params;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerSharkController != nullptr)
		*PlayerSharkController = params.PlayerSharkController;

}


// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerState
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerSharkState_C*  SharkPlayerState               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UManeaterBlueprintStatics_C::STATIC_GetSharkPlayerState(class UObject* Context, class UObject* __WorldContext, class ABP_PlayerSharkState_C** SharkPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerState");

	UManeaterBlueprintStatics_C_GetSharkPlayerState_Params params;
	params.Context = Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SharkPlayerState != nullptr)
		*SharkPlayerState = params.SharkPlayerState;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
