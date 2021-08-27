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

// Function BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C.OnCinematicComplete
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Command_Ship_Electro_C::OnCinematicComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C.OnCinematicComplete");

	ABP_Base_USCG_Command_Ship_Electro_C_OnCinematicComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C.ElectroShieldDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Base_USCG_Command_Ship_Electro_C::ElectroShieldDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C.ElectroShieldDestroyed");

	ABP_Base_USCG_Command_Ship_Electro_C_ElectroShieldDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C.ExecuteUbergraph_BP_Base_USCG_Command_Ship_Electro
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Base_USCG_Command_Ship_Electro_C::ExecuteUbergraph_BP_Base_USCG_Command_Ship_Electro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C.ExecuteUbergraph_BP_Base_USCG_Command_Ship_Electro");

	ABP_Base_USCG_Command_Ship_Electro_C_ExecuteUbergraph_BP_Base_USCG_Command_Ship_Electro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
