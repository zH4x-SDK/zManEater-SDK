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

// BlueprintGeneratedClass WHL_SpermWhale_Apex_BP.WHL_SpermWhale_Apex_BP_C
// 0x0008 (FullSize[0x1058] - InheritedSize[0x1050])
class AWHL_SpermWhale_Apex_BP_C : public AWHL_SpermWhale_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WHL_SpermWhale_Apex_BP.WHL_SpermWhale_Apex_BP_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_WHL_SpermWhale_Apex_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
