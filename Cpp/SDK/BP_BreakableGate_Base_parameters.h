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

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapWidgetEnabled
struct ABP_BreakableGate_Base_C_GetMapWidgetEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapWidgetMaterial
struct ABP_BreakableGate_Base_C_GetMapWidgetMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapDescriptionText
struct ABP_BreakableGate_Base_C_GetMapDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.ShouldClampToEdgeOfMap
struct ABP_BreakableGate_Base_C_ShouldClampToEdgeOfMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapDisplayName
struct ABP_BreakableGate_Base_C_GetMapDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapWidgetIcon
struct ABP_BreakableGate_Base_C_GetMapWidgetIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapWidgetPriority
struct ABP_BreakableGate_Base_C_GetMapWidgetPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapWidgetSize
struct ABP_BreakableGate_Base_C_GetMapWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableGate_Base.BP_BreakableGate_Base_C.GetMapWidgetVisibility
struct ABP_BreakableGate_Base_C_GetMapWidgetVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
