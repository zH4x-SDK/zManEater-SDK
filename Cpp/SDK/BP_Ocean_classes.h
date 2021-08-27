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

// BlueprintGeneratedClass BP_Ocean.BP_Ocean_C
// 0x000D (FullSize[0x03ED] - InheritedSize[0x03E0])
class ABP_Ocean_C : public AME_OceanManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Chopiness;                                                 // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSimulateTranslucency;                                     // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ocean.BP_Ocean_C");
		return ptr;
	}



	void SetWaveDirection(const struct FVector2D& NewWaveAmplitude);
	void SetWaveAmplitude(float NewWaveAmplitude);
	void Set_Global_Parameters();
	void Create_Wave_Set();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Ocean(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
