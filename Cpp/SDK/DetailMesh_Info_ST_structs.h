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

// UserDefinedStruct DetailMesh_Info_ST.DetailMesh_Info_ST
// 0x00A0
struct FDetailMesh_Info_ST
{
	class UStaticMesh*                                 StaticMesh_12_18C1763D443AF040DED8C69A0666B607;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           MaterialOverride_9_78AACA934051F27B6924888949AAE831;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGenerateDetail_BP_C*                        DetailPoint_13_A40CFA904398114AECFBF6B574AC7552;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDrawScale_16_9F42E91B4FAF33766CCAE8A55BB24B2B;          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDrawScale_18_7CDA6F2C4E92405BA1845FA357CDF06F;          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrawDistance_20_A179ED0C4F1CEA617466DF94EE73E94A;          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZOffset_22_758DA2274FD726B5CBF0729552E12A79;               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Collision_24_6EC0837847EAF1A5502532AFC6979588;             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GFH8[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TraceTransform_5_BCB6193E4EFF85E317E8DD8A21F30582;         // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               GenerateLights_34_A9656A4346B0AE2035196396DCEE8FDB;        // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WJGO[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpawnedLightInformation_ST                 LightSettings_37_7BFE47FE4F476BF1DCFF6E9C87949A6B;         // 0x0064(0x003C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
