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

// Function TutorialInfoWidget_BP.TutorialInfoWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTutorialInfoWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoWidget_BP.TutorialInfoWidget_BP_C.Construct");

	UTutorialInfoWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TutorialInfoWidget_BP.TutorialInfoWidget_BP_C.ExecuteUbergraph_TutorialInfoWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialInfoWidget_BP_C::ExecuteUbergraph_TutorialInfoWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TutorialInfoWidget_BP.TutorialInfoWidget_BP_C.ExecuteUbergraph_TutorialInfoWidget_BP");

	UTutorialInfoWidget_BP_C_ExecuteUbergraph_TutorialInfoWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
