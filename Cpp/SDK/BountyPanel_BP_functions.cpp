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

// Function BountyPanel_BP.BountyPanel_BP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBountyPanel_BP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyPanel_BP.BountyPanel_BP_C.PreConstruct");

	UBountyPanel_BP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BountyPanel_BP.BountyPanel_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBountyPanel_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyPanel_BP.BountyPanel_BP_C.Construct");

	UBountyPanel_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BountyPanel_BP.BountyPanel_BP_C.ExecuteUbergraph_BountyPanel_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBountyPanel_BP_C::ExecuteUbergraph_BountyPanel_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BountyPanel_BP.BountyPanel_BP_C.ExecuteUbergraph_BountyPanel_BP");

	UBountyPanel_BP_C_ExecuteUbergraph_BountyPanel_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
