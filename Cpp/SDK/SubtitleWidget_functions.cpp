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

// Function SubtitleWidget.SubtitleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USubtitleWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitleWidget.SubtitleWidget_C.Construct");

	USubtitleWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SubtitleWidget.SubtitleWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USubtitleWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitleWidget.SubtitleWidget_C.Destruct");

	USubtitleWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SubtitleWidget.SubtitleWidget_C.ExecuteUbergraph_SubtitleWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USubtitleWidget_C::ExecuteUbergraph_SubtitleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitleWidget.SubtitleWidget_C.ExecuteUbergraph_SubtitleWidget");

	USubtitleWidget_C_ExecuteUbergraph_SubtitleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
