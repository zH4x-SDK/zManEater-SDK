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

// Function InGameMenuController_BP.InGameMenuController_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UInGameMenuController_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuController_BP.InGameMenuController_BP_C.Construct");

	UInGameMenuController_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenuController_BP.InGameMenuController_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInGameMenuController_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuController_BP.InGameMenuController_BP_C.SubscribeToEvents_BP");

	UInGameMenuController_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenuController_BP.InGameMenuController_BP_C.ExecuteUbergraph_InGameMenuController_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInGameMenuController_BP_C::ExecuteUbergraph_InGameMenuController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuController_BP.InGameMenuController_BP_C.ExecuteUbergraph_InGameMenuController_BP");

	UInGameMenuController_BP_C_ExecuteUbergraph_InGameMenuController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
