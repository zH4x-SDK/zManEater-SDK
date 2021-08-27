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

// WidgetBlueprintGeneratedClass AttributesWidget_BP.AttributesWidget_BP_C
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UAttributesWidget_BP_C : public UAttributesWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeItem_BP_C*                         AttributeRatingWidget1;                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeItem_BP_C*                         AttributeRatingWidget2;                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeItem_BP_C*                         AttributeRatingWidget3;                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeItem_BP_C*                         AttributeRatingWidget4;                                    // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeItem_BP_C*                         AttributeRatingWidget5;                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AttributesWidget_BP.AttributesWidget_BP_C");
		return ptr;
	}



	void CalculateDamageRating(float* CurrentPercent, float* DeltaPercent);
	void CalculateMassRating(float* CurrentPercent, float* DeltaPercent);
	void CalculateSpeedRating(float* CurrentPercent, float* DeltaPercent);
	void CalculateDefenseRating(float* CurrentPercent, float* DeltaPercent);
	void CalculateHealthRating(float* CurrentPercent, float* DeltaPercent);
	void Construct();
	void UpdateAttributes();
	void ExecuteUbergraph_AttributesWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
