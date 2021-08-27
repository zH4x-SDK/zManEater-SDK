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

// Function BP_BodyBagNC.BP_BodyBagNC_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* ABP_BodyBagNC_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.GetSonarWidget");

	ABP_BodyBagNC_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* ABP_BodyBagNC_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.GetDetectableComponent");

	ABP_BodyBagNC_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeGrabbedBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BodyBagNC_C::CanBeGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeGrabbedBy");

	ABP_BodyBagNC_C_CanBeGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.GetWhipShotFlightType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_EMECustomMovementMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Maneater_EMECustomMovementMode> ABP_BodyBagNC_C::GetWhipShotFlightType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.GetWhipShotFlightType");

	ABP_BodyBagNC_C_GetWhipShotFlightType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeWhipShot
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BodyBagNC_C::CanBeWhipShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeWhipShot");

	ABP_BodyBagNC_C_CanBeWhipShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.GetWhipShotImpactEffect
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* ABP_BodyBagNC_C::GetWhipShotImpactEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.GetWhipShotImpactEffect");

	ABP_BodyBagNC_C_GetWhipShotImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.DisableBodyBagPhysics
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BodyBagNC_C::DisableBodyBagPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.DisableBodyBagPhysics");

	ABP_BodyBagNC_C_DisableBodyBagPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeConsumedWholeBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BodyBagNC_C::CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.CanBeConsumedWholeBy");

	ABP_BodyBagNC_C_CanBeConsumedWholeBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BodyBagNC.BP_BodyBagNC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BodyBagNC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.UserConstructionScript");

	ABP_BodyBagNC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BodyBagNC.BP_BodyBagNC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BodyBagNC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.ReceiveBeginPlay");

	ABP_BodyBagNC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BodyBagNC.BP_BodyBagNC_C.OnPhysicsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewPhysicsEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BodyBagNC_C::OnPhysicsChanged(bool bNewPhysicsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.OnPhysicsChanged");

	ABP_BodyBagNC_C_OnPhysicsChanged_Params params;
	params.bNewPhysicsEnabled = bNewPhysicsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BodyBagNC.BP_BodyBagNC_C.OnGrabbedBy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     GrabbedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GrabPointIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BodyBagNC_C::OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.OnGrabbedBy");

	ABP_BodyBagNC_C_OnGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.GrabbedComponent = GrabbedComponent;
	params.GrabPointIndex = GrabPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BodyBagNC.BP_BodyBagNC_C.ExecuteUbergraph_BP_BodyBagNC
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BodyBagNC_C::ExecuteUbergraph_BP_BodyBagNC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BodyBagNC.BP_BodyBagNC_C.ExecuteUbergraph_BP_BodyBagNC");

	ABP_BodyBagNC_C_ExecuteUbergraph_BP_BodyBagNC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
