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

// BlueprintGeneratedClass SpearProjectile_BossSupport.SpearProjectile_BossSupport_C
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class ASpearProjectile_BossSupport_C : public ASpearProjectile_Tier2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpearProjectile_BossSupport.SpearProjectile_BossSupport_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpearProjectile_BossSupport(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
