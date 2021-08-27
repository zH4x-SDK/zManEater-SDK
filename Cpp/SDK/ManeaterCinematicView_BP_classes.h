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

// WidgetBlueprintGeneratedClass ManeaterCinematicView_BP.ManeaterCinematicView_BP_C
// 0x0048 (FullSize[0x02E8] - InheritedSize[0x02A0])
class UManeaterCinematicView_BP_C : public UManeaterCinematicView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                ButtonCanvas;                                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreditScrollWidget_BP_C*                    CreditScrollWidget_BP;                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USubtitleWidget_C*                           SubtitleWidget;                                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTVChannelLogo_BP_C*                         TVChannelLogo_BP;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTVShowBug_BP_C*                             TVShowBug_BP;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTVShowHashtag_BP_C*                         TVShowHashtag_BP;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTVShowLocTime_BP_C*                         TVShowLocTime_BP;                                          // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTVShowLower3rd_BP_C*                        TVShowLower3rd_BP;                                         // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ManeaterCinematicView_BP.ManeaterCinematicView_BP_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PlayTVShowLower3rd(const struct FText& ShipName, const struct FText& ChracterName, const struct FText& JobText);
	void PlayHashTag(const struct FText& hashtagtext);
	void PlayTVShowLocation(const struct FText& Location, const struct FText& TimeOfDay);
	void PlayTvShowBug();
	void RollCredits();
	void PlayTvChannelLogo();
	void Reset();
	void ExecuteUbergraph_ManeaterCinematicView_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
