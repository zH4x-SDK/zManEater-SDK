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

// WidgetBlueprintGeneratedClass Evolution_Tooltip_BP.Evolution_Tooltip_BP_C
// 0x00D0 (FullSize[0x0328] - InheritedSize[0x0258])
class UEvolution_Tooltip_BP_C : public UTwBaseWidget
{
public:
	class UEvolution_Tooltip_ActiveAbility_BP_C*       ACTIVEABILITY;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  EvolutionDescText;                                         // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RarityText;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEvolution_Tooltip_SetBonus_BP_C*            SetBonus;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SlotTypeText;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StatDisplayList;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     TitleBorder;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleText;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEvolution_Tooltip_UpgradeCost_BP_C*         UpgradeCost;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FEvolutionDisplayStat>               DisplayStats;                                              // 0x02A0(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	Maneater_EEvolutionSetType                         EvolutionSetType;                                          // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FJXL[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UME_PlayerEvolution*                         EvolutionDefinition;                                       // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Maneater_EPlayerGrowthStage>           MinimumAgeTier;                                            // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QTD2[0x7];                                     // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AssociatedSlotText;                                        // 0x02C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       RarityNameText;                                            // 0x02E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FEvolutionDisplayStat>               EvoAbilityDisplayStats;                                    // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FEvolutionDisplayStat>               CompareDisplayStats;                                       // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        EvoAbilityStatColors;                                      // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Evolution_Tooltip_BP.Evolution_Tooltip_BP_C");
		return ptr;
	}



	void FormatTitleTextByRarity(Maneater_EEvolutionRarity EvolutionRarity);
	void SetTooltipData(const struct FEvolutionData& EvolutionData, class UME_PlayerEvolution* Evolution, bool DisableCost, bool DisableUpgrade, const struct FEvolutionData& CompareEvolutionData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
