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

// Function FSH_SwordFish_ABP.FSH_SwordFish_ABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFSH_SwordFish_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_ABP.FSH_SwordFish_ABP_C.BlueprintUpdateAnimation");

	UFSH_SwordFish_ABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_ABP.FSH_SwordFish_ABP_C.ExecuteUbergraph_FSH_SwordFish_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFSH_SwordFish_ABP_C::ExecuteUbergraph_FSH_SwordFish_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_ABP.FSH_SwordFish_ABP_C.ExecuteUbergraph_FSH_SwordFish_ABP");

	UFSH_SwordFish_ABP_C_ExecuteUbergraph_FSH_SwordFish_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
