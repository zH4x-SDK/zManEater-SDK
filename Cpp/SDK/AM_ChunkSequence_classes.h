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

// BlueprintGeneratedClass AM_ChunkSequence.AM_ChunkSequence_C
// 0x0008 (FullSize[0x0628] - InheritedSize[0x0620])
class UAM_ChunkSequence_C : public UME_GameplayAbilitySharkMontage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AM_ChunkSequence.AM_ChunkSequence_C");
		return ptr;
	}



	void MontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_AM_ChunkSequence(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
