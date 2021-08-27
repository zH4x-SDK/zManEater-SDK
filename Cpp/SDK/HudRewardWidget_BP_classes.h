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

// WidgetBlueprintGeneratedClass HudRewardWidget_BP.HudRewardWidget_BP_C
// 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
class UHudRewardWidget_BP_C : public UHUDRewardWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudRewardWidget_BP.HudRewardWidget_BP_C");
		return ptr;
	}



	void Construct();
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_HudRewardWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
