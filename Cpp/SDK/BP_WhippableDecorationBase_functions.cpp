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

// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.SetWidgetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WidgetIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WhippableDecorationBase_C::SetWidgetIndex(int WidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.SetWidgetIndex");

	ABP_WhippableDecorationBase_C_SetWidgetIndex_Params params;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeFocused
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_WhippableDecorationBase_C::CanBeFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeFocused");

	ABP_WhippableDecorationBase_C_CanBeFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeLockedOnTo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_WhippableDecorationBase_C::CanBeLockedOnTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeLockedOnTo");

	ABP_WhippableDecorationBase_C_CanBeLockedOnTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetDetectableComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPrimitiveComponent* ABP_WhippableDecorationBase_C::GetDetectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetDetectableComponent");

	ABP_WhippableDecorationBase_C_GetDetectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetDetectableComponentLocationOffset
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_WhippableDecorationBase_C::GetDetectableComponentLocationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetDetectableComponentLocationOffset");

	ABP_WhippableDecorationBase_C_GetDetectableComponentLocationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetFocusPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_WhippableDecorationBase_C::GetFocusPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetFocusPriority");

	ABP_WhippableDecorationBase_C_GetFocusPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetFriendlyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText ABP_WhippableDecorationBase_C::GetFriendlyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetFriendlyName");

	ABP_WhippableDecorationBase_C_GetFriendlyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetMaxDistanceVisible
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ABP_WhippableDecorationBase_C::GetMaxDistanceVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetMaxDistanceVisible");

	ABP_WhippableDecorationBase_C_GetMaxDistanceVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetSonarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForce                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetComponent* ABP_WhippableDecorationBase_C::GetSonarWidget(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetSonarWidget");

	ABP_WhippableDecorationBase_C_GetSonarWidget_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetWhipShotImpactEffect
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* ABP_WhippableDecorationBase_C::GetWhipShotImpactEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetWhipShotImpactEffect");

	ABP_WhippableDecorationBase_C_GetWhipShotImpactEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeConsumedWholeBy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_WhippableDecorationBase_C::CanBeConsumedWholeBy(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.CanBeConsumedWholeBy");

	ABP_WhippableDecorationBase_C_CanBeConsumedWholeBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_WhippableDecorationBase_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.GetSizeLevel");

	ABP_WhippableDecorationBase_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WhippableDecorationBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.ReceiveBeginPlay");

	ABP_WhippableDecorationBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.OnGrabbedBy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     GrabbedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GrabPointIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WhippableDecorationBase_C::OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.OnGrabbedBy");

	ABP_WhippableDecorationBase_C_OnGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.GrabbedComponent = GrabbedComponent;
	params.GrabPointIndex = GrabPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.ExecuteUbergraph_BP_WhippableDecorationBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WhippableDecorationBase_C::ExecuteUbergraph_BP_WhippableDecorationBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WhippableDecorationBase.BP_WhippableDecorationBase_C.ExecuteUbergraph_BP_WhippableDecorationBase");

	ABP_WhippableDecorationBase_C_ExecuteUbergraph_BP_WhippableDecorationBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
