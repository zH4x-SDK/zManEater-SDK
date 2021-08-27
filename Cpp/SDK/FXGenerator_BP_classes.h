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

// BlueprintGeneratedClass FXGenerator_BP.FXGenerator_BP_C
// 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
class AFXGenerator_BP_C : public AActor
{
public:
	class UBillboardComponent*                         Billboard;                                                 // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFG_MeshInformation_ST>              MeshList;                                                  // 0x0228(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class AStaticMeshActor*>                    ActorsInWorld;                                             // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FFG_StoredMeshInformation_ST>        StoredMesh;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FFG_StoredMeshInformation_ST>        MeshToAddlightsTo;                                         // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FName                                       SpawnedTag;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      MeshExcludeList[0x10];                                     // 0x0270(0x0010) UNKNOWN PROPERTY: ArrayProperty
	TArray<class AActor*>                              StoredActorsWithTag;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FXGenerator_BP.FXGenerator_BP_C");
		return ptr;
	}



	void TurnSpawnedLightsOn();
	void TurnSpawnedLightsOff();
	void Manually_Destroy_FX();
	void Generate_FX();
	void SpawnFXAtLocation(class UParticleSystem* FX_Information, const struct FTransform& Transform, class AActor* StaticMesh, const struct FName& CustomTag, const struct FName& SocketName, float DrawDistiance);
	void Get_Socket_Location_And_Call_Spawn_Lights();
	void CreateFXInformation();
	void ParseMeshes();
	void SetWorldMeshArray();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
