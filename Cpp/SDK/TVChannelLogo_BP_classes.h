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

// WidgetBlueprintGeneratedClass TVChannelLogo_BP.TVChannelLogo_BP_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UTVChannelLogo_BP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            PortClovisChannel;                                         // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            IntroAnimation;                                            // 0x0238(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TVChannelLogo_BP.TVChannelLogo_BP_C");
		return ptr;
	}



	void PlayTvChannelLogo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
