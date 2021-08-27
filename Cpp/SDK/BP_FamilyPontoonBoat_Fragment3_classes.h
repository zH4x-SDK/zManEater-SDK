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

// BlueprintGeneratedClass BP_FamilyPontoonBoat_Fragment3.BP_FamilyPontoonBoat_Fragment3_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ABP_FamilyPontoonBoat_Fragment3_C : public ABP_VehicleDebris_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FamilyPontoonBoat_Fragment3.BP_FamilyPontoonBoat_Fragment3_C");
		return ptr;
	}



	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ExecuteUbergraph_BP_FamilyPontoonBoat_Fragment3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
