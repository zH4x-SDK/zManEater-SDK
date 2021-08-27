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

// Function NewQuestWidget_BP.NewQuestWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNewQuestWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewQuestWidget_BP.NewQuestWidget_BP_C.Construct");

	UNewQuestWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewQuestWidget_BP.NewQuestWidget_BP_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNewQuestWidget_BP_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewQuestWidget_BP.NewQuestWidget_BP_C.Destruct");

	UNewQuestWidget_BP_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NewQuestWidget_BP.NewQuestWidget_BP_C.ExecuteUbergraph_NewQuestWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewQuestWidget_BP_C::ExecuteUbergraph_NewQuestWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewQuestWidget_BP.NewQuestWidget_BP_C.ExecuteUbergraph_NewQuestWidget_BP");

	UNewQuestWidget_BP_C_ExecuteUbergraph_NewQuestWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
