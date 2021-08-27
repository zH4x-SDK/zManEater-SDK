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

// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.OnTimeDilation
struct UManeaterHUDView_BP_C_OnTimeDilation_Params
{
	bool                                               bStarted;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Maneater_ECharacterActionMode>         ActionMode;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.SubscribeToEvents_BP
struct UManeaterHUDView_BP_C_SubscribeToEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.UnsubscribeFromEvents_BP
struct UManeaterHUDView_BP_C_UnsubscribeFromEvents_BP_Params
{
	class AHUD*                                        HUD;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.Construct
struct UManeaterHUDView_BP_C_Construct_Params
{
};

// Function ManeaterHUDView_BP.ManeaterHUDView_BP_C.ExecuteUbergraph_ManeaterHUDView_BP
struct UManeaterHUDView_BP_C_ExecuteUbergraph_ManeaterHUDView_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
