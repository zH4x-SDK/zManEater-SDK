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

// BlueprintGeneratedClass BP_ManeaterGameInstance.BP_ManeaterGameInstance_C
// 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
class UBP_ManeaterGameInstance_C : public UME_GameInstance
{
public:
	unsigned char                                      PersistentLevel[0x28];                                     // 0x0400(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UObject*                                     PersistentLevelObject;                                     // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ManeaterGameInstance.BP_ManeaterGameInstance_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
