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

// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuButtonCenter_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.Tick");

	UMainMenuButtonCenter_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMainMenuButtonCenter_BP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.PreConstruct");

	UMainMenuButtonCenter_BP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMainMenuButtonCenter_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.Construct");

	UMainMenuButtonCenter_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnMouseLeave_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMainMenuButtonCenter_BP_C::OnMouseLeave_BP(const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnMouseLeave_BP");

	UMainMenuButtonCenter_BP_C_OnMouseLeave_BP_Params params;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UMainMenuButtonCenter_BP_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnAddedToFocusPath");

	UMainMenuButtonCenter_BP_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnMouseEnter_BP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               InGeometry                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMainMenuButtonCenter_BP_C::OnMouseEnter_BP(const struct FGeometry& InGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnMouseEnter_BP");

	UMainMenuButtonCenter_BP_C_OnMouseEnter_BP_Params params;
	params.InGeometry = InGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UMainMenuButtonCenter_BP_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.OnRemovedFromFocusPath");

	UMainMenuButtonCenter_BP_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.ExecuteUbergraph_MainMenuButtonCenter_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuButtonCenter_BP_C::ExecuteUbergraph_MainMenuButtonCenter_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuButtonCenter_BP.MainMenuButtonCenter_BP_C.ExecuteUbergraph_MainMenuButtonCenter_BP");

	UMainMenuButtonCenter_BP_C_ExecuteUbergraph_MainMenuButtonCenter_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
