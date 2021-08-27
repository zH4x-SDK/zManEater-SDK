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

// WidgetBlueprintGeneratedClass InfamyRankUp_BP.InfamyRankUp_BP_C
// 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
class UInfamyRankUp_BP_C : public UInfamyRankUpWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInfamyRankUpFX_BP_C*                        InfamyRankUpFX;                                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfamyRankUp_BP.InfamyRankUp_BP_C");
		return ptr;
	}



	void OnAnimStart_BP();
	void OnAnimEnd_BP();
	void ExecuteUbergraph_InfamyRankUp_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
