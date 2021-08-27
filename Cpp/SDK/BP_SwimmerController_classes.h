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

// BlueprintGeneratedClass BP_SwimmerController.BP_SwimmerController_C
// 0x0008 (FullSize[0x07F8] - InheritedSize[0x07F0])
class ABP_SwimmerController_C : public ABP_HumanController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SwimmerController.BP_SwimmerController_C");
		return ptr;
	}



	void ReceivePossess(class APawn* PossessedPawn);
	void OnThreatStateChanged(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor);
	void ExecuteUbergraph_BP_SwimmerController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
