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

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetSkyActor
struct ABP_ManeaterGameMode_C_GetSkyActor_Params
{
	class AME_DayCycle_SkyDome_BP_C*                   SkyActorReference;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.SetSkyActor
struct ABP_ManeaterGameMode_C_SetSkyActor_Params
{
	class AME_DayCycle_SkyDome_BP_C*                   SkyActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetCurrentApex
struct ABP_ManeaterGameMode_C_GetCurrentApex_Params
{
	class UClass*                                      ApexClass;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWildlife_Base_BP_C*                         WildlifeRef;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.SetCurrentApex
struct ABP_ManeaterGameMode_C_SetCurrentApex_Params
{
	class UClass*                                      ApexClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWildlife_Base_BP_C*                         WildlifeRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetDefaultPawnClassForController
struct ABP_ManeaterGameMode_C_GetDefaultPawnClassForController_Params
{
	class AController*                                 InController;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.ReceiveBeginPlay
struct ABP_ManeaterGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.PauseSunPosition
struct ABP_ManeaterGameMode_C_PauseSunPosition_Params
{
	bool                                               bPause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.ExecuteUbergraph_BP_ManeaterGameMode
struct ABP_ManeaterGameMode_C_ExecuteUbergraph_BP_ManeaterGameMode_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
