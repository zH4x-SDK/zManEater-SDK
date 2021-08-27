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

// WidgetBlueprintGeneratedClass SettingsMenuController_BP.SettingsMenuController_BP_C
// 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
class USettingsMenuController_BP_C : public USettingsMenuController
{
public:
	class UWidgetAnimation*                            Out;                                                       // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            In;                                                        // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SettingsMenuController_BP.SettingsMenuController_BP_C");
		return ptr;
	}



	void PlayOutAnimation();
	void PlayInAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
