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

// BlueprintGeneratedClass PlayerWaypointBP.PlayerWaypointBP_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class APlayerWaypointBP_C : public AInWorldWidgetCreator_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerWaypointBP.PlayerWaypointBP_C");
		return ptr;
	}



	class UWidgetComponent* GetSonarWidget(bool bForce);
	void ReceiveBeginPlay();
	void OnPingedByPlayerSonar();
	void HideInWorldWidget();
	void ExecuteUbergraph_PlayerWaypointBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
