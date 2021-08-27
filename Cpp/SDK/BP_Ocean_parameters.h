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

// Function BP_Ocean.BP_Ocean_C.SetWaveDirection
struct ABP_Ocean_C_SetWaveDirection_Params
{
	struct FVector2D                                   NewWaveAmplitude;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Ocean.BP_Ocean_C.SetWaveAmplitude
struct ABP_Ocean_C_SetWaveAmplitude_Params
{
	float                                              NewWaveAmplitude;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
struct ABP_Ocean_C_Set_Global_Parameters_Params
{
};

// Function BP_Ocean.BP_Ocean_C.Create Wave Set
struct ABP_Ocean_C_Create_Wave_Set_Params
{
};

// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
struct ABP_Ocean_C_UserConstructionScript_Params
{
};

// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
struct ABP_Ocean_C_ReceiveBeginPlay_Params
{
};

// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
struct ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
