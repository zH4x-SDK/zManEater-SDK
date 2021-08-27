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

// BlueprintGeneratedClass WorldMap_Facade.WorldMap_Facade_C
// 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
class AWorldMap_Facade_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_GameMode*                                GameMode;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASpotLight*>                          FacadeSpots;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class APointLight*>                         FacadePoints;                                              // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_Facade.WorldMap_Facade_C");
		return ptr;
	}



	void TogglePointLights(TArray<class APointLight*>* FacadePoints, bool IsOn_);
	void ToggleSpotLights(TArray<class ASpotLight*>* FacadeSpots, bool IsOn_);
	void SortPointLights();
	void SortSpotLights();
	void ReceiveBeginPlay();
	void TimeOfDayChanged(float CurrentHour, float NextHour);
	void ForceTODOnStart();
	void TriggerNight();
	void TriggerDay();
	void OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker);
	void ExecuteUbergraph_WorldMap_Facade(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
