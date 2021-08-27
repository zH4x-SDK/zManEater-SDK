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

// WidgetBlueprintGeneratedClass ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C
// 0x0018 (FullSize[0x0338] - InheritedSize[0x0320])
class UObjectiveMapMarkerWidget_BP_C : public UObjectiveMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                InProgressColor_1;                                         // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObjectiveMapMarkerWidget_BP.ObjectiveMapMarkerWidget_BP_C");
		return ptr;
	}



	void SetMarkerCompleted();
	void SetMarkerInProgress();
	void SetMarkerAvailable();
	void UpdateMarkerVisibility();
	void ExecuteUbergraph_ObjectiveMapMarkerWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
