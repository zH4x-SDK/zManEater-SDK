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
// Parameters
//---------------------------------------------------------------------------

// Function AIController_Apex_Alligator_BP.AIController_Apex_Alligator_BP_C.ReceiveBeginPlay
struct AAIController_Apex_Alligator_BP_C_ReceiveBeginPlay_Params
{
};

// Function AIController_Apex_Alligator_BP.AIController_Apex_Alligator_BP_C.ThreatStateHasChanged_Event
struct AAIController_Apex_Alligator_BP_C_ThreatStateHasChanged_Event_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InstigatingActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Apex_Alligator_BP.AIController_Apex_Alligator_BP_C.OnAIDied_Event
struct AAIController_Apex_Alligator_BP_C_OnAIDied_Event_Params
{
	class AME_AIController*                            KilledAIC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Apex_Alligator_BP.AIController_Apex_Alligator_BP_C.ReceivePossess
struct AAIController_Apex_Alligator_BP_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Apex_Alligator_BP.AIController_Apex_Alligator_BP_C.ExecuteUbergraph_AIController_Apex_Alligator_BP
struct AAIController_Apex_Alligator_BP_C_ExecuteUbergraph_AIController_Apex_Alligator_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
