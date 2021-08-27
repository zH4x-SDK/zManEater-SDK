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

// BlueprintGeneratedClass BP_BreakableGate_Teen.BP_BreakableGate_Teen_C
// 0x0010 (FullSize[0x0420] - InheritedSize[0x0410])
class ABP_BreakableGate_Teen_C : public ABP_BreakableGate_Base_C
{
public:
	struct FScriptMulticastDelegate                    GateDestroied;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableGate_Teen.BP_BreakableGate_Teen_C");
		return ptr;
	}



	void GateDestroied__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
