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

// BlueprintGeneratedClass GA_Human_ShadowPoison.GA_Human_ShadowPoison_C
// 0x0008 (FullSize[0x05E8] - InheritedSize[0x05E0])
class UGA_Human_ShadowPoison_C : public UME_GameplayAbility_Montage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Human_ShadowPoison.GA_Human_ShadowPoison_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Human_ShadowPoison(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
