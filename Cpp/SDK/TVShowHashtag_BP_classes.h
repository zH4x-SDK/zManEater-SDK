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

// WidgetBlueprintGeneratedClass TVShowHashtag_BP.TVShowHashtag_BP_C
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class UTVShowHashtag_BP_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            HashtagAnimation;                                          // 0x0230(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  hashtagtext;                                               // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TVShowHashtag_BP.TVShowHashtag_BP_C");
		return ptr;
	}



	void TVShowHashtagAnimation(const struct FText& hashtagtext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
