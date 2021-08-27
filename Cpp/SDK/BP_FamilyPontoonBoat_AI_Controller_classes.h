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

// BlueprintGeneratedClass BP_FamilyPontoonBoat_AI_Controller.BP_FamilyPontoonBoat_AI_Controller_C
// 0x0008 (FullSize[0x07F0] - InheritedSize[0x07E8])
class ABP_FamilyPontoonBoat_AI_Controller_C : public AME_BoatAIController
{
public:
	class UObject*                                     LastPathTarget;                                            // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FamilyPontoonBoat_AI_Controller.BP_FamilyPontoonBoat_AI_Controller_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
