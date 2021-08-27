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

// WidgetBlueprintGeneratedClass GrottoMapMarkerWidget_BP.GrottoMapMarkerWidget_BP_C
// 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
class UGrottoMapMarkerWidget_BP_C : public UGrottoMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GrottoMapMarkerWidget_BP.GrottoMapMarkerWidget_BP_C");
		return ptr;
	}



	void ExecuteUbergraph_GrottoMapMarkerWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
