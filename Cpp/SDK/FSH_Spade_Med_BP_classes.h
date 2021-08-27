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

// BlueprintGeneratedClass FSH_Spade_Med_BP.FSH_Spade_Med_BP_C
// 0x0010 (FullSize[0x1050] - InheritedSize[0x1040])
class AFSH_Spade_Med_BP_C : public AWildlife_Base_BP_C
{
public:
	class UVoiceGroupComponent_BP_C*                   VoiceGroupComponent_BP;                                    // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTwAkEmitterArrayComponent*                  TwAkEmitterArray;                                          // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FSH_Spade_Med_BP.FSH_Spade_Med_BP_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
