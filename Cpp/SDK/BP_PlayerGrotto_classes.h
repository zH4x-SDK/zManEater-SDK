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

// BlueprintGeneratedClass BP_PlayerGrotto.BP_PlayerGrotto_C
// 0x002B (FullSize[0x0354] - InheritedSize[0x0329])
class ABP_PlayerGrotto_C : public ABP_LandmarkBase_C
{
public:
	unsigned char                                      UnknownData_UJTJ[0x7];                                     // 0x0329(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         SpawnPoint_BB;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SpawnPoint;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistancePerHour;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerGrotto.BP_PlayerGrotto_C");
		return ptr;
	}



	void IsValidForFastTravel(bool* SpawnPoint);
	class UMaterialInterface* GetMapWidgetMaterial();
	bool GetMapWidgetEnabled();
	void CreateSpawnPoint(class AActor** NewSpawnPoint);
	void FastTravelToGrotto();
	void OnDiscoveryStateChanged(TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState);
	void OnWidgetMouseDown(class UUserWidget* Widget, const struct FPointerEvent& MouseEvent);
	void ReceivePostInitializeComponents();
	void OnFastTravelSuccess(float TravelTime);
	void ExecuteUbergraph_BP_PlayerGrotto(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
