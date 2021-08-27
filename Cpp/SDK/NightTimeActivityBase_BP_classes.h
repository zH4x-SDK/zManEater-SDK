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

// BlueprintGeneratedClass NightTimeActivityBase_BP.NightTimeActivityBase_BP_C
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class ANightTimeActivityBase_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AME_DayCycle_SkyDome_BP_C*                   NewVar_1;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AME_GameMode*                                GameMode;                                                  // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AlawysOn_;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7NNO[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              OtherActorsToShow;                                         // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NightTimeActivityBase_BP.NightTimeActivityBase_BP_C");
		return ptr;
	}



	void ToggleNight();
	void ToggleDay();
	void ReceiveBeginPlay();
	void TimeChanged(float CurrentHour, float NextHour);
	void OnTimeOfDayTrackerCreated(class AME_TimeofDayInfo* TimeOfDayTracker);
	void BindToOnTimeOfDayChanged(class AME_TimeofDayInfo* TimeOfDayTracker);
	void ExecuteUbergraph_NightTimeActivityBase_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
