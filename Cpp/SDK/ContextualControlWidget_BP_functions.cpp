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

// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.SubscribeToEvents_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AHUD*                    HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContextualControlWidget_BP_C::SubscribeToEvents_BP(class AHUD* HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.SubscribeToEvents_BP");

	UContextualControlWidget_BP_C_SubscribeToEvents_BP_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.KnifingStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsKnifing                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContextualControlWidget_BP_C::KnifingStateChanged(bool bIsKnifing, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.KnifingStateChanged");

	UContextualControlWidget_BP_C_KnifingStateChanged_Params params;
	params.bIsKnifing = bIsKnifing;
	params.ChangeContext = ChangeContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.MovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AME_PlayerSharkCharacter* PlayerShark                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> OldMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Engine_EMovementMode> NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContextualControlWidget_BP_C::MovementModeChanged(class AME_PlayerSharkCharacter* PlayerShark, TEnumAsByte<Engine_EMovementMode> OldMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.MovementModeChanged");

	UContextualControlWidget_BP_C_MovementModeChanged_Params params;
	params.PlayerShark = PlayerShark;
	params.OldMovementMode = OldMovementMode;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.ExecuteUbergraph_ContextualControlWidget_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UContextualControlWidget_BP_C::ExecuteUbergraph_ContextualControlWidget_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.ExecuteUbergraph_ContextualControlWidget_BP");

	UContextualControlWidget_BP_C_ExecuteUbergraph_ContextualControlWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
