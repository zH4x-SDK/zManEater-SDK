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

// WidgetBlueprintGeneratedClass InfamyReward_BP.InfamyReward_BP_C
// 0x0010 (FullSize[0x02E0] - InheritedSize[0x02D0])
class UInfamyReward_BP_C : public UInfamyRewardWidget
{
public:
	class UImage*                                      RarityBG;                                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    RewardDescriptionContainer;                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfamyReward_BP.InfamyReward_BP_C");
		return ptr;
	}



	void HideDescription();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
