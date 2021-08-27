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

// BlueprintGeneratedClass GA_Smash_Emerge.GA_Smash_Emerge_C
// 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
class UGA_Smash_Emerge_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Pup_Explosion_Class;                                       // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Teen_Explosion_Class;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Adult_Explosion_Class;                                     // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Elder_Explosion_Class;                                     // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Mega_Explosion_Class;                                      // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Smash_Emerge.GA_Smash_Emerge_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Smash_Emerge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
