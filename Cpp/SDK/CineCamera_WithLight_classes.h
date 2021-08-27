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

// BlueprintGeneratedClass CineCamera_WithLight.CineCamera_WithLight_C
// 0x001C (FullSize[0x080C] - InheritedSize[0x07F0])
class ACineCamera_WithLight_C : public ACineCameraActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         CamLight;                                                  // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              CamLightBegin_PM;                                          // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CamLightEnd_AM;                                            // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DisableOutlineLength;                                      // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CineCamera_WithLight.CineCamera_WithLight_C");
		return ptr;
	}



	void AutoLightCheck(bool* UseLight);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CineCamera_WithLight(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
