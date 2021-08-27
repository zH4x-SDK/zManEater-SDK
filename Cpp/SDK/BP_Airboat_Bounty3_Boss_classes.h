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

// BlueprintGeneratedClass BP_Airboat_Bounty3_Boss.BP_Airboat_Bounty3_Boss_C
// 0x000C (FullSize[0x0CE8] - InheritedSize[0x0CDC])
class ABP_Airboat_Bounty3_Boss_C : public ABP_Airboat_Bounty_Shotguns_C
{
public:
	unsigned char                                      UnknownData_OTKT[0x4];                                     // 0x0CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Airboat_Bounty3_Boss.BP_Airboat_Bounty3_Boss_C");
		return ptr;
	}



	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_Airboat_Bounty3_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
