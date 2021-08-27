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

// Function BP_HumanFlesh_IR.BP_HumanFlesh_IR_C.GetImpactEffects
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EPhysicalSurface> ImpactingSurface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bUnderwater                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bScrape                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FImpactEffect           ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor)
struct FImpactEffect UBP_HumanFlesh_IR_C::GetImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactingSurface, bool bUnderwater, bool bScrape)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanFlesh_IR.BP_HumanFlesh_IR_C.GetImpactEffects");

	UBP_HumanFlesh_IR_C_GetImpactEffects_Params params;
	params.ImpactingSurface = ImpactingSurface;
	params.bUnderwater = bUnderwater;
	params.bScrape = bScrape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HumanFlesh_IR.BP_HumanFlesh_IR_C.GetDirectImpactEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bUnderwater                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FImpactEffect           ImpactEffects                  (Parm, OutParm, NoDestructor)
void UBP_HumanFlesh_IR_C::GetDirectImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface, bool bUnderwater, struct FImpactEffect* ImpactEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HumanFlesh_IR.BP_HumanFlesh_IR_C.GetDirectImpactEffects");

	UBP_HumanFlesh_IR_C_GetDirectImpactEffects_Params params;
	params.ImpactedSurface = ImpactedSurface;
	params.bUnderwater = bUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ImpactEffects != nullptr)
		*ImpactEffects = params.ImpactEffects;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
