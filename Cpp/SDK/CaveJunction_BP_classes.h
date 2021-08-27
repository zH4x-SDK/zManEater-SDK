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

// BlueprintGeneratedClass CaveJunction_BP.CaveJunction_BP_C
// 0x0158 (FullSize[0x0378] - InheritedSize[0x0220])
class ACaveJunction_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTwAkSplineProximityEffectsComponent*        TwAkSplineProximityEffects;                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cover4;                                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cover1;                                                    // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cover5;                                                    // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Junction_5;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cover2;                                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Cover3;                                                    // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Junction4;                                                 // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Junction3;                                                 // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Junction2;                                                 // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Junction;                                                  // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Generate_Detail_Meshes;                                    // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9HCW[0x7];                                     // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGenerateDetail_BP_C*>                GenerationPoints;                                          // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	class USplineMeshComponent*                        CurrentMesh;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartLineTrace;                                            // 0x02B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2W48[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPipeJunction_ST>                    SidesToOpen;                                               // 0x02C8(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int>                                        TEMPSidestoOpen;                                           // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FRandomStream                               MeshGenerationSeed;                                        // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	class UHierarchicalInstancedStaticMeshComponent*   InstanceComponent;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> Hierarchical_Instance_Array;                               // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UClass*                                      SpawnDetailOnlyOnHere;                                     // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDetailMesh_InstanceInfo_ST>         DetailMeshInstances;                                       // 0x0310(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FTransform                                  LightSpawnLocation;                                        // 0x0320(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class ALG_Pointlight_Base_C*>               Light_Component_Array;                                     // 0x0350(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               ISMComponent;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInstancedStaticMeshComponent*>       ISMArray;                                                  // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveJunction_BP.CaveJunction_BP_C");
		return ptr;
	}



	void DestroyLocalCaveLights();
	void SetLightSettings(class ALG_Pointlight_Base_C* LightActor, const struct FSpawnedLightInformation_ST& SpawnedLightInfo);
	void DestroyAllCaveLights();
	void GenerateCaveLights(class AGenerateDetail_BP_C* GenerateDetailBP);
	void SpawnLights(const struct FDetailMesh_Info_ST& DetailMeshInfo, const struct FTransform& SpawnLocation);
	void ApplyTransforms(const struct FDetailMesh_Info_ST& DetailMesh, const struct FTransform& Transforms, struct FDetailMesh_Info_ST* NewDetailMesh);
	void GenerateRandomAngle(class AGenerateDetail_BP_C* Point, struct FRotator* Rotator);
	void ProcessTraceInfo(const struct FName& InstanceName, const struct FDetailMesh_Info_ST& DetailMeshInfo, const struct FTransform& Transforms);
	void GetGenerateDetailPoint_RandMesh(class AGenerateDetail_BP_C* Point, const struct FName& RowName, struct FName* RowNameUsed, struct FDetailMesh_Info_ST* Output);
	void GenerateSeed();
	void GenerateISM(bool DestroyLightsFirst, bool FoliageOnly, bool LightsOnly);
	void Hide_Junction_Caps();
	void HideCapsPerSide(class UStaticMeshComponent* Cap_1, class UStaticMeshComponent* Cap_2, class UStaticMeshComponent* Cap_3);
	void GenerateTracePOints(class AGenerateDetail_BP_C* Point, bool* IsValid_, struct FTransform* Transforms);
	void UserConstructionScript();
	void _Preview_Foliage();
	void ExecuteUbergraph_CaveJunction_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
