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

// BlueprintGeneratedClass BP_JetSki_Bounty1_Speargun.BP_JetSki_Bounty1_Speargun_C
// 0x0008 (FullSize[0x0CE8] - InheritedSize[0x0CE0])
class ABP_JetSki_Bounty1_Speargun_C : public ABP_Base_JetSki_Bounty_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_JetSki_Bounty1_Speargun.BP_JetSki_Bounty1_Speargun_C");
		return ptr;
	}



	void WallHit(class UPrimitiveComponent* MyComp, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation);
	void ExecuteUbergraph_BP_JetSki_Bounty1_Speargun(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
