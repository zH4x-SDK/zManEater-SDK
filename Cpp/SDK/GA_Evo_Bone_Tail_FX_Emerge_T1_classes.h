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

// BlueprintGeneratedClass GA_Evo_Bone_Tail_FX_Emerge_T1.GA_Evo_Bone_Tail_FX_Emerge_T1_C
// 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
class UGA_Evo_Bone_Tail_FX_Emerge_T1_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Adult_Explosion_Class;                                     // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Mega_Explosion_Class;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Elder_Explosion_Class;                                     // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Evo_Bone_Tail_FX_Emerge_T1.GA_Evo_Bone_Tail_FX_Emerge_T1_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Evo_Bone_Tail_FX_Emerge_T1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
