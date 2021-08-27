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

// WidgetBlueprintGeneratedClass EvolutionIconButton_BP.EvolutionIconButton_BP_C
// 0x0018 (FullSize[0x0550] - InheritedSize[0x0538])
class UEvolutionIconButton_BP_C : public UEvolutionIconButtonWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0538(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Selected;                                                  // 0x0540(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGenericTooltip_BP_C*                        Tooltip;                                                   // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EvolutionIconButton_BP.EvolutionIconButton_BP_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	class UWidget* GetTooltip();
	void PlayUpgradeFX();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ToggleTooltipVisiblity();
	void InventoryChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade);
	void SubscribeToEvents_BP(class AHUD* HUD);
	void UnsubscribeFromEvents_BP(class AHUD* HUD);
	void Construct();
	void ExecuteUbergraph_EvolutionIconButton_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
