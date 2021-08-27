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

// WidgetBlueprintGeneratedClass GenericTooltip_BP.GenericTooltip_BP_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UGenericTooltip_BP_C : public UUserWidget
{
public:
	class UTextBlock*                                  DescriptionText;                                           // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleText;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       UnequipSubtext;                                            // 0x0240(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericTooltip_BP.GenericTooltip_BP_C");
		return ptr;
	}



	void SetUnequipText();
	void SetLockedText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
