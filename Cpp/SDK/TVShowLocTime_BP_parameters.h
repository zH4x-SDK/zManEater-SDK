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

// Function TVShowLocTime_BP.TVShowLocTime_BP_C.PlayTVTimeLocation
struct UTVShowLocTime_BP_C_PlayTVTimeLocation_Params
{
	struct FText                                       Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TVShowLocTime_BP.TVShowLocTime_BP_C.Construct
struct UTVShowLocTime_BP_C_Construct_Params
{
};

// Function TVShowLocTime_BP.TVShowLocTime_BP_C.ExecuteUbergraph_TVShowLocTime_BP
struct UTVShowLocTime_BP_C_ExecuteUbergraph_TVShowLocTime_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
