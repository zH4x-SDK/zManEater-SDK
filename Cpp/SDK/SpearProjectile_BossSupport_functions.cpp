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

// Function SpearProjectile_BossSupport.SpearProjectile_BossSupport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASpearProjectile_BossSupport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpearProjectile_BossSupport.SpearProjectile_BossSupport_C.ReceiveBeginPlay");

	ASpearProjectile_BossSupport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpearProjectile_BossSupport.SpearProjectile_BossSupport_C.ExecuteUbergraph_SpearProjectile_BossSupport
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASpearProjectile_BossSupport_C::ExecuteUbergraph_SpearProjectile_BossSupport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpearProjectile_BossSupport.SpearProjectile_BossSupport_C.ExecuteUbergraph_SpearProjectile_BossSupport");

	ASpearProjectile_BossSupport_C_ExecuteUbergraph_SpearProjectile_BossSupport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
