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

// BlueprintGeneratedClass AIController_GreatWhite_Apex_BP.AIController_GreatWhite_Apex_BP_C
// 0x0008 (FullSize[0x07D8] - InheritedSize[0x07D0])
class AAIController_GreatWhite_Apex_BP_C : public AAIController_GreatWhite_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIController_GreatWhite_Apex_BP.AIController_GreatWhite_Apex_BP_C");
		return ptr;
	}



	void ThreatStateHasChanged_Event(TEnumAsByte<Maneater_EAIThreatAlertState> NewAlertState, class AActor* InstigatingActor);
	void OnAIDied_Event(class AME_AIController* KilledAIC);
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AIController_GreatWhite_Apex_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
