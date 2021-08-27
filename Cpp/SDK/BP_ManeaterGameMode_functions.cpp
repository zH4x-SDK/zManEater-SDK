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

// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetSkyActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AME_DayCycle_SkyDome_BP_C* SkyActorReference              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ManeaterGameMode_C::GetSkyActor(class AME_DayCycle_SkyDome_BP_C** SkyActorReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetSkyActor");

	ABP_ManeaterGameMode_C_GetSkyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkyActorReference != nullptr)
		*SkyActorReference = params.SkyActorReference;

}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.SetSkyActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_DayCycle_SkyDome_BP_C* SkyActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ManeaterGameMode_C::SetSkyActor(class AME_DayCycle_SkyDome_BP_C* SkyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.SetSkyActor");

	ABP_ManeaterGameMode_C_SetSkyActor_Params params;
	params.SkyActor = SkyActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetCurrentApex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ApexClass                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWildlife_Base_BP_C*     WildlifeRef                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ManeaterGameMode_C::GetCurrentApex(class UClass** ApexClass, class AWildlife_Base_BP_C** WildlifeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetCurrentApex");

	ABP_ManeaterGameMode_C_GetCurrentApex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ApexClass != nullptr)
		*ApexClass = params.ApexClass;
	if (WildlifeRef != nullptr)
		*WildlifeRef = params.WildlifeRef;

}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.SetCurrentApex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ApexClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWildlife_Base_BP_C*     WildlifeRef                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ManeaterGameMode_C::SetCurrentApex(class UClass* ApexClass, class AWildlife_Base_BP_C* WildlifeRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.SetCurrentApex");

	ABP_ManeaterGameMode_C_SetCurrentApex_Params params;
	params.ApexClass = ApexClass;
	params.WildlifeRef = WildlifeRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetDefaultPawnClassForController
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             InController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClass* ABP_ManeaterGameMode_C::GetDefaultPawnClassForController(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.GetDefaultPawnClassForController");

	ABP_ManeaterGameMode_C_GetDefaultPawnClassForController_Params params;
	params.InController = InController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_ManeaterGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.ReceiveBeginPlay");

	ABP_ManeaterGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.PauseSunPosition
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPause                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ManeaterGameMode_C::PauseSunPosition(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.PauseSunPosition");

	ABP_ManeaterGameMode_C_PauseSunPosition_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.ExecuteUbergraph_BP_ManeaterGameMode
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ManeaterGameMode_C::ExecuteUbergraph_BP_ManeaterGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ManeaterGameMode.BP_ManeaterGameMode_C.ExecuteUbergraph_BP_ManeaterGameMode");

	ABP_ManeaterGameMode_C_ExecuteUbergraph_BP_ManeaterGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
