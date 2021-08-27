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

// BlueprintGeneratedClass AIController_Marlin_BP.AIController_Marlin_BP_C
// 0x0008 (FullSize[0x07D0] - InheritedSize[0x07C8])
class AAIController_Marlin_BP_C : public AAIController_Hostile_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIController_Marlin_BP.AIController_Marlin_BP_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ThreatStateHasChanged_Event(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor);
	void ExecuteUbergraph_AIController_Marlin_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
