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

// Function BP_PetesBoat_V1_AI_Controller.BP_PetesBoat_V1_AI_Controller_C.ManageBossBattleCompleteBB
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CompleteBattle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PetesBoat_V1_AI_Controller_C::ManageBossBattleCompleteBB(bool CompleteBattle, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PetesBoat_V1_AI_Controller.BP_PetesBoat_V1_AI_Controller_C.ManageBossBattleCompleteBB");

	ABP_PetesBoat_V1_AI_Controller_C_ManageBossBattleCompleteBB_Params params;
	params.CompleteBattle = CompleteBattle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
