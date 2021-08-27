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

// Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.PlayCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ObjectiveName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADO_Sub_Cine_Landmarks_C::PlayCinematic(const struct FName& ObjectiveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.PlayCinematic");

	ADO_Sub_Cine_Landmarks_C_PlayCinematic_Params params;
	params.ObjectiveName = ObjectiveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.StartCinematicMode
// (BlueprintCallable, BlueprintEvent)
void ADO_Sub_Cine_Landmarks_C::StartCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.StartCinematicMode");

	ADO_Sub_Cine_Landmarks_C_StartCinematicMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.StopCinematicMode
// (BlueprintCallable, BlueprintEvent)
void ADO_Sub_Cine_Landmarks_C::StopCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.StopCinematicMode");

	ADO_Sub_Cine_Landmarks_C_StopCinematicMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.ExecuteUbergraph_DO_Sub_Cine_Landmarks
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADO_Sub_Cine_Landmarks_C::ExecuteUbergraph_DO_Sub_Cine_Landmarks(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DO_Sub_Cine_Landmarks.DO_Sub_Cine_Landmarks_C.ExecuteUbergraph_DO_Sub_Cine_Landmarks");

	ADO_Sub_Cine_Landmarks_C_ExecuteUbergraph_DO_Sub_Cine_Landmarks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
