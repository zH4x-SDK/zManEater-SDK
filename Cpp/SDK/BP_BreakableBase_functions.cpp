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

// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetEnabled
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BreakableBase_C::GetMapWidgetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetEnabled");

	ABP_BreakableBase_C_GetMapWidgetEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetMaterial
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMaterialInterface* ABP_BreakableBase_C::GetMapWidgetMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetMaterial");

	ABP_BreakableBase_C_GetMapWidgetMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapDescriptionText
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText ABP_BreakableBase_C::GetMapDescriptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapDescriptionText");

	ABP_BreakableBase_C_GetMapDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.ShouldClampToEdgeOfMap
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_BreakableBase_C::ShouldClampToEdgeOfMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.ShouldClampToEdgeOfMap");

	ABP_BreakableBase_C_ShouldClampToEdgeOfMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapDisplayName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText ABP_BreakableBase_C::GetMapDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapDisplayName");

	ABP_BreakableBase_C_GetMapDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetIcon
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTexture2D* ABP_BreakableBase_C::GetMapWidgetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetIcon");

	ABP_BreakableBase_C_GetMapWidgetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_BreakableBase_C::GetMapWidgetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetPriority");

	ABP_BreakableBase_C_GetMapWidgetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetSize
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector2D ABP_BreakableBase_C::GetMapWidgetSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetSize");

	ABP_BreakableBase_C_GetMapWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetVisibility
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility ABP_BreakableBase_C::GetMapWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetMapWidgetVisibility");

	ABP_BreakableBase_C_GetMapWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.SetWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBase_C::SetWidgetIndex(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.SetWidgetIndex");

	ABP_BreakableBase_C_SetWidgetIndex_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* ABP_BreakableBase_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GetSonarWidget");

	ABP_BreakableBase_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_BreakableBase.BP_BreakableBase_C.HideInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BreakableBase_C::HideInWorldWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.HideInWorldWidget");

	ABP_BreakableBase_C_HideInWorldWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.ShowInWorldWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBase_C::ShowInWorldWidget(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.ShowInWorldWidget");

	ABP_BreakableBase_C_ShowInWorldWidget_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.RevealOnMap
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_BreakableBase_C::RevealOnMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.RevealOnMap");

	ABP_BreakableBase_C_RevealOnMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.OnWidgetMouseDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_BreakableBase_C::OnWidgetMouseDown(class UUserWidget* Widget, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.OnWidgetMouseDown");

	ABP_BreakableBase_C_OnWidgetMouseDown_Params params;
	params.Widget = Widget;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BreakableBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.ReceiveBeginPlay");

	ABP_BreakableBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.OnPingedByPlayerSonar
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BreakableBase_C::OnPingedByPlayerSonar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.OnPingedByPlayerSonar");

	ABP_BreakableBase_C_OnPingedByPlayerSonar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.GrateFractured
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitPoint                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitDirection                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBase_C::GrateFractured(const struct FVector& HitPoint, const struct FVector& HitDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.GrateFractured");

	ABP_BreakableBase_C_GrateFractured_Params params;
	params.HitPoint = HitPoint;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.BindGrateFractured
// (BlueprintCallable, BlueprintEvent)
void ABP_BreakableBase_C::BindGrateFractured()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.BindGrateFractured");

	ABP_BreakableBase_C_BindGrateFractured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableBase.BP_BreakableBase_C.ExecuteUbergraph_BP_BreakableBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBase_C::ExecuteUbergraph_BP_BreakableBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableBase.BP_BreakableBase_C.ExecuteUbergraph_BP_BreakableBase");

	ABP_BreakableBase_C_ExecuteUbergraph_BP_BreakableBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
