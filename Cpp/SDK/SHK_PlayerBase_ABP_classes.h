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

// AnimBlueprintGeneratedClass SHK_PlayerBase_ABP.SHK_PlayerBase_ABP_C
// 0x8438 (FullSize[0x8CD8] - InheritedSize[0x08A0])
class USHK_PlayerBase_ABP_C : public UME_AnimInstance_PlayerShark
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_57;                               // 0x08A8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_56;                               // 0x09B0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_55;                               // 0x0AB8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_54;                               // 0x0BC0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_53;                               // 0x0CC8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_52;                               // 0x0DD0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_51;                               // 0x0ED8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_50;                               // 0x0FE0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_49;                               // 0x10E8(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12;                            // 0x11F0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5;                     // 0x1218(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5;                     // 0x1238(0x0020)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_32;                              // 0x1258(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_17;                             // 0x1288(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7;                            // 0x1338(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x13F0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9;                           // 0x1438(0x00A0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4;                          // 0x14D8(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31;                              // 0x15B8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_16;                             // 0x15E8(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2;                          // 0x1698(0x00C0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8;                           // 0x1758(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_33;                           // 0x17F8(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6;                            // 0x1870(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_11;                            // 0x1928(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37;                         // 0x1950(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36;                         // 0x1978(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_35;                         // 0x19A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32;                           // 0x19C8(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_3;                           // 0x1A40(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31;                           // 0x1AF0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_30;                           // 0x1B68(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_29;                           // 0x1BE0(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28;                           // 0x1C58(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_30;                              // 0x1CD0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3;                          // 0x1D00(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_29;                              // 0x1DE0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_15;                             // 0x1E10(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34;                         // 0x1EC0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33;                         // 0x1EE8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32;                         // 0x1F10(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27;                           // 0x1F38(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_2;                           // 0x1FB0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_26;                           // 0x2060(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25;                           // 0x20D8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24;                           // 0x2150(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_23;                           // 0x21C8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_28;                              // 0x2240(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x2270(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_27;                              // 0x2350(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_14;                             // 0x2380(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5;                            // 0x2430(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_48;                               // 0x24E8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_47;                               // 0x25F0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_46;                               // 0x26F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_45;                               // 0x2800(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_44;                               // 0x2908(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43;                               // 0x2A10(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_42;                               // 0x2B18(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41;                               // 0x2C20(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_40;                               // 0x2D28(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_39;                               // 0x2E30(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_38;                               // 0x2F38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_37;                               // 0x3040(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_36;                               // 0x3148(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_35;                               // 0x3250(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34;                               // 0x3358(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_33;                               // 0x3460(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_32;                               // 0x3568(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4;                     // 0x3670(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4;                     // 0x3690(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_10;                            // 0x36B0(0x0028)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_26;                              // 0x36D8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_13;                             // 0x3708(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_10;                            // 0x37B8(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22;                           // 0x3880(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7;                           // 0x38F8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4;                            // 0x3998(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9;                             // 0x3A50(0x0028)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9;                             // 0x3A78(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31;                         // 0x3B40(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_30;                         // 0x3B68(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29;                         // 0x3B90(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_21;                           // 0x3BB8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_25;                              // 0x3C30(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7;                              // 0x3C60(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_24;                              // 0x3C78(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_12;                             // 0x3CA8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6;                           // 0x3D58(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_3;                            // 0x3DF8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8;                             // 0x3EB0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3;                     // 0x3ED8(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3;                     // 0x3EF8(0x0020)
	unsigned char                                      UnknownData_UPEL[0x8];                                     // 0x3F18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                      // 0x3F20(0x01B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x40D0(0x00C0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7;                             // 0x4190(0x0028)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator;                           // 0x41B8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6;                             // 0x4200(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5;                           // 0x4228(0x00A0)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x42C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4;                           // 0x42F8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20;                           // 0x4398(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19;                           // 0x4410(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18;                           // 0x4488(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_17;                           // 0x4500(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_16;                           // 0x4578(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15;                           // 0x45F0(0x0078)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x4668(0x00B0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_23;                              // 0x4718(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_11;                             // 0x4748(0x00B0)
	struct FAnimNode_Constraint                        AnimGraphNode_Constraint;                                  // 0x47F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31;                               // 0x4900(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_30;                               // 0x4A08(0x0108)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5;                             // 0x4B10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_28;                         // 0x4B38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_27;                         // 0x4B60(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14;                           // 0x4B88(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_22;                              // 0x4C00(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6;                              // 0x4C30(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_21;                              // 0x4C48(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_10;                             // 0x4C78(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_8;                             // 0x4D28(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26;                         // 0x4DF0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25;                         // 0x4E18(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13;                           // 0x4E40(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_20;                              // 0x4EB8(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5;                              // 0x4EE8(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_19;                              // 0x4F00(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_9;                              // 0x4F30(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_7;                             // 0x4FE0(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24;                         // 0x50A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23;                         // 0x50D0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_12;                           // 0x50F8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_18;                              // 0x5170(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4;                              // 0x51A0(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_17;                              // 0x51B8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8;                              // 0x51E8(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_6;                             // 0x5298(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22;                         // 0x5360(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21;                         // 0x5388(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11;                           // 0x53B0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_16;                              // 0x5428(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3;                              // 0x5458(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_15;                              // 0x5470(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7;                              // 0x54A0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_5;                             // 0x5550(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_20;                         // 0x5618(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19;                         // 0x5640(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10;                           // 0x5668(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14;                              // 0x56E0(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2;                              // 0x5710(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13;                              // 0x5728(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6;                              // 0x5758(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4;                             // 0x5808(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_18;                         // 0x58D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_17;                         // 0x58F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_16;                         // 0x5920(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_15;                         // 0x5948(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_14;                         // 0x5970(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13;                         // 0x5998(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12;                         // 0x59C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11;                         // 0x59E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10;                         // 0x5A10(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9;                          // 0x5A38(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8;                          // 0x5A60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7;                          // 0x5A88(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6;                          // 0x5AB0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5;                          // 0x5AD8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4;                          // 0x5B00(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3;                          // 0x5B28(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9;                            // 0x5B50(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_12;                              // 0x5BC8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8;                            // 0x5BF8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11;                              // 0x5C70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7;                            // 0x5CA0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_10;                              // 0x5D18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x5D48(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9;                               // 0x5DC0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x5DF0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8;                               // 0x5E68(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x5E98(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7;                               // 0x5EB0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5;                              // 0x5EE0(0x00B0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3;                             // 0x5F90(0x00C8)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6;                               // 0x6058(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4;                              // 0x6088(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3;                           // 0x6138(0x00A0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x61D8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x6200(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x6228(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5;                               // 0x62A0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x62D0(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4;                               // 0x63B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x63E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3;                               // 0x6458(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3;                              // 0x6488(0x00B0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4;                             // 0x6538(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_29;                               // 0x6560(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_28;                               // 0x6668(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_27;                               // 0x6770(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_26;                               // 0x6878(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25;                               // 0x6980(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_24;                               // 0x6A88(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x6B90(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x6BB0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23;                               // 0x6BD0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_22;                               // 0x6CD8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_21;                               // 0x6DE0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_20;                               // 0x6EE8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19;                               // 0x6FF0(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_18;                               // 0x70F8(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_17;                               // 0x7200(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_16;                               // 0x7308(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x7410(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2;                              // 0x7440(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x74F0(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2;                            // 0x7590(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3;                             // 0x7648(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_15;                               // 0x7670(0x0108)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_2;                             // 0x7778(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x7840(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x78B8(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                              // 0x7958(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2;                             // 0x7A10(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_14;                               // 0x7A38(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13;                               // 0x7B40(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_12;                               // 0x7C48(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_11;                               // 0x7D50(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_10;                               // 0x7E58(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9;                                // 0x7F60(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8;                                // 0x8068(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7;                                // 0x8170(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6;                                // 0x8278(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5;                                // 0x8380(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4;                                // 0x8488(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3;                                // 0x8590(0x0108)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2;                                // 0x8698(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x87A0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                               // 0x87C0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x87E8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x8808(0x0108)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x8910(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x8940(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace;                    // 0x89F0(0x0188)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x8B78(0x00C8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x8C40(0x0078)
	float                                              JawPlacement;                                              // 0x8CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BodyMainOverride;                                          // 0x8CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Bite;                                                      // 0x8CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5E28[0x3];                                     // 0x8CC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                iVulnerableBite;                                           // 0x8CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FinerptPitchValue;                                         // 0x8CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UsedPitchFinterpValue;                                     // 0x8CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UsedInputValue;                                            // 0x8CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              absactorrot;                                               // 0x8CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SHK_PlayerBase_ABP.SHK_PlayerBase_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Tail_ExtremeLeft();
	void AnimNotify_Tail_ExtremeRight();
	void AnimNotify_Tail_MiddleGoingLeft();
	void AnimNotify_Tail_MiddleGoingRight();
	void AnimNotify_BeginUnderwaterOutro();
	void AnimNotify_EndUnderwaterOutro();
	void AnimNotify_HitReactATriggered();
	void AnimNotify_HitReactAComplete();
	void AnimNotify_HitReactBTriggered();
	void AnimNotify_HitReactBComplete();
	void AnimNotify_HitReactCTriggered();
	void AnimNotify_HitReactCComplete();
	void AnimNotify_BumpATriggered();
	void AnimNotify_BumpAComplete();
	void AnimNotify_BumpBTriggered();
	void AnimNotify_BumpBComplete();
	void AnimNotify_OnLand_Jump();
	void AnimNotify_OnLand_Land();
	void AnimNotify_CancelLockJaw();
	void SetCruisingWaterLine(bool SetTo);
	void AnimNotify_HoldEmptyState();
	void AnimNotify_HoldBiteIntro();
	void AnimNotify_LeaveVulnerable();
	void AnimNotify_IgnoreAllAdditive();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SHK_PlayerBase_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
