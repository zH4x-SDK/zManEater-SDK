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

// Function BP_HunterSeaScooter.BP_HunterSeaScooter_C.ReceiveBeginPlay
struct UBP_HunterSeaScooter_C_ReceiveBeginPlay_Params
{
};

// Function BP_HunterSeaScooter.BP_HunterSeaScooter_C.Velocity particles
struct UBP_HunterSeaScooter_C_Velocity_particles_Params
{
};

// Function BP_HunterSeaScooter.BP_HunterSeaScooter_C.ReceiveEndPlay
struct UBP_HunterSeaScooter_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HunterSeaScooter.BP_HunterSeaScooter_C.ExecuteUbergraph_BP_HunterSeaScooter
struct UBP_HunterSeaScooter_C_ExecuteUbergraph_BP_HunterSeaScooter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
