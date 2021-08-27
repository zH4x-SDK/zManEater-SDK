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

// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ValidAnimBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AWildlife_Base_BP_C::ValidAnimBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.ValidAnimBP");

	AWildlife_Base_BP_C_ValidAnimBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.RandomElectrouteValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Random_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::RandomElectrouteValue(float* Random_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.RandomElectrouteValue");

	AWildlife_Base_BP_C_RandomElectrouteValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Random_Value != nullptr)
		*Random_Value = params.Random_Value;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ElectroctuteImpulse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AWildlife_Base_BP_C::ElectroctuteImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.ElectroctuteImpulse");

	AWildlife_Base_BP_C_ElectroctuteImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.AllMissingLimbFunctions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AWildlife_Base_BP_C::AllMissingLimbFunctions(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.AllMissingLimbFunctions");

	AWildlife_Base_BP_C_AllMissingLimbFunctions_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GetCastABP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UME_AnimInstance_WildlifeNPC* Cast_Anim_BP                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::GetCastABP(class UME_AnimInstance_WildlifeNPC** Cast_Anim_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.GetCastABP");

	AWildlife_Base_BP_C_GetCastABP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cast_Anim_BP != nullptr)
		*Cast_Anim_BP = params.Cast_Anim_BP;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GetThrashableSize
// (Public, BlueprintCallable, BlueprintEvent)
void AWildlife_Base_BP_C::GetThrashableSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.GetThrashableSize");

	AWildlife_Base_BP_C_GetThrashableSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackTimeline__FinishedFunc
// (BlueprintEvent)
void AWildlife_Base_BP_C::BlendBackTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackTimeline__FinishedFunc");

	AWildlife_Base_BP_C_BlendBackTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackTimeline__UpdateFunc
// (BlueprintEvent)
void AWildlife_Base_BP_C::BlendBackTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackTimeline__UpdateFunc");

	AWildlife_Base_BP_C_BlendBackTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AWildlife_Base_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.Timeline_0__FinishedFunc");

	AWildlife_Base_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AWildlife_Base_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.Timeline_0__UpdateFunc");

	AWildlife_Base_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1");

	AWildlife_Base_BP_C_OnNotifyEnd_F9977F0D4685137F3108009788F8B3D1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1");

	AWildlife_Base_BP_C_OnNotifyBegin_F9977F0D4685137F3108009788F8B3D1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnInterrupted_F9977F0D4685137F3108009788F8B3D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::OnInterrupted_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnInterrupted_F9977F0D4685137F3108009788F8B3D1");

	AWildlife_Base_BP_C_OnInterrupted_F9977F0D4685137F3108009788F8B3D1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnBlendOut_F9977F0D4685137F3108009788F8B3D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::OnBlendOut_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnBlendOut_F9977F0D4685137F3108009788F8B3D1");

	AWildlife_Base_BP_C_OnBlendOut_F9977F0D4685137F3108009788F8B3D1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnCompleted_F9977F0D4685137F3108009788F8B3D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::OnCompleted_F9977F0D4685137F3108009788F8B3D1(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnCompleted_F9977F0D4685137F3108009788F8B3D1");

	AWildlife_Base_BP_C_OnCompleted_F9977F0D4685137F3108009788F8B3D1_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AWildlife_Base_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.ReceiveBeginPlay");

	AWildlife_Base_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GameplayTagAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TagDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::GameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.GameplayTagAdded");

	AWildlife_Base_BP_C_GameplayTagAdded_Params params;
	params.TagsAdded = TagsAdded;
	params.TagDuration = TagDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.GameplayTagRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagsAdded                      (BlueprintVisible, BlueprintReadOnly, Parm)
void AWildlife_Base_BP_C::GameplayTagRemoved(const struct FGameplayTagContainer& TagsAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.GameplayTagRemoved");

	AWildlife_Base_BP_C_GameplayTagRemoved_Params params;
	params.TagsAdded = TagsAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.ReceiveTick");

	AWildlife_Base_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BeginTimeToDie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::BeginTimeToDie(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.BeginTimeToDie");

	AWildlife_Base_BP_C_BeginTimeToDie_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::OnDied(class AController* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.OnDied");

	AWildlife_Base_BP_C_OnDied_Params params;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackToDefault
// (Event, Public, BlueprintEvent)
void AWildlife_Base_BP_C::BlendBackToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendBackToDefault");

	AWildlife_Base_BP_C_BlendBackToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendMeshToDefault
// (BlueprintCallable, BlueprintEvent)
void AWildlife_Base_BP_C::BlendMeshToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.BlendMeshToDefault");

	AWildlife_Base_BP_C_BlendMeshToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.BreakBlend
// (BlueprintCallable, BlueprintEvent)
void AWildlife_Base_BP_C::BreakBlend()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.BreakBlend");

	AWildlife_Base_BP_C_BreakBlend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Wildlife_Base_BP.Wildlife_Base_BP_C.ExecuteUbergraph_Wildlife_Base_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWildlife_Base_BP_C::ExecuteUbergraph_Wildlife_Base_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wildlife_Base_BP.Wildlife_Base_BP_C.ExecuteUbergraph_Wildlife_Base_BP");

	AWildlife_Base_BP_C_ExecuteUbergraph_Wildlife_Base_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
