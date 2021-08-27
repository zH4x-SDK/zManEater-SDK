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

// AnimBlueprintGeneratedClass FSH_SwordFish_ABP.FSH_SwordFish_ABP_C
// 0x000C (FullSize[0x5C98] - InheritedSize[0x5C8C])
class UFSH_SwordFish_ABP_C : public UWildlife_Base_ABP_C
{
public:
	unsigned char                                      UnknownData_JOQW[0x4];                                     // 0x5C8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x5C90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FSH_SwordFish_ABP.FSH_SwordFish_ABP_C");
		return ptr;
	}



	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_FSH_SwordFish_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
