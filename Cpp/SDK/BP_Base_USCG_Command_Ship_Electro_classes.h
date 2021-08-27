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

// BlueprintGeneratedClass BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C
// 0x0008 (FullSize[0x0CF0] - InheritedSize[0x0CE8])
class ABP_Base_USCG_Command_Ship_Electro_C : public ABP_Base_USCG_Command_Ship_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_USCG_Command_Ship_Electro.BP_Base_USCG_Command_Ship_Electro_C");
		return ptr;
	}



	void OnCinematicComplete();
	void ElectroShieldDestroyed();
	void ExecuteUbergraph_BP_Base_USCG_Command_Ship_Electro(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
