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

// BlueprintGeneratedClass WorldMap_Sound.WorldMap_Sound_C
// 0x0009 (FullSize[0x0231] - InheritedSize[0x0228])
class AWorldMap_Sound_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PlayingGrottoAmbience;                                     // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldMap_Sound.WorldMap_Sound_C");
		return ptr;
	}



	void UpdateCameraDepth();
	void UpdateGrottoAmbience();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WorldMap_Sound(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
