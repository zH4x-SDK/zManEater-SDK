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

// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ToggleSignActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALandMarkSignDestructible_BP_C::ToggleSignActive(bool IsActive_)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ToggleSignActive");

	ALandMarkSignDestructible_BP_C_ToggleSignActive_Params params;
	params.IsActive_ = IsActive_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* ALandMarkSignDestructible_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.GetDetectableComponent");

	ALandMarkSignDestructible_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ALandMarkSignDestructible_BP_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.CanBeFocused");

	ALandMarkSignDestructible_BP_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.GetDetectableComponentLocationOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ALandMarkSignDestructible_BP_C::GetDetectableComponentLocationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.GetDetectableComponentLocationOffset");

	ALandMarkSignDestructible_BP_C_GetDetectableComponentLocationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALandMarkSignDestructible_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ReceiveBeginPlay");

	ALandMarkSignDestructible_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.OnComponentFracture_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALandMarkSignDestructible_BP_C::OnComponentFracture_Event_1(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.OnComponentFracture_Event_1");

	ALandMarkSignDestructible_BP_C_OnComponentFracture_Event_1_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ExecuteUbergraph_LandMarkSignDestructible_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALandMarkSignDestructible_BP_C::ExecuteUbergraph_LandMarkSignDestructible_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandMarkSignDestructible_BP.LandMarkSignDestructible_BP_C.ExecuteUbergraph_LandMarkSignDestructible_BP");

	ALandMarkSignDestructible_BP_C_ExecuteUbergraph_LandMarkSignDestructible_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
