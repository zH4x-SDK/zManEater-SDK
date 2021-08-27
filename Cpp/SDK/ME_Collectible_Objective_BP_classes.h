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

// BlueprintGeneratedClass ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C
// 0x0034 (FullSize[0x0324] - InheritedSize[0x02F0])
class AME_Collectible_Objective_BP_C : public AME_CollectableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0300(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                                // 0x0308(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                WidgetIndex;                                               // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ME_Sky_PreviewRegion_EME_Sky_PreviewRegion> Region;                                                    // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActive;                                                 // 0x0315(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ME_Collectible_DebugSharkList_EME_Collectible_DebugSharkList> MinSharkHeight;                                            // 0x0316(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZQAL[0x1];                                     // 0x0317(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NavVector;                                                 // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C");
		return ptr;
	}



	void SetMaxSharkSize();
	void ShowRegionTexture();
	void DisableCollectible(bool SetHidden_);
	void EnableCollectible();
	void SetWidgetIndex(int WidgetIndex);
	class UWidgetComponent* GetSonarWidget(bool bForce);
	bool CanBeFocused();
	bool CanBeLockedOnTo();
	float GetMaxDistanceVisible();
	struct FVector GetDetectableComponentLocationOffset();
	class UPrimitiveComponent* GetDetectableComponent();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnPingedByPlayerSonar();
	void ExecuteUbergraph_ME_Collectible_Objective_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
