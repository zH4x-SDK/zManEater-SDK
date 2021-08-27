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

// BlueprintGeneratedClass BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C
// 0x000C (FullSize[0x026C] - InheritedSize[0x0260])
class ABP_AkAmbientSoundNoOcclusion_C : public AAkAmbientSound
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Interpolation_Time;                                        // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AkAmbientSoundNoOcclusion.BP_AkAmbientSoundNoOcclusion_C");
		return ptr;
	}



	void OnTimeOfDayChanged_Event_1(float CurrentHour, float NextHour);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AkAmbientSoundNoOcclusion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
