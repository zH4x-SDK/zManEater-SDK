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

// BlueprintGeneratedClass GA_EVO_Shadow_Body_AOE_End_T2.GA_EVO_Shadow_Body_AOE_End_T2_C
// 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
class UGA_EVO_Shadow_Body_AOE_End_T2_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_EVO_Shadow_Body_AOE_End_T2.GA_EVO_Shadow_Body_AOE_End_T2_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_EVO_Shadow_Body_AOE_End_T2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
