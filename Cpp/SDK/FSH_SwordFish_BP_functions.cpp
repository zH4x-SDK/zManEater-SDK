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

// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.TryDeactivate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*> ActorComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void AFSH_SwordFish_BP_C::TryDeactivate(TArray<class UActorComponent*>* ActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.TryDeactivate");

	AFSH_SwordFish_BP_C_TryDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorComponent != nullptr)
		*ActorComponent = params.ActorComponent;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.GetSizeLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AFSH_SwordFish_BP_C::GetSizeLevel(class AME_AnimalCharacter* GrabbingAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.GetSizeLevel");

	AFSH_SwordFish_BP_C_GetSizeLevel_Params params;
	params.GrabbingAnimal = GrabbingAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AFSH_SwordFish_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.UserConstructionScript");

	AFSH_SwordFish_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_0_0__FinishedFunc
// (BlueprintEvent)
void AFSH_SwordFish_BP_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_0_0__FinishedFunc");

	AFSH_SwordFish_BP_C_Timeline_0_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_0_0__UpdateFunc
// (BlueprintEvent)
void AFSH_SwordFish_BP_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_0_0__UpdateFunc");

	AFSH_SwordFish_BP_C_Timeline_0_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void AFSH_SwordFish_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_1__FinishedFunc");

	AFSH_SwordFish_BP_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void AFSH_SwordFish_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.Timeline_1__UpdateFunc");

	AFSH_SwordFish_BP_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnLungeEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFSH_SwordFish_BP_C::OnLungeEnd(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnLungeEnd");

	AFSH_SwordFish_BP_C_OnLungeEnd_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFSH_SwordFish_BP_C::OnDied(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnDied");

	AFSH_SwordFish_BP_C_OnDied_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnMontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFSH_SwordFish_BP_C::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnMontageEnded");

	AFSH_SwordFish_BP_C_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnMontageStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFSH_SwordFish_BP_C::OnMontageStarted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnMontageStarted");

	AFSH_SwordFish_BP_C_OnMontageStarted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnGrabbedBy
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_AnimalCharacter*     GrabbingAnimal                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     GrabbedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GrabPointIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFSH_SwordFish_BP_C::OnGrabbedBy(class AME_AnimalCharacter* GrabbingAnimal, class UPrimitiveComponent* GrabbedComponent, int GrabPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.OnGrabbedBy");

	AFSH_SwordFish_BP_C_OnGrabbedBy_Params params;
	params.GrabbingAnimal = GrabbingAnimal;
	params.GrabbedComponent = GrabbedComponent;
	params.GrabPointIndex = GrabPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.ExecuteUbergraph_FSH_SwordFish_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFSH_SwordFish_BP_C::ExecuteUbergraph_FSH_SwordFish_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSH_SwordFish_BP.FSH_SwordFish_BP_C.ExecuteUbergraph_FSH_SwordFish_BP");

	AFSH_SwordFish_BP_C_ExecuteUbergraph_FSH_SwordFish_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
