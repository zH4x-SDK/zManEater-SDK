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

// BlueprintGeneratedClass BP_USCG_Command_Ship_Electro_Bounty9_Boss.BP_USCG_Command_Ship_Electro_Bounty9_Boss_C
// 0x0008 (FullSize[0x0CF8] - InheritedSize[0x0CF0])
class ABP_USCG_Command_Ship_Electro_Bounty9_Boss_C : public ABP_Base_USCG_Command_Ship_Electro_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USCG_Command_Ship_Electro_Bounty9_Boss.BP_USCG_Command_Ship_Electro_Bounty9_Boss_C");
		return ptr;
	}



	void BindBossHunterSeqCamera();
	void ExecuteUbergraph_BP_USCG_Command_Ship_Electro_Bounty9_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
