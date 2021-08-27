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

// WidgetBlueprintGeneratedClass CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UCreditsSettingsMenuPanel_BP_C : public UTwBaseMenuPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCreditScrollWidget_BP_C*                    CreditScrollWidget_BP;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsSettingsMenuPanel_BP.CreditsSettingsMenuPanel_BP_C");
		return ptr;
	}



	class UWidget* GetDefaultFocusWidget();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPanelOpen_BP();
	void ExecuteUbergraph_CreditsSettingsMenuPanel_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
