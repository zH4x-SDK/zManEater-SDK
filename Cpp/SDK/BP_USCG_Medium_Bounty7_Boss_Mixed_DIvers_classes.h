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

// BlueprintGeneratedClass BP_USCG_Medium_Bounty7_Boss_Mixed_DIvers.BP_USCG_Medium_Bounty7_Boss_Mixed_Divers_C
// 0x000C (FullSize[0x0CE8] - InheritedSize[0x0CDC])
class ABP_USCG_Medium_Bounty7_Boss_Mixed_Divers_C : public ABP_Base_USCG_Medium_Bounty_C
{
public:
	unsigned char                                      UnknownData_DY13[0x4];                                     // 0x0CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USCG_Medium_Bounty7_Boss_Mixed_DIvers.BP_USCG_Medium_Bounty7_Boss_Mixed_Divers_C");
		return ptr;
	}



	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_USCG_Medium_Bounty7_Boss_Mixed_Divers(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
