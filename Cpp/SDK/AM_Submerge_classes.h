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

// BlueprintGeneratedClass AM_Submerge.AM_Submerge_C
// 0x0008 (FullSize[0x0628] - InheritedSize[0x0620])
class UAM_Submerge_C : public UME_GameplayAbility_SharkEvade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AM_Submerge.AM_Submerge_C");
		return ptr;
	}



	void K2_CommitExecute();
	void ExecuteUbergraph_AM_Submerge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
