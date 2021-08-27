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

// BlueprintGeneratedClass BP_SkiBoat_Bounty4_Boss.BP_SkiBoat_Bounty4_Boss_C
// 0x000C (FullSize[0x0CE0] - InheritedSize[0x0CD4])
class ABP_SkiBoat_Bounty4_Boss_C : public ABP_Base_SkiBoat_Bounty_C
{
public:
	unsigned char                                      UnknownData_VJ85[0x4];                                     // 0x0CD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkiBoat_Bounty4_Boss.BP_SkiBoat_Bounty4_Boss_C");
		return ptr;
	}



	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_SkiBoat_Bounty4_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
