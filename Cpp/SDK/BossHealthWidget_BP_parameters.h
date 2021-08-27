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

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateShieldHealthPercent
struct UBossHealthWidget_BP_C_UpdateShieldHealthPercent_Params
{
	float                                              InPercent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateDefeatProgress
struct UBossHealthWidget_BP_C_UpdateDefeatProgress_Params
{
	int                                                Progress;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumToDefeat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.HandleVisiblityState
struct UBossHealthWidget_BP_C_HandleVisiblityState_Params
{
	TEnumAsByte<EBossUIType_EBossUIType>               BossUIType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateTimer
struct UBossHealthWidget_BP_C_UpdateTimer_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.UpdateHealthPercent
struct UBossHealthWidget_BP_C_UpdateHealthPercent_Params
{
	float                                              InPercent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.OnHealthBarMadeVisible
struct UBossHealthWidget_BP_C_OnHealthBarMadeVisible_Params
{
	struct FText                                       FirstName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       LastName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.OnDefeatHuntersComplete
struct UBossHealthWidget_BP_C_OnDefeatHuntersComplete_Params
{
};

// Function BossHealthWidget_BP.BossHealthWidget_BP_C.ExecuteUbergraph_BossHealthWidget_BP
struct UBossHealthWidget_BP_C_ExecuteUbergraph_BossHealthWidget_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
