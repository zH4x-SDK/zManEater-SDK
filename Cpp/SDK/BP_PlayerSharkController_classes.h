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

// BlueprintGeneratedClass BP_PlayerSharkController.BP_PlayerSharkController_C
// 0x0040 (FullSize[0x0690] - InheritedSize[0x0650])
class ABP_PlayerSharkController_C : public AME_PlayerSharkController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     GameplayMenus;                                             // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     EscapeMenu;                                                // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerSharkState_C*                      PlayerSharkState;                                          // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     LastSaveSlotName;                                          // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPlayerPressedKey;                                        // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSharkController.BP_PlayerSharkController_C");
		return ptr;
	}



	void ToggleWorldMap();
	void ReloadFromLastCheckpoint();
	void WriteSaveToDisk();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_EscapeMenu_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_GrowthStagePup_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_GrowthStageTeen_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_GrowthStageAdult_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_GrowthStageElder_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_GrowthStageMega_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_LevelUp_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_LevelDown_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_MapMenu_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_EvolutionsMenu_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_InfamyMenu_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_InGameMenu_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_GrowthStageMother_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_ToggleUI_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_QuestLogMenu_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnPlayerDied(class AME_PlayerSharkCharacter* PlayerPawn);
	void ForceEvolutionsMenu();
	void ExecuteUbergraph_BP_PlayerSharkController(int EntryPoint);
	void OnPlayerPressedKey__DelegateSignature(const struct FKey& Key);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
