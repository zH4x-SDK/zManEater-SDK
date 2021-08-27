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

// WidgetBlueprintGeneratedClass ContextualControlWidget_BP.ContextualControlWidget_BP_C
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class UContextualControlWidget_BP_C : public UContextualControlWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextualControlWidget_BP.ContextualControlWidget_BP_C");
		return ptr;
	}



	void SubscribeToEvents_BP(class AHUD* HUD);
	void KnifingStateChanged(bool bIsKnifing, TEnumAsByte<Maneater_ECharacterActionMode> ChangeContext);
	void MovementModeChanged(class AME_PlayerSharkCharacter* PlayerShark, TEnumAsByte<Engine_EMovementMode> OldMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode);
	void ExecuteUbergraph_ContextualControlWidget_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
