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

// Function InGameMenuView_BP.InGameMenuView_BP_C.SetPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInfamy                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEvolutions                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsMap                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsQuestLog                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInGameMenuView_BP_C::SetPanel(bool IsInfamy, bool IsEvolutions, bool IsMap, bool IsQuestLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuView_BP.InGameMenuView_BP_C.SetPanel");

	UInGameMenuView_BP_C_SetPanel_Params params;
	params.IsInfamy = IsInfamy;
	params.IsEvolutions = IsEvolutions;
	params.IsMap = IsMap;
	params.IsQuestLog = IsQuestLog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenuView_BP.InGameMenuView_BP_C.OpenEvolutionPanel_BP
// (Event, Public, BlueprintEvent)
void UInGameMenuView_BP_C::OpenEvolutionPanel_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuView_BP.InGameMenuView_BP_C.OpenEvolutionPanel_BP");

	UInGameMenuView_BP_C_OpenEvolutionPanel_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InGameMenuView_BP.InGameMenuView_BP_C.ExecuteUbergraph_InGameMenuView_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInGameMenuView_BP_C::ExecuteUbergraph_InGameMenuView_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameMenuView_BP.InGameMenuView_BP_C.ExecuteUbergraph_InGameMenuView_BP");

	UInGameMenuView_BP_C_ExecuteUbergraph_InGameMenuView_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
