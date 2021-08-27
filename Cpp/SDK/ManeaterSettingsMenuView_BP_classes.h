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

// WidgetBlueprintGeneratedClass ManeaterSettingsMenuView_BP.ManeaterSettingsMenuView_BP_C
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class UManeaterSettingsMenuView_BP_C : public UManeaterSettingsMenuView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ManeaterSettingsMenuView_BP.ManeaterSettingsMenuView_BP_C");
		return ptr;
	}



	void Construct();
	void OnViewShowing_BP();
	void OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder);
	void ExecuteUbergraph_ManeaterSettingsMenuView_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
