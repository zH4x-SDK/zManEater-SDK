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

// WidgetBlueprintGeneratedClass BountyBoatMapMarkerWidget_BP.BountyBoatMapMarkerWidget_BP_C
// 0x0010 (FullSize[0x0350] - InheritedSize[0x0340])
class UBountyBoatMapMarkerWidget_BP_C : public UBountyBoatMapMarkerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            DangerLoop;                                                // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BountyBoatMapMarkerWidget_BP.BountyBoatMapMarkerWidget_BP_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_BountyBoatMapMarkerWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
