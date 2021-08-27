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

// Function AM_ChunkSequence.AM_ChunkSequence_C.MontageEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAM_ChunkSequence_C::MontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AM_ChunkSequence.AM_ChunkSequence_C.MontageEnded");

	UAM_ChunkSequence_C_MontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AM_ChunkSequence.AM_ChunkSequence_C.ExecuteUbergraph_AM_ChunkSequence
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAM_ChunkSequence_C::ExecuteUbergraph_AM_ChunkSequence(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AM_ChunkSequence.AM_ChunkSequence_C.ExecuteUbergraph_AM_ChunkSequence");

	UAM_ChunkSequence_C_ExecuteUbergraph_AM_ChunkSequence_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
