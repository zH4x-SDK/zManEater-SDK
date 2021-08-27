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

// BlueprintGeneratedClass BP_Small_FishingBoat_Bounty6_Boss.BP_Small_FishingBoat_Bounty6_Boss_C
// 0x000C (FullSize[0x0CE8] - InheritedSize[0x0CDC])
class ABP_Small_FishingBoat_Bounty6_Boss_C : public ABP_Small_FishingBoat_Bounty_Mixed_Dynamite_C
{
public:
	unsigned char                                      UnknownData_YCMX[0x4];                                     // 0x0CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Small_FishingBoat_Bounty6_Boss.BP_Small_FishingBoat_Bounty6_Boss_C");
		return ptr;
	}



	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_Small_FishingBoat_Bounty6_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
