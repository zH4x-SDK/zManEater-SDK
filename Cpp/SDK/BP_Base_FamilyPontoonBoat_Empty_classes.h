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

// BlueprintGeneratedClass BP_Base_FamilyPontoonBoat_Empty.BP_Base_FamilyPontoonBoat_Empty_C
// 0x0008 (FullSize[0x0C00] - InheritedSize[0x0BF8])
class ABP_Base_FamilyPontoonBoat_Empty_C : public ABP_BoatBaseNoNav_C
{
public:
	class UME_DistanceSignificanceComponent*           ME_DistanceSignificance;                                   // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_FamilyPontoonBoat_Empty.BP_Base_FamilyPontoonBoat_Empty_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
