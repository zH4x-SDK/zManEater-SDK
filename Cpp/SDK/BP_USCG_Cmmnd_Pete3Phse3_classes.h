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

// BlueprintGeneratedClass BP_USCG_Cmmnd_Pete3Phse3.BP_USCG_Cmmnd_Pete3Phse3_C
// 0x0008 (FullSize[0x0D20] - InheritedSize[0x0D18])
class ABP_USCG_Cmmnd_Pete3Phse3_C : public ADEP_BP_USCG_Command_Pete3_Phase2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USCG_Cmmnd_Pete3Phse3.BP_USCG_Cmmnd_Pete3Phse3_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_USCG_Cmmnd_Pete3Phse3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
