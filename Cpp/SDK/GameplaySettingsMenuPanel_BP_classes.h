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

// WidgetBlueprintGeneratedClass GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C
// 0x0018 (FullSize[0x02F8] - InheritedSize[0x02E0])
class UGameplaySettingsMenuPanel_BP_C : public UGameplaySettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                Box_Mouse;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsStepper_BP_C*                       LeftStickSensitivity;                                      // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameplaySettingsMenuPanel_BP.GameplaySettingsMenuPanel_BP_C");
		return ptr;
	}



	class UWidget* GetDefaultFocusWidget();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_GameplaySettingsMenuPanel_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
