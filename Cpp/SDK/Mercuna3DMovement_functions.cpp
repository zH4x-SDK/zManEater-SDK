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

// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercuna3DMovementComponent::SetVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity");

	UMercuna3DMovementComponent_SetVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewAngVel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercuna3DMovementComponent::SetAngularVelocity(const struct FVector& NewAngVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity");

	UMercuna3DMovementComponent_SetAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UMercuna3DMovementComponent::GetLocalVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity");

	UMercuna3DMovementComponent_GetLocalVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UMercuna3DMovementComponent::GetLocalRotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate");

	UMercuna3DMovementComponent_GetLocalRotationRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Impulse                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercuna3DMovementComponent::AddImpulse(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse");

	UMercuna3DMovementComponent_AddImpulse_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
