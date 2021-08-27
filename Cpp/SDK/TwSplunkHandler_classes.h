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

// Class TwSplunkHandler.SplunkFunctionLibrary
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class USplunkFunctionLibrary : public UObject
{
public:
	struct FString                                     SplunkURL;                                                 // 0x0028(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SplunkToken;                                               // 0x0038(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwSplunkHandler.SplunkFunctionLibrary");
		return ptr;
	}



	void STATIC_SendToSplunk(TMap<struct FString, struct FString> userPayload);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
