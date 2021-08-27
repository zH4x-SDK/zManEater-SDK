// Name: ManEater, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CaveJunction_BP.CaveJunction_BP_C.DestroyLocalCaveLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACaveJunction_BP_C::DestroyLocalCaveLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.DestroyLocalCaveLights");

	ACaveJunction_BP_C_DestroyLocalCaveLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.SetLightSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALG_Pointlight_Base_C*   LightActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpawnedLightInformation_ST SpawnedLightInfo               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveJunction_BP_C::SetLightSettings(class ALG_Pointlight_Base_C* LightActor, const struct FSpawnedLightInformation_ST& SpawnedLightInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.SetLightSettings");

	ACaveJunction_BP_C_SetLightSettings_Params params;
	params.LightActor = LightActor;
	params.SpawnedLightInfo = SpawnedLightInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.DestroyAllCaveLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACaveJunction_BP_C::DestroyAllCaveLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.DestroyAllCaveLights");

	ACaveJunction_BP_C_DestroyAllCaveLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.GenerateCaveLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGenerateDetail_BP_C*    GenerateDetailBP               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveJunction_BP_C::GenerateCaveLights(class AGenerateDetail_BP_C* GenerateDetailBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.GenerateCaveLights");

	ACaveJunction_BP_C_GenerateCaveLights_Params params;
	params.GenerateDetailBP = GenerateDetailBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.SpawnLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDetailMesh_Info_ST     DetailMeshInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              SpawnLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ACaveJunction_BP_C::SpawnLights(const struct FDetailMesh_Info_ST& DetailMeshInfo, const struct FTransform& SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.SpawnLights");

	ACaveJunction_BP_C_SpawnLights_Params params;
	params.DetailMeshInfo = DetailMeshInfo;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.ApplyTransforms
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDetailMesh_Info_ST     DetailMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transforms                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FDetailMesh_Info_ST     NewDetailMesh                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveJunction_BP_C::ApplyTransforms(const struct FDetailMesh_Info_ST& DetailMesh, const struct FTransform& Transforms, struct FDetailMesh_Info_ST* NewDetailMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.ApplyTransforms");

	ACaveJunction_BP_C_ApplyTransforms_Params params;
	params.DetailMesh = DetailMesh;
	params.Transforms = Transforms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewDetailMesh != nullptr)
		*NewDetailMesh = params.NewDetailMesh;

}


// Function CaveJunction_BP.CaveJunction_BP_C.GenerateRandomAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGenerateDetail_BP_C*    Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                Rotator                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACaveJunction_BP_C::GenerateRandomAngle(class AGenerateDetail_BP_C* Point, struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.GenerateRandomAngle");

	ACaveJunction_BP_C_GenerateRandomAngle_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;

}


// Function CaveJunction_BP.CaveJunction_BP_C.ProcessTraceInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InstanceName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDetailMesh_Info_ST     DetailMeshInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transforms                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ACaveJunction_BP_C::ProcessTraceInfo(const struct FName& InstanceName, const struct FDetailMesh_Info_ST& DetailMeshInfo, const struct FTransform& Transforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.ProcessTraceInfo");

	ACaveJunction_BP_C_ProcessTraceInfo_Params params;
	params.InstanceName = InstanceName;
	params.DetailMeshInfo = DetailMeshInfo;
	params.Transforms = Transforms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.GetGenerateDetailPoint_RandMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGenerateDetail_BP_C*    Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   RowNameUsed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDetailMesh_Info_ST     Output                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveJunction_BP_C::GetGenerateDetailPoint_RandMesh(class AGenerateDetail_BP_C* Point, const struct FName& RowName, struct FName* RowNameUsed, struct FDetailMesh_Info_ST* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.GetGenerateDetailPoint_RandMesh");

	ACaveJunction_BP_C_GetGenerateDetailPoint_RandMesh_Params params;
	params.Point = Point;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RowNameUsed != nullptr)
		*RowNameUsed = params.RowNameUsed;
	if (Output != nullptr)
		*Output = params.Output;

}


// Function CaveJunction_BP.CaveJunction_BP_C.GenerateSeed
// (Public, BlueprintCallable, BlueprintEvent)
void ACaveJunction_BP_C::GenerateSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.GenerateSeed");

	ACaveJunction_BP_C_GenerateSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.GenerateISM
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DestroyLightsFirst             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FoliageOnly                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LightsOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACaveJunction_BP_C::GenerateISM(bool DestroyLightsFirst, bool FoliageOnly, bool LightsOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.GenerateISM");

	ACaveJunction_BP_C_GenerateISM_Params params;
	params.DestroyLightsFirst = DestroyLightsFirst;
	params.FoliageOnly = FoliageOnly;
	params.LightsOnly = LightsOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.Hide Junction Caps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACaveJunction_BP_C::Hide_Junction_Caps()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.Hide Junction Caps");

	ACaveJunction_BP_C_Hide_Junction_Caps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.HideCapsPerSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Cap_1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*    Cap_2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*    Cap_3                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveJunction_BP_C::HideCapsPerSide(class UStaticMeshComponent* Cap_1, class UStaticMeshComponent* Cap_2, class UStaticMeshComponent* Cap_3)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.HideCapsPerSide");

	ACaveJunction_BP_C_HideCapsPerSide_Params params;
	params.Cap_1 = Cap_1;
	params.Cap_2 = Cap_2;
	params.Cap_3 = Cap_3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.GenerateTracePOints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGenerateDetail_BP_C*    Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsValid_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              Transforms                     (Parm, OutParm, IsPlainOldData, NoDestructor)
void ACaveJunction_BP_C::GenerateTracePOints(class AGenerateDetail_BP_C* Point, bool* IsValid_, struct FTransform* Transforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.GenerateTracePOints");

	ACaveJunction_BP_C_GenerateTracePOints_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid_ != nullptr)
		*IsValid_ = params.IsValid_;
	if (Transforms != nullptr)
		*Transforms = params.Transforms;

}


// Function CaveJunction_BP.CaveJunction_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ACaveJunction_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.UserConstructionScript");

	ACaveJunction_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C. Preview Foliage
// (BlueprintCallable, BlueprintEvent)
void ACaveJunction_BP_C::_Preview_Foliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C. Preview Foliage");

	ACaveJunction_BP_C__Preview_Foliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CaveJunction_BP.CaveJunction_BP_C.ExecuteUbergraph_CaveJunction_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACaveJunction_BP_C::ExecuteUbergraph_CaveJunction_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveJunction_BP.CaveJunction_BP_C.ExecuteUbergraph_CaveJunction_BP");

	ACaveJunction_BP_C_ExecuteUbergraph_CaveJunction_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
