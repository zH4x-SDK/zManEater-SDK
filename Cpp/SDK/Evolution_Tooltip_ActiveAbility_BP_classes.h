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

// WidgetBlueprintGeneratedClass Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C
// 0x0070 (FullSize[0x02C8] - InheritedSize[0x0258])
class UEvolution_Tooltip_ActiveAbility_BP_C : public UTwBaseWidget
{
public:
	class UTextBlock*                                  AbilityDescriptionText;                                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      AbilityIcon;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  AbilityName;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                AttributesContainer;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<Maneater_EEvolutionProcType, class UEvolution_Tooltip_Stat_Category_BP_C*> EvoCategoryWidgetMap;                                      // 0x0278(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Evolution_Tooltip_ActiveAbility_BP.Evolution_Tooltip_ActiveAbility_BP_C");
		return ptr;
	}



	void AddStat(const struct FEvolutionDisplayStat& DisplayStat, const struct FLinearColor& StatColor);
	void SetData(class UME_PlayerEvolution* EvolutionDefinition, TArray<struct FEvolutionDisplayStat>* DisplayStats, TArray<struct FLinearColor>* StatColors);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
