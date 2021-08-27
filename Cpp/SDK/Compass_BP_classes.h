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

// WidgetBlueprintGeneratedClass Compass_BP.Compass_BP_C
// 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
class UCompass_BP_C : public UCompassWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCompassStrip_C*                             Compass;                                                   // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Compass_BP.Compass_BP_C");
		return ptr;
	}



	void SubscribeToEvents_BP(class AHUD* HUD);
	void ExecuteUbergraph_Compass_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
