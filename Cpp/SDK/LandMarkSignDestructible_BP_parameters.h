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

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ToggleSignActive
struct ALandMarkSignDestructible_BP_C_ToggleSignActive_Params
{
	bool                                               IsActive_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.GetDetectableComponent
struct ALandMarkSignDestructible_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.CanBeFocused
struct ALandMarkSignDestructible_BP_C_CanBeFocused_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.GetDetectableComponentLocationOffset
struct ALandMarkSignDestructible_BP_C_GetDetectableComponentLocationOffset_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ReceiveBeginPlay
struct ALandMarkSignDestructible_BP_C_ReceiveBeginPlay_Params
{
};

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.OnComponentFracture_Event_1
struct ALandMarkSignDestructible_BP_C_OnComponentFracture_Event_1_Params
{
	struct FVector                                     HitPoint;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ExecuteUbergraph_LandMarkSignDestructible_BP
struct ALandMarkSignDestructible_BP_C_ExecuteUbergraph_LandMarkSignDestructible_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
