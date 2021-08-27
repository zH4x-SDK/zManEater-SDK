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

// BlueprintGeneratedClass LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C
// 0x0033 (FullSize[0x0434] - InheritedSize[0x0401])
class ALandMarkSignDestructible_BP_C : public ABP_BreakableBase_C
{
public:
	unsigned char                                      UnknownData_W2CA[0x7];                                     // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AME_PlayerSharkCharacter*                    Player;                                                    // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicMat;                                                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NavVector;                                                 // 0x0428(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C");
		return ptr;
	}



	void ToggleSignActive(bool IsActive_);
	class UPrimitiveComponent* GetDetectableComponent();
	bool CanBeFocused();
	struct FVector GetDetectableComponentLocationOffset();
	void ReceiveBeginPlay();
	void OnComponentFracture_Event_1(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_LandMarkSignDestructible_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
