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

// Function Ansel.AnselFunctionLibrary.StopSession
struct UAnselFunctionLibrary_StopSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.StartSession
struct UAnselFunctionLibrary_StartSession_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetUIControlVisibility
struct UAnselFunctionLibrary_SetUIControlVisibility_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Ansel_EUIControlEffectTarget>          UIControlTarget;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVisible;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetSettleFrames
struct UAnselFunctionLibrary_SetSettleFrames_Params
{
	int                                                NumSettleFrames;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetIsPhotographyAllowed
struct UAnselFunctionLibrary_SetIsPhotographyAllowed_Params
{
	bool                                               bIsPhotographyAllowed;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetCameraMovementSpeed
struct UAnselFunctionLibrary_SetCameraMovementSpeed_Params
{
	float                                              TranslationSpeed;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetCameraConstraintDistance
struct UAnselFunctionLibrary_SetCameraConstraintDistance_Params
{
	float                                              MaxCameraDistance;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetCameraConstraintCameraSize
struct UAnselFunctionLibrary_SetCameraConstraintCameraSize_Params
{
	float                                              CameraSize;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetAutoPostprocess
struct UAnselFunctionLibrary_SetAutoPostprocess_Params
{
	bool                                               bShouldAutoPostprocess;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.SetAutoPause
struct UAnselFunctionLibrary_SetAutoPause_Params
{
	bool                                               bShouldAutoPause;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.IsPhotographyAvailable
struct UAnselFunctionLibrary_IsPhotographyAvailable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.IsPhotographyAllowed
struct UAnselFunctionLibrary_IsPhotographyAllowed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.ConstrainCameraByGeometry
struct UAnselFunctionLibrary_ConstrainCameraByGeometry_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewCameraLocation;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PreviousCameraLocation;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OriginalCameraLocation;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutCameraLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Ansel.AnselFunctionLibrary.ConstrainCameraByDistance
struct UAnselFunctionLibrary_ConstrainCameraByDistance_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewCameraLocation;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PreviousCameraLocation;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OriginalCameraLocation;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OutCameraLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
