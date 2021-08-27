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

// Class TwBenchmark.TwGameplayProfilerActor
// 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
class ATwGameplayProfilerActor : public AActor
{
public:
	float                                              StartupDelayTime;                                          // 0x0220(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S2F1[0xC];                                     // 0x0224(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecordDuration;                                            // 0x0230(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GIMN[0xC];                                     // 0x0234(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRecordFPSChart;                                           // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bTimerExpired;                                             // 0x0241(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_62WJ[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwBenchmark.TwGameplayProfilerActor");
		return ptr;
	}



	void EndProfiling();
	void BeginProfiling();
};

// Class TwBenchmark.TwBenchmarkGameMode
// 0x00A0 (FullSize[0x0360] - InheritedSize[0x02C0])
class ATwBenchmarkGameMode : public AGameModeBase
{
public:
	TArray<class ACameraActor*>                        CamerasLeft;                                               // 0x02C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TimeSpentAtEachCamera;                                     // 0x02D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QG0A[0xC];                                     // 0x02D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartupDelayTime;                                          // 0x02E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HSPQ[0xC];                                     // 0x02E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BenchmarkLevelName;                                        // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       CameraTag;                                                 // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRecordCameraCSV;                                          // 0x0300(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRecordFPSChart;                                           // 0x0301(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRecordHealthSnapshot;                                     // 0x0302(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_THC1[0x5D];                                    // 0x0303(0x005D) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwBenchmark.TwBenchmarkGameMode");
		return ptr;
	}



	void OnBenchmarkLevelLoaded();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
