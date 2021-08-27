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

// WidgetBlueprintGeneratedClass ProloguePlayerCapturedView_BP.ProloguePlayerCapturedView_BP_C
// 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
class UProloguePlayerCapturedView_BP_C : public UTwBaseView
{
public:
	class UPlayerCapturedByPete_Widget_BP_C*           PlayerCapturedByPete_Widget_BP;                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProloguePlayerCapturedView_BP.ProloguePlayerCapturedView_BP_C");
		return ptr;
	}



	bool DoesRequireInputUIMode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
