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

// Function BP_JetSki_Bounty_Shotgun.BP_JetSki_Bounty_Shotgun_C.WallHit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_JetSki_Bounty_Shotgun_C::WallHit(class UPrimitiveComponent* MyComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty_Shotgun.BP_JetSki_Bounty_Shotgun_C.WallHit");

	ABP_JetSki_Bounty_Shotgun_C_WallHit_Params params;
	params.MyComp = MyComp;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_JetSki_Bounty_Shotgun.BP_JetSki_Bounty_Shotgun_C.ExecuteUbergraph_BP_JetSki_Bounty_Shotgun
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_JetSki_Bounty_Shotgun_C::ExecuteUbergraph_BP_JetSki_Bounty_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JetSki_Bounty_Shotgun.BP_JetSki_Bounty_Shotgun_C.ExecuteUbergraph_BP_JetSki_Bounty_Shotgun");

	ABP_JetSki_Bounty_Shotgun_C_ExecuteUbergraph_BP_JetSki_Bounty_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
