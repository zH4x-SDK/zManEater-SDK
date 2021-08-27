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

// Function BP_PoisonBarrel_Aura.BP_PoisonBarrel_Aura_C.GetDetectableLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 AttackerLocation               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_PoisonBarrel_Aura_C::GetDetectableLocation(const struct FVector& AttackerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoisonBarrel_Aura.BP_PoisonBarrel_Aura_C.GetDetectableLocation");

	ABP_PoisonBarrel_Aura_C_GetDetectableLocation_Params params;
	params.AttackerLocation = AttackerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PoisonBarrel_Aura.BP_PoisonBarrel_Aura_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* ABP_PoisonBarrel_Aura_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PoisonBarrel_Aura.BP_PoisonBarrel_Aura_C.GetDetectableComponent");

	ABP_PoisonBarrel_Aura_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
