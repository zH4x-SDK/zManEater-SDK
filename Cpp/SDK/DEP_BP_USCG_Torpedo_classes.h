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

// BlueprintGeneratedClass DEP_BP_USCG_Torpedo.DEP_BP_USCG_Torpedo_C
// 0x0008 (FullSize[0x0CF0] - InheritedSize[0x0CE8])
class ADEP_BP_USCG_Torpedo_C : public ABP_Base_USCG_Command_Ship_C
{
public:
	class UME_TorpedoLauncherComponent*                ME_TorpedoLauncher;                                        // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DEP_BP_USCG_Torpedo.DEP_BP_USCG_Torpedo_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
