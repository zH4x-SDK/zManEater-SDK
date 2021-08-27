#pragma once

// Name: ManEater, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.SubscribeToEvents_BP
struct UContextualControlWidget_BP_C_SubscribeToEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.KnifingStateChanged
struct UContextualControlWidget_BP_C_KnifingStateChanged_Params
{
	bool                                               bIsKnifing;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Maneater_ECharacterActionMode>         ChangeContext;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.MovementModeChanged
struct UContextualControlWidget_BP_C_MovementModeChanged_Params
{
	class AME_PlayerSharkCharacter*                    PlayerShark;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  OldMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ContextualControlWidget_BP.ContextualControlWidget_BP_C.ExecuteUbergraph_ContextualControlWidget_BP
struct UContextualControlWidget_BP_C_ExecuteUbergraph_ContextualControlWidget_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
