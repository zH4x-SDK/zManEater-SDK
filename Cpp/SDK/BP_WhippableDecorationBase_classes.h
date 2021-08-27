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

// BlueprintGeneratedClass BP_WhippableDecorationBase.BP_WhippableDecorationBase_C
// 0x0014 (FullSize[0x038C] - InheritedSize[0x0378])
class ABP_WhippableDecorationBase_C : public AME_WhippableActorBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                WidgetIndex;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WhippableDecorationBase.BP_WhippableDecorationBase_C");
		return ptr;
	}



	void SetWidgetIndex(int WidgetIndex);
	bool CanBeFocused();
	bool CanBeLockedOnTo();
	class UPrimitiveComponent* GetDetectableComponent();
	struct FVector GetDetectableComponentLocationOffset();
	int GetFocusPriority();
	struct FText GetFriendlyName();
	float GetMaxDistanceVisible();
	class UWidgetComponent* GetSonarWidget(bool bForce);
	class UClass* GetWhipShotImpactEffect();
	bool CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ReceiveBeginPlay();
	void OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex);
	void ExecuteUbergraph_BP_WhippableDecorationBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
