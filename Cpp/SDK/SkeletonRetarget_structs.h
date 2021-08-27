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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SkeletonRetarget.BoneOffset
// 0x0040
struct FBoneOffset
{
	struct FBoneReference                              Bone;                                                      // 0x0000(0x0010) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Offsets;                                                   // 0x0010(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct SkeletonRetarget.AnimNode_BoneOffset
// 0x0018 (0x00E0 - 0x00C8)
struct FAnimNode_BoneOffset : public FAnimNode_SkeletalControlBase
{
	class USkeletalMesh*                               SourceMesh;                                                // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBoneOffset>                         BoneOffsets;                                               // 0x00D0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
