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
// Parameters
//---------------------------------------------------------------------------

// Function AIController_Alligator_BP.AIController_Alligator_BP_C.ReceiveBeginPlay
struct AAIController_Alligator_BP_C_ReceiveBeginPlay_Params
{
};

// Function AIController_Alligator_BP.AIController_Alligator_BP_C.ThreatStateHasChanged_Event
struct AAIController_Alligator_BP_C_ThreatStateHasChanged_Event_Params
{
	TEnumAsByte<Maneater_EAIThreatAlertState>          NewAlertState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InstigatingActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIController_Alligator_BP.AIController_Alligator_BP_C.ExecuteUbergraph_AIController_Alligator_BP
struct AAIController_Alligator_BP_C_ExecuteUbergraph_AIController_Alligator_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
