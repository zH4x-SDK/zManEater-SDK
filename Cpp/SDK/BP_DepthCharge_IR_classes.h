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

// BlueprintGeneratedClass BP_DepthCharge_IR.BP_DepthCharge_IR_C
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UBP_DepthCharge_IR_C : public UBP_Base_IR_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DepthCharge_IR.BP_DepthCharge_IR_C");
		return ptr;
	}



	void GetDirectImpactEffects(TEnumAsByte<Engine_EPhysicalSurface> ImpactedSurface, bool bUnderwater, struct FImpactEffect* ImpactEffects);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
