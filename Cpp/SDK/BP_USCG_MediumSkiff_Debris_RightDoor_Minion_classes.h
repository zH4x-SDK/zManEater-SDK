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

// BlueprintGeneratedClass BP_USCG_MediumSkiff_Debris_RightDoor_Minion.BP_USCG_MediumSkiff_Debris_RightDoor_Minion_C
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class ABP_USCG_MediumSkiff_Debris_RightDoor_Minion_C : public ABP_VehicleDebris_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_USCG_MediumSkiff_Debris_RightDoor_Minion.BP_USCG_MediumSkiff_Debris_RightDoor_Minion_C");
		return ptr;
	}



	int GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
