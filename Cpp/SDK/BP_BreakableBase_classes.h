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

// BlueprintGeneratedClass BP_BreakableBase.BP_BreakableBase_C
// 0x0059 (FullSize[0x0401] - InheritedSize[0x03A8])
class ABP_BreakableBase_C : public AME_DestructibleActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowOnMap;                                                // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DON5[0x7];                                     // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     HUD;                                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProjectedIconCache                         IconData;                                                  // 0x03C8(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               ShowInWorldWidget_;                                        // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VVEB[0x3];                                     // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WidgetIndex;                                               // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTutorialGate_;                                           // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableBase.BP_BreakableBase_C");
		return ptr;
	}



	bool GetMapWidgetEnabled();
	class UMaterialInterface* GetMapWidgetMaterial();
	struct FText GetMapDescriptionText();
	bool ShouldClampToEdgeOfMap();
	struct FText GetMapDisplayName();
	class UTexture2D* GetMapWidgetIcon();
	int GetMapWidgetPriority();
	struct FVector2D GetMapWidgetSize();
	UMG_ESlateVisibility GetMapWidgetVisibility();
	void SetWidgetIndex(int WidgetIndex);
	class UWidgetComponent* GetSonarWidget(bool bForce);
	void HideInWorldWidget();
	void ShowInWorldWidget(int WidgetIndex);
	void RevealOnMap();
	void OnWidgetMouseDown(class UUserWidget* Widget, const struct FPointerEvent& MouseEvent);
	void ReceiveBeginPlay();
	void OnPingedByPlayerSonar();
	void GrateFractured(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void BindGrateFractured();
	void ExecuteUbergraph_BP_BreakableBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
