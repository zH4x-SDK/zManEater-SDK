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

// Function CINE_Pete3Battle_Intro_SEQ.SequenceDirector_C.SequenceEvent_1
// (Public, BlueprintCallable, BlueprintEvent)
void USequenceDirector_C::SequenceEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CINE_Pete3Battle_Intro_SEQ.SequenceDirector_C.SequenceEvent_1");

	USequenceDirector_C_SequenceEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
