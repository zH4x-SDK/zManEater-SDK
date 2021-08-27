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

// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            IconIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInWorldObjectiveIconsWidget_BP_C::show(bool show, class USceneComponent* Component, int IconIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.show");

	UInWorldObjectiveIconsWidget_BP_C_show_Params params;
	params.show = show;
	params.Component = Component;
	params.IconIndex = IconIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.SetOwningActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInWorldObjectiveIconsWidget_BP_C::SetOwningActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.SetOwningActor");

	UInWorldObjectiveIconsWidget_BP_C_SetOwningActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.SetDistanceText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Distance                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UInWorldObjectiveIconsWidget_BP_C::SetDistanceText(const struct FText& Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.SetDistanceText");

	UInWorldObjectiveIconsWidget_BP_C_SetDistanceText_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UInWorldObjectiveIconsWidget_BP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.Construct");

	UInWorldObjectiveIconsWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInWorldObjectiveIconsWidget_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.Tick");

	UInWorldObjectiveIconsWidget_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.ExecuteUbergraph_InWorldObjectiveIconsWidget_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInWorldObjectiveIconsWidget_BP_C::ExecuteUbergraph_InWorldObjectiveIconsWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InWorldObjectiveIconsWidget_BP.InWorldObjectiveIconsWidget_BP_C.ExecuteUbergraph_InWorldObjectiveIconsWidget_BP");

	UInWorldObjectiveIconsWidget_BP_C_ExecuteUbergraph_InWorldObjectiveIconsWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
