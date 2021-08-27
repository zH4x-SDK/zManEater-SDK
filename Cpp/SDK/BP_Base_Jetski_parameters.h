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

// Function BP_Base_Jetski.BP_Base_Jetski_C.SetupJetskiPassengers
struct ABP_Base_Jetski_C_SetupJetskiPassengers_Params
{
};

// Function BP_Base_Jetski.BP_Base_Jetski_C.CanAIAttackTarget
struct ABP_Base_Jetski_C_CanAIAttackTarget_Params
{
	struct FAttackTarget                               PotentialTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Base_Jetski.BP_Base_Jetski_C.GetSizeLevel
struct ABP_Base_Jetski_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_Jetski.BP_Base_Jetski_C.ReceiveBeginPlay
struct ABP_Base_Jetski_C_ReceiveBeginPlay_Params
{
};

// Function BP_Base_Jetski.BP_Base_Jetski_C.ReceiveTick
struct ABP_Base_Jetski_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Base_Jetski.BP_Base_Jetski_C.ExecuteUbergraph_BP_Base_Jetski
struct ABP_Base_Jetski_C_ExecuteUbergraph_BP_Base_Jetski_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
