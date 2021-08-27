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

// WidgetBlueprintGeneratedClass Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class UEvolution_Tooltip_Stat_Category_BP_C : public UTwBaseWidget
{
public:
	class UTextBlock*                                  CategoryText;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StatWidgetContainer;                                       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEvolution_Tooltip_StatContainer_BP_C*       NewStat;                                                   // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Evolution_Tooltip_Stat_Category_BP.Evolution_Tooltip_Stat_Category_BP_C");
		return ptr;
	}



	void SetCategoryName(Maneater_EEvolutionProcType ProcType);
	void AddStat(const struct FEvolutionDisplayStat& DisplayStat, const struct FLinearColor& StatColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
