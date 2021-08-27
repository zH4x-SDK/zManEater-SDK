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

// Class TwFileOpenOrder.TwFileOpenOrderService
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UTwFileOpenOrderService : public UObject
{
public:
	unsigned char                                      UnknownData_4BZP[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServiceAddress;                                            // 0x0080(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TwFileOpenOrder.TwFileOpenOrderService");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
