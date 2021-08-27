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

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.ForceWaterColor
struct UME_OceanColorComponent_C_ForceWaterColor_Params
{
};

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.TransitionWaterColor
struct UME_OceanColorComponent_C_TransitionWaterColor_Params
{
	float                                              Transition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetCurrentWaterColor
struct UME_OceanColorComponent_C_SetCurrentWaterColor_Params
{
};

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.GetTargetWaterColor
struct UME_OceanColorComponent_C_GetTargetWaterColor_Params
{
	struct FME_WaterStruct                             TargetWaterColorStruct;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.GetCurrentWaterColor
struct UME_OceanColorComponent_C_GetCurrentWaterColor_Params
{
	struct FME_WaterStruct                             CurrentWaterColorStruct;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetWaterType
struct UME_OceanColorComponent_C_SetWaterType_Params
{
	TEnumAsByte<ME_WaterTypeEnum_EME_WaterTypeEnum>    WaterType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ME_OceanColorComponent.ME_OceanColorComponent_C.SetWaterColor
struct UME_OceanColorComponent_C_SetWaterColor_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
