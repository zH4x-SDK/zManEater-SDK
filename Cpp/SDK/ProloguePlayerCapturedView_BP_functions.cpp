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

// Function ProloguePlayerCapturedView_BP.ProloguePlayerCapturedView_BP_C.DoesRequireInputUIMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UProloguePlayerCapturedView_BP_C::DoesRequireInputUIMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProloguePlayerCapturedView_BP.ProloguePlayerCapturedView_BP_C.DoesRequireInputUIMode");

	UProloguePlayerCapturedView_BP_C_DoesRequireInputUIMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
