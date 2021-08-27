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

// Function BP_PlayerGrotto.BP_PlayerGrotto_C.IsValidForFastTravel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SpawnPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PlayerGrotto_C::IsValidForFastTravel(bool* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.IsValidForFastTravel");

	ABP_PlayerGrotto_C_IsValidForFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnPoint != nullptr)
		*SpawnPoint = params.SpawnPoint;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.GetMapWidgetMaterial
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInterface* ABP_PlayerGrotto_C::GetMapWidgetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.GetMapWidgetMaterial");

	ABP_PlayerGrotto_C_GetMapWidgetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.GetMapWidgetEnabled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PlayerGrotto_C::GetMapWidgetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.GetMapWidgetEnabled");

	ABP_PlayerGrotto_C_GetMapWidgetEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.CreateSpawnPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewSpawnPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerGrotto_C::CreateSpawnPoint(class AActor** NewSpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.CreateSpawnPoint");

	ABP_PlayerGrotto_C_CreateSpawnPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewSpawnPoint != nullptr)
		*NewSpawnPoint = params.NewSpawnPoint;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.FastTravelToGrotto
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_PlayerGrotto_C::FastTravelToGrotto()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.FastTravelToGrotto");

	ABP_PlayerGrotto_C_FastTravelToGrotto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnDiscoveryStateChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerGrotto_C::OnDiscoveryStateChanged(TEnumAsByte<Maneater_ELandmarkDiscoveryState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnDiscoveryStateChanged");

	ABP_PlayerGrotto_C_OnDiscoveryStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnWidgetMouseDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_PlayerGrotto_C::OnWidgetMouseDown(class UUserWidget* Widget, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnWidgetMouseDown");

	ABP_PlayerGrotto_C_OnWidgetMouseDown_Params params;
	params.Widget = Widget;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.ReceivePostInitializeComponents
// (Event, Public, BlueprintEvent)
void ABP_PlayerGrotto_C::ReceivePostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.ReceivePostInitializeComponents");

	ABP_PlayerGrotto_C_ReceivePostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnFastTravelSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TravelTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerGrotto_C::OnFastTravelSuccess(float TravelTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.OnFastTravelSuccess");

	ABP_PlayerGrotto_C_OnFastTravelSuccess_Params params;
	params.TravelTime = TravelTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerGrotto.BP_PlayerGrotto_C.ExecuteUbergraph_BP_PlayerGrotto
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PlayerGrotto_C::ExecuteUbergraph_BP_PlayerGrotto(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerGrotto.BP_PlayerGrotto_C.ExecuteUbergraph_BP_PlayerGrotto");

	ABP_PlayerGrotto_C_ExecuteUbergraph_BP_PlayerGrotto_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
