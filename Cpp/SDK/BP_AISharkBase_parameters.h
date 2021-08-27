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

// Function BP_AISharkBase.BP_AISharkBase_C.CanBeConsumedWholeBy
struct ABP_AISharkBase_C_CanBeConsumedWholeBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AISharkBase.BP_AISharkBase_C.CanBeGrabbedBy
struct ABP_AISharkBase_C_CanBeGrabbedBy_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AISharkBase.BP_AISharkBase_C.GetSizeLevel
struct ABP_AISharkBase_C_GetSizeLevel_Params
{
	class AME_AnimalCharacter*                         GrabbingAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AISharkBase.BP_AISharkBase_C.ExecuteUbergraph_BP_AISharkBase
struct ABP_AISharkBase_C_ExecuteUbergraph_BP_AISharkBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
