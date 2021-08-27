// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_LandmarkBase.BP_LandmarkBase_C.OnDiscoveryStateChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandmarkBase_C::OnDiscoveryStateChanged(TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandmarkBase.BP_LandmarkBase_C.OnDiscoveryStateChanged");

	ABP_LandmarkBase_C_OnDiscoveryStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LandmarkBase.BP_LandmarkBase_C.ExecuteUbergraph_BP_LandmarkBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LandmarkBase_C::ExecuteUbergraph_BP_LandmarkBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LandmarkBase.BP_LandmarkBase_C.ExecuteUbergraph_BP_LandmarkBase");

	ABP_LandmarkBase_C_ExecuteUbergraph_BP_LandmarkBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
