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

// Function LandmarkCinInterface.LandmarkCinInterface_C.PlayCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ObjectiveName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULandmarkCinInterface_C::PlayCinematic(const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LandmarkCinInterface.LandmarkCinInterface_C.PlayCinematic");

	ULandmarkCinInterface_C_PlayCinematic_Params params;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
