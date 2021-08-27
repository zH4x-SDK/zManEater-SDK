// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* AME_GenericObjectiveActorBase_BP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.GetSonarWidget");

	AME_GenericObjectiveActorBase_BP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ObjectiveComplete
// (Public, BlueprintCallable, BlueprintEvent)
void AME_GenericObjectiveActorBase_BP_C::ObjectiveComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ObjectiveComplete");

	AME_GenericObjectiveActorBase_BP_C_ObjectiveComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ObjectiveStarted
// (Public, BlueprintCallable, BlueprintEvent)
void AME_GenericObjectiveActorBase_BP_C::ObjectiveStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ObjectiveStarted");

	AME_GenericObjectiveActorBase_BP_C_ObjectiveStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AME_GenericObjectiveActorBase_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ReceiveBeginPlay");

	AME_GenericObjectiveActorBase_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ExecuteUbergraph_ME_GenericObjectiveActorBase_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_GenericObjectiveActorBase_BP_C::ExecuteUbergraph_ME_GenericObjectiveActorBase_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C.ExecuteUbergraph_ME_GenericObjectiveActorBase_BP");

	AME_GenericObjectiveActorBase_BP_C_ExecuteUbergraph_ME_GenericObjectiveActorBase_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
