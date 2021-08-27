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

// Function BP_PipeBomb.BP_PipeBomb_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PipeBomb_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeBomb.BP_PipeBomb_C.CanBeFocused");

	ABP_PipeBomb_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PipeBomb.BP_PipeBomb_C.CanBeConsumedWholeBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PipeBomb_C::CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeBomb.BP_PipeBomb_C.CanBeConsumedWholeBy");

	ABP_PipeBomb_C_CanBeConsumedWholeBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PipeBomb.BP_PipeBomb_C.CanBeLockedOnTo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_PipeBomb_C::CanBeLockedOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeBomb.BP_PipeBomb_C.CanBeLockedOnTo");

	ABP_PipeBomb_C_CanBeLockedOnTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PipeBomb.BP_PipeBomb_C.GetFocusPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_PipeBomb_C::GetFocusPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeBomb.BP_PipeBomb_C.GetFocusPriority");

	ABP_PipeBomb_C_GetFocusPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_PipeBomb.BP_PipeBomb_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_PipeBomb_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeBomb.BP_PipeBomb_C.GetSizeLevel");

	ABP_PipeBomb_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
