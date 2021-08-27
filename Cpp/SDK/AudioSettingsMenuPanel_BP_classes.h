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

// WidgetBlueprintGeneratedClass AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C
// 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
class UAudioSettingsMenuPanel_BP_C : public UTwBaseMenuPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USettingsStepper_BP_C*                       DialogStepper;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsStepper_BP_C*                       MasterStepper;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsStepper_BP_C*                       MusicStepper;                                              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsStepper_BP_C*                       NarratorStepper;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingsStepper_BP_C*                       SFX_Stepper;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C");
		return ptr;
	}



	void NarratorVolumeChanged(int Index);
	void DialogVolumeChanged(int Index);
	void SFXVolumeChanged(int Index);
	void MusicVolumeChanged(int Index);
	void MasterVolumeChanged(int Index);
	class UWidget* GetDefaultFocusWidget();
	void Construct();
	void ExecuteUbergraph_AudioSettingsMenuPanel_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
