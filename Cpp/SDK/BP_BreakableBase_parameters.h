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

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetEnabled
struct ABP_BreakableBase_C_GetMapWidgetEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetMaterial
struct ABP_BreakableBase_C_GetMapWidgetMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapDescriptionText
struct ABP_BreakableBase_C_GetMapDescriptionText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_BreakableBase.BP_BreakableBase_C.ShouldClampToEdgeOfMap
struct ABP_BreakableBase_C_ShouldClampToEdgeOfMap_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapDisplayName
struct ABP_BreakableBase_C_GetMapDisplayName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetIcon
struct ABP_BreakableBase_C_GetMapWidgetIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetPriority
struct ABP_BreakableBase_C_GetMapWidgetPriority_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetSize
struct ABP_BreakableBase_C_GetMapWidgetSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetVisibility
struct ABP_BreakableBase_C_GetMapWidgetVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.SetWidgetIndex
struct ABP_BreakableBase_C_SetWidgetIndex_Params
{
	int                                                WidgetIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.GetSonarWidget
struct ABP_BreakableBase_C_GetSonarWidget_Params
{
	bool                                               bForce;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidgetComponent*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.HideInWorldWidget
struct ABP_BreakableBase_C_HideInWorldWidget_Params
{
};

// Function BP_BreakableBase.BP_BreakableBase_C.ShowInWorldWidget
struct ABP_BreakableBase_C_ShowInWorldWidget_Params
{
	int                                                WidgetIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.RevealOnMap
struct ABP_BreakableBase_C_RevealOnMap_Params
{
};

// Function BP_BreakableBase.BP_BreakableBase_C.OnWidgetMouseDown
struct ABP_BreakableBase_C_OnWidgetMouseDown_Params
{
	class UUserWidget*                                 Widget;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BreakableBase.BP_BreakableBase_C.ReceiveBeginPlay
struct ABP_BreakableBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_BreakableBase.BP_BreakableBase_C.OnPingedByPlayerSonar
struct ABP_BreakableBase_C_OnPingedByPlayerSonar_Params
{
};

// Function BP_BreakableBase.BP_BreakableBase_C.GrateFractured
struct ABP_BreakableBase_C_GrateFractured_Params
{
	struct FVector                                     HitPoint;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BreakableBase.BP_BreakableBase_C.BindGrateFractured
struct ABP_BreakableBase_C_BindGrateFractured_Params
{
};

// Function BP_BreakableBase.BP_BreakableBase_C.ExecuteUbergraph_BP_BreakableBase
struct ABP_BreakableBase_C_ExecuteUbergraph_BP_BreakableBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
