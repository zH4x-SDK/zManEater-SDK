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
// Classes
//---------------------------------------------------------------------------

// Class Mercuna3DMovement.Mercuna3DMovementComponent
// 0x00A8 (FullSize[0x01E0] - InheritedSize[0x0138])
class UMercuna3DMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData_ZGRC[0x20];                                    // 0x0138(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMercuna3DMovementProperties                MovementProperties;                                        // 0x0158(0x003C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bPositionCorrected : 1;                                    // 0x0194(0x0001) BIT_FIELD (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R626[0x3];                                     // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PendingImpulseToApply;                                     // 0x0198(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     Acceleration;                                              // 0x01A4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     AngularVelocity;                                           // 0x01B0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_09S1[0x24];                                    // 0x01BC(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna3DMovement.Mercuna3DMovementComponent");
		return ptr;
	}



	void SetVelocity(const struct FVector& NewVelocity);
	void SetAngularVelocity(const struct FVector& NewAngVel);
	struct FVector GetLocalVelocity();
	struct FRotator GetLocalRotationRate();
	void AddImpulse(const struct FVector& Impulse);
};

// Class Mercuna3DMovement.Mercuna3DMovementInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMercuna3DMovementInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna3DMovement.Mercuna3DMovementInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
