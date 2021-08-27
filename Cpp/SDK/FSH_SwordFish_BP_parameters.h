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

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.TryDeactivate
struct AFSH_SwordFish_BP_C_TryDeactivate_Params
{
	TArray<class UActorComponent*>                     ActorComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.GetSizeLevel
struct AFSH_SwordFish_BP_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.UserConstructionScript
struct AFSH_SwordFish_BP_C_UserConstructionScript_Params
{
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_0_0__FinishedFunc
struct AFSH_SwordFish_BP_C_Timeline_0_0__FinishedFunc_Params
{
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_0_0__UpdateFunc
struct AFSH_SwordFish_BP_C_Timeline_0_0__UpdateFunc_Params
{
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_1__FinishedFunc
struct AFSH_SwordFish_BP_C_Timeline_1__FinishedFunc_Params
{
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_1__UpdateFunc
struct AFSH_SwordFish_BP_C_Timeline_1__UpdateFunc_Params
{
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnLungeEnd
struct AFSH_SwordFish_BP_C_OnLungeEnd_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnDied
struct AFSH_SwordFish_BP_C_OnDied_Params
{
	class AController*                                 Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnMontageEnded
struct AFSH_SwordFish_BP_C_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInterrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnMontageStarted
struct AFSH_SwordFish_BP_C_OnMontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnGrabbedBy
struct AFSH_SwordFish_BP_C_OnGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         GrabbedComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GrabPointIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.ExecuteUbergraph_FSH_SwordFish_BP
struct AFSH_SwordFish_BP_C_ExecuteUbergraph_FSH_SwordFish_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
