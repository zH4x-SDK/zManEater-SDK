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

// BlueprintGeneratedClass ME_OceanColorComponent.ME_OceanColorComponent_C
// 0x0284 (FullSize[0x0334] - InheritedSize[0x00B0])
class UME_OceanColorComponent_C : public UActorComponent
{
public:
	struct FME_WaterStruct                             LakeWaterColorStruct;                                      // 0x00B0(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             SwampWaterColorStruct;                                     // 0x00F0(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             OceanWaterColorStruct;                                     // 0x0130(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             PoisonWaterColorStruct;                                    // 0x0170(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             CurrentWaterColorStruct;                                   // 0x01B0(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             TargetWaterColorStruct;                                    // 0x01F0(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ME_WaterTypeEnum_EME_WaterTypeEnum>    WaterTypeEnum;                                             // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XC4X[0x3];                                     // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FME_WaterStruct                             BayWaterColorStruct;                                       // 0x0234(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             ShoreSEWaterColorStruct;                                   // 0x0274(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             ShoreSBWaterColorStruct;                                   // 0x02B4(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FME_WaterStruct                             DeepOceanWaterColorStruct;                                 // 0x02F4(0x0040) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ME_OceanColorComponent.ME_OceanColorComponent_C");
		return ptr;
	}



	void ForceWaterColor();
	void TransitionWaterColor(float Transition);
	void SetCurrentWaterColor();
	void GetTargetWaterColor(struct FME_WaterStruct* TargetWaterColorStruct);
	void GetCurrentWaterColor(struct FME_WaterStruct* CurrentWaterColorStruct);
	void SetWaterType(TEnumAsByte<ME_WaterTypeEnum_EME_WaterTypeEnum> WaterType);
	void SetWaterColor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
