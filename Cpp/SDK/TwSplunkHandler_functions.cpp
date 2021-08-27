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

// Function TwSplunkHandler.SplunkFunctionLibrary.SendToSplunk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TMap<struct FString, struct FString> userPayload                    (Parm, NativeAccessSpecifierPublic)
void USplunkFunctionLibrary::STATIC_SendToSplunk(TMap<struct FString, struct FString> userPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TwSplunkHandler.SplunkFunctionLibrary.SendToSplunk");

	USplunkFunctionLibrary_SendToSplunk_Params params;
	params.userPayload = userPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
