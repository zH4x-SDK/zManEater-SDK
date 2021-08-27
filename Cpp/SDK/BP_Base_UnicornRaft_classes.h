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

// BlueprintGeneratedClass BP_Base_UnicornRaft.BP_Base_UnicornRaft_C
// 0x000C (FullSize[0x0CDC] - InheritedSize[0x0CD0])
class ABP_Base_UnicornRaft_C : public ABP_BoatBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LastHitTime;                                               // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_UnicornRaft.BP_Base_UnicornRaft_C");
		return ptr;
	}



	bool CanAIAttackTarget(const struct FAttackTarget& PotentialTarget);
	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void DamageTaken(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Base_UnicornRaft(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
