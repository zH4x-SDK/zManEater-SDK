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

// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnSpinout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TorpedoProjectile_C::OnSpinout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnSpinout");

	ABP_TorpedoProjectile_C_OnSpinout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.FindGrabbingRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  GrabbingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform ABP_TorpedoProjectile_C::FindGrabbingRotation(class AActor* GrabbingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.FindGrabbingRotation");

	ABP_TorpedoProjectile_C_FindGrabbingRotation_Params params;
	params.GrabbingActor = GrabbingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.SetVulnerableMIC
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TorpedoProjectile_C::SetVulnerableMIC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.SetVulnerableMIC");

	ABP_TorpedoProjectile_C_SetVulnerableMIC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TorpedoProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveBeginPlay");

	ABP_TorpedoProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_TorpedoProjectile_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveDestroyed");

	ABP_TorpedoProjectile_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.StopRot
// (BlueprintCallable, BlueprintEvent)
void ABP_TorpedoProjectile_C::StopRot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.StopRot");

	ABP_TorpedoProjectile_C_StopRot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TorpedoProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ReceiveTick");

	ABP_TorpedoProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnGrabbedBy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     GrabbedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GrabPointIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TorpedoProjectile_C::OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnGrabbedBy");

	ABP_TorpedoProjectile_C_OnGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.GrabbedComponent = GrabbedComponent;
	params.GrabPointIndex = GrabPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnEvaded
// (Event, Public, BlueprintEvent)
void ABP_TorpedoProjectile_C::OnEvaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnEvaded");

	ABP_TorpedoProjectile_C_OnEvaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnReleasedBy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     ReleasingAnimal                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIgnoreFlee                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bBrokeAway                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TorpedoProjectile_C::OnReleasedBy(class AME_AnimalCharacter* ReleasingAnimal, bool bIgnoreFlee, bool bBrokeAway)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.OnReleasedBy");

	ABP_TorpedoProjectile_C_OnReleasedBy_Params params;
	params.ReleasingAnimal = ReleasingAnimal;
	params.bIgnoreFlee = bIgnoreFlee;
	params.bBrokeAway = bBrokeAway;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ExecuteUbergraph_BP_TorpedoProjectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TorpedoProjectile_C::ExecuteUbergraph_BP_TorpedoProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TorpedoProjectile.BP_TorpedoProjectile_C.ExecuteUbergraph_BP_TorpedoProjectile");

	ABP_TorpedoProjectile_C_ExecuteUbergraph_BP_TorpedoProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
