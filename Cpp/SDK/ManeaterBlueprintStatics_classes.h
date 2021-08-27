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

// BlueprintGeneratedClass ManeaterBlueprintStatics.ManeaterBlueprintStatics_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UManeaterBlueprintStatics_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ManeaterBlueprintStatics.ManeaterBlueprintStatics_C");
		return ptr;
	}



	void STATIC_HideGoreParts(class USkeletalMeshComponent* SkeletalMesh, class UObject* __WorldContext);
	void STATIC_TriggerApexCutscene(class USkeletalMeshComponent* AnimatingMesh, class UAkAudioEvent* Cutscene_Audio, class UObject* __WorldContext);
	void STATIC_GetSharkPlayerSize(class UObject* Context, int CurrrentLevel, class UObject* __WorldContext, struct FText* Size);
	void STATIC_GetNutrientColor(TEnumAsByte<Maneater_ENutrientType> InNutrientType, class UObject* __WorldContext, struct FLinearColor* OutColor);
	void STATIC_ToDistance(float Distance, class UObject* __WorldContext, struct FText* FormattedDistance);
	void STATIC_ToSpeed(float Speed, class UObject* __WorldContext, struct FText* FormattedSpped);
	void STATIC_GetStrikeDamage(class AME_AnimalCharacter* InAnimal, class UObject* __WorldContext, struct FText* OutThrashDamage);
	void STATIC_GetThrashDamage(class AME_AnimalCharacter* InAnimal, class UObject* __WorldContext, struct FText* OutThrashDamage);
	void STATIC_GetManeaterGameMode(class UObject* Context, class UObject* __WorldContext, class ABP_ManeaterGameMode_C** GameMode);
	void STATIC_GetSharkPlayerPawn(class UObject* Context, class UObject* __WorldContext, class ABP_PlayerShark_C** SharkPlayer);
	void STATIC_GetMapColor_Background(class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetUIColor_Secondary(class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetUIColor_Primary(class UObject* __WorldContext, struct FLinearColor* Color);
	void STATIC_GetSharkPlayerController(class UObject* Context, class UObject* __WorldContext, class ABP_PlayerSharkController_C** PlayerSharkController);
	void STATIC_GetSharkPlayerState(class UObject* Context, class UObject* __WorldContext, class ABP_PlayerSharkState_C** SharkPlayerState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
