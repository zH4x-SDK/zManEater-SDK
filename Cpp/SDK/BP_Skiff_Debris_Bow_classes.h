﻿#pragma once

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

// BlueprintGeneratedClass BP_Skiff_Debris_Bow.BP_Skiff_Debris_Bow_C
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class ABP_Skiff_Debris_Bow_C : public ABP_VehicleDebris_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skiff_Debris_Bow.BP_Skiff_Debris_Bow_C");
		return ptr;
	}



	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
