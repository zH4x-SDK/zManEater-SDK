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

// Function BP_BreakableGate_Teen.BP_BreakableGate_Teen_C.GateDestroied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_BreakableGate_Teen_C::GateDestroied__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableGate_Teen.BP_BreakableGate_Teen_C.GateDestroied__DelegateSignature");

	ABP_BreakableGate_Teen_C_GateDestroied__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
