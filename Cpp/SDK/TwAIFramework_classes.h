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

// Class TwAIFramework.TwAIBTComposite_Parallel
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTwAIBTComposite_Parallel : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTComposite_Parallel");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTComposite_Random
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UTwAIBTComposite_Random : public UBTCompositeNode
{
public:
	TArray<struct FAIDataProviderFloatValue>           ChildrenProbabilities;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTComposite_Random");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_CanPlayerSee
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UTwAIBTDecorator_CanPlayerSee : public UBTDecorator_BlackboardBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_CanPlayerSee");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_SpatialBase
// 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
class UTwAIBTDecorator_SpatialBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      SourceKey;                                                 // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x0090(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_SpatialBase");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_ClearNavTrace
// 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
class UTwAIBTDecorator_ClearNavTrace : public UTwAIBTDecorator_SpatialBase
{
public:
	class UClass*                                      FilterClass;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_ClearNavTrace");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_Distance
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UTwAIBTDecorator_Distance : public UTwAIBTDecorator_SpatialBase
{
public:
	TwAIFramework_EDistanceTypes                       DistanceCheckType;                                         // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IT8A[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ComparisonValue;                                           // 0x00C0(0x0038) (Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      ComparisonOp;                                              // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseSourceRadius;                                          // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseTargetRadius;                                          // 0x00FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PN5Z[0x5];                                     // 0x00FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   SourceRadiusOverride;                                      // 0x0100(0x0038) (Edit, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   TargetRadiusOverride;                                      // 0x0138(0x0038) (Edit, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	bool                                               bOverrideSourceRadius;                                     // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOverrideTargetRadius;                                     // 0x0171(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AH9B[0x2];                                     // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpdateFrequency;                                           // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              UpdateFrequencyDeviation;                                  // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S3J0[0x4];                                     // 0x017C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_Distance");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_Gate
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTwAIBTDecorator_Gate : public UBTDecorator
{
public:
	bool                                               bIncrementOnSuccess;                                       // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FGIJ[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumAccessesUntilClosure;                                   // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_Gate");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_HasClearLoS
// 0x0078 (FullSize[0x0108] - InheritedSize[0x0090])
class UTwAIBTDecorator_HasClearLoS : public UBTDecorator_BlackboardBase
{
public:
	struct FBlackboardKeySelector                      SourceBlackboardKey;                                       // 0x0090(0x0028) (Edit, NativeAccessSpecifierPrivate)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F3IX[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FoVCheck;                                                  // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TwAIFramework_EFoVType                             FoVType;                                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7V7Y[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   LoSExtentSize;                                             // 0x00C8(0x0038) (Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                              LoSExtentSizeInaccuracy;                                   // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_V4EW[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_HasClearLoS");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_HasPatrol
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTwAIBTDecorator_HasPatrol : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_HasPatrol");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_IsRightOrLeft
// 0x0040 (FullSize[0x00D0] - InheritedSize[0x0090])
class UTwAIBTDecorator_IsRightOrLeft : public UBTDecorator_BlackboardBase
{
public:
	struct FAIDataProviderFloatValue                   ExpectedAzimuth;                                           // 0x0090(0x0038) (Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TEnumAsByte<AIModule_EArithmeticKeyOperation>      ComparisonOp;                                              // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P3M4[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_IsRightOrLeft");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_LoopWhileResult
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UTwAIBTDecorator_LoopWhileResult : public UBTDecorator
{
public:
	TEnumAsByte<AIModule_EBTNodeResult>                ExpectedNodeResult;                                        // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KKC3[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_LoopWhileResult");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_MovementMode
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class UTwAIBTDecorator_MovementMode : public UBTDecorator_BlackboardBase
{
public:
	TEnumAsByte<Engine_EMovementMode>                  MovementMode;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UXQS[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UpdateTimeFrequency;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              UpdateTimeDeviation;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5RLN[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_MovementMode");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTDecorator_Random
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class UTwAIBTDecorator_Random : public UBTDecorator
{
public:
	struct FAIDataProviderFloatValue                   SuccessProbability;                                        // 0x0068(0x0038) (Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                              UpdateFrequency;                                           // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XINM[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTDecorator_Random");
		return ptr;
	}



};

// Class TwAIFramework.TwAIBTService_GameplayFocus
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UTwAIBTService_GameplayFocus : public UBTService_DefaultFocus
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIBTService_GameplayFocus");
		return ptr;
	}



};

// Class TwAIFramework.TwAIDataProvider_CollisionHalfHeight
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTwAIDataProvider_CollisionHalfHeight : public UAIDataProvider
{
public:
	float                                              FloatValue;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntValue;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIDataProvider_CollisionHalfHeight");
		return ptr;
	}



};

// Class TwAIFramework.TwAIDataProvider_CollisionRadius
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTwAIDataProvider_CollisionRadius : public UAIDataProvider
{
public:
	float                                              FloatValue;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntValue;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIDataProvider_CollisionRadius");
		return ptr;
	}



};

// Class TwAIFramework.TwAIHelperLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTwAIHelperLibrary : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIHelperLibrary");
		return ptr;
	}



	struct FRotator STATIC_InvalidRotation();
	struct FQuat STATIC_InvalidOrientation();
	struct FVector STATIC_InvalidLocation();
	struct FVector STATIC_InvalidDirection();
};

// Class TwAIFramework.TwAIPatrolableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTwAIPatrolableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIPatrolableInterface");
		return ptr;
	}



	void SetAIPatrolPlotter(class ATwAIPatrolPlotter* InPatrolPlotter);
	class ATwAIPatrolPlotter* GetAIPatrolPlotter();
};

// Class TwAIFramework.TwAIPatrolPlotter
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ATwAIPatrolPlotter : public AActor
{
public:
	TwAIFramework_EPatrolType                          PatrolType;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LWBY[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFaceDirAlongSpline : 1;                                   // 0x0224(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSprintingPatrol : 1;                                      // 0x0224(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EB3N[0x3];                                     // 0x0225(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTwAIPatrolSplineComponent*                  PatrolSplineComponent;                                     // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIPatrolPlotter");
		return ptr;
	}



	bool IsClosedLoopPatrol();
	class UTwAIPatrolSplineComponent* GetPatrolSplineComponent();
	struct FVector GetPatrolLocationAtPoint(int PointIdx);
	struct FVector GetNearestPatrolPointToLoc(const struct FVector& TestLocation, int* PointIdx);
	int GetMaxDefinedPatrolPoints();
};

// Class TwAIFramework.TwAIPatrolSplineComponent
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class UTwAIPatrolSplineComponent : public USplineComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwAIPatrolSplineComponent");
		return ptr;
	}



};

// Class TwAIFramework.TwEnvQueryContext_QuerierRight
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTwEnvQueryContext_QuerierRight : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwEnvQueryContext_QuerierRight");
		return ptr;
	}



};

// Class TwAIFramework.TwEnvQueryContext_QuerierUp
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTwEnvQueryContext_QuerierUp : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwEnvQueryContext_QuerierUp");
		return ptr;
	}



};

// Class TwAIFramework.TwEnvQueryContext_WorldUp
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTwEnvQueryContext_WorldUp : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwEnvQueryContext_WorldUp");
		return ptr;
	}



};

// Class TwAIFramework.TwEnvQueryGenerator_ConeOffset
// 0x0038 (FullSize[0x01A8] - InheritedSize[0x0170])
class UTwEnvQueryGenerator_ConeOffset : public UEnvQueryGenerator_Cone
{
public:
	struct FAIDataProviderFloatValue                   AngleOffset;                                               // 0x0170(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwEnvQueryGenerator_ConeOffset");
		return ptr;
	}



};

// Class TwAIFramework.TwEnvQueryGenerator_SimpleGridOuter
// 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
class UTwEnvQueryGenerator_SimpleGridOuter : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderFloatValue                   MinDistanceFromContext;                                    // 0x00F8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwAIFramework.TwEnvQueryGenerator_SimpleGridOuter");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
