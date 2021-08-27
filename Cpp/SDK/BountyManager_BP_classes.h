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

// BlueprintGeneratedClass BountyManager_BP.BountyManager_BP_C
// 0x0014 (FullSize[0x05DC] - InheritedSize[0x05C8])
class ABountyManager_BP_C : public AME_BountyManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Base_Max_Num_Active_Divers;                                // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BountyManager_BP.BountyManager_BP_C");
		return ptr;
	}



	void Infamy_Rank_Up(int Rank);
	void Bounty_Beginning();
	void Bounty_Ending();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BountyManager_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
