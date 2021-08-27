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

// BlueprintGeneratedClass BP_ManeaterGameMode.BP_ManeaterGameMode_C
// 0x0050 (FullSize[0x0700] - InheritedSize[0x06B0])
class ABP_ManeaterGameMode_C : public AME_GameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Gate[0x28];                                                // 0x06C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UClass*                                      PreviousApexCinematicViewed;                               // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AME_DayCycle_SkyDome_BP_C*                   SkyActorReference;                                         // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWildlife_Base_BP_C*                         ApexActorRef;                                              // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ManeaterGameMode.BP_ManeaterGameMode_C");
		return ptr;
	}



	void GetSkyActor(class AME_DayCycle_SkyDome_BP_C** SkyActorReference);
	void SetSkyActor(class AME_DayCycle_SkyDome_BP_C* SkyActor);
	void GetCurrentApex(class UClass** ApexClass, class AWildlife_Base_BP_C** WildlifeRef);
	void SetCurrentApex(class UClass* ApexClass, class AWildlife_Base_BP_C* WildlifeRef);
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	void ReceiveBeginPlay();
	void PauseSunPosition(bool bPause);
	void ExecuteUbergraph_BP_ManeaterGameMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
