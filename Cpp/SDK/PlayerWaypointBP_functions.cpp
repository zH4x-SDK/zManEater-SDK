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

// Function PlayerWaypointBP.PlayerWaypointBP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* APlayerWaypointBP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerWaypointBP.PlayerWaypointBP_C.GetSonarWidget");

	APlayerWaypointBP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerWaypointBP.PlayerWaypointBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APlayerWaypointBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerWaypointBP.PlayerWaypointBP_C.ReceiveBeginPlay");

	APlayerWaypointBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerWaypointBP.PlayerWaypointBP_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlayerWaypointBP_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerWaypointBP.PlayerWaypointBP_C.OnPingedByPlayerSonar");

	APlayerWaypointBP_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerWaypointBP.PlayerWaypointBP_C.HideInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerWaypointBP_C::HideInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerWaypointBP.PlayerWaypointBP_C.HideInWorldWidget");

	APlayerWaypointBP_C_HideInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerWaypointBP.PlayerWaypointBP_C.ExecuteUbergraph_PlayerWaypointBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerWaypointBP_C::ExecuteUbergraph_PlayerWaypointBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerWaypointBP.PlayerWaypointBP_C.ExecuteUbergraph_PlayerWaypointBP");

	APlayerWaypointBP_C_ExecuteUbergraph_PlayerWaypointBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
