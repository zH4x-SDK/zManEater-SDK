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

// BlueprintGeneratedClass SpearProjectile_Diver.SpearProjectile_Diver_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class ASpearProjectile_Diver_C : public AME_Projectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpearProjectile_Diver.SpearProjectile_Diver_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpearProjectile_Diver(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif