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

// BlueprintGeneratedClass BP_BreakableGate_Base.BP_BreakableGate_Base_C
// 0x000F (FullSize[0x0410] - InheritedSize[0x0401])
class ABP_BreakableGate_Base_C : public ABP_BreakableBase_C
{
public:
	unsigned char                                      UnknownData_06Y4[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NavVector;                                                 // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableGate_Base.BP_BreakableGate_Base_C");
		return ptr;
	}



	bool GetMapWidgetEnabled();
	class UMaterialInterface* GetMapWidgetMaterial();
	struct FText GetMapDescriptionText();
	bool ShouldClampToEdgeOfMap();
	struct FText GetMapDisplayName();
	class UTexture2D* GetMapWidgetIcon();
	int GetMapWidgetPriority();
	struct FVector2D GetMapWidgetSize();
	UMG_ESlateVisibility GetMapWidgetVisibility();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
