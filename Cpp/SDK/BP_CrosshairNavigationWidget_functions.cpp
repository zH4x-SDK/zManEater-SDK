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

// Function BP_CrosshairNavigationWidget.BP_CrosshairNavigationWidget_C.OnFocusedMarkerChanged
// (Event, Protected, BlueprintEvent)
void UBP_CrosshairNavigationWidget_C::OnFocusedMarkerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairNavigationWidget.BP_CrosshairNavigationWidget_C.OnFocusedMarkerChanged");

	UBP_CrosshairNavigationWidget_C_OnFocusedMarkerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CrosshairNavigationWidget.BP_CrosshairNavigationWidget_C.ExecuteUbergraph_BP_CrosshairNavigationWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CrosshairNavigationWidget_C::ExecuteUbergraph_BP_CrosshairNavigationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CrosshairNavigationWidget.BP_CrosshairNavigationWidget_C.ExecuteUbergraph_BP_CrosshairNavigationWidget");

	UBP_CrosshairNavigationWidget_C_ExecuteUbergraph_BP_CrosshairNavigationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
