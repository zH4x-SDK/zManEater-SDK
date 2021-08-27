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

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.HideGoreParts
struct UManeaterBlueprintStatics_C_HideGoreParts_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.TriggerApexCutscene
struct UManeaterBlueprintStatics_C_TriggerApexCutscene_Params
{
	class USkeletalMeshComponent*                      AnimatingMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               Cutscene_Audio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerSize
struct UManeaterBlueprintStatics_C_GetSharkPlayerSize_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrrentLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Size;                                                      // (Parm, OutParm)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetNutrientColor
struct UManeaterBlueprintStatics_C_GetNutrientColor_Params
{
	TEnumAsByte<Maneater_ENutrientType>                InNutrientType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutColor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.ToDistance
struct UManeaterBlueprintStatics_C_ToDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FormattedDistance;                                         // (Parm, OutParm)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.ToSpeed
struct UManeaterBlueprintStatics_C_ToSpeed_Params
{
	float                                              Speed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FormattedSpped;                                            // (Parm, OutParm)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetStrikeDamage
struct UManeaterBlueprintStatics_C_GetStrikeDamage_Params
{
	class AME_AnimalCharacter*                         InAnimal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutThrashDamage;                                           // (Parm, OutParm)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetThrashDamage
struct UManeaterBlueprintStatics_C_GetThrashDamage_Params
{
	class AME_AnimalCharacter*                         InAnimal;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutThrashDamage;                                           // (Parm, OutParm)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetManeaterGameMode
struct UManeaterBlueprintStatics_C_GetManeaterGameMode_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ManeaterGameMode_C*                      GameMode;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerPawn
struct UManeaterBlueprintStatics_C_GetSharkPlayerPawn_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerShark_C*                           SharkPlayer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetMapColor_Background
struct UManeaterBlueprintStatics_C_GetMapColor_Background_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetUIColor_Secondary
struct UManeaterBlueprintStatics_C_GetUIColor_Secondary_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetUIColor_Primary
struct UManeaterBlueprintStatics_C_GetUIColor_Primary_Params
{
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerController
struct UManeaterBlueprintStatics_C_GetSharkPlayerController_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSharkController_C*                 PlayerSharkController;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterBlueprintStatics.ManeaterBlueprintStatics_C.GetSharkPlayerState
struct UManeaterBlueprintStatics_C_GetSharkPlayerState_Params
{
	class UObject*                                     Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSharkState_C*                      SharkPlayerState;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
