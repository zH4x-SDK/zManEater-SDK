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

// BlueprintGeneratedClass BP_BTTask_OnLeashFinished.BP_BTTask_OnLeashFinished_C
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UBP_BTTask_OnLeashFinished_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTTask_OnLeashFinished.BP_BTTask_OnLeashFinished_C");
		return ptr;
	}



	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BP_BTTask_OnLeashFinished(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
