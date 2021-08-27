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

// BlueprintGeneratedClass DMI_Sub_NightLighting.DMI_Sub_NightLighting_C
// 0x00A0 (FullSize[0x02C8] - InheritedSize[0x0228])
class ADMI_Sub_NightLighting_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_GameMode*                                GameMode;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIRadioTowerFXArray;                                      // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class APointLight*>                         DMIPointLights;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ASpotLight*>                          DMiSpotLights;                                             // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIFXInsectBall;                                           // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIFXFireflies;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIFXMoths;                                                // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIFXDragonfly;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIFXSeagulls;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class AEmitter*>                            DMIFXBats;                                                 // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DMI_Sub_NightLighting.DMI_Sub_NightLighting_C");
		return ptr;
	}



	void UpdateTimeOfDay(float NewTime);
	void TogglePointLights(TArray<class APointLight*>* DMIPointLights, bool IsOn_);
	void SortPointLights();
	void ToggleSpotLights(TArray<class ASpotLight*>* DMiSpotLights, bool IsOn_);
	void SortSpotLights();
	void DMISortEmitters();
	void ToggleEmitters(bool IsOn_, TArray<class AEmitter*>* DMIEmitterArray);
	void ReceiveBeginPlay();
	void TimeOfDayChanged(float CurrentHour, float NextHour);
	void TriggerNight();
	void TriggerDay();
	void OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker);
	void ExecuteUbergraph_DMI_Sub_NightLighting(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
