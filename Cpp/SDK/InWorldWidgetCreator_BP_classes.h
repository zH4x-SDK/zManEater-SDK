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

// BlueprintGeneratedClass InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C
// 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
class AInWorldWidgetCreator_BP_C : public AME_InWorldWidgetCreator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                StepIndexForEnable;                                        // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActiveWidgetIndex;                                         // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ObjectiveWidgetType;                                       // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverwriteObjIndex_;                                        // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G4L2[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NavVector;                                                 // 0x0264(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InWorldWidgetCreator_BP.InWorldWidgetCreator_BP_C");
		return ptr;
	}



	void GetWidgetAsObjectiveIcon(class UInWorldObjectiveIconsWidget_BP_C** ObjectiveIconsWidget);
	class UPrimitiveComponent* GetDetectableComponent();
	class UWidgetComponent* GetSonarWidget(bool bForce);
	void HideInWorldWidget();
	void ShowInWorldWidget();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void GetTutManager();
	void OnTutorialObjectiveAdded_Event_1(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData);
	void OnPingedByPlayerSonar();
	void FirstBossEvent();
	void SetActiveIndexFromObjective(class UME_PlayerObjective* PlayerObjective);
	void ExecuteUbergraph_InWorldWidgetCreator_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
