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

// BlueprintGeneratedClass Wildlife_Base_BP.Wildlife_Base_BP_C
// 0x00E0 (FullSize[0x1040] - InheritedSize[0x0F60])
class AWildlife_Base_BP_C : public AME_WildlifeCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F60(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_5F1AC08A498CAFD627942185A67B3E76;    // 0x0F68(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_5F1AC08A498CAFD627942185A67B3E76;    // 0x0F6C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OP00[0x3];                                     // 0x0F6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendBackTimeline_BlendAlpha_3ADF3A094F666CB80C66C58ECDF407DB; // 0x0F78(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BlendBackTimeline__Direction_3ADF3A094F666CB80C66C58ECDF407DB; // 0x0F7C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FK3H[0x3];                                     // 0x0F7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BlendBackTimeline;                                         // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UME_AnimInstance_WildlifeNPC*                CastWildlifeBP;                                            // 0x0F88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  BlendTransform;                                            // 0x0F90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBeingElectrocuted;                                       // 0x0FC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_QIXQ[0x3];                                     // 0x0FC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImpulseMin;                                                // 0x0FC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImpulseMax;                                                // 0x0FC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBetweenImpulses;                                       // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GameTimeOnElectrocute;                                     // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bThrown;                                                   // 0x0FD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0ICQ[0x3];                                     // 0x0FD5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                ElectrocuteHandle;                                         // 0x0FD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              f_TTK;                                                     // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasBeenDamagedByPlayer;                                   // 0x0FE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PNWH[0x3];                                     // 0x0FE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    CurrentRotation;                                           // 0x0FE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    FlatRotation;                                              // 0x0FF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChestUp;                                                   // 0x1000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bInterrupBlend;                                            // 0x1001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IWGP[0x2];                                     // 0x1002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RelativeLocAtBlend;                                        // 0x1004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  MeshWorldTransform;                                        // 0x1010(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wildlife_Base_BP.Wildlife_Base_BP_C");
		return ptr;
	}



	bool ValidAnimBP();
	void RandomElectrouteValue(float* Random_Value);
	void ElectroctuteImpulse();
	void AllMissingLimbFunctions(const struct FGameplayTagContainer& TagContainer);
	void GetCastABP(class UME_AnimInstance_WildlifeNPC** Cast_Anim_BP);
	void GetThrashableSize();
	void BlendBackTimeline__FinishedFunc();
	void BlendBackTimeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName);
	void OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName);
	void OnInterrupted_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName);
	void OnBlendOut_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName);
	void OnCompleted_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration);
	void GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded);
	void ReceiveTick(float DeltaSeconds);
	void BeginTimeToDie(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnDied(class AController* Killer);
	void BlendBackToDefault();
	void BlendMeshToDefault();
	void BreakBlend();
	void ExecuteUbergraph_Wildlife_Base_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
