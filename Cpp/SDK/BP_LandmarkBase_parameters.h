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

// Function BP_LandmarkBase.BP_LandmarkBase_C.OnDiscoveryStateChanged
struct ABP_LandmarkBase_C_OnDiscoveryStateChanged_Params
{
	TEnumAsByte<Maneater_ELandmarkDiscoveryState>      NewState;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LandmarkBase.BP_LandmarkBase_C.ExecuteUbergraph_BP_LandmarkBase
struct ABP_LandmarkBase_C_ExecuteUbergraph_BP_LandmarkBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
