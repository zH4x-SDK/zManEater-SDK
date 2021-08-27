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

// BlueprintGeneratedClass AM_KillSequence.AM_KillSequence_C
// 0x0008 (FullSize[0x0640] - InheritedSize[0x0638])
class UAM_KillSequence_C : public UME_GameplayAbility_KillSequence
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AM_KillSequence.AM_KillSequence_C");
		return ptr;
	}



	void MontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_AM_KillSequence(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
