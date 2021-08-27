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

// BlueprintGeneratedClass ME_Grotto_BP.ME_Grotto_BP_C
// 0x002A (FullSize[0x0292] - InheritedSize[0x0268])
class AME_Grotto_BP_C : public AME_Grotto
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowInWorldWidget;                                         // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DCZL[0x3];                                     // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WidgetIndex;                                               // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFromFastTravel_;                                         // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInGrotto_;                                               // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ME_Grotto_BP.ME_Grotto_BP_C");
		return ptr;
	}



	class UPrimitiveComponent* GetDetectableComponent();
	void SetWidgetIndex(int WidgetIndex);
	class UWidgetComponent* GetSonarWidget(bool bForce);
	void HideInWorldIcon();
	void ShowInWorldIcon();
	void TutorialTriggered(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData);
	void ReceiveBeginPlay();
	void OnGrottSpaceEntered();
	void OnGrottSpaceExited();
	void LoadingScreenComplete();
	void BindLoadingScreenComplete();
	void OnPingedByPlayerSonar();
	void ExecuteUbergraph_ME_Grotto_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
