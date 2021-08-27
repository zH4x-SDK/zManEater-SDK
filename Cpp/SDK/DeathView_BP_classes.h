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

// WidgetBlueprintGeneratedClass DeathView_BP.DeathView_BP_C
// 0x0018 (FullSize[0x03B0] - InheritedSize[0x0398])
class UDeathView_BP_C : public UDeathView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      splatterbg;                                                // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitleWidget_C*                           SubtitleWidget;                                            // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DeathView_BP.DeathView_BP_C");
		return ptr;
	}



	class UWidget* GetDefaultFocusWidget();
	void BndEvt__RespawnBtn_K2Node_ComponentBoundEvent_0_TwClickableWidgetClickDelegate__DelegateSignature(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_1_TwClickableWidgetClickDelegate__DelegateSignature(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void ExecuteUbergraph_DeathView_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
