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

// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.UpdateFromLandmarkMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGrottoMapMarkerWidget_BP_C* Landmark_Map_Marker            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapMarkerPopupWidget_BP_C::UpdateFromLandmarkMarker(class UGrottoMapMarkerWidget_BP_C* Landmark_Map_Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.UpdateFromLandmarkMarker");

	UMapMarkerPopupWidget_BP_C_UpdateFromLandmarkMarker_Params params;
	params.Landmark_Map_Marker = Landmark_Map_Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.UpdateFromObjectiveMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjectiveMapMarkerWidget_BP_C* Objective_Map_Marker           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapMarkerPopupWidget_BP_C::UpdateFromObjectiveMarker(class UObjectiveMapMarkerWidget_BP_C* Objective_Map_Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.UpdateFromObjectiveMarker");

	UMapMarkerPopupWidget_BP_C_UpdateFromObjectiveMarker_Params params;
	params.Objective_Map_Marker = Objective_Map_Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.OnHoveredMapMarkerWidgetUpdated
// (Event, Protected, BlueprintEvent)
void UMapMarkerPopupWidget_BP_C::OnHoveredMapMarkerWidgetUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.OnHoveredMapMarkerWidgetUpdated");

	UMapMarkerPopupWidget_BP_C_OnHoveredMapMarkerWidgetUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UMapMarkerPopupWidget_BP_C::BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UMapMarkerPopupWidget_BP_C_BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapMarkerPopupWidget_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.Tick");

	UMapMarkerPopupWidget_BP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
void UMapMarkerPopupWidget_BP_C::BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UMapMarkerPopupWidget_BP_C_BndEvt__FastTravelButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.ExecuteUbergraph_MapMarkerPopupWidget_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapMarkerPopupWidget_BP_C::ExecuteUbergraph_MapMarkerPopupWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapMarkerPopupWidget_BP.MapMarkerPopupWidget_BP_C.ExecuteUbergraph_MapMarkerPopupWidget_BP");

	UMapMarkerPopupWidget_BP_C_ExecuteUbergraph_MapMarkerPopupWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
