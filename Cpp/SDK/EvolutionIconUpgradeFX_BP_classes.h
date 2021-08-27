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

// WidgetBlueprintGeneratedClass EvolutionIconUpgradeFX_BP.EvolutionIconUpgradeFX_BP_C
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class UEvolutionIconUpgradeFX_BP_C : public UTwBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            EvolutionRankUp;                                           // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EvolutionIconUpgradeFX_BP.EvolutionIconUpgradeFX_BP_C");
		return ptr;
	}



	void PlayUpgradeAnimation();
	void Construct();
	void WidgetAnimationEvt_EvolutionRankUp_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_EvolutionRankUp_K2Node_WidgetAnimationEvent_2();
	void ExecuteUbergraph_EvolutionIconUpgradeFX_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
