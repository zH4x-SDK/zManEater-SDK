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

// BlueprintGeneratedClass BP_BodyBagNC.BP_BodyBagNC_C
// 0x0018 (FullSize[0x0388] - InheritedSize[0x0370])
class ABP_BodyBagNC_C : public AME_NutrientCache_Skeletal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Weight;                                                    // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*                 BodyConstraint;                                            // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BodyBagNC.BP_BodyBagNC_C");
		return ptr;
	}



	class UWidgetComponent* GetSonarWidget(bool bForce);
	class UPrimitiveComponent* GetDetectableComponent();
	bool CanBeGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal);
	TEnumAsByte<Maneater_EMECustomMovementMode> GetWhipShotFlightType();
	bool CanBeWhipShot();
	class UClass* GetWhipShotImpactEffect();
	void DisableBodyBagPhysics();
	bool CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPhysicsChanged(bool bNewPhysicsEnabled);
	void OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex);
	void ExecuteUbergraph_BP_BodyBagNC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
