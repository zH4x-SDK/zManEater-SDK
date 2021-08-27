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

// BlueprintGeneratedClass GA_Evo_Bio-Electric_Teeth_AOE_T5.GA_Evo_Bio-Electric_Teeth_AOE_T5_C
// 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
class UGA_Evo_Bio_Electric_Teeth_AOE_T5_C : public UME_GameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Evo_Bio-Electric_Teeth_AOE_T5.GA_Evo_Bio-Electric_Teeth_AOE_T5_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Evo_Bio_Electric_Teeth_AOE_T5(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
