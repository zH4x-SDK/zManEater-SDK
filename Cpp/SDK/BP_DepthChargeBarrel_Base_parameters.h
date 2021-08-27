﻿#pragma once

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

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.CanBeFocused
struct ABP_DepthChargeBarrel_Base_C_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.CanBeConsumedWholeBy
struct ABP_DepthChargeBarrel_Base_C_CanBeConsumedWholeBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.CanBeLockedOnTo
struct ABP_DepthChargeBarrel_Base_C_CanBeLockedOnTo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.GetFocusPriority
struct ABP_DepthChargeBarrel_Base_C_GetFocusPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.GetSizeLevel
struct ABP_DepthChargeBarrel_Base_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.MaterialTimeline__FinishedFunc
struct ABP_DepthChargeBarrel_Base_C_MaterialTimeline__FinishedFunc_Params
{
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.MaterialTimeline__UpdateFunc
struct ABP_DepthChargeBarrel_Base_C_MaterialTimeline__UpdateFunc_Params
{
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.MaterialTimeline__Events__EventFunc
struct ABP_DepthChargeBarrel_Base_C_MaterialTimeline__Events__EventFunc_Params
{
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.ReceiveBeginPlay
struct ABP_DepthChargeBarrel_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.UpdateMaterial
struct ABP_DepthChargeBarrel_Base_C_UpdateMaterial_Params
{
	float                                              ExplosionTimer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DepthChargeBarrel_Base.BP_DepthChargeBarrel_Base_C.ExecuteUbergraph_BP_DepthChargeBarrel_Base
struct ABP_DepthChargeBarrel_Base_C_ExecuteUbergraph_BP_DepthChargeBarrel_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
