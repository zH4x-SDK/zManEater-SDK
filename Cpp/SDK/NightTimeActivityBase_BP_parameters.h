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

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ToggleNight
struct ANightTimeActivityBase_BP_C_ToggleNight_Params
{
};

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ToggleDay
struct ANightTimeActivityBase_BP_C_ToggleDay_Params
{
};

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ReceiveBeginPlay
struct ANightTimeActivityBase_BP_C_ReceiveBeginPlay_Params
{
};

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.TimeChanged
struct ANightTimeActivityBase_BP_C_TimeChanged_Params
{
	float                                              CurrentHour;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NextHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.OnTimeOfDayTrackerCreated
struct ANightTimeActivityBase_BP_C_OnTimeOfDayTrackerCreated_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.BindToOnTimeOfDayChanged
struct ANightTimeActivityBase_BP_C_BindToOnTimeOfDayChanged_Params
{
	class AME_TimeofDayInfo*                           TimeOfDayTracker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NightTimeActivityBase_BP.NightTimeActivityBase_BP_C.ExecuteUbergraph_NightTimeActivityBase_BP
struct ANightTimeActivityBase_BP_C_ExecuteUbergraph_NightTimeActivityBase_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
