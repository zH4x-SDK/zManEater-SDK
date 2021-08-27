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

// WidgetBlueprintGeneratedClass KeyMappingSettingsMenuPanel_BP.KeyMappingSettingsMenuPanel_BP_C
// 0x0010 (FullSize[0x03C0] - InheritedSize[0x03B0])
class UKeyMappingSettingsMenuPanel_BP_C : public UKeyMappingSettingsWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UKeyMappingWidget_BP_C*                      QuestLogMenuWidget;                                        // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyMappingSettingsMenuPanel_BP.KeyMappingSettingsMenuPanel_BP_C");
		return ptr;
	}



	class UWidget* GetDefaultFocusWidget();
	void Construct();
	void ExecuteUbergraph_KeyMappingSettingsMenuPanel_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
