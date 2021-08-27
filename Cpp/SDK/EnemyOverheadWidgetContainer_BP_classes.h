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

// WidgetBlueprintGeneratedClass EnemyOverheadWidgetContainer_BP.EnemyOverheadWidgetContainer_BP_C
// 0x0010 (FullSize[0x03D0] - InheritedSize[0x03C0])
class UEnemyOverheadWidgetContainer_BP_C : public UEnemyOverheadWidgetContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            IdleAnimationLockOn;                                       // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EnemyOverheadWidgetContainer_BP.EnemyOverheadWidgetContainer_BP_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_EnemyOverheadWidgetContainer_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
