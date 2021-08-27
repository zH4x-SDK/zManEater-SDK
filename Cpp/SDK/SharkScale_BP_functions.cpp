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

// Function SharkScale_BP.SharkScale_BP_C.SetSharkSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void USharkScale_BP_C::SetSharkSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharkScale_BP.SharkScale_BP_C.SetSharkSize");

	USharkScale_BP_C_SetSharkSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SharkScale_BP.SharkScale_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USharkScale_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharkScale_BP.SharkScale_BP_C.Construct");

	USharkScale_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SharkScale_BP.SharkScale_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USharkScale_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SharkScale_BP.SharkScale_BP_C.Tick");

	USharkScale_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SharkScale_BP.SharkScale_BP_C.ExecuteUbergraph_SharkScale_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USharkScale_BP_C::ExecuteUbergraph_SharkScale_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SharkScale_BP.SharkScale_BP_C.ExecuteUbergraph_SharkScale_BP");

	USharkScale_BP_C_ExecuteUbergraph_SharkScale_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
