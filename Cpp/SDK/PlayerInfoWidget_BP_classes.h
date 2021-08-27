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

// WidgetBlueprintGeneratedClass PlayerInfoWidget_BP.PlayerInfoWidget_BP_C
// 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
class UPlayerInfoWidget_BP_C : public UPlayerInfoWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerInfoWidget_BP.PlayerInfoWidget_BP_C");
		return ptr;
	}



	void SubscribeToEvents_BP(class AHUD* HUD);
	void attributes_changed();
	void UnsubscribeFromEvents_BP(class AHUD* HUD);
	void ExecuteUbergraph_PlayerInfoWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
