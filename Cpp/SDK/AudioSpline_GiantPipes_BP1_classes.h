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

// BlueprintGeneratedClass AudioSpline_GiantPipes_BP1.AudioSpline_GiantPipes_BP1_C
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class AAudioSpline_GiantPipes_BP1_C : public AAudioSpline_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AudioSpline_GiantPipes_BP1.AudioSpline_GiantPipes_BP1_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_AudioSpline_GiantPipes_BP1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
