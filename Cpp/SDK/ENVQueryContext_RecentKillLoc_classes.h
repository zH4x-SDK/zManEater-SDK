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

// BlueprintGeneratedClass ENVQueryContext_RecentKillLoc.ENVQueryContext_RecentKillLoc_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UENVQueryContext_RecentKillLoc_C : public UEnvQueryContext_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ENVQueryContext_RecentKillLoc.ENVQueryContext_RecentKillLoc_C");
		return ptr;
	}



	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
