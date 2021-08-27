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

// BlueprintGeneratedClass ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class AME_GenericObjectiveActorBase_BP_C : public AME_ObjectiveSpawnActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                    // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                 // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ME_GenericObjectiveActorBase_BP.ME_GenericObjectiveActorBase_BP_C");
		return ptr;
	}



	class UWidgetComponent* GetSonarWidget(bool bForce);
	void ObjectiveComplete();
	void ObjectiveStarted();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ME_GenericObjectiveActorBase_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
