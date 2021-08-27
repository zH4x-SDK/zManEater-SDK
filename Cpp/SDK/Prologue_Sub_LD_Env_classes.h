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

// BlueprintGeneratedClass Prologue_Sub_LD_Env.Prologue_Sub_LD_Env_C
// 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
class APrologue_Sub_LD_Env_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Prologue_Sub_LD_Env.Prologue_Sub_LD_Env_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Prologue_Sub_LD_Env(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
