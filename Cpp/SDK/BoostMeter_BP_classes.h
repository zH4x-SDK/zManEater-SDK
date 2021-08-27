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

// WidgetBlueprintGeneratedClass BoostMeter_BP.BoostMeter_BP_C
// 0x004C (FullSize[0x02A4] - InheritedSize[0x0258])
class UBoostMeter_BP_C : public UTwBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                LungeBar;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                LungeTier;                                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8ZZQ[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       LocalTagContainer;                                         // 0x0270(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        TagsOfConcern;                                             // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                SprintTier;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BoostMeter_BP.BoostMeter_BP_C");
		return ptr;
	}



	void ProcessTagChange();
	void UpdateLocalTagContainer(bool bAdded, const struct FGameplayTagContainer& TagContainer, float TagDuration);
	void UnsubscribeFromEvents_BP(class AHUD* HUD);
	void GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration);
	void SubscribeToEvents_BP(class AHUD* HUD);
	void GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded);
	void Construct();
	void ExecuteUbergraph_BoostMeter_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
