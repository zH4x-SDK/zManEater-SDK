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

// Function HumanBase_ABP.HumanBase_ABP_C.AnimGraph
struct UHumanBase_ABP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // (Parm, OutParm, NoDestructor)
};

// Function HumanBase_ABP.HumanBase_ABP_C.GetRandomBlendspace
struct UHumanBase_ABP_C_GetRandomBlendspace_Params
{
	class UBlendSpace*                                 BlendSpace;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBlendSpace*>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function HumanBase_ABP.HumanBase_ABP_C.ChangePointingBool
struct UHumanBase_ABP_C_ChangePointingBool_Params
{
};

// Function HumanBase_ABP.HumanBase_ABP_C.BumpAnimationToPlay
struct UHumanBase_ABP_C_BumpAnimationToPlay_Params
{
	float                                              HitFromAngle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HumanBase_ABP.HumanBase_ABP_C.AnimNotify_StartAdditiveFiring
struct UHumanBase_ABP_C_AnimNotify_StartAdditiveFiring_Params
{
};

// Function HumanBase_ABP.HumanBase_ABP_C.K2_Reset
struct UHumanBase_ABP_C_K2_Reset_Params
{
};

// Function HumanBase_ABP.HumanBase_ABP_C.ExecuteUbergraph_HumanBase_ABP
struct UHumanBase_ABP_C_ExecuteUbergraph_HumanBase_ABP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
