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
// Classes
//---------------------------------------------------------------------------

// Class Mercuna.BTDecorator_Mercuna_Reachable
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UBTDecorator_Mercuna_Reachable : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      Source;                                                    // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      Destination;                                               // 0x0090(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	float                                              MaxPathLength;                                             // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SWPQ[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.BTDecorator_Mercuna_Reachable");
		return ptr;
	}



};

// Class Mercuna.BTTask_Mercuna_MoveTo
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UBTTask_Mercuna_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              Speed;                                                     // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndDistance;                                               // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bObserveBlackboardValue : 1;                               // 0x00A0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x00A0(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S5GW[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.BTTask_Mercuna_MoveTo");
		return ptr;
	}



};

// Class Mercuna.EnvQueryGenerator_Mercuna_Sphere
// 0x00F0 (FullSize[0x0140] - InheritedSize[0x0050])
class UEnvQueryGenerator_Mercuna_Sphere : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0050(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x0088(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfShells;                                            // 0x00C0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     PointsPerShell;                                            // 0x00F8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Mercuna_EMercunaPointDistribution                  Distribution;                                              // 0x0130(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HSPS[0x7];                                     // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Center;                                                    // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.EnvQueryGenerator_Mercuna_Sphere");
		return ptr;
	}



};

// Class Mercuna.EnvQueryGenerator_Mercuna_3DRing
// 0x0190 (FullSize[0x01E0] - InheritedSize[0x0050])
class UEnvQueryGenerator_Mercuna_3DRing : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0050(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x0088(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x00C0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x00F8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   MinHeight;                                                 // 0x0130(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   MaxHeight;                                                 // 0x0168(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfLayers;                                            // 0x01A0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      Center;                                                    // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.EnvQueryGenerator_Mercuna_3DRing");
		return ptr;
	}



};

// Class Mercuna.MercunaQueryTest
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UMercunaQueryTest : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaQueryTest");
		return ptr;
	}



};

// Class Mercuna.EnvQueryTest_Mercuna_NavigableVolume
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UEnvQueryTest_Mercuna_NavigableVolume : public UMercunaQueryTest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.EnvQueryTest_Mercuna_NavigableVolume");
		return ptr;
	}



};

// Class Mercuna.EnvQueryTest_Mercuna_Reachable
// 0x0040 (FullSize[0x0238] - InheritedSize[0x01F8])
class UEnvQueryTest_Mercuna_Reachable : public UMercunaQueryTest
{
public:
	struct FAIDataProviderFloatValue                   MaxPathLength;                                             // 0x01F8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.EnvQueryTest_Mercuna_Reachable");
		return ptr;
	}



};

// Class Mercuna.EnvQueryTest_Mercuna_NavRaycast
// 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
class UEnvQueryTest_Mercuna_NavRaycast : public UMercunaQueryTest
{
public:
	class UClass*                                      Context;                                                   // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.EnvQueryTest_Mercuna_NavRaycast");
		return ptr;
	}



};

// Class Mercuna.EnvQueryTest_Mercuna_Project
// 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
class UEnvQueryTest_Mercuna_Project : public UMercunaQueryTest
{
public:
	struct FAIDataProviderFloatValue                   MaxSearchRadius;                                           // 0x01F8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.EnvQueryTest_Mercuna_Project");
		return ptr;
	}



};

// Class Mercuna.MercunaNavigationComponent
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UMercunaNavigationComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMoveCompleted;                                           // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FMercunaNavigationConfiguration             Configuration;                                             // 0x00C0(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_791X[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMercunaNavOctree*                           NavOctree;                                                 // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               Pathfinding;                                               // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               DynamicAvoidance;                                          // 0x00E9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GFT9[0x2];                                     // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMercunaPawnUsageFlags                      UsageFlags;                                                // 0x00EC(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4ZTY[0x3C];                                    // 0x00F4(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavigationComponent");
		return ptr;
	}



	void TrackActor(class AActor* Actor, float Distance, float Speed);
	void Stop();
	void SetUsageFlags(struct FMercunaPawnUsageFlags* UsageFlags);
	void SetNavOctree(class AMercunaNavOctree* NavOctree);
	void SetEnabled(bool bEnable);
	void SetAvoidanceAgainst(class AActor* Actor, bool Enable);
	void ResumeNavigation();
	void PauseNavigation();
	void MoveToLocation(const struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
	void MoveToActor(class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
	void MercunaMoveComplete__DelegateSignature(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result);
	void LookInDirection(const struct FVector& Direction, float MaxPitch);
	void LookAt(class AActor* Actor, float MaxPitch);
	void IsReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void GetPathInfo(bool* Valid, float* DistanceToEnd, struct FVector* NextPathPoint, bool* bIsFinalPoint);
	class AMercunaNavOctree* GetNavOctree();
	void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance);
	void Configure(const struct FMercunaNavigationConfiguration& NewConfiguration);
	void ClearAvoidanceExclusions();
	void CheckReachable(const struct FVector& Point, bool* Success, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void CancelMovement();
	void CancelLookAt();
};

// Class Mercuna.MercunaMoveToProxy
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UMercunaMoveToProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YTZP[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaMoveToProxy");
		return ptr;
	}



	void OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result);
	class UMercunaMoveToProxy* STATIC_MercunaMoveToLocation(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
	class UMercunaMoveToProxy* STATIC_MercunaMoveToActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
};

// Class Mercuna.MercunaTrackActorProxy
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UMercunaTrackActorProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HRVD[0x20];                                    // 0x0040(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaTrackActorProxy");
		return ptr;
	}



	void OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result);
	class UMercunaTrackActorProxy* STATIC_MercunaTrackActor(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Actor, float Distance, float Speed);
};

// Class Mercuna.MercunaNavModifierVolume
// 0x0018 (FullSize[0x0270] - InheritedSize[0x0258])
class AMercunaNavModifierVolume : public AVolume
{
public:
	bool                                               bEnabled;                                                  // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3P3P[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CostMultiplier;                                            // 0x025C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CostMultipler;                                             // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMercunaNavUsageTypes                       UsageTypes;                                                // 0x0264(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class AMercunaNavOctree*                           NavOctree;                                                 // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavModifierVolume");
		return ptr;
	}



	void SetUsageTypes(const struct FMercunaNavUsageTypes& NewUsageTypes);
	void SetSize(const struct FVector& Size);
	void SetLocationAndSize(const struct FVector& Location, const struct FVector& Size);
	void SetLocation(const struct FVector& Location);
	void SetEnabled(bool Enabled);
	void SetCostMultiplier(float NewCostMultiplier);
	void AddToOctree(class AMercunaNavOctree* NavOctree);
};

// Class Mercuna.MercunaNavOctree
// 0x0098 (FullSize[0x02B8] - InheritedSize[0x0220])
class AMercunaNavOctree : public AActor
{
public:
	float                                              CellSize;                                                  // 0x0220(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPawnRadius;                                             // 0x0224(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPawnRadius;                                             // 0x0228(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeverSave;                                                // 0x022C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowOctreeMerging;                                       // 0x022D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              GeometryCollisionChannel;                                  // 0x022E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecordOctreeDeltas;                                       // 0x022F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBuildComplete;                                           // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBuildLowResReady;                                        // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRebuildComplete;                                         // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRebuildLowResReady;                                      // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLoadComplete;                                            // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnShortRangeLoadComplete;                                  // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DLCG[0x8];                                     // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Mercuna_EMerOctreeDebugDrawMode                    DebugDrawMode;                                             // 0x0298(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4IAN[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMerNavOctreeRenderingComponent*             MerNavOctreeRenderingComponent;                            // 0x02A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bBuildAsSublevel;                                          // 0x02A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bNeedsRebuild;                                             // 0x02A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZNF4[0xE];                                     // 0x02AA(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavOctree");
		return ptr;
	}



	void UpdateModifierVolumeParams(class AMercunaNavModifierVolume* ModifierVolume);
	void SetNavigationRotation(const struct FRotator& Rotation);
	void RemoveModifierVolume(class AMercunaNavModifierVolume* ModifierVolume);
	void RebuildVolumes(TArray<struct FBox> Volumes, bool StagedBuild);
	void RebuildVolume(class AActor* Volume, bool StagedBuild);
	void Raycast(const struct FVector& Start, const struct FVector& End, float NavigationRadius, struct FVector* HitPosition, bool* RayHit);
	void MercunaRebuildComplete__DelegateSignature(class AActor* Volume);
	void MercunaLoadComplete__DelegateSignature();
	void MercunaBuildComplete__DelegateSignature();
	bool IsReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength);
	void IsNavigableMulti(TArray<struct FVector> Positions, float NavigationRadius, TArray<bool>* Results);
	void IsNavigable(const struct FVector& Position, float NavigationRadius, bool* Result);
	class UMercunaSpline* FindSplineToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxSpeed, float MaxAcceleration, bool AllowPartial, float MaxPathLength);
	class UMercunaPath* FindPathToLocation(const struct FVector& Start, const struct FVector& End, float NavigationRadius, bool AllowPartial, float MaxPathLength);
	class UMercunaPath* FindPathToActor(const struct FVector& Start, class AActor* GoalActor, float NavigationRadius, bool AllowPartial, float MaxPathLength);
	void ClampToNavigable(const struct FVector& Position, float NavigationRadius, float SearchRadius, struct FVector* ClampedPosition, bool* Result);
	void CheckReachable(const struct FVector& Start, const struct FVector& End, float NavigationRadius, float MaxPathLength, bool* Result);
	void Build();
};

// Class Mercuna.MercunaNavSeed
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AMercunaNavSeed : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavSeed");
		return ptr;
	}



};

// Class Mercuna.MercunaNavSeedComponent
// 0x0000 (FullSize[0x01F0] - InheritedSize[0x01F0])
class UMercunaNavSeedComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavSeedComponent");
		return ptr;
	}



};

// Class Mercuna.MercunaNavTestingActor
// 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
class AMercunaNavTestingActor : public AActor
{
public:
	float                                              Radius;                                                    // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSearchStart : 1;                                          // 0x0224(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AEQ8[0x3];                                     // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMercunaNavTestingActor*                     OtherActor;                                                // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMercunaPawnUsageFlags                      UsageFlags;                                                // 0x0230(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              HeightChangePenalty;                                       // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bContinuouslyRepath : 1;                                   // 0x023C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawSpline : 1;                                           // 0x023C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5QC1[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxSpeed;                                                  // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAcceleration;                                           // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathExist : 1;                                            // 0x0248(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathIsPartial : 1;                                        // 0x0248(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathIsOutOfNodes : 1;                                     // 0x0248(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3WK7[0x3];                                     // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PathLength;                                                // 0x024C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathSections;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathFindTime;                                              // 0x0254(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathNodesUsed;                                             // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A9FC[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            SphereComponent;                                           // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMercunaSpline*                              Spline;                                                    // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AMercunaNavOctree*                           Octree;                                                    // 0x0270(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1R7Q[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavTestingActor");
		return ptr;
	}



	void OnSplineUpdate(TEnumAsByte<Mercuna_EMercunaSplineEvent> SplineEvent);
	void OnOctreeBuildComplete();
};

// Class Mercuna.MercunaNavVolume
// 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
class AMercunaNavVolume : public AVolume
{
public:
	class AMercunaNavOctree*                           NavOctree;                                                 // 0x0258(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               PreciseBoundaries;                                         // 0x0260(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Mercuna_EMercunaLevelOfDetail                      LOD;                                                       // 0x0261(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               FullDetailBuild;                                           // 0x0262(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TMZ4[0x5];                                     // 0x0263(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaNavVolume");
		return ptr;
	}



	void SetSize(const struct FVector& Size);
	void SetNavigationRotation(const struct FRotator& Rotation);
	void AddToOctree(class AMercunaNavOctree* NavOctree);
};

// Class Mercuna.MercunaObstacleComponent
// 0x0010 (FullSize[0x0200] - InheritedSize[0x01F0])
class UMercunaObstacleComponent : public USceneComponent
{
public:
	bool                                               bAutomatic;                                                // 0x01F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L04K[0x3];                                     // 0x01F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Radius;                                                    // 0x01F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FR86[0x8];                                     // 0x01F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaObstacleComponent");
		return ptr;
	}



};

// Class Mercuna.MercunaClampToNavigableProxy
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UMercunaClampToNavigableProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S008[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaClampToNavigableProxy");
		return ptr;
	}



	class UMercunaClampToNavigableProxy* STATIC_MercunaClampToNavigable(class UObject* WorldContextObject, const struct FVector& Position, float NavigationRadius, float SearchRadius);
};

// Class Mercuna.MercunaRaycastProxy
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UMercunaRaycastProxy : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnHit;                                                     // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNoHit;                                                   // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4EKN[0x28];                                    // 0x0050(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaRaycastProxy");
		return ptr;
	}



	class UMercunaRaycastProxy* STATIC_MercunaRaycast(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float NavigationRadius);
};

// Class Mercuna.MercunaPath
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMercunaPath : public UObject
{
public:
	struct FScriptMulticastDelegate                    PathUpdated;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FITD[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaPath");
		return ptr;
	}



	bool IsValid();
	bool IsReady();
	bool IsPartial();
	struct FVector GetPoint(int I);
	float GetPathLength();
	int GetNumPoints();
	void GetDebugInfo(int* nodesUsed, bool* bOutOfNodes, float* queryTime);
};

// Class Mercuna.MercunaSpline
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UMercunaSpline : public UObject
{
public:
	struct FScriptMulticastDelegate                    SplineUpdated;                                             // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CI3I[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaSpline");
		return ptr;
	}



	bool IsValid();
	bool IsReady();
	bool IsPartial();
	TArray<struct FSplinePoint> GetSplinePoints();
	struct FVector GetPathPoint(int I);
	int GetNumPathPoints();
	float GetLength();
};

// Class Mercuna.MercunaTask_MoveTo
// 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
class UMercunaTask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                           // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JGHW[0x38];                                    // 0x0090(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MercunaTask_MoveTo");
		return ptr;
	}



	void OnMoveComplete(const struct FAIRequestID& RequestID, TEnumAsByte<Mercuna_EMercunaMoveResult> Result);
	class UMercunaTask_MoveTo* STATIC_MercunaMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
};

// Class Mercuna.MerNavOctreeRenderingComponent
// 0x0008 (FullSize[0x0440] - InheritedSize[0x0438])
class UMerNavOctreeRenderingComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_MKJ3[0x8];                                     // 0x0438(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MerNavOctreeRenderingComponent");
		return ptr;
	}



};

// Class Mercuna.MerSettings
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UMerSettings : public UObject
{
public:
	float                                              DebugLengthScale;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowErrors;                                         // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GTLK[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CellSize;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinPawnRadius;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPawnRadius;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoLinkNavVolumesWithOctrees;                            // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowOctreeMerging;                                       // 0x003D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2W1D[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ModifierUsageTypes;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MerSettings");
		return ptr;
	}



};

// Class Mercuna.MerEditorSettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UMerEditorSettings : public UObject
{
public:
	bool                                               bEnableExtraLogging;                                       // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6W67[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                NavigableColor;                                            // 0x002C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HighCostColor;                                             // 0x003C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                UnnavigableColor;                                          // 0x004C(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ABY[0x1C];                                    // 0x005C(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mercuna.MerEditorSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
