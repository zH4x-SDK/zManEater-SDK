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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct PipeJunction_ST.PipeJunction_ST
// 0x0021
struct FPipeJunction_ST
{
	TEnumAsByte<PipeJunctionSides_EN_EPipeJunctionSides_EN> WhatSide__12_02038ECD473011428D9E43834E289900;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZLXH[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        CapsToOpen_8_3518D0F74610EEE6DBBF2BA86DA37F8D;             // 0x0008(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                               SecondarySide__18_FBE5E8A34B203DEE6A685FB39D7EB1B7;        // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I7EX[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SecondarySideNumber_25_D02516E148ADF8E0434A129BB713A800;   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DontSpawnLights__15_3043F3AC41FAD50E06BB0090BBD8E615;      // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
