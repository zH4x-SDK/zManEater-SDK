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

// Function BountyManager_BP.BountyManager_BP_C.Infamy Rank Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rank                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABountyManager_BP_C::Infamy_Rank_Up(int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyManager_BP.BountyManager_BP_C.Infamy Rank Up");

	ABountyManager_BP_C_Infamy_Rank_Up_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BountyManager_BP.BountyManager_BP_C.Bounty Beginning
// (BlueprintCallable, BlueprintEvent)
void ABountyManager_BP_C::Bounty_Beginning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyManager_BP.BountyManager_BP_C.Bounty Beginning");

	ABountyManager_BP_C_Bounty_Beginning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BountyManager_BP.BountyManager_BP_C.Bounty Ending
// (BlueprintCallable, BlueprintEvent)
void ABountyManager_BP_C::Bounty_Ending()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyManager_BP.BountyManager_BP_C.Bounty Ending");

	ABountyManager_BP_C_Bounty_Ending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BountyManager_BP.BountyManager_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABountyManager_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyManager_BP.BountyManager_BP_C.ReceiveBeginPlay");

	ABountyManager_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BountyManager_BP.BountyManager_BP_C.ExecuteUbergraph_BountyManager_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABountyManager_BP_C::ExecuteUbergraph_BountyManager_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyManager_BP.BountyManager_BP_C.ExecuteUbergraph_BountyManager_BP");

	ABountyManager_BP_C_ExecuteUbergraph_BountyManager_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
