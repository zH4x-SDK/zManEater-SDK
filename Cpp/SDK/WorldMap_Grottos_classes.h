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

// BlueprintGeneratedClass WorldMap_Grottos.WorldMap_Grottos_C
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class AWorldMap_Grottos_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_Grotto_BP_C*                             Grotto_PRO_ExecuteUbergraph_WorldMap_Grottos_RefProperty;  // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_Grottos.WorldMap_Grottos_C");
		return ptr;
	}



	void DisableProGrotto();
	void EnableProGrotto();
	void ExecuteUbergraph_WorldMap_Grottos(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
