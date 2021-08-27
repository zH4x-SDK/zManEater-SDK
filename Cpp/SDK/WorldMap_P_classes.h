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

// BlueprintGeneratedClass WorldMap_P.WorldMap_P_C
// 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
class AWorldMap_P_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FActiveGameplayEffectHandle                 GEHandle;                                                  // 0x0230(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LoadedLevel;                                               // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Maneater_EWorldRegion                              CurrentRegion;                                             // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W3H9[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACameraActor*                                cam3_DMIUW_ExecuteUbergraph_WorldMap_P_RefProperty;        // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                cam1_DMI1_ExecuteUbergraph_WorldMap_P_RefProperty;         // 0x0250(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                                cam2_DMI2_ExecuteUbergraph_WorldMap_P_RefProperty;         // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_P.WorldMap_P_C");
		return ptr;
	}



	void Level_Out_Everty();
	void goToDMI();
	void testcine();
	void ReceiveBeginPlay();
	void goToWC();
	void goToPro();
	void goTOWB();
	void goToSE();
	void goTOSB();
	void goToDO();
	void StoryUpdated(int NewStoryIndex);
	void BindOnStoryUpdated();
	void BindOnRegionChaged();
	void OnRegionChanged(Maneater_EWorldRegion Region, class UTexture2D* RegionIcon);
	void goToIC();
	void GetShark();
	void CheckStoryIndex();
	void showlevel();
	void Load(const struct FName& mapname);
	void Cine_Broll();
	void ChangeWiseState();
	void SetToZero();
	void BindTutorialObjectiveAdded();
	void TutorialObjectiveAdded(TEnumAsByte<Maneater_ETutorialEventId> TutorialEventId, const struct FME_TutorialEvent& EventData);
	void switchCam(int cameraNum);
	void BindTutorialGateFractured();
	void ExecuteUbergraph_WorldMap_P(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
