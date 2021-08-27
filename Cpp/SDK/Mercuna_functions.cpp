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

// Function Mercuna.MercunaNavigationComponent.TrackActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::TrackActor(class AActor* Actor, float Distance, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.TrackActor");

	UMercunaNavigationComponent_TrackActor_Params params;
	params.Actor = Actor;
	params.Distance = Distance;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.Stop
// (Final, Native, Public, BlueprintCallable)
void UMercunaNavigationComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.Stop");

	UMercunaNavigationComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.SetUsageFlags
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMercunaPawnUsageFlags  UsageFlags                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::SetUsageFlags(struct FMercunaPawnUsageFlags* UsageFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.SetUsageFlags");

	UMercunaNavigationComponent_SetUsageFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UsageFlags != nullptr)
		*UsageFlags = params.UsageFlags;

}


// Function Mercuna.MercunaNavigationComponent.SetNavOctree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavOctree*       NavOctree                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::SetNavOctree(class AMercunaNavOctree* NavOctree)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.SetNavOctree");

	UMercunaNavigationComponent_SetNavOctree_Params params;
	params.NavOctree = NavOctree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::SetEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.SetEnabled");

	UMercunaNavigationComponent_SetEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.SetAvoidanceAgainst
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::SetAvoidanceAgainst(class AActor* Actor, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.SetAvoidanceAgainst");

	UMercunaNavigationComponent_SetAvoidanceAgainst_Params params;
	params.Actor = Actor;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.ResumeNavigation
// (Final, Native, Public, BlueprintCallable)
void UMercunaNavigationComponent::ResumeNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.ResumeNavigation");

	UMercunaNavigationComponent_ResumeNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.PauseNavigation
// (Final, Native, Public, BlueprintCallable)
void UMercunaNavigationComponent::PauseNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.PauseNavigation");

	UMercunaNavigationComponent_PauseNavigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.MoveToLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Destination                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndDistance                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsePartialPath                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::MoveToLocation(const struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.MoveToLocation");

	UMercunaNavigationComponent_MoveToLocation_Params params;
	params.Destination = Destination;
	params.EndDistance = EndDistance;
	params.Speed = Speed;
	params.UsePartialPath = UsePartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndDistance                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsePartialPath                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::MoveToActor(class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.MoveToActor");

	UMercunaNavigationComponent_MoveToActor_Params params;
	params.Actor = Actor;
	params.EndDistance = EndDistance;
	params.Speed = Speed;
	params.UsePartialPath = UsePartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction Mercuna.MercunaNavigationComponent.MercunaMoveComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Mercuna_EMercunaMoveResult> Result                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::MercunaMoveComplete__DelegateSignature(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Mercuna.MercunaNavigationComponent.MercunaMoveComplete__DelegateSignature");

	UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.LookInDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPitch                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::LookInDirection(const struct FVector& Direction, float MaxPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.LookInDirection");

	UMercunaNavigationComponent_LookInDirection_Params params;
	params.Direction = Direction;
	params.MaxPitch = MaxPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.LookAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPitch                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::LookAt(class AActor* Actor, float MaxPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.LookAt");

	UMercunaNavigationComponent_LookAt_Params params;
	params.Actor = Actor;
	params.MaxPitch = MaxPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.IsReachable
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::IsReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.IsReachable");

	UMercunaNavigationComponent_IsReachable_Params params;
	params.Point = Point;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function Mercuna.MercunaNavigationComponent.GetPathInfo
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          DistanceToEnd                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 NextPathPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIsFinalPoint                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::GetPathInfo(bool* Valid, float* DistanceToEnd, struct FVector* NextPathPoint, bool* bIsFinalPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.GetPathInfo");

	UMercunaNavigationComponent_GetPathInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (DistanceToEnd != nullptr)
		*DistanceToEnd = params.DistanceToEnd;
	if (NextPathPoint != nullptr)
		*NextPathPoint = params.NextPathPoint;
	if (bIsFinalPoint != nullptr)
		*bIsFinalPoint = params.bIsFinalPoint;

}


// Function Mercuna.MercunaNavigationComponent.GetNavOctree
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AMercunaNavOctree*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AMercunaNavOctree* UMercunaNavigationComponent::GetNavOctree()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.GetNavOctree");

	UMercunaNavigationComponent_GetNavOctree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaNavigationComponent.ConfigureMovement
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUseDynamicAvoidance           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.ConfigureMovement");

	UMercunaNavigationComponent_ConfigureMovement_Params params;
	params.bUsePathfinding = bUsePathfinding;
	params.bUseDynamicAvoidance = bUseDynamicAvoidance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.Configure
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMercunaNavigationConfiguration NewConfiguration               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::Configure(const struct FMercunaNavigationConfiguration& NewConfiguration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.Configure");

	UMercunaNavigationComponent_Configure_Params params;
	params.NewConfiguration = NewConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.ClearAvoidanceExclusions
// (Final, Native, Public, BlueprintCallable)
void UMercunaNavigationComponent::ClearAvoidanceExclusions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.ClearAvoidanceExclusions");

	UMercunaNavigationComponent_ClearAvoidanceExclusions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.CheckReachable
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo       LatentInfo                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UMercunaNavigationComponent::CheckReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.CheckReachable");

	UMercunaNavigationComponent_CheckReachable_Params params;
	params.Point = Point;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function Mercuna.MercunaNavigationComponent.CancelMovement
// (Final, Native, Public, BlueprintCallable)
void UMercunaNavigationComponent::CancelMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.CancelMovement");

	UMercunaNavigationComponent_CancelMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavigationComponent.CancelLookAt
// (Final, Native, Public, BlueprintCallable)
void UMercunaNavigationComponent::CancelLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavigationComponent.CancelLookAt");

	UMercunaNavigationComponent_CancelLookAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaMoveToProxy.OnMoveComplete
// (Final, Native, Private)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Mercuna_EMercunaMoveResult> Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaMoveToProxy::OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaMoveToProxy.OnMoveComplete");

	UMercunaMoveToProxy_OnMoveComplete_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaMoveToProxy.MercunaMoveToLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Destination                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndDistance                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsePartialPath                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaMoveToProxy*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaMoveToProxy* UMercunaMoveToProxy::STATIC_MercunaMoveToLocation(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaMoveToProxy.MercunaMoveToLocation");

	UMercunaMoveToProxy_MercunaMoveToLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Destination = Destination;
	params.EndDistance = EndDistance;
	params.Speed = Speed;
	params.UsePartialPath = UsePartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaMoveToProxy.MercunaMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndDistance                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           UsePartialPath                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaMoveToProxy*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaMoveToProxy* UMercunaMoveToProxy::STATIC_MercunaMoveToActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaMoveToProxy.MercunaMoveToActor");

	UMercunaMoveToProxy_MercunaMoveToActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Actor = Actor;
	params.EndDistance = EndDistance;
	params.Speed = Speed;
	params.UsePartialPath = UsePartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaTrackActorProxy.OnMoveComplete
// (Final, Native, Private)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Mercuna_EMercunaMoveResult> Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaTrackActorProxy::OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaTrackActorProxy.OnMoveComplete");

	UMercunaTrackActorProxy_OnMoveComplete_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaTrackActorProxy.MercunaTrackActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaTrackActorProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaTrackActorProxy* UMercunaTrackActorProxy::STATIC_MercunaTrackActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float Distance, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaTrackActorProxy.MercunaTrackActor");

	UMercunaTrackActorProxy_MercunaTrackActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Pawn = Pawn;
	params.Actor = Actor;
	params.Distance = Distance;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaNavModifierVolume.SetUsageTypes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMercunaNavUsageTypes   NewUsageTypes                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::SetUsageTypes(const struct FMercunaNavUsageTypes& NewUsageTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.SetUsageTypes");

	AMercunaNavModifierVolume_SetUsageTypes_Params params;
	params.NewUsageTypes = NewUsageTypes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavModifierVolume.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::SetSize(const struct FVector& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.SetSize");

	AMercunaNavModifierVolume_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavModifierVolume.SetLocationAndSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::SetLocationAndSize(const struct FVector& Location, const struct FVector& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.SetLocationAndSize");

	AMercunaNavModifierVolume_SetLocationAndSize_Params params;
	params.Location = Location;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavModifierVolume.SetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::SetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.SetLocation");

	AMercunaNavModifierVolume_SetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavModifierVolume.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.SetEnabled");

	AMercunaNavModifierVolume_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavModifierVolume.SetCostMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewCostMultiplier              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::SetCostMultiplier(float NewCostMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.SetCostMultiplier");

	AMercunaNavModifierVolume_SetCostMultiplier_Params params;
	params.NewCostMultiplier = NewCostMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavModifierVolume.AddToOctree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavOctree*       NavOctree                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavModifierVolume::AddToOctree(class AMercunaNavOctree* NavOctree)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavModifierVolume.AddToOctree");

	AMercunaNavModifierVolume_AddToOctree_Params params;
	params.NavOctree = NavOctree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.UpdateModifierVolumeParams
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavModifierVolume* ModifierVolume                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::UpdateModifierVolumeParams(class AMercunaNavModifierVolume* ModifierVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.UpdateModifierVolumeParams");

	AMercunaNavOctree_UpdateModifierVolumeParams_Params params;
	params.ModifierVolume = ModifierVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.SetNavigationRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMercunaNavOctree::SetNavigationRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.SetNavigationRotation");

	AMercunaNavOctree_SetNavigationRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.RemoveModifierVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavModifierVolume* ModifierVolume                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::RemoveModifierVolume(class AMercunaNavModifierVolume* ModifierVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.RemoveModifierVolume");

	AMercunaNavOctree_RemoveModifierVolume_Params params;
	params.ModifierVolume = ModifierVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.RebuildVolumes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBox>            Volumes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           StagedBuild                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::RebuildVolumes(TArray<struct FBox> Volumes, bool StagedBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.RebuildVolumes");

	AMercunaNavOctree_RebuildVolumes_Params params;
	params.Volumes = Volumes;
	params.StagedBuild = StagedBuild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.RebuildVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           StagedBuild                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::RebuildVolume(class AActor* Volume, bool StagedBuild)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.RebuildVolume");

	AMercunaNavOctree_RebuildVolume_Params params;
	params.Volume = Volume;
	params.StagedBuild = StagedBuild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.Raycast
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 HitPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           RayHit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::Raycast(const struct FVector& Start, const struct FVector& End, float NavigationRadius, struct FVector* HitPosition, bool* RayHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.Raycast");

	AMercunaNavOctree_Raycast_Params params;
	params.Start = Start;
	params.End = End;
	params.NavigationRadius = NavigationRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitPosition != nullptr)
		*HitPosition = params.HitPosition;
	if (RayHit != nullptr)
		*RayHit = params.RayHit;

}


// DelegateFunction Mercuna.MercunaNavOctree.MercunaRebuildComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                  Volume                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::MercunaRebuildComplete__DelegateSignature(class AActor* Volume)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Mercuna.MercunaNavOctree.MercunaRebuildComplete__DelegateSignature");

	AMercunaNavOctree_MercunaRebuildComplete__DelegateSignature_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction Mercuna.MercunaNavOctree.MercunaLoadComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void AMercunaNavOctree::MercunaLoadComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Mercuna.MercunaNavOctree.MercunaLoadComplete__DelegateSignature");

	AMercunaNavOctree_MercunaLoadComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction Mercuna.MercunaNavOctree.MercunaBuildComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void AMercunaNavOctree::MercunaBuildComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Mercuna.MercunaNavOctree.MercunaBuildComplete__DelegateSignature");

	AMercunaNavOctree_MercunaBuildComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavOctree.IsReachable
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMercunaNavOctree::IsReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.IsReachable");

	AMercunaNavOctree_IsReachable_Params params;
	params.Start = Start;
	params.End = End;
	params.NavigationRadius = NavigationRadius;
	params.MaxPathLength = MaxPathLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaNavOctree.IsNavigableMulti
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Positions                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                   Results                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::IsNavigableMulti(TArray<struct FVector> Positions, float NavigationRadius, TArray<bool>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.IsNavigableMulti");

	AMercunaNavOctree_IsNavigableMulti_Params params;
	params.Positions = Positions;
	params.NavigationRadius = NavigationRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

}


// Function Mercuna.MercunaNavOctree.IsNavigable
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::IsNavigable(const struct FVector& Position, float NavigationRadius, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.IsNavigable");

	AMercunaNavOctree_IsNavigable_Params params;
	params.Position = Position;
	params.NavigationRadius = NavigationRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Mercuna.MercunaNavOctree.FindSplineToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxSpeed                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxAcceleration                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AllowPartial                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaSpline*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaSpline* AMercunaNavOctree::FindSplineToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.FindSplineToLocation");

	AMercunaNavOctree_FindSplineToLocation_Params params;
	params.Start = Start;
	params.End = End;
	params.NavigationRadius = NavigationRadius;
	params.MaxSpeed = MaxSpeed;
	params.MaxAcceleration = MaxAcceleration;
	params.AllowPartial = AllowPartial;
	params.MaxPathLength = MaxPathLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaNavOctree.FindPathToLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AllowPartial                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaPath*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaPath* AMercunaNavOctree::FindPathToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, bool AllowPartial, float MaxPathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.FindPathToLocation");

	AMercunaNavOctree_FindPathToLocation_Params params;
	params.Start = Start;
	params.End = End;
	params.NavigationRadius = NavigationRadius;
	params.AllowPartial = AllowPartial;
	params.MaxPathLength = MaxPathLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaNavOctree.FindPathToActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  GoalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AllowPartial                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaPath*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaPath* AMercunaNavOctree::FindPathToActor(const struct FVector& Start, class AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.FindPathToActor");

	AMercunaNavOctree_FindPathToActor_Params params;
	params.Start = Start;
	params.GoalActor = GoalActor;
	params.NavigationRadius = NavigationRadius;
	params.AllowPartial = AllowPartial;
	params.MaxPathLength = MaxPathLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaNavOctree.ClampToNavigable
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SearchRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ClampedPosition                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::ClampToNavigable(const struct FVector& Position, float NavigationRadius, float SearchRadius, struct FVector* ClampedPosition, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.ClampToNavigable");

	AMercunaNavOctree_ClampToNavigable_Params params;
	params.Position = Position;
	params.NavigationRadius = NavigationRadius;
	params.SearchRadius = SearchRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClampedPosition != nullptr)
		*ClampedPosition = params.ClampedPosition;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function Mercuna.MercunaNavOctree.CheckReachable
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          MaxPathLength                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavOctree::CheckReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.CheckReachable");

	AMercunaNavOctree_CheckReachable_Params params;
	params.Start = Start;
	params.End = End;
	params.NavigationRadius = NavigationRadius;
	params.MaxPathLength = MaxPathLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function Mercuna.MercunaNavOctree.Build
// (Final, Native, Public, BlueprintCallable)
void AMercunaNavOctree::Build()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavOctree.Build");

	AMercunaNavOctree_Build_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavTestingActor.OnSplineUpdate
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<Mercuna_EMercunaSplineEvent> SplineEvent                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavTestingActor::OnSplineUpdate(TEnumAsByte<Mercuna_EMercunaSplineEvent> SplineEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavTestingActor.OnSplineUpdate");

	AMercunaNavTestingActor_OnSplineUpdate_Params params;
	params.SplineEvent = SplineEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavTestingActor.OnOctreeBuildComplete
// (Final, Native, Protected)
void AMercunaNavTestingActor::OnOctreeBuildComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavTestingActor.OnOctreeBuildComplete");

	AMercunaNavTestingActor_OnOctreeBuildComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavVolume.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavVolume::SetSize(const struct FVector& Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavVolume.SetSize");

	AMercunaNavVolume_SetSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavVolume.SetNavigationRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AMercunaNavVolume::SetNavigationRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavVolume.SetNavigationRotation");

	AMercunaNavVolume_SetNavigationRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaNavVolume.AddToOctree
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AMercunaNavOctree*       NavOctree                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMercunaNavVolume::AddToOctree(class AMercunaNavOctree* NavOctree)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaNavVolume.AddToOctree");

	AMercunaNavVolume_AddToOctree_Params params;
	params.NavOctree = NavOctree;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaClampToNavigableProxy.MercunaClampToNavigable
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Position                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          SearchRadius                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaClampToNavigableProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaClampToNavigableProxy* UMercunaClampToNavigableProxy::STATIC_MercunaClampToNavigable(class UObject* WorldContextObject, const struct FVector& Position, float NavigationRadius, float SearchRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaClampToNavigableProxy.MercunaClampToNavigable");

	UMercunaClampToNavigableProxy_MercunaClampToNavigable_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Position = Position;
	params.NavigationRadius = NavigationRadius;
	params.SearchRadius = SearchRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaRaycastProxy.MercunaRaycast
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Start                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 End                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NavigationRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaRaycastProxy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaRaycastProxy* UMercunaRaycastProxy::STATIC_MercunaRaycast(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float NavigationRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaRaycastProxy.MercunaRaycast");

	UMercunaRaycastProxy_MercunaRaycast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.NavigationRadius = NavigationRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMercunaPath::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.IsValid");

	UMercunaPath_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMercunaPath::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.IsReady");

	UMercunaPath_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMercunaPath::IsPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.IsPartial");

	UMercunaPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.GetPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            I                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UMercunaPath::GetPoint(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.GetPoint");

	UMercunaPath_GetPoint_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.GetPathLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMercunaPath::GetPathLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.GetPathLength");

	UMercunaPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.GetNumPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMercunaPath::GetNumPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.GetNumPoints");

	UMercunaPath_GetNumPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaPath.GetDebugInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            nodesUsed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bOutOfNodes                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          queryTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaPath::GetDebugInfo(int* nodesUsed, bool* bOutOfNodes, float* queryTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaPath.GetDebugInfo");

	UMercunaPath_GetDebugInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (nodesUsed != nullptr)
		*nodesUsed = params.nodesUsed;
	if (bOutOfNodes != nullptr)
		*bOutOfNodes = params.bOutOfNodes;
	if (queryTime != nullptr)
		*queryTime = params.queryTime;

}


// Function Mercuna.MercunaSpline.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMercunaSpline::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.IsValid");

	UMercunaSpline_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaSpline.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMercunaSpline::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.IsReady");

	UMercunaSpline_IsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaSpline.IsPartial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMercunaSpline::IsPartial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.IsPartial");

	UMercunaSpline_IsPartial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaSpline.GetSplinePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FSplinePoint>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FSplinePoint> UMercunaSpline::GetSplinePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.GetSplinePoints");

	UMercunaSpline_GetSplinePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaSpline.GetPathPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            I                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UMercunaSpline::GetPathPoint(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.GetPathPoint");

	UMercunaSpline_GetPathPoint_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaSpline.GetNumPathPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMercunaSpline::GetNumPathPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.GetNumPathPoints");

	UMercunaSpline_GetNumPathPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaSpline.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMercunaSpline::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaSpline.GetLength");

	UMercunaSpline_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mercuna.MercunaTask_MoveTo.OnMoveComplete
// (Final, Native, Protected)
// Parameters:
// struct FAIRequestID            RequestID                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<Mercuna_EMercunaMoveResult> Result                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMercunaTask_MoveTo::OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaTask_MoveTo.OnMoveComplete");

	UMercunaTask_MoveTo_OnMoveComplete_Params params;
	params.RequestID = RequestID;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mercuna.MercunaTask_MoveTo.MercunaMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIController*           Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 GoalLocation                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  GoalActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          EndDistance                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           AcceptPartialPath              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bLockAILogic                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMercunaTask_MoveTo*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMercunaTask_MoveTo* UMercunaTask_MoveTo::STATIC_MercunaMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mercuna.MercunaTask_MoveTo.MercunaMoveTo");

	UMercunaTask_MoveTo_MercunaMoveTo_Params params;
	params.Controller = Controller;
	params.GoalLocation = GoalLocation;
	params.GoalActor = GoalActor;
	params.EndDistance = EndDistance;
	params.AcceptPartialPath = AcceptPartialPath;
	params.bLockAILogic = bLockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
