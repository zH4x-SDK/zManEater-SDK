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

// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetVelocity
struct UMercuna3DMovementComponent_SetVelocity_Params
{
	struct FVector                                     NewVelocity;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mercuna3DMovement.Mercuna3DMovementComponent.SetAngularVelocity
struct UMercuna3DMovementComponent_SetAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalVelocity
struct UMercuna3DMovementComponent_GetLocalVelocity_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Mercuna3DMovement.Mercuna3DMovementComponent.GetLocalRotationRate
struct UMercuna3DMovementComponent_GetLocalRotationRate_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Mercuna3DMovement.Mercuna3DMovementComponent.AddImpulse
struct UMercuna3DMovementComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
