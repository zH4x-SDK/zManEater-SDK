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

// Function SettingsMenuController_BP.SettingsMenuController_BP_C.PlayOutAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void USettingsMenuController_BP_C::PlayOutAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsMenuController_BP.SettingsMenuController_BP_C.PlayOutAnimation");

	USettingsMenuController_BP_C_PlayOutAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SettingsMenuController_BP.SettingsMenuController_BP_C.PlayInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void USettingsMenuController_BP_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsMenuController_BP.SettingsMenuController_BP_C.PlayInAnimation");

	USettingsMenuController_BP_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
