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

// BlueprintGeneratedClass BP_Diver_BossSupport.BP_Diver_BossSupport_C
// 0x0008 (FullSize[0x0F78] - InheritedSize[0x0F70])
class ABP_Diver_BossSupport_C : public ABP_Diver_Hunter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Diver_BossSupport.BP_Diver_BossSupport_C");
		return ptr;
	}



	void OnDied(class AController* Killer);
	void ExecuteUbergraph_BP_Diver_BossSupport(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
