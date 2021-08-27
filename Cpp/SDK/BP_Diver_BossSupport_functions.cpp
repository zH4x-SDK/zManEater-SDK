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

// Function BP_Diver_BossSupport.BP_Diver_BossSupport_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_BossSupport_C::OnDied(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver_BossSupport.BP_Diver_BossSupport_C.OnDied");

	ABP_Diver_BossSupport_C_OnDied_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Diver_BossSupport.BP_Diver_BossSupport_C.ExecuteUbergraph_BP_Diver_BossSupport
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Diver_BossSupport_C::ExecuteUbergraph_BP_Diver_BossSupport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Diver_BossSupport.BP_Diver_BossSupport_C.ExecuteUbergraph_BP_Diver_BossSupport");

	ABP_Diver_BossSupport_C_ExecuteUbergraph_BP_Diver_BossSupport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
