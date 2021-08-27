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

// WidgetBlueprintGeneratedClass InfamyTierIcon_BP.InfamyTierIcon_BP_C
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UInfamyTierIcon_BP_C : public UInfamyTierIcon
{
public:
	class UImage*                                      RarityBG;                                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfamyTierIcon_BP.InfamyTierIcon_BP_C");
		return ptr;
	}



	void SetSelected(bool bSelected);
	void SetData(bool bIsLocked, int Level);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
