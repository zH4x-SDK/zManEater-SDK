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

// WidgetBlueprintGeneratedClass VideoSettingsMenuPanel_BP.VideoSettingsMenuPanel_BP_C
// 0x0008 (FullSize[0x03F8] - InheritedSize[0x03F0])
class UVideoSettingsMenuPanel_BP_C : public UVideoSettingsWidget
{
public:
	class USettingsStepper_BP_C*                       FoVStepper;                                                // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VideoSettingsMenuPanel_BP.VideoSettingsMenuPanel_BP_C");
		return ptr;
	}



	class UWidget* GetDefaultFocusWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
