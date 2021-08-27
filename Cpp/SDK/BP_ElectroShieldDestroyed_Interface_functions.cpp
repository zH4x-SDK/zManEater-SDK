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

// Function BP_ElectroShieldDestroyed_Interface.BP_ElectroShieldDestroyed_Interface_C.ElectroShieldDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_ElectroShieldDestroyed_Interface_C::ElectroShieldDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectroShieldDestroyed_Interface.BP_ElectroShieldDestroyed_Interface_C.ElectroShieldDestroyed");

	UBP_ElectroShieldDestroyed_Interface_C_ElectroShieldDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
