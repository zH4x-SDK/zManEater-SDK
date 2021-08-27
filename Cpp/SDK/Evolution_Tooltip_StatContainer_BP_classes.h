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

// WidgetBlueprintGeneratedClass Evolution_Tooltip_StatContainer_BP.Evolution_Tooltip_StatContainer_BP_C
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UEvolution_Tooltip_StatContainer_BP_C : public UTwBaseWidget
{
public:
	class UTextBlock*                                  StatNameText;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatValueText;                                             // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Evolution_Tooltip_StatContainer_BP.Evolution_Tooltip_StatContainer_BP_C");
		return ptr;
	}



	void SetStatData(const struct FText& StatName, const struct FText& StatValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
