// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GestureTrackerVR.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GestureTrackerVR() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USplineComponent();
	ENGINE_API class UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API class UClass* Z_Construct_UClass_USceneComponent_NoRegister();

	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureMeshComponent_Success();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials();
	GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureMeshComponent_NoRegister();
	GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureMeshComponent();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature();
	GESTURETRACKERVR_API class UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult();
	GESTURETRACKERVR_API class UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult();
	GESTURETRACKERVR_API class UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_ClearGestures();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_DrawGestureById();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_DrawGestureByName();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_FinishRecognition();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_FinishRecording();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_GetGesturePath();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_GetIds();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_GetNumGestures();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_GetPercentageComplete();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_GetPredictedGestureId();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_GetPredictedGesturePath();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_LoadGestures();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_SaveGestures();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StartContinuousRecognition();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StartDrawPredictedGesture();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StartDrawTrackedGesture();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StartRecognition();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StartRecording();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StopContinuousRecognition();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StopDrawPredictedGesture();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_StopDrawTrackedGesture();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_UpdateDrawIds();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_UpdatePredictDrawMaterials();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_UpdateTrackDrawMaterials();
	GESTURETRACKERVR_API class UFunction* Z_Construct_UFunction_UGestureTracker_UpdateTrackIds();
	GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureTracker_NoRegister();
	GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureTracker();
	GESTURETRACKERVR_API class UPackage* Z_Construct_UPackage__Script_GestureTrackerVR();
	void UGestureMeshComponent::StaticRegisterNativesUGestureMeshComponent()
	{
		UClass* Class = UGestureMeshComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Success", (Native)&UGestureMeshComponent::execSuccess },
			{ "UpdateMaterials", (Native)&UGestureMeshComponent::execUpdateMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UGestureMeshComponent_Success()
	{
		UObject* Outer=Z_Construct_UClass_UGestureMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Success"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Applies the sucessMaterial to the entire Gesture mesh"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials()
	{
		struct GestureMeshComponent_eventUpdateMaterials_Parms
		{
			UStaticMesh* mesh;
			UMaterialInterface* baseMaterial;
			UMaterialInterface* successMaterial;
		};
		UObject* Outer=Z_Construct_UClass_UGestureMeshComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateMaterials"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureMeshComponent_eventUpdateMaterials_Parms));
			UProperty* NewProp_successMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("successMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(successMaterial, GestureMeshComponent_eventUpdateMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_baseMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("baseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseMaterial, GestureMeshComponent_eventUpdateMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureMeshComponent_eventUpdateMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Update the draw mesh and materials with new ones.\nLeave an input blank to leave it unchanged."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGestureMeshComponent_NoRegister()
	{
		return UGestureMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGestureMeshComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USplineComponent();
			Z_Construct_UPackage__Script_GestureTrackerVR();
			OuterClass = UGestureMeshComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGestureMeshComponent_Success());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_successMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("successMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(successMaterial, UGestureMeshComponent), 0x0040000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_baseMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("baseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseMaterial, UGestureMeshComponent), 0x0040000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, UGestureMeshComponent), 0x0040000000000000, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_pathMeshes = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("pathMeshes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(pathMeshes, UGestureMeshComponent), 0x0010008000000008);
				UProperty* NewProp_pathMeshes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_pathMeshes, TEXT("pathMeshes"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_USplineMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureMeshComponent_Success(), "Success"); // 1757564436
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureMeshComponent_UpdateMaterials(), "UpdateMaterials"); // 1730521846
				static TCppClassTypeInfo<TCppClassTypeTraits<UGestureMeshComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("GestureTrackerVR"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Physics Collision Lighting Rendering Mobile Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GestureMeshComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
				MetaData->SetValue(NewProp_successMaterial, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
				MetaData->SetValue(NewProp_baseMaterial, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
				MetaData->SetValue(NewProp_mesh, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
				MetaData->SetValue(NewProp_pathMeshes, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_pathMeshes, TEXT("ModuleRelativePath"), TEXT("Public/GestureMeshComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGestureMeshComponent, 2649690682);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGestureMeshComponent(Z_Construct_UClass_UGestureMeshComponent, &UGestureMeshComponent::StaticClass, TEXT("/Script/GestureTrackerVR"), TEXT("UGestureMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGestureMeshComponent);
	UFunction* Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature()
	{
		struct _Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms
		{
			int32 id;
			FString name;
			float recognitionDuration;
			float lengthRatio;
		};
		UObject* Outer=Z_Construct_UPackage__Script_GestureTrackerVR();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GestureRecognizedDelegate__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), NULL, 0x00130000, 65535, sizeof(_Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms));
			UProperty* NewProp_lengthRatio = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lengthRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(lengthRatio, _Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms), 0x0010000000000080);
			UProperty* NewProp_recognitionDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("recognitionDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(recognitionDuration, _Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms), 0x0010000000000080);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, _Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms), 0x0010000000000080);
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, _Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
#endif
		}
		return ReturnFunction;
	}
static UEnum* EGestureLibFunctionResult_StaticEnum()
{
	extern GESTURETRACKERVR_API class UPackage* Z_Construct_UPackage__Script_GestureTrackerVR();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern GESTURETRACKERVR_API class UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult, Z_Construct_UPackage__Script_GestureTrackerVR(), TEXT("EGestureLibFunctionResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGestureLibFunctionResult(EGestureLibFunctionResult_StaticEnum, TEXT("/Script/GestureTrackerVR"), TEXT("EGestureLibFunctionResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GestureTrackerVR();
		extern uint32 Get_Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGestureLibFunctionResult"), 0, Get_Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGestureLibFunctionResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGestureLibFunctionResult::Success"), 0);
			EnumNames.Emplace(TEXT("EGestureLibFunctionResult::Failed"), 1);
			EnumNames.Emplace(TEXT("EGestureLibFunctionResult::EGestureLibFunctionResult_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGestureLibFunctionResult");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Failed.DisplayName"), TEXT("Failed"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Success.DisplayName"), TEXT("Success"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult_CRC() { return 1715415204U; }
static UEnum* EGestureRecognizeResult_StaticEnum()
{
	extern GESTURETRACKERVR_API class UPackage* Z_Construct_UPackage__Script_GestureTrackerVR();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern GESTURETRACKERVR_API class UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult, Z_Construct_UPackage__Script_GestureTrackerVR(), TEXT("EGestureRecognizeResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGestureRecognizeResult(EGestureRecognizeResult_StaticEnum, TEXT("/Script/GestureTrackerVR"), TEXT("EGestureRecognizeResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GestureTrackerVR();
		extern uint32 Get_Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGestureRecognizeResult"), 0, Get_Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGestureRecognizeResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGestureRecognizeResult::Recognized"), 0);
			EnumNames.Emplace(TEXT("EGestureRecognizeResult::Failed"), 1);
			EnumNames.Emplace(TEXT("EGestureRecognizeResult::EGestureRecognizeResult_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGestureRecognizeResult");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Failed.DisplayName"), TEXT("Failed"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Recognized.DisplayName"), TEXT("Recognized"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult_CRC() { return 3272093683U; }
static UEnum* EGestureRecordResult_StaticEnum()
{
	extern GESTURETRACKERVR_API class UPackage* Z_Construct_UPackage__Script_GestureTrackerVR();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern GESTURETRACKERVR_API class UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult();
		Singleton = GetStaticEnum(Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult, Z_Construct_UPackage__Script_GestureTrackerVR(), TEXT("EGestureRecordResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGestureRecordResult(EGestureRecordResult_StaticEnum, TEXT("/Script/GestureTrackerVR"), TEXT("EGestureRecordResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_GestureTrackerVR();
		extern uint32 Get_Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGestureRecordResult"), 0, Get_Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGestureRecordResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGestureRecordResult::Recorded"), 0);
			EnumNames.Emplace(TEXT("EGestureRecordResult::Failed"), 1);
			EnumNames.Emplace(TEXT("EGestureRecordResult::EGestureRecordResult_MAX"), 2);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGestureRecordResult");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Failed.DisplayName"), TEXT("Failed"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Recorded.DisplayName"), TEXT("Recorded"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult_CRC() { return 408487056U; }
	void UGestureTracker::StaticRegisterNativesUGestureTracker()
	{
		UClass* Class = UGestureTracker::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ClearGestures", (Native)&UGestureTracker::execClearGestures },
			{ "DrawGestureById", (Native)&UGestureTracker::execDrawGestureById },
			{ "DrawGestureByName", (Native)&UGestureTracker::execDrawGestureByName },
			{ "FinishRecognition", (Native)&UGestureTracker::execFinishRecognition },
			{ "FinishRecording", (Native)&UGestureTracker::execFinishRecording },
			{ "GetGesturePath", (Native)&UGestureTracker::execGetGesturePath },
			{ "GetIds", (Native)&UGestureTracker::execGetIds },
			{ "GetNumGestures", (Native)&UGestureTracker::execGetNumGestures },
			{ "GetPercentageComplete", (Native)&UGestureTracker::execGetPercentageComplete },
			{ "GetPredictedGestureId", (Native)&UGestureTracker::execGetPredictedGestureId },
			{ "GetPredictedGesturePath", (Native)&UGestureTracker::execGetPredictedGesturePath },
			{ "LoadGestures", (Native)&UGestureTracker::execLoadGestures },
			{ "SaveGestures", (Native)&UGestureTracker::execSaveGestures },
			{ "StartContinuousRecognition", (Native)&UGestureTracker::execStartContinuousRecognition },
			{ "StartDrawPredictedGesture", (Native)&UGestureTracker::execStartDrawPredictedGesture },
			{ "StartDrawTrackedGesture", (Native)&UGestureTracker::execStartDrawTrackedGesture },
			{ "StartRecognition", (Native)&UGestureTracker::execStartRecognition },
			{ "StartRecording", (Native)&UGestureTracker::execStartRecording },
			{ "StopContinuousRecognition", (Native)&UGestureTracker::execStopContinuousRecognition },
			{ "StopDrawPredictedGesture", (Native)&UGestureTracker::execStopDrawPredictedGesture },
			{ "StopDrawTrackedGesture", (Native)&UGestureTracker::execStopDrawTrackedGesture },
			{ "UpdateDrawIds", (Native)&UGestureTracker::execUpdateDrawIds },
			{ "UpdatePredictDrawMaterials", (Native)&UGestureTracker::execUpdatePredictDrawMaterials },
			{ "UpdateTrackDrawMaterials", (Native)&UGestureTracker::execUpdateTrackDrawMaterials },
			{ "UpdateTrackIds", (Native)&UGestureTracker::execUpdateTrackIds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 25);
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_ClearGestures()
	{
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearGestures"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clear all recorded gestures\nStops any recognition (but not recording)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_DrawGestureById()
	{
		struct GestureTracker_eventDrawGestureById_Parms
		{
			int32 id;
			UStaticMesh* mesh;
			EGestureLibFunctionResult result;
			UGestureMeshComponent* drawResult;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DrawGestureById"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventDrawGestureById_Parms));
			UProperty* NewProp_drawResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("drawResult"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(drawResult, GestureTracker_eventDrawGestureById_Parms), 0x0010000000080180, Z_Construct_UClass_UGestureMeshComponent_NoRegister());
			UProperty* NewProp_result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(result, GestureTracker_eventDrawGestureById_Parms), 0x0010000000000180, Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult());
			UProperty* NewProp_result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureTracker_eventDrawGestureById_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, GestureTracker_eventDrawGestureById_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Draws the gesture with the given id at the Gesture Tracker's current position and rotation.\nIMPORTANT: The drawResult must be destroyed manually, so it is recommended that you store a reference to it.\n@param name The id of the gesture to draw.\n@param mesh A mesh used for segments of the drawn gesture."));
			MetaData->SetValue(NewProp_drawResult, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_DrawGestureByName()
	{
		struct GestureTracker_eventDrawGestureByName_Parms
		{
			FString name;
			UStaticMesh* mesh;
			EGestureLibFunctionResult result;
			UGestureMeshComponent* drawResult;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DrawGestureByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventDrawGestureByName_Parms));
			UProperty* NewProp_drawResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("drawResult"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(drawResult, GestureTracker_eventDrawGestureByName_Parms), 0x0010000000080180, Z_Construct_UClass_UGestureMeshComponent_NoRegister());
			UProperty* NewProp_result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(result, GestureTracker_eventDrawGestureByName_Parms), 0x0010000000000180, Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult());
			UProperty* NewProp_result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureTracker_eventDrawGestureByName_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, GestureTracker_eventDrawGestureByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Draws the gesture with the given name at the Gesture Tracker's current position and rotation.\nIf multiple Gestures with the same name exist only the first recorded will be drawn.\nIMPORTANT: The drawResult must be destroyed manually, so it is recommended that you store a reference to it.\n@param name The name of the gesture to draw.\n@param mesh A mesh used for segments of the drawn gesture."));
			MetaData->SetValue(NewProp_drawResult, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_FinishRecognition()
	{
		struct GestureTracker_eventFinishRecognition_Parms
		{
			EGestureRecognizeResult result;
			int32 id;
			FString name;
			float recognitionDuration;
			float lengthRatio;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FinishRecognition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventFinishRecognition_Parms));
			UProperty* NewProp_lengthRatio = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lengthRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(lengthRatio, GestureTracker_eventFinishRecognition_Parms), 0x0010000000000180);
			UProperty* NewProp_recognitionDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("recognitionDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(recognitionDuration, GestureTracker_eventFinishRecognition_Parms), 0x0010000000000180);
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, GestureTracker_eventFinishRecognition_Parms), 0x0010000000000180);
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, GestureTracker_eventFinishRecognition_Parms), 0x0010000000000180);
			UProperty* NewProp_result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(result, GestureTracker_eventFinishRecognition_Parms), 0x0010000000000180, Z_Construct_UEnum_GestureTrackerVR_EGestureRecognizeResult());
			UProperty* NewProp_result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("End recognition and check for a successfully recognized gesture\n@param id The unique id of the recognized gesture\n@param name The non-unique name of the recognized gesture.\n@param recognitionDuration The time from StartRecognition to FinishRecognition in real seconds (not game time).\n@param lengthRatio The ratio of the tracked gesture length to the reference gesture length (e.g. 2 means the tracked gesture was twice as long as the recognized reference)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_FinishRecording()
	{
		struct GestureTracker_eventFinishRecording_Parms
		{
			EGestureRecordResult result;
			int32 assignedId;
			int32 id;
			FString name;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FinishRecording"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventFinishRecording_Parms));
			UProperty* NewProp_name = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("name"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(name, GestureTracker_eventFinishRecording_Parms), 0x0010000000000080);
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, GestureTracker_eventFinishRecording_Parms), 0x0010000000000080);
			UProperty* NewProp_assignedId = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("assignedId"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(assignedId, GestureTracker_eventFinishRecording_Parms), 0x0010000000000180);
			UProperty* NewProp_result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(result, GestureTracker_eventFinishRecording_Parms), 0x0010000000000180, Z_Construct_UEnum_GestureTrackerVR_EGestureRecordResult());
			UProperty* NewProp_result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_id"), TEXT("-1"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Save the gesture being recorded. Fails if the gesture is too short or too long, or called while not recording.\nIf you record using the same id as a previous recording, the previous recording will be overwritten.\n@param id The unique id to assign to the recorded gesture. Enter a negative number to have id automatically assigned.\n@param name (optional) A non unique name to assign to the recorded gesture.\n@param assignedId The id assigned to the recorded gesture. -1 if recording failed."));
			MetaData->SetValue(NewProp_name, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_GetGesturePath()
	{
		struct GestureTracker_eventGetGesturePath_Parms
		{
			int32 id;
			TArray<FVector> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetGesturePath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GestureTracker_eventGetGesturePath_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, GestureTracker_eventGetGesturePath_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, GestureTracker_eventGetGesturePath_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@param id The id of the gesture whose path we want\n@return A vector array describing the path of the specified gesture"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_GetIds()
	{
		struct GestureTracker_eventGetIds_Parms
		{
			TArray<int32> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GestureTracker_eventGetIds_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, GestureTracker_eventGetIds_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns an array containing the Ids of stored gestures"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_GetNumGestures()
	{
		struct GestureTracker_eventGetNumGestures_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumGestures"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GestureTracker_eventGetNumGestures_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, GestureTracker_eventGetNumGestures_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns the number of stored gestures"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_GetPercentageComplete()
	{
		struct GestureTracker_eventGetPercentageComplete_Parms
		{
			int32 id;
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPercentageComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GestureTracker_eventGetPercentageComplete_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, GestureTracker_eventGetPercentageComplete_Parms), 0x0010000000000580);
			UProperty* NewProp_id = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("id"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(id, GestureTracker_eventGetPercentageComplete_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the current percentage complete of the gesture with the given id.\ni.e. If you're halfway through performing the gesture when this is called it will return .5"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_GetPredictedGestureId()
	{
		struct GestureTracker_eventGetPredictedGestureId_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPredictedGestureId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GestureTracker_eventGetPredictedGestureId_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, GestureTracker_eventGetPredictedGestureId_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the id of the current predicted gesture, or -1 if no gesture is predicted"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_GetPredictedGesturePath()
	{
		struct GestureTracker_eventGetPredictedGesturePath_Parms
		{
			TArray<FVector> ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPredictedGesturePath"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54020401, 65535, sizeof(GestureTracker_eventGetPredictedGesturePath_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, GestureTracker_eventGetPredictedGesturePath_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("@return A vector array describing the path of the currently predicted gesture"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_LoadGestures()
	{
		struct GestureTracker_eventLoadGestures_Parms
		{
			FString filename;
			EGestureLibFunctionResult result;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadGestures"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventLoadGestures_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GestureTracker_eventLoadGestures_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GestureTracker_eventLoadGestures_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GestureTracker_eventLoadGestures_Parms), sizeof(bool), true);
			UProperty* NewProp_result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(result, GestureTracker_eventLoadGestures_Parms), 0x0010000000000180, Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult());
			UProperty* NewProp_result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_filename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(filename, GestureTracker_eventLoadGestures_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load gesture file, set as current recorded gestures\nStops any recording/recognition\n@param filename The path/filename to load the gestures from within the content folder.\n@return true if the load was successful"));
			MetaData->SetValue(NewProp_filename, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_SaveGestures()
	{
		struct GestureTracker_eventSaveGestures_Parms
		{
			FString filename;
			EGestureLibFunctionResult result;
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveGestures"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventSaveGestures_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, GestureTracker_eventSaveGestures_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, GestureTracker_eventSaveGestures_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, GestureTracker_eventSaveGestures_Parms), sizeof(bool), true);
			UProperty* NewProp_result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("result"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(result, GestureTracker_eventSaveGestures_Parms), 0x0010000000000180, Z_Construct_UEnum_GestureTrackerVR_EGestureLibFunctionResult());
			UProperty* NewProp_result_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_result, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_filename = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("filename"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(filename, GestureTracker_eventSaveGestures_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ExpandEnumAsExecs"), TEXT("result"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Save the currently recorded gestures to file. The root directory is your game's content folder.\n\nNOTE: If you want to package default gestures with your game, save the gestures to their own directory\nand then add that directory to \"Project Settings > Packaging > Additional Non-Asset Directories to Package\".\n(e.g. save with a filename \"Gestures/default_right_gestures\" and then add the \"Gestures\" directory to this list)\n@param filename The path/filename to save the gestures to within the content folder.\n@return true if the save was successful"));
			MetaData->SetValue(NewProp_filename, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StartContinuousRecognition()
	{
		struct GestureTracker_eventStartContinuousRecognition_Parms
		{
			TArray<int32> trackIds;
			bool trackIdsIsBlacklist;
			bool force;
			bool resetOnRecognized;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartContinuousRecognition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventStartContinuousRecognition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(resetOnRecognized, GestureTracker_eventStartContinuousRecognition_Parms, bool);
			UProperty* NewProp_resetOnRecognized = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("resetOnRecognized"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(resetOnRecognized, GestureTracker_eventStartContinuousRecognition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(resetOnRecognized, GestureTracker_eventStartContinuousRecognition_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(force, GestureTracker_eventStartContinuousRecognition_Parms, bool);
			UProperty* NewProp_force = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("force"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(force, GestureTracker_eventStartContinuousRecognition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(force, GestureTracker_eventStartContinuousRecognition_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(trackIdsIsBlacklist, GestureTracker_eventStartContinuousRecognition_Parms, bool);
			UProperty* NewProp_trackIdsIsBlacklist = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("trackIdsIsBlacklist"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(trackIdsIsBlacklist, GestureTracker_eventStartContinuousRecognition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(trackIdsIsBlacklist, GestureTracker_eventStartContinuousRecognition_Parms), sizeof(bool), true);
			UProperty* NewProp_trackIds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("trackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(trackIds, GestureTracker_eventStartContinuousRecognition_Parms), 0x0010000008000182);
			UProperty* NewProp_trackIds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_trackIds, TEXT("trackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("trackIds"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_force"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_resetOnRecognized"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_trackIdsIsBlacklist"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("After starting continuous recognition the recognition event will fire every time a recorded gesture is completed.\n@param trackIds A list of ids to track (or not, depending on trackIdsIsBlacklist) for recognition\n@param trackIdsIsBlacklist trackIds is a blacklist if true, whitelist if false\n@param force Force restart tracking even if currently recording/recognizing\n@param resetOnRecognized If true, recognition of a gesture will restart immediately after it is recognized, else it will wait until the gesture has stopped being performed"));
			MetaData->SetValue(NewProp_trackIds, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StartDrawPredictedGesture()
	{
		struct GestureTracker_eventStartDrawPredictedGesture_Parms
		{
			UStaticMesh* mesh;
			UMaterialInterface* baseMaterial;
			UMaterialInterface* successMaterial;
			TArray<int32> drawIds;
			bool drawIdsIsBlacklist;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartDrawPredictedGesture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventStartDrawPredictedGesture_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(drawIdsIsBlacklist, GestureTracker_eventStartDrawPredictedGesture_Parms, bool);
			UProperty* NewProp_drawIdsIsBlacklist = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("drawIdsIsBlacklist"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(drawIdsIsBlacklist, GestureTracker_eventStartDrawPredictedGesture_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(drawIdsIsBlacklist, GestureTracker_eventStartDrawPredictedGesture_Parms), sizeof(bool), true);
			UProperty* NewProp_drawIds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("drawIds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(drawIds, GestureTracker_eventStartDrawPredictedGesture_Parms), 0x0010000008000182);
			UProperty* NewProp_drawIds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_drawIds, TEXT("drawIds"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_successMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("successMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(successMaterial, GestureTracker_eventStartDrawPredictedGesture_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_baseMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("baseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseMaterial, GestureTracker_eventStartDrawPredictedGesture_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureTracker_eventStartDrawPredictedGesture_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("drawIds"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_drawIdsIsBlacklist"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start drawing the predicted gesture during recognition\nWill use default or last assigned mesh and materials if left blank\nIMPORTANT: Materials must have \"Use with spline meshes\" checked\n@param mesh                A mesh used for segments of the drawn gesture.\n@param baseMaterial        (optional) A material to replace the mesh's material\n@param successMaterial     A material to apply to the completed segments of the predicted gesture.\n@param drawIds             A array of gesture Ids to draw predictively (or not, depending on the value of drawIdsIsBlackList)\n@param drawIdsIsBlacklist  DrawIds is a blacklist if true, whitelist if false"));
			MetaData->SetValue(NewProp_drawIds, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StartDrawTrackedGesture()
	{
		struct GestureTracker_eventStartDrawTrackedGesture_Parms
		{
			UStaticMesh* mesh;
			UMaterialInterface* baseMaterial;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartDrawTrackedGesture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureTracker_eventStartDrawTrackedGesture_Parms));
			UProperty* NewProp_baseMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("baseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseMaterial, GestureTracker_eventStartDrawTrackedGesture_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureTracker_eventStartDrawTrackedGesture_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Start drawing the gesture that is currently being tracked\nWill use the default or last assigned mesh and materials if left blank\nIMPORTANT: Materials must have \"Use with spline meshes\" checked\n@param mesh            A mesh used for segments of the drawn gesture.\n@param baseMaterial    (optional) A material to replace the mesh's material\n@param successMaterial A material to apply when the tracked gesture is recognized."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StartRecognition()
	{
		struct GestureTracker_eventStartRecognition_Parms
		{
			TArray<int32> trackIds;
			bool trackIdsIsBlacklist;
			bool force;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartRecognition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04420401, 65535, sizeof(GestureTracker_eventStartRecognition_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(force, GestureTracker_eventStartRecognition_Parms, bool);
			UProperty* NewProp_force = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("force"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(force, GestureTracker_eventStartRecognition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(force, GestureTracker_eventStartRecognition_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(trackIdsIsBlacklist, GestureTracker_eventStartRecognition_Parms, bool);
			UProperty* NewProp_trackIdsIsBlacklist = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("trackIdsIsBlacklist"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(trackIdsIsBlacklist, GestureTracker_eventStartRecognition_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(trackIdsIsBlacklist, GestureTracker_eventStartRecognition_Parms), sizeof(bool), true);
			UProperty* NewProp_trackIds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("trackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(trackIds, GestureTracker_eventStartRecognition_Parms), 0x0010000008000182);
			UProperty* NewProp_trackIds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_trackIds, TEXT("trackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("trackIds"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_force"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_trackIdsIsBlacklist"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Initialize tracking to start recognizing a gesture\n@param trackIds A list of ids to track (or not, depending on trackIdsIsBlacklist) for recognition\n@param trackIdsIsBlacklist trackIds is a blacklist if true, whitelist if false\n@param force Force restart tracking even if currently recording/recognizing"));
			MetaData->SetValue(NewProp_trackIds, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StartRecording()
	{
		struct GestureTracker_eventStartRecording_Parms
		{
			bool force;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StartRecording"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureTracker_eventStartRecording_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(force, GestureTracker_eventStartRecording_Parms, bool);
			UProperty* NewProp_force = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("force"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(force, GestureTracker_eventStartRecording_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(force, GestureTracker_eventStartRecording_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_force"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Initialize tracking to start recording a gesture\n@param force Force restart tracking even if currently recording/recognizing"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StopContinuousRecognition()
	{
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopContinuousRecognition"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StopDrawPredictedGesture()
	{
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopDrawPredictedGesture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop drawing the predicted gesture during recognition"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_StopDrawTrackedGesture()
	{
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("StopDrawTrackedGesture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Stop drawing the gesture that is currently being tracked"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_UpdateDrawIds()
	{
		struct GestureTracker_eventUpdateDrawIds_Parms
		{
			TArray<int32> drawIds;
			bool drawIdsIsBlacklist;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateDrawIds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureTracker_eventUpdateDrawIds_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(drawIdsIsBlacklist, GestureTracker_eventUpdateDrawIds_Parms, bool);
			UProperty* NewProp_drawIdsIsBlacklist = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("drawIdsIsBlacklist"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(drawIdsIsBlacklist, GestureTracker_eventUpdateDrawIds_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(drawIdsIsBlacklist, GestureTracker_eventUpdateDrawIds_Parms), sizeof(bool), true);
			UProperty* NewProp_drawIds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("drawIds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(drawIds, GestureTracker_eventUpdateDrawIds_Parms), 0x0010000000000082);
			UProperty* NewProp_drawIds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_drawIds, TEXT("drawIds"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("drawIds"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_drawIdsIsBlacklist"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Use to update the drawIds at any time so that you can start/stop\ndrawing a gesture in the middle of recognition"));
			MetaData->SetValue(NewProp_drawIds, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_UpdatePredictDrawMaterials()
	{
		struct GestureTracker_eventUpdatePredictDrawMaterials_Parms
		{
			UStaticMesh* mesh;
			UMaterialInterface* baseMaterial;
			UMaterialInterface* successMaterial;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePredictDrawMaterials"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureTracker_eventUpdatePredictDrawMaterials_Parms));
			UProperty* NewProp_successMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("successMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(successMaterial, GestureTracker_eventUpdatePredictDrawMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_baseMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("baseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseMaterial, GestureTracker_eventUpdatePredictDrawMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureTracker_eventUpdatePredictDrawMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Update the predicted gesture draw materials with the supplied ones.\nLeave an input blank to leave it unchanged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_UpdateTrackDrawMaterials()
	{
		struct GestureTracker_eventUpdateTrackDrawMaterials_Parms
		{
			UStaticMesh* mesh;
			UMaterialInterface* baseMaterial;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateTrackDrawMaterials"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureTracker_eventUpdateTrackDrawMaterials_Parms));
			UProperty* NewProp_baseMaterial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("baseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(baseMaterial, GestureTracker_eventUpdateTrackDrawMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UMaterialInterface_NoRegister());
			UProperty* NewProp_mesh = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(mesh, GestureTracker_eventUpdateTrackDrawMaterials_Parms), 0x0010000000000080, Z_Construct_UClass_UStaticMesh_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Update tracking gesture draw materials with the supplied ones.\nLeave an input blank to leave it unchanged."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UGestureTracker_UpdateTrackIds()
	{
		struct GestureTracker_eventUpdateTrackIds_Parms
		{
			TArray<int32> trackIds;
			bool trackIdsIsBlacklist;
		};
		UObject* Outer=Z_Construct_UClass_UGestureTracker();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateTrackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(GestureTracker_eventUpdateTrackIds_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(trackIdsIsBlacklist, GestureTracker_eventUpdateTrackIds_Parms, bool);
			UProperty* NewProp_trackIdsIsBlacklist = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("trackIdsIsBlacklist"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(trackIdsIsBlacklist, GestureTracker_eventUpdateTrackIds_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(trackIdsIsBlacklist, GestureTracker_eventUpdateTrackIds_Parms), sizeof(bool), true);
			UProperty* NewProp_trackIds = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("trackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(trackIds, GestureTracker_eventUpdateTrackIds_Parms), 0x0010000000000082);
			UProperty* NewProp_trackIds_Inner = new(EC_InternalUseOnlyConstructor, NewProp_trackIds, TEXT("trackIds"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("AutoCreateRefTerm"), TEXT("trackIds"));
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("GestureTrackerVR"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_trackIdsIsBlacklist"), TEXT("true"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Use to update the trackIds at any time so that you can stop\nrecognizing a gesture in the middle of recognition, and start/stop\nrecognizing gestures during continuous recognition."));
			MetaData->SetValue(NewProp_trackIds, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGestureTracker_NoRegister()
	{
		return UGestureTracker::StaticClass();
	}
	UClass* Z_Construct_UClass_UGestureTracker()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_GestureTrackerVR();
			OuterClass = UGestureTracker::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_ClearGestures());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_DrawGestureById());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_DrawGestureByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_FinishRecognition());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_FinishRecording());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_GetGesturePath());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_GetIds());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_GetNumGestures());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_GetPercentageComplete());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_GetPredictedGestureId());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_GetPredictedGesturePath());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_LoadGestures());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_SaveGestures());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StartContinuousRecognition());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StartDrawPredictedGesture());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StartDrawTrackedGesture());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StartRecognition());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StartRecording());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StopContinuousRecognition());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StopDrawPredictedGesture());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_StopDrawTrackedGesture());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_UpdateDrawIds());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_UpdatePredictDrawMaterials());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_UpdateTrackDrawMaterials());
				OuterClass->LinkChild(Z_Construct_UFunction_UGestureTracker_UpdateTrackIds());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_predictSuccessMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("predictSuccessMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(predictSuccessMaterial, UGestureTracker), 0x0040000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_predictBaseMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("predictBaseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(predictBaseMaterial, UGestureTracker), 0x0040000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_predictMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("predictMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(predictMesh, UGestureTracker), 0x0040000000000000, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_trackBaseMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("trackBaseMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(trackBaseMaterial, UGestureTracker), 0x0040000000000000, Z_Construct_UClass_UMaterialInterface_NoRegister());
				UProperty* NewProp_trackMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("trackMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(trackMesh, UGestureTracker), 0x0040000000000000, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_predictGestureMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("predictGestureMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(predictGestureMesh, UGestureTracker), 0x004000000008001c, Z_Construct_UClass_UGestureMeshComponent_NoRegister());
				UProperty* NewProp_trackGestureMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("trackGestureMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(trackGestureMesh, UGestureTracker), 0x004000000008001c, Z_Construct_UClass_UGestureMeshComponent_NoRegister());
				UProperty* NewProp_drawIds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("drawIds"), RF_Public|RF_Transient|RF_MarkAsNative) USetProperty(CPP_PROPERTY_BASE(drawIds, UGestureTracker), 0x0040000000000000);
				UProperty* NewProp_drawIds_ElementProp = new(EC_InternalUseOnlyConstructor, NewProp_drawIds, TEXT("drawIds"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawingPredicted, UGestureTracker, bool);
				UProperty* NewProp_bDrawingPredicted = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawingPredicted"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawingPredicted, UGestureTracker), 0x0040000000000014, CPP_BOOL_PROPERTY_BITMASK(bDrawingPredicted, UGestureTracker), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDrawingTracked, UGestureTracker, bool);
				UProperty* NewProp_bDrawingTracked = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDrawingTracked"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDrawingTracked, UGestureTracker), 0x0040000000000014, CPP_BOOL_PROPERTY_BITMASK(bDrawingTracked, UGestureTracker), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bContinuousResetOnRecognized, UGestureTracker, bool);
				UProperty* NewProp_bContinuousResetOnRecognized = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bContinuousResetOnRecognized"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bContinuousResetOnRecognized, UGestureTracker), 0x0040000000000014, CPP_BOOL_PROPERTY_BITMASK(bContinuousResetOnRecognized, UGestureTracker), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bContinuous, UGestureTracker, bool);
				UProperty* NewProp_bContinuous = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bContinuous"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bContinuous, UGestureTracker), 0x0040000000000014, CPP_BOOL_PROPERTY_BITMASK(bContinuous, UGestureTracker), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRecording, UGestureTracker, bool);
				UProperty* NewProp_bRecording = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRecording"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRecording, UGestureTracker), 0x0040000000000014, CPP_BOOL_PROPERTY_BITMASK(bRecording, UGestureTracker), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTracking, UGestureTracker, bool);
				UProperty* NewProp_bTracking = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTracking"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTracking, UGestureTracker), 0x0040000000000014, CPP_BOOL_PROPERTY_BITMASK(bTracking, UGestureTracker), sizeof(bool), true);
				UProperty* NewProp_predictDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("predictDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(predictDistance, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_predictPercentage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("predictPercentage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(predictPercentage, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_maxTrackDrawDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxTrackDrawDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxTrackDrawDistance, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_completionPercentage = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("completionPercentage"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(completionPercentage, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_patience = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("patience"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(patience, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_smoothing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("smoothing"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(smoothing, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_continuousFailDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("continuousFailDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(continuousFailDistance, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_trackFailDistance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("trackFailDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(trackFailDistance, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_continuousRecognitionRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("continuousRecognitionRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(continuousRecognitionRatio, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_trackRecognitionRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("trackRecognitionRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(trackRecognitionRatio, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_unacceptableSimilarity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("unacceptableSimilarity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(unacceptableSimilarity, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_acceptableSimilarity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("acceptableSimilarity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(acceptableSimilarity, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_maxGestureLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxGestureLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxGestureLength, UGestureTracker), 0x0010000000000005);
				UProperty* NewProp_minGestureLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("minGestureLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(minGestureLength, UGestureTracker), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseSystemTime, UGestureTracker, bool);
				UProperty* NewProp_bUseSystemTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseSystemTime"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseSystemTime, UGestureTracker), 0x0011000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseSystemTime, UGestureTracker), sizeof(bool), true);
				UProperty* NewProp_rotationOffset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("rotationOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(rotationOffset, UGestureTracker), 0x0011000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseBodyLocationForPitch, UGestureTracker, bool);
				UProperty* NewProp_bUseBodyLocationForPitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseBodyLocationForPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseBodyLocationForPitch, UGestureTracker), 0x0011000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseBodyLocationForPitch, UGestureTracker), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNormalizePitchRotation, UGestureTracker, bool);
				UProperty* NewProp_bNormalizePitchRotation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bNormalizePitchRotation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNormalizePitchRotation, UGestureTracker), 0x0011000000000005, CPP_BOOL_PROPERTY_BITMASK(bNormalizePitchRotation, UGestureTracker), sizeof(bool), true);
				UProperty* NewProp_gestureResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("gestureResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(gestureResolution, UGestureTracker), 0x0011000000000005);
				UProperty* NewProp_BodyLocationComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BodyLocationComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BodyLocationComponent, UGestureTracker), 0x001000000008200c, Z_Construct_UClass_USceneComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseWorldLocation, UGestureTracker, bool);
				UProperty* NewProp_bUseWorldLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseWorldLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseWorldLocation, UGestureTracker), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseWorldLocation, UGestureTracker), sizeof(bool), true);
				UProperty* NewProp_GestureRecognized = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GestureRecognized"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(GestureRecognized, UGestureTracker), 0x0010000010080000, Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature());
				UProperty* NewProp_ContinuousGestureRecognized = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ContinuousGestureRecognized"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(ContinuousGestureRecognized, UGestureTracker), 0x0010000010080000, Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_ClearGestures(), "ClearGestures"); // 454657218
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_DrawGestureById(), "DrawGestureById"); // 704394886
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_DrawGestureByName(), "DrawGestureByName"); // 3187921668
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_FinishRecognition(), "FinishRecognition"); // 549307430
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_FinishRecording(), "FinishRecording"); // 4023408117
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_GetGesturePath(), "GetGesturePath"); // 971531566
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_GetIds(), "GetIds"); // 3286381948
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_GetNumGestures(), "GetNumGestures"); // 765943626
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_GetPercentageComplete(), "GetPercentageComplete"); // 564766438
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_GetPredictedGestureId(), "GetPredictedGestureId"); // 2951152676
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_GetPredictedGesturePath(), "GetPredictedGesturePath"); // 251300154
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_LoadGestures(), "LoadGestures"); // 366759576
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_SaveGestures(), "SaveGestures"); // 1667983138
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StartContinuousRecognition(), "StartContinuousRecognition"); // 896885483
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StartDrawPredictedGesture(), "StartDrawPredictedGesture"); // 370036690
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StartDrawTrackedGesture(), "StartDrawTrackedGesture"); // 2732983907
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StartRecognition(), "StartRecognition"); // 2418105477
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StartRecording(), "StartRecording"); // 625353308
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StopContinuousRecognition(), "StopContinuousRecognition"); // 2337438796
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StopDrawPredictedGesture(), "StopDrawPredictedGesture"); // 3982574932
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_StopDrawTrackedGesture(), "StopDrawTrackedGesture"); // 665294125
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_UpdateDrawIds(), "UpdateDrawIds"); // 421105729
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_UpdatePredictDrawMaterials(), "UpdatePredictDrawMaterials"); // 1306475292
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_UpdateTrackDrawMaterials(), "UpdateTrackDrawMaterials"); // 2293897183
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UGestureTracker_UpdateTrackIds(), "UpdateTrackIds"); // 3938097771
				static TCppClassTypeInfo<TCppClassTypeTraits<UGestureTracker> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("GestureTrackerVR"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GestureTracker.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Gesture Tracker provides gesture recognition and drawing.\nAttach it to your motion controller component (or any moving component)\nand setup inputs for its Record/Recognition/Draw functions.\nCheck the parameters in the details panel to tweak tracking, recognition, and drawing."));
				MetaData->SetValue(NewProp_predictSuccessMaterial, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_predictBaseMaterial, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_predictMesh, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_trackBaseMaterial, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_trackMesh, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_predictGestureMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_predictGestureMesh, TEXT("Category"), TEXT("Draw Meshes"));
				MetaData->SetValue(NewProp_predictGestureMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_predictGestureMesh, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_predictGestureMesh, TEXT("ToolTip"), TEXT("The gesture mesh object for predictive drawing"));
				MetaData->SetValue(NewProp_trackGestureMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_trackGestureMesh, TEXT("Category"), TEXT("Draw Meshes"));
				MetaData->SetValue(NewProp_trackGestureMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_trackGestureMesh, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_trackGestureMesh, TEXT("ToolTip"), TEXT("The gesture mesh object for tracked drawing"));
				MetaData->SetValue(NewProp_drawIds, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bDrawingPredicted, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bDrawingPredicted, TEXT("Category"), TEXT("Tracking Status Booleans"));
				MetaData->SetValue(NewProp_bDrawingPredicted, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bDrawingPredicted, TEXT("ToolTip"), TEXT("true if the predicted gesture will be drawn during recognition"));
				MetaData->SetValue(NewProp_bDrawingTracked, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bDrawingTracked, TEXT("Category"), TEXT("Tracking Status Booleans"));
				MetaData->SetValue(NewProp_bDrawingTracked, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bDrawingTracked, TEXT("ToolTip"), TEXT("true if the tracked gesture will be drawn during tracking"));
				MetaData->SetValue(NewProp_bContinuousResetOnRecognized, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bContinuousResetOnRecognized, TEXT("Category"), TEXT("Tracking Status Booleans"));
				MetaData->SetValue(NewProp_bContinuousResetOnRecognized, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bContinuousResetOnRecognized, TEXT("ToolTip"), TEXT("if true, recognition resets immediately after finishing a gesture during continuous recognition\nif false, recognition resets only when a gesture has stopped being performed"));
				MetaData->SetValue(NewProp_bContinuous, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bContinuous, TEXT("Category"), TEXT("Tracking Status Booleans"));
				MetaData->SetValue(NewProp_bContinuous, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bContinuous, TEXT("ToolTip"), TEXT("true if continuous recognition is active"));
				MetaData->SetValue(NewProp_bRecording, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bRecording, TEXT("Category"), TEXT("Tracking Status Booleans"));
				MetaData->SetValue(NewProp_bRecording, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bRecording, TEXT("ToolTip"), TEXT("true if recording is active"));
				MetaData->SetValue(NewProp_bTracking, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_bTracking, TEXT("Category"), TEXT("Tracking Status Booleans"));
				MetaData->SetValue(NewProp_bTracking, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bTracking, TEXT("ToolTip"), TEXT("true if any tracking mode is active (recording, regular/continuous recognition)"));
				MetaData->SetValue(NewProp_predictDistance, TEXT("Category"), TEXT("Parameters|Drawing"));
				MetaData->SetValue(NewProp_predictDistance, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_predictDistance, TEXT("ClampMin"), TEXT("1"));
				MetaData->SetValue(NewProp_predictDistance, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_predictDistance, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_predictDistance, TEXT("ToolTip"), TEXT("The distance in units ahead of your current recognition progress that the predicted gesture will be drawn\nThis is the \"ghost\" image displayed during predictive drawing with the default materials"));
				MetaData->SetValue(NewProp_predictPercentage, TEXT("Category"), TEXT("Parameters|Drawing"));
				MetaData->SetValue(NewProp_predictPercentage, TEXT("ClampMax"), TEXT("1"));
				MetaData->SetValue(NewProp_predictPercentage, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_predictPercentage, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_predictPercentage, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_predictPercentage, TEXT("ToolTip"), TEXT("The percentage of a gesture that must be completed before it can be the predicted gesture"));
				MetaData->SetValue(NewProp_maxTrackDrawDistance, TEXT("Category"), TEXT("Parameters|Drawing"));
				MetaData->SetValue(NewProp_maxTrackDrawDistance, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_maxTrackDrawDistance, TEXT("ClampMin"), TEXT("1"));
				MetaData->SetValue(NewProp_maxTrackDrawDistance, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_maxTrackDrawDistance, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_maxTrackDrawDistance, TEXT("ToolTip"), TEXT("The maximum length of the tracked gesture mesh in units.\nThe end of the tracked gesture will start being erased past this length."));
				MetaData->SetValue(NewProp_completionPercentage, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_completionPercentage, TEXT("ClampMax"), TEXT("1"));
				MetaData->SetValue(NewProp_completionPercentage, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_completionPercentage, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_completionPercentage, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_completionPercentage, TEXT("ToolTip"), TEXT("The percentage of a reference gesture that must be completed to be recognized"));
				MetaData->SetValue(NewProp_patience, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_patience, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_patience, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_patience, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_patience, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_patience, TEXT("ToolTip"), TEXT("Number of units the tracker can move before any potential gestures can be disqualified\nduring normal recognition. Lets players move randomly for a bit after recognition starts\nso they don't have to begin performing the gesture the moment they trigger recognition."));
				MetaData->SetValue(NewProp_smoothing, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_smoothing, TEXT("ClampMax"), TEXT("50"));
				MetaData->SetValue(NewProp_smoothing, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_smoothing, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_smoothing, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_smoothing, TEXT("ToolTip"), TEXT("Length of the portion of a gesture that will be checked for acceptable similarity\nto the currently tracked gesture. If the gesture motion being tracked is acceptably\nsimilar to any part of the reference portion then recognition will progress.\n\nEffectively smooths tracking so that players don't have to perfectly mimick sharp corners."));
				MetaData->SetValue(NewProp_continuousFailDistance, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_continuousFailDistance, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_continuousFailDistance, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_continuousFailDistance, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_continuousFailDistance, TEXT("ToolTip"), TEXT("Same as trackFailDistance but for continuous recognition"));
				MetaData->SetValue(NewProp_trackFailDistance, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_trackFailDistance, TEXT("ClampMin"), TEXT("0"));
				MetaData->SetValue(NewProp_trackFailDistance, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_trackFailDistance, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_trackFailDistance, TEXT("ToolTip"), TEXT("The distance you can go off the gesture path before a gesture will fail recognition"));
				MetaData->SetValue(NewProp_continuousRecognitionRatio, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_continuousRecognitionRatio, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_continuousRecognitionRatio, TEXT("ClampMin"), TEXT("1"));
				MetaData->SetValue(NewProp_continuousRecognitionRatio, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_continuousRecognitionRatio, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_continuousRecognitionRatio, TEXT("ToolTip"), TEXT("Same as trackRecognitionRatio but for continuous recognition"));
				MetaData->SetValue(NewProp_trackRecognitionRatio, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_trackRecognitionRatio, TEXT("ClampMax"), TEXT("100"));
				MetaData->SetValue(NewProp_trackRecognitionRatio, TEXT("ClampMin"), TEXT("1"));
				MetaData->SetValue(NewProp_trackRecognitionRatio, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_trackRecognitionRatio, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_trackRecognitionRatio, TEXT("ToolTip"), TEXT("The ratio of the maximum size of the recognized gesture to the tracked gesture for regular recognition.\nOne unit of the tracked gesture can represent up to ratio units of a reference gesture."));
				MetaData->SetValue(NewProp_unacceptableSimilarity, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_unacceptableSimilarity, TEXT("ClampMax"), TEXT("1"));
				MetaData->SetValue(NewProp_unacceptableSimilarity, TEXT("ClampMin"), TEXT("-1"));
				MetaData->SetValue(NewProp_unacceptableSimilarity, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_unacceptableSimilarity, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_unacceptableSimilarity, TEXT("ToolTip"), TEXT("Gesture similarity value below which recognition be rejected.\nIf a tracked gesture is unacceptably similar to the current\nportion of a reference gesture for too long then that gesture\nwill be disqualified.\nCompleted gestures will also be disqualified in this way."));
				MetaData->SetValue(NewProp_acceptableSimilarity, TEXT("Category"), TEXT("Parameters|Recognition"));
				MetaData->SetValue(NewProp_acceptableSimilarity, TEXT("ClampMax"), TEXT("1"));
				MetaData->SetValue(NewProp_acceptableSimilarity, TEXT("ClampMin"), TEXT("-1"));
				MetaData->SetValue(NewProp_acceptableSimilarity, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_acceptableSimilarity, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_acceptableSimilarity, TEXT("ToolTip"), TEXT("Gesture similarity value above which recognition will be acceptable.\nIf a tracked gesture is acceptably similar to the current portion\nof a reference gesture then recognition will progress to the next\nportion of that gesture."));
				MetaData->SetValue(NewProp_maxGestureLength, TEXT("Category"), TEXT("Parameters|Recording"));
				MetaData->SetValue(NewProp_maxGestureLength, TEXT("ClampMax"), TEXT("1000"));
				MetaData->SetValue(NewProp_maxGestureLength, TEXT("ClampMin"), TEXT("2"));
				MetaData->SetValue(NewProp_maxGestureLength, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_maxGestureLength, TEXT("ToolTip"), TEXT("Maximum length of a recorded gesture in units"));
				MetaData->SetValue(NewProp_minGestureLength, TEXT("Category"), TEXT("Parameters|Recording"));
				MetaData->SetValue(NewProp_minGestureLength, TEXT("ClampMax"), TEXT("200"));
				MetaData->SetValue(NewProp_minGestureLength, TEXT("ClampMin"), TEXT("2"));
				MetaData->SetValue(NewProp_minGestureLength, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_minGestureLength, TEXT("ToolTip"), TEXT("Minimum length of a recorded gesture in units"));
				MetaData->SetValue(NewProp_bUseSystemTime, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_bUseSystemTime, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_bUseSystemTime, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bUseSystemTime, TEXT("ToolTip"), TEXT("Timing information will use system time if true, game time if false"));
				MetaData->SetValue(NewProp_rotationOffset, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_rotationOffset, TEXT("ClampMax"), TEXT("180"));
				MetaData->SetValue(NewProp_rotationOffset, TEXT("ClampMin"), TEXT("-180"));
				MetaData->SetValue(NewProp_rotationOffset, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_rotationOffset, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_rotationOffset, TEXT("ToolTip"), TEXT("Offset the yaw rotation of performed gestures by this many degrees, useful if the gesture\ntracker is pointing in a different direction than the player will be for any reason."));
				MetaData->SetValue(NewProp_bUseBodyLocationForPitch, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_bUseBodyLocationForPitch, TEXT("EditCondition"), TEXT("bNormalizePitchRotation"));
				MetaData->SetValue(NewProp_bUseBodyLocationForPitch, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_bUseBodyLocationForPitch, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bUseBodyLocationForPitch, TEXT("ToolTip"), TEXT("If BodyLocationComponent is set and we're normalizing pitch rotation, this sets whether pitch should be determined by the\nGestureTracker rotation or the angle from the GestureTracker to the BodyLocationComponent. Using the BodyLocation\nfor pitch is probably undesirable if you've set BodyLocationComponent to point to your VR camera since your hands\nare around 40 degrees below the camera at rest, so the standard pitch will be around -40 instead of around 0.\nThis won't be a problem if gestures are recorded with this set to true since that -40 pitch bias will be in both\nthe recorded and tracked gestures."));
				MetaData->SetValue(NewProp_bNormalizePitchRotation, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_bNormalizePitchRotation, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_bNormalizePitchRotation, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bNormalizePitchRotation, TEXT("ToolTip"), TEXT("If true, rotation of gestures will be normalized by pitch (looking up or down) in addition to yaw.\ne.g. A forward punch gesture will be recognized if you punch up."));
				MetaData->SetValue(NewProp_gestureResolution, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_gestureResolution, TEXT("ClampMax"), TEXT("20"));
				MetaData->SetValue(NewProp_gestureResolution, TEXT("ClampMin"), TEXT("0.250000"));
				MetaData->SetValue(NewProp_gestureResolution, TEXT("ExposeOnSpawn"), TEXT("TRUE"));
				MetaData->SetValue(NewProp_gestureResolution, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_gestureResolution, TEXT("ToolTip"), TEXT("The number of units between each recorded gesture point (or the length of a segment of the gesture)\nSmaller values mean a finer resolution, less performance.\nIt is highly recommended that you keep this above 1. If you record every .25 units you'll be recording\nmovements as small as the shaking of a person's hand and using up a lot of resources unnecessarily."));
				MetaData->SetValue(NewProp_BodyLocationComponent, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_BodyLocationComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_BodyLocationComponent, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_BodyLocationComponent, TEXT("NativeConst"), TEXT(""));
				MetaData->SetValue(NewProp_BodyLocationComponent, TEXT("ToolTip"), TEXT("If None (default) the gesturing orientation will be interpreted using the GestureTracker rotation.\nIf set, will override normal orientation detection and use the rotation from the BodyLocationComponent\nto the GestureTracker to orient gestures. This will keep orientation more consistent when switching between\ndifferent motion controller orientations.\nFor example, if a player is pointing the controller forward but holding it with a 90 degree twist in their\nwrist the GestureTracker will think they're pointing left. Setting this component will resolve this issue.\nGenerally you should set this to point to your pawn's Camera.\n@note RotationOffset will still apply if this is set."));
				MetaData->SetValue(NewProp_bUseWorldLocation, TEXT("Category"), TEXT("Parameters|Tracking"));
				MetaData->SetValue(NewProp_bUseWorldLocation, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_bUseWorldLocation, TEXT("ToolTip"), TEXT("Use the Gesture Tracker's: world location for tracking if true\n                         : location relative to the attach root if false"));
				MetaData->SetValue(NewProp_GestureRecognized, TEXT("Category"), TEXT("Recognition Events"));
				MetaData->SetValue(NewProp_GestureRecognized, TEXT("DisplayName"), TEXT("Regular Recognition Gesture Recognized"));
				MetaData->SetValue(NewProp_GestureRecognized, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_GestureRecognized, TEXT("ToolTip"), TEXT("Triggered whenever a gesture is recognized during normal recognition.\nCan be used to trigger a gesture effect as soon as a gesture is detected instead\nof when FinishRecognition is called. Multiple gestures may be recognized during one\nrecognition period (e.g. another gesture is a prefix of the one being tracked).\n@param id   The id of the recognized gesture\n@param name The name of the recognized gesture\n@param recognitionDuration The duration of the recognition period in seconds (from StartRecognition() to when the gesture was recognized).\n@param lengthRatio The ratio of the tracked gesture length to the reference gesture length (e.g. 2 means the tracked gesture was twice as long as the recognized reference)."));
				MetaData->SetValue(NewProp_ContinuousGestureRecognized, TEXT("Category"), TEXT("Recognition Events"));
				MetaData->SetValue(NewProp_ContinuousGestureRecognized, TEXT("DisplayName"), TEXT("Continuous Recognition Gesture Recognized"));
				MetaData->SetValue(NewProp_ContinuousGestureRecognized, TEXT("ModuleRelativePath"), TEXT("Public/GestureTracker.h"));
				MetaData->SetValue(NewProp_ContinuousGestureRecognized, TEXT("ToolTip"), TEXT("Triggered whenever a gesture is recognized during continuous recognition.\n@param id   The id of the recognized gesture\n@param name The name of the recognized gesture\n@param recognitionDuration The duration of the recognition period in seconds (approximately from the time the player started the gesture to when it was recognized).\n@param lengthRatio The ratio of the tracked gesture length to the reference gesture length (e.g. 2 means the tracked gesture was twice as long as the recognized reference)."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGestureTracker, 210834688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGestureTracker(Z_Construct_UClass_UGestureTracker, &UGestureTracker::StaticClass, TEXT("/Script/GestureTrackerVR"), TEXT("UGestureTracker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGestureTracker);
	UPackage* Z_Construct_UPackage__Script_GestureTrackerVR()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GestureTrackerVR")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xD9144B7D;
			Guid.B = 0x138B8B3F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

			Z_Construct_UDelegateFunction_GestureTrackerVR_GestureRecognizedDelegate__DelegateSignature();
		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
