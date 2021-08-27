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

// BlueprintGeneratedClass SB_Sub_NightLighting.SB_Sub_NightLighting_C
// 0x0050 (FullSize[0x0278] - InheritedSize[0x0228])
class ASB_Sub_NightLighting_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_GameMode*                                GameMode;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ASpotLight*>                          SBSpotLights;                                              // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class APointLight*>                         SBPointLights;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            SBSeagulls;                                                // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            SBAmber;                                                   // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SB_Sub_NightLighting.SB_Sub_NightLighting_C");
		return ptr;
	}



	void ToggleEmitters(bool Is_On_, TArray<class AEmitter*>* Emitter_Array);
	void SortEmitters();
	void TogglePointLights(TArray<class APointLight*>* SBPointLights, bool IsOn_);
	void ToggleSpotLights(TArray<class ASpotLight*>* SBSpotLights, bool IsOn_);
	void SortPointLights();
	void SortSpotLights();
	void ReceiveBeginPlay();
	void TimeOfDayChanged(float CurrentHour, float NextHour);
	void TriggerNight();
	void TriggerDay();
	void ForceTODOnStart();
	void OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker);
	void ExecuteUbergraph_SB_Sub_NightLighting(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
