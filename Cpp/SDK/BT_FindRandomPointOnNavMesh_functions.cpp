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

// Function BT_FindRandomPointOnNavMesh.BT_FindRandomPointOnNavMesh_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBT_FindRandomPointOnNavMesh_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BT_FindRandomPointOnNavMesh.BT_FindRandomPointOnNavMesh_C.ReceiveExecute");

	UBT_FindRandomPointOnNavMesh_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BT_FindRandomPointOnNavMesh.BT_FindRandomPointOnNavMesh_C.ExecuteUbergraph_BT_FindRandomPointOnNavMesh
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBT_FindRandomPointOnNavMesh_C::ExecuteUbergraph_BT_FindRandomPointOnNavMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BT_FindRandomPointOnNavMesh.BT_FindRandomPointOnNavMesh_C.ExecuteUbergraph_BT_FindRandomPointOnNavMesh");

	UBT_FindRandomPointOnNavMesh_C_ExecuteUbergraph_BT_FindRandomPointOnNavMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
