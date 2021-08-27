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

// Function BP_DepthCharge_IR.BP_DepthCharge_IR_C.GetDirectImpactEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bUnderwater                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FImpactEffect           ImpactEffects                  (Parm, OutParm, NoDestructor)
void UBP_DepthCharge_IR_C::GetDirectImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface, bool bUnderwater, struct FImpactEffect* ImpactEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DepthCharge_IR.BP_DepthCharge_IR_C.GetDirectImpactEffects");

	UBP_DepthCharge_IR_C_GetDirectImpactEffects_Params params;
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
