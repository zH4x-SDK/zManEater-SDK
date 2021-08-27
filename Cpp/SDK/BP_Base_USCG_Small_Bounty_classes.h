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

// BlueprintGeneratedClass BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C
// 0x0014 (FullSize[0x0CE4] - InheritedSize[0x0CD0])
class ABP_Base_USCG_Small_Bounty_C : public ABP_BoatBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight;                                                 // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              LastHitTime;                                               // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_USCG_Small_Bounty.BP_Base_USCG_Small_Bounty_C");
		return ptr;
	}



	void DebugVisibleThreatLoc();
	void DebugLastVisibleThreatLoc();
	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void DebugFloat();
	void DebugEscapePoint();
	void HaveEverSeenPlayerDebug();
	void ExecuteUbergraph_BP_Base_USCG_Small_Bounty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
