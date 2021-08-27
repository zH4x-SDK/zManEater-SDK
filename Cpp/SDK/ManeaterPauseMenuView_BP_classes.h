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

// WidgetBlueprintGeneratedClass ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C
// 0x0020 (FullSize[0x0318] - InheritedSize[0x02F8])
class UManeaterPauseMenuView_BP_C : public UManeaterHUDPauseMenuView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Out;                                                       // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            In;                                                        // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ManeaterPauseMenuView_BP.ManeaterPauseMenuView_BP_C");
		return ptr;
	}



	class UWidget* GetDefaultFocusWidget();
	void OnCloseClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void OnExitClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void OnViewEnteringStack_BP();
	void OnViewLeavingStack_BP(const struct FViewPoppingResponder& Responder);
	void OnViewShowing_BP();
	void Construct();
	void OnettingsClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void ExecuteUbergraph_ManeaterPauseMenuView_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
