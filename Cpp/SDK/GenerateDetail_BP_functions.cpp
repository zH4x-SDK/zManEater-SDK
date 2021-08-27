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

// Function GenerateDetail_BP.GenerateDetail_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGenerateDetail_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenerateDetail_BP.GenerateDetail_BP_C.UserConstructionScript");

	AGenerateDetail_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
