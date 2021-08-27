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

// BlueprintGeneratedClass BP_HunterSeaScooter.BP_HunterSeaScooter_C
// 0x0028 (FullSize[0x0708] - InheritedSize[0x06E0])
class UBP_HunterSeaScooter_C : public UME_WeaponComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_HumanCharacter*                          CastHumanOwner;                                            // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                VelocityParticlesHandle;                                   // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             FanSprayParticles;                                         // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ActiveFanSpray;                                            // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HunterSeaScooter.BP_HunterSeaScooter_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void Velocity_particles();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_HunterSeaScooter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
