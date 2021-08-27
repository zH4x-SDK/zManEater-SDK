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

// WidgetBlueprintGeneratedClass LandmarkMapMarkerWidget_BP.LandmarkMapMarkerWidget_BP_C
// 0x0008 (FullSize[0x0300] - InheritedSize[0x02F8])
class ULandmarkMapMarkerWidget_BP_C : public ULandmarkMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LandmarkMapMarkerWidget_BP.LandmarkMapMarkerWidget_BP_C");
		return ptr;
	}



	void ExecuteUbergraph_LandmarkMapMarkerWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
