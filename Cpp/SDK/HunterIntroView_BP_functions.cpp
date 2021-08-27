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

// Function HunterIntroView_BP.HunterIntroView_BP_C.PlayApexRightAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void UHunterIntroView_BP_C::PlayApexRightAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HunterIntroView_BP.HunterIntroView_BP_C.PlayApexRightAnimation");

	UHunterIntroView_BP_C_PlayApexRightAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterIntroView_BP.HunterIntroView_BP_C.DoesRequireInputUIMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHunterIntroView_BP_C::DoesRequireInputUIMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function HunterIntroView_BP.HunterIntroView_BP_C.DoesRequireInputUIMode");

	UHunterIntroView_BP_C_DoesRequireInputUIMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HunterIntroView_BP.HunterIntroView_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHunterIntroView_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function HunterIntroView_BP.HunterIntroView_BP_C.SubscribeToEvents_BP");

	UHunterIntroView_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HunterIntroView_BP.HunterIntroView_BP_C.ExecuteUbergraph_HunterIntroView_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHunterIntroView_BP_C::ExecuteUbergraph_HunterIntroView_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HunterIntroView_BP.HunterIntroView_BP_C.ExecuteUbergraph_HunterIntroView_BP");

	UHunterIntroView_BP_C_ExecuteUbergraph_HunterIntroView_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
