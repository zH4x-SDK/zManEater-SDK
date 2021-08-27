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

// WidgetBlueprintGeneratedClass MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C
// 0x0010 (FullSize[0x0448] - InheritedSize[0x0438])
class UMainMenuButtonCenter_BP_C : public UTwBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            HighlightLoop;                                             // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnMouseLeave_BP(const struct FPointerEvent& InMouseEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter_BP(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_MainMenuButtonCenter_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
