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
// Parameters
//---------------------------------------------------------------------------

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ValidAnimBP
struct AWildlife_Base_BP_C_ValidAnimBP_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.RandomElectrouteValue
struct AWildlife_Base_BP_C_RandomElectrouteValue_Params
{
	float                                              Random_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ElectroctuteImpulse
struct AWildlife_Base_BP_C_ElectroctuteImpulse_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.AllMissingLimbFunctions
struct AWildlife_Base_BP_C_AllMissingLimbFunctions_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GetCastABP
struct AWildlife_Base_BP_C_GetCastABP_Params
{
	class UME_AnimInstance_WildlifeNPC*                Cast_Anim_BP;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GetThrashableSize
struct AWildlife_Base_BP_C_GetThrashableSize_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackTimeline__FinishedFunc
struct AWildlife_Base_BP_C_BlendBackTimeline__FinishedFunc_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackTimeline__UpdateFunc
struct AWildlife_Base_BP_C_BlendBackTimeline__UpdateFunc_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.Timeline_0__FinishedFunc
struct AWildlife_Base_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.Timeline_0__UpdateFunc
struct AWildlife_Base_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1
struct AWildlife_Base_BP_C_OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1
struct AWildlife_Base_BP_C_OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnInterrupted_F9977F0D4685137F3108009788F8B3D1
struct AWildlife_Base_BP_C_OnInterrupted_F9977F0D4685137F3108009788F8B3D1_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnBlendOut_F9977F0D4685137F3108009788F8B3D1
struct AWildlife_Base_BP_C_OnBlendOut_F9977F0D4685137F3108009788F8B3D1_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnCompleted_F9977F0D4685137F3108009788F8B3D1
struct AWildlife_Base_BP_C_OnCompleted_F9977F0D4685137F3108009788F8B3D1_Params
{
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ReceiveBeginPlay
struct AWildlife_Base_BP_C_ReceiveBeginPlay_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GameplayTagAdded
struct AWildlife_Base_BP_C_GameplayTagAdded_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              TagDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GameplayTagRemoved
struct AWildlife_Base_BP_C_GameplayTagRemoved_Params
{
	struct FGameplayTagContainer                       TagsAdded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ReceiveTick
struct AWildlife_Base_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BeginTimeToDie
struct AWildlife_Base_BP_C_BeginTimeToDie_Params
{
	class AActor*                                      DamagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnDied
struct AWildlife_Base_BP_C_OnDied_Params
{
	class AController*                                 Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackToDefault
struct AWildlife_Base_BP_C_BlendBackToDefault_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendMeshToDefault
struct AWildlife_Base_BP_C_BlendMeshToDefault_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BreakBlend
struct AWildlife_Base_BP_C_BreakBlend_Params
{
};

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ExecuteUbergraph_Wildlife_Base_BP
struct AWildlife_Base_BP_C_ExecuteUbergraph_Wildlife_Base_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
