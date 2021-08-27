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

// BlueprintGeneratedClass WorldMap_Regions.WorldMap_Regions_C
// 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
class AWorldMap_Regions_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AME_DayCycle_SkyDome_BP_C*                   Sky;                                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AME_WorldRegionVolume*                       DMI_RegionVolume_ExecuteUbergraph_WorldMap_Regions_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AME_WorldRegionVolume*                       WB_RegionVolume_ExecuteUbergraph_WorldMap_Regions_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AME_WorldRegionVolume*                       IC_RegionVolume_ExecuteUbergraph_WorldMap_Regions_RefProperty; // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_Regions.WorldMap_Regions_C");
		return ptr;
	}



	void BindRegionTransitions();
	void EnteredDMI(class AActor* OverlappedActor, class AActor* OtherActor);
	void EnteredIC(class AActor* OverlappedActor, class AActor* OtherActor);
	void EnteredWB(class AActor* OverlappedActor, class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WorldMap_Regions(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
