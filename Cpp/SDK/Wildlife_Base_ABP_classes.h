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

// AnimBlueprintGeneratedClass Wildlife_Base_ABP.Wildlife_Base_ABP_C
// 0x561C (FullSize[0x5C8C] - InheritedSize[0x0670])
class UWildlife_Base_ABP_C : public UME_AnimInstance_WildlifeNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0678(0x0030)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x06A8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x06F0(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x0790(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                              // 0x0808(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_23;                             // 0x0838(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x08E8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                              // 0x0960(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_22;                             // 0x0990(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x0A40(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                              // 0x0AB8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_21;                             // 0x0AE8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x0B98(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                              // 0x0C10(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_20;                             // 0x0C40(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x0CF0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x0D68(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_19;                             // 0x0D98(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x0E48(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x0EC0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_18;                             // 0x0EF0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x0FA0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x1018(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_17;                             // 0x1048(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x10F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x1170(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_16;                             // 0x11A0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x1250(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x12C8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_15;                             // 0x12F8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x13A8(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x1420(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x14D0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x1548(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14;                             // 0x1578(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x1628(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x16A0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_13;                             // 0x16D0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x1780(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x17F8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                             // 0x1828(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x18D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x1950(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                             // 0x1980(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7;                     // 0x1A30(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7;                     // 0x1A50(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x1A70(0x0108)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x1B78(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x1BF0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                             // 0x1C20(0x00B0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x1CD0(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x1D80(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                              // 0x1DB0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0x1E60(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0x1F18(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5;                          // 0x1F40(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0x2000(0x00A0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x20A0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6;                     // 0x20E8(0x0020)
	unsigned char                                      UnknownData_YLDY[0x8];                                     // 0x2108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5;                                    // 0x2110(0x01B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6;                     // 0x22C0(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4;                          // 0x22E0(0x00C0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x23A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x23C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x2440(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0x2470(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x2498(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x24C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x2578(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0x2618(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x2640(0x0028)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint;                                  // 0x2668(0x0108)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x2770(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x2810(0x0078)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_2;                               // 0x2888(0x00C8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x2950(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x2970(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x2990(0x0108)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x2A98(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x2B78(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x2BA8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x2C58(0x00A0)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                                // 0x2CF8(0x0090)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_3;                          // 0x2D88(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x2E48(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x2EC0(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x2EE8(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x2FA8(0x0028)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone;                                    // 0x2FD0(0x00F0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x30C0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x30E0(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x3100(0x00C0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                             // 0x31C0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x3288(0x00E0)
	unsigned char                                      UnknownData_IGEJ[0x8];                                     // 0x3368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4;                                    // 0x3370(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_3;                                    // 0x3520(0x01B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x36D0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x36F0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x3710(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x3818(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x3840(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x3948(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x3A50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x3B58(0x0108)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x3C60(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x3C80(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x3D88(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x3E90(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x3F98(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x40A0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x40C0(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x41C8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x41F8(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x42A8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x4360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x4388(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x43B0(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4;                              // 0x43D8(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x43F0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x4420(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x4498(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x44C8(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x4578(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x45A0(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                              // 0x45C8(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x45E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x4610(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x4688(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x46B8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                             // 0x4768(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x4830(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x4858(0x0028)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                              // 0x4880(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x4898(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x48C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x4940(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x4970(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                             // 0x4A20(0x00C8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x4AE8(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x4BB0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x4BE0(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x4C90(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x4D48(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x4DE8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x4EA0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x4EC8(0x0028)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x4EF0(0x00C8)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x4FB8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x5098(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x5110(0x0020)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2;                                    // 0x5130(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                      // 0x52E0(0x01B0)
	struct FAnimNode_Trail                             AnimGraphNode_Trail_2;                                     // 0x5490(0x0260)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x56F0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x57D0(0x00A0)
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                       // 0x5870(0x0260)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x5AD0(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x5AF0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x5B20(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x5BD0(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x5C70(0x0018)
	float                                              WalkPlaybackRate;                                          // 0x5C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Wildlife_Base_ABP.Wildlife_Base_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Tail_ExtremeLeft();
	void AnimNotify_Tail_ExtremeRight();
	void AnimNotify_Tail_MiddleGoingLeft();
	void AnimNotify_Tail_MiddleGoingRight();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_StartDeathPhysicsBlend();
	void AnimNotify_HitReactATriggered();
	void AnimNotify_HitReactAComplete();
	void AnimNotify_HitReactBTriggered();
	void AnimNotify_HitReactBComplete();
	void AnimNotify_HitReactCTriggered();
	void AnimNotify_HitReactCComplete();
	void K2_Reset();
	void ExecuteUbergraph_Wildlife_Base_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
