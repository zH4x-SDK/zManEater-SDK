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

// BlueprintGeneratedClass Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C
// 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
class APrologue_Sub_NightLighting_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ASpotLight*>                          PrologueSpotLights;                                        // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class APointLight*>                         ProloguePointLights;                                       // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            PrologueFX;                                                // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class AME_GameMode*                                GameMode;                                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                            PrologueSeagulls;                                          // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            PrologueBats;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Sub_NightLighting.Prologue_Sub_NightLighting_C");
		return ptr;
	}



	void Prologue_Sub_NightLighting_AutoGenFunc(class AME_TimeofDayInfo* TimeOfDayTracker);
	void ToggleSpotLights(TArray<class ASpotLight*>* Array, bool IsOn_);
	void TogglePointLights(bool IsOn_, TArray<class APointLight*>* PointLightArray);
	void ToggleEmitters(bool IsOn_, TArray<class AEmitter*>* EmitterArray);
	void SortLights();
	void SortEmitters();
	void SortPointLights();
	void ReceiveBeginPlay();
	void TimeOfDayChanged(float CurrentHour, float NextHour);
	void ForceTODOnStart();
	void TriggerNight();
	void TriggerDay();
	void OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker);
	void ExecuteUbergraph_Prologue_Sub_NightLighting(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
