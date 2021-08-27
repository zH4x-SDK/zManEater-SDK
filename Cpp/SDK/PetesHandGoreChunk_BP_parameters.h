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

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.GetDetectableComponent
struct APetesHandGoreChunk_BP_C_GetDetectableComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.HideInWorldWidget
struct APetesHandGoreChunk_BP_C_HideInWorldWidget_Params
{
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ShowInWorldWidget
struct APetesHandGoreChunk_BP_C_ShowInWorldWidget_Params
{
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnGrabPointConsumed
struct APetesHandGoreChunk_BP_C_OnGrabPointConsumed_Params
{
	class AME_AnimalCharacter*                         ConsumingAnimal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FThrashGrabPoint                            ConsumedGrabPoint;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       GoreCapBoneName;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ReceiveTick
struct APetesHandGoreChunk_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnConsumedWhole
struct APetesHandGoreChunk_BP_C_OnConsumedWhole_Params
{
	class AME_AnimalCharacter*                         ConsumingAnimal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.OnCinematicModeChanged_Event_1
struct APetesHandGoreChunk_BP_C_OnCinematicModeChanged_Event_1_Params
{
	bool                                               bCinematicMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ReceiveBeginPlay
struct APetesHandGoreChunk_BP_C_ReceiveBeginPlay_Params
{
};

// Function PetesHandGoreChunk_BP.PetesHandGoreChunk_BP_C.ExecuteUbergraph_PetesHandGoreChunk_BP
struct APetesHandGoreChunk_BP_C_ExecuteUbergraph_PetesHandGoreChunk_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
