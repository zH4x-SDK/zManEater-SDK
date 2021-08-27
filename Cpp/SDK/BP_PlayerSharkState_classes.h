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

// BlueprintGeneratedClass BP_PlayerSharkState.BP_PlayerSharkState_C
// 0x0040 (FullSize[0x07A0] - InheritedSize[0x0760])
class ABP_PlayerSharkState_C : public AME_PlayerSharkState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                                GainingNutrientSound;                                      // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DayCycleActor[0x28];                                       // 0x0778(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSharkState.BP_PlayerSharkState_C");
		return ptr;
	}



	void GetClosestGrotto(class ABP_PlayerGrotto_C** ClosestGrotto);
	void OnWorldRegionChanged(class AME_WorldRegionVolume* NewRegion);
	void OnIncreasedGrowthStage(TEnumAsByte<Maneater_EPlayerGrowthStage> NewGrowthStage);
	void OnGainedGrowthLevel(int NewGrowthLevel);
	void OnGainedEvolutionPoints_2();
	void ReceiveBeginPlay();
	void BindOnInventoryChanged();
	void InventoryChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade);
	void ExecuteUbergraph_BP_PlayerSharkState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
