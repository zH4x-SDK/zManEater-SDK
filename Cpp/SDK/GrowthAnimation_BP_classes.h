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

// WidgetBlueprintGeneratedClass GrowthAnimation_BP.GrowthAnimation_BP_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class UGrowthAnimation_BP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            InAnimation;                                               // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GrowthAnimation_BP.GrowthAnimation_BP_C");
		return ptr;
	}



	void GrowthIntro();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
