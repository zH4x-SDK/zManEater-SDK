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

// BlueprintGeneratedClass BP_HunterDiver_Automatic.BP_HunterDiver_Automatic_C
// 0x0008 (FullSize[0x0F68] - InheritedSize[0x0F60])
class ABP_HunterDiver_Automatic_C : public ABP_Diver_C
{
public:
	class UBP_AssaultRifle_Tier3_C*                    BP_AssaultRifle;                                           // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HunterDiver_Automatic.BP_HunterDiver_Automatic_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
