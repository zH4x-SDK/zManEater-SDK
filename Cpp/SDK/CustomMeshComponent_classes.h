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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0018 (FullSize[0x0450] - InheritedSize[0x0438])
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_Y40U[0x8];                                     // 0x0438(0x0008) Fix Super Size
	unsigned char                                      UnknownData_GZL2[0x10];                                    // 0x0440(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}



	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
