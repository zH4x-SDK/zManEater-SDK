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

// BlueprintGeneratedClass BP_ElectroShield_Pete2.BP_ElectroShield_Pete2_C
// 0x0008 (FullSize[0x0408] - InheritedSize[0x0400])
class ABP_ElectroShield_Pete2_C : public ABP_ElectroShield_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElectroShield_Pete2.BP_ElectroShield_Pete2_C");
		return ptr;
	}



	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_ElectroShield_Pete2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
