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

// BlueprintGeneratedClass GA_EVO_Shadow_Body_Aura_T3.GA_EVO_Shadow_Body_Aura_T3_C
// 0x0010 (FullSize[0x0410] - InheritedSize[0x0400])
class UGA_EVO_Shadow_Body_Aura_T3_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_EVO_Shadow_Body_Aura_T5_C*               Shadow_Aura;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_EVO_Shadow_Body_Aura_T3.GA_EVO_Shadow_Body_Aura_T3_C");
		return ptr;
	}



	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_EVO_Shadow_Body_Aura_T3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
