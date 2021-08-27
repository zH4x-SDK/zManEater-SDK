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

// Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoWidget_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.SubscribeToEvents_BP");

	UPlayerInfoWidget_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.attributes changed
// (BlueprintCallable, BlueprintEvent)
void UPlayerInfoWidget_BP_C::attributes_changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.attributes changed");

	UPlayerInfoWidget_BP_C_attributes_changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.UnsubscribeFromEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoWidget_BP_C::UnsubscribeFromEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.UnsubscribeFromEvents_BP");

	UPlayerInfoWidget_BP_C_UnsubscribeFromEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.ExecuteUbergraph_PlayerInfoWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfoWidget_BP_C::ExecuteUbergraph_PlayerInfoWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfoWidget_BP.PlayerInfoWidget_BP_C.ExecuteUbergraph_PlayerInfoWidget_BP");

	UPlayerInfoWidget_BP_C_ExecuteUbergraph_PlayerInfoWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
