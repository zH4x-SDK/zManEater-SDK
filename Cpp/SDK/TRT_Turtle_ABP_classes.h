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

// AnimBlueprintGeneratedClass TRT_Turtle_ABP.TRT_Turtle_ABP_C
// 0x0CB0 (FullSize[0x1320] - InheritedSize[0x0670])
class UTRT_Turtle_ABP_C : public UME_AnimInstance_WildlifeNPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0678(0x0030)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer;                                // 0x06A8(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2;                           // 0x0720(0x00A0)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum;                             // 0x07C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6;                            // 0x0870(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5;                            // 0x08E8(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4;                            // 0x0960(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3;                            // 0x09D8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0A50(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive;                               // 0x0A98(0x00C8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2;                          // 0x0B60(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult;                            // 0x0B88(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2;                            // 0x0BB0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2;                               // 0x0C28(0x0030)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose;                                // 0x0C58(0x0018)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult;                                 // 0x0C70(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine;                                // 0x0CA0(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool;                             // 0x0D50(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0DF0(0x0078)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone;                                  // 0x0E68(0x0108)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0F70(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0F90(0x0020)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2;                                    // 0x0FB0(0x01B0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt;                                      // 0x1160(0x01B0)
	float                                              ValidOwningActor;                                          // 0x1310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ForwardLookAtLocation;                                     // 0x1314(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TRT_Turtle_ABP.TRT_Turtle_ABP_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_ModifyBone_7DC5042D4B035C55C747AC9F78DD98EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_BlendListByBool_2CDA0B3F4386C9BE3022BE8B00611E04();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TRT_Turtle_ABP_AnimGraphNode_TransitionResult_C08CF1B14FAB1C53435AB0BFF76E494E();
	void AnimNotify_EndHitReactATransition();
	void AnimNotify_HitReactAComplete();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_TRT_Turtle_ABP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
