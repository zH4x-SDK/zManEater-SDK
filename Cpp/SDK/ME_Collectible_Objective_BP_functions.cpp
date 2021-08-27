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

// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.SetMaxSharkSize
// (Public, BlueprintCallable, BlueprintEvent)
void AME_Collectible_Objective_BP_C::SetMaxSharkSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.SetMaxSharkSize");

	AME_Collectible_Objective_BP_C_SetMaxSharkSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ShowRegionTexture
// (Public, BlueprintCallable, BlueprintEvent)
void AME_Collectible_Objective_BP_C::ShowRegionTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ShowRegionTexture");

	AME_Collectible_Objective_BP_C_ShowRegionTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.DisableCollectible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetHidden_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AME_Collectible_Objective_BP_C::DisableCollectible(bool SetHidden_)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.DisableCollectible");

	AME_Collectible_Objective_BP_C_DisableCollectible_Params params;
	params.SetHidden_ = SetHidden_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.EnableCollectible
// (Public, BlueprintCallable, BlueprintEvent)
void AME_Collectible_Objective_BP_C::EnableCollectible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.EnableCollectible");

	AME_Collectible_Objective_BP_C_EnableCollectible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.SetWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_Collectible_Objective_BP_C::SetWidgetIndex(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.SetWidgetIndex");

	AME_Collectible_Objective_BP_C_SetWidgetIndex_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* AME_Collectible_Objective_BP_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetSonarWidget");

	AME_Collectible_Objective_BP_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AME_Collectible_Objective_BP_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.CanBeFocused");

	AME_Collectible_Objective_BP_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.CanBeLockedOnTo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AME_Collectible_Objective_BP_C::CanBeLockedOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.CanBeLockedOnTo");

	AME_Collectible_Objective_BP_C_CanBeLockedOnTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetMaxDistanceVisible
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float AME_Collectible_Objective_BP_C::GetMaxDistanceVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetMaxDistanceVisible");

	AME_Collectible_Objective_BP_C_GetMaxDistanceVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetDetectableComponentLocationOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AME_Collectible_Objective_BP_C::GetDetectableComponentLocationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetDetectableComponentLocationOffset");

	AME_Collectible_Objective_BP_C_GetDetectableComponentLocationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* AME_Collectible_Objective_BP_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.GetDetectableComponent");

	AME_Collectible_Objective_BP_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AME_Collectible_Objective_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.UserConstructionScript");

	AME_Collectible_Objective_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AME_Collectible_Objective_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ReceiveBeginPlay");

	AME_Collectible_Objective_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void AME_Collectible_Objective_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ReceiveDestroyed");

	AME_Collectible_Objective_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AME_Collectible_Objective_BP_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.OnPingedByPlayerSonar");

	AME_Collectible_Objective_BP_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ExecuteUbergraph_ME_Collectible_Objective_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AME_Collectible_Objective_BP_C::ExecuteUbergraph_ME_Collectible_Objective_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ME_Collectible_Objective_BP.ME_Collectible_Objective_BP_C.ExecuteUbergraph_ME_Collectible_Objective_BP");

	AME_Collectible_Objective_BP_C_ExecuteUbergraph_ME_Collectible_Objective_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
