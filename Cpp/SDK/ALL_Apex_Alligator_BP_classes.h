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

// BlueprintGeneratedClass ALL_Apex_Alligator_BP.ALL_Apex_Alligator_BP_C
// 0x0008 (FullSize[0x1058] - InheritedSize[0x1050])
class AALL_Apex_Alligator_BP_C : public AALL_Alligator_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALL_Apex_Alligator_BP.ALL_Apex_Alligator_BP_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_ALL_Apex_Alligator_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
