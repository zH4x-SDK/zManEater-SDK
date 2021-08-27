﻿// Name: ManEater, Version: 1.0.0

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

// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.NarratorVolumeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSettingsMenuPanel_BP_C::NarratorVolumeChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.NarratorVolumeChanged");

	UAudioSettingsMenuPanel_BP_C_NarratorVolumeChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.DialogVolumeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSettingsMenuPanel_BP_C::DialogVolumeChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.DialogVolumeChanged");

	UAudioSettingsMenuPanel_BP_C_DialogVolumeChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.SFXVolumeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSettingsMenuPanel_BP_C::SFXVolumeChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.SFXVolumeChanged");

	UAudioSettingsMenuPanel_BP_C_SFXVolumeChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.MusicVolumeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSettingsMenuPanel_BP_C::MusicVolumeChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.MusicVolumeChanged");

	UAudioSettingsMenuPanel_BP_C_MusicVolumeChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.MasterVolumeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSettingsMenuPanel_BP_C::MasterVolumeChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.MasterVolumeChanged");

	UAudioSettingsMenuPanel_BP_C_MasterVolumeChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.GetDefaultFocusWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UAudioSettingsMenuPanel_BP_C::GetDefaultFocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.GetDefaultFocusWidget");

	UAudioSettingsMenuPanel_BP_C_GetDefaultFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UAudioSettingsMenuPanel_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.Construct");

	UAudioSettingsMenuPanel_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.ExecuteUbergraph_AudioSettingsMenuPanel_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioSettingsMenuPanel_BP_C::ExecuteUbergraph_AudioSettingsMenuPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AudioSettingsMenuPanel_BP.AudioSettingsMenuPanel_BP_C.ExecuteUbergraph_AudioSettingsMenuPanel_BP");

	UAudioSettingsMenuPanel_BP_C_ExecuteUbergraph_AudioSettingsMenuPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
