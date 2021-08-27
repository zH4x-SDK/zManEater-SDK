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

// Function BP_Diver.BP_Diver_C.ReceiveBeginPlay
struct ABP_Diver_C_ReceiveBeginPlay_Params
{
};

// Function BP_Diver.BP_Diver_C.OnGrabPointConsumed
struct ABP_Diver_C_OnGrabPointConsumed_Params
{
	class AME_AnimalCharacter*                         ConsumingAnimal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FThrashGrabPoint                            ConsumedGrabPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GoreCapBoneName;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Diver.BP_Diver_C.OnDied
struct ABP_Diver_C_OnDied_Params
{
	class AController*                                 Killer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Diver.BP_Diver_C.ExecuteUbergraph_BP_Diver
struct ABP_Diver_C_ExecuteUbergraph_BP_Diver_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
