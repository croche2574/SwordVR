// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class UMaterialInterface;
enum class EGestureLibFunctionResult : uint8;
class UGestureMeshComponent;
struct FVector;
enum class EGestureRecognizeResult : uint8;
enum class EGestureRecordResult : uint8;
#ifdef GESTURETRACKERVR_GestureTracker_generated_h
#error "GestureTracker.generated.h already included, missing '#pragma once' in GestureTracker.h"
#endif
#define GESTURETRACKERVR_GestureTracker_generated_h

#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_21_DELEGATE \
struct _Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms \
{ \
	int32 id; \
	FString name; \
	float recognitionDuration; \
	float lengthRatio; \
}; \
static inline void FGestureRecognizedDelegate_DelegateWrapper(const FMulticastScriptDelegate& GestureRecognizedDelegate, int32 id, const FString& name, float recognitionDuration, float lengthRatio) \
{ \
	_Script_GestureTrackerVR_eventGestureRecognizedDelegate_Parms Parms; \
	Parms.id=id; \
	Parms.name=name; \
	Parms.recognitionDuration=recognitionDuration; \
	Parms.lengthRatio=lengthRatio; \
	GestureRecognizedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateDrawIds) \
	{ \
		P_GET_TARRAY(int32,Z_Param_drawIds); \
		P_GET_UBOOL(Z_Param_drawIdsIsBlacklist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateDrawIds(Z_Param_drawIds,Z_Param_drawIdsIsBlacklist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePredictDrawMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdatePredictDrawMaterials(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrackDrawMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateTrackDrawMaterials(Z_Param_mesh,Z_Param_baseMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawGestureByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_GET_OBJECT_REF(UGestureMeshComponent,Z_Param_Out_drawResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawGestureByName(Z_Param_name,Z_Param_mesh,(EGestureLibFunctionResult&)(Z_Param_Out_result),Z_Param_Out_drawResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawGestureById) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_GET_OBJECT_REF(UGestureMeshComponent,Z_Param_Out_drawResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawGestureById(Z_Param_id,Z_Param_mesh,(EGestureLibFunctionResult&)(Z_Param_Out_result),Z_Param_Out_drawResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDrawPredictedGesture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopDrawPredictedGesture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDrawPredictedGesture) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_drawIds); \
		P_GET_UBOOL(Z_Param_drawIdsIsBlacklist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartDrawPredictedGesture(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial,Z_Param_Out_drawIds,Z_Param_drawIdsIsBlacklist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDrawTrackedGesture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopDrawTrackedGesture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDrawTrackedGesture) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartDrawTrackedGesture(Z_Param_mesh,Z_Param_baseMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPercentageComplete) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPercentageComplete(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictedGestureId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPredictedGestureId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrackIds) \
	{ \
		P_GET_TARRAY(int32,Z_Param_trackIds); \
		P_GET_UBOOL(Z_Param_trackIdsIsBlacklist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateTrackIds(Z_Param_trackIds,Z_Param_trackIdsIsBlacklist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictedGesturePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=this->GetPredictedGesturePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGesturePath) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=this->GetGesturePath(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetIds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumGestures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearGestures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGestures) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->LoadGestures(Z_Param_filename,(EGestureLibFunctionResult&)(Z_Param_Out_result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGestures) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SaveGestures(Z_Param_filename,(EGestureLibFunctionResult&)(Z_Param_Out_result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopContinuousRecognition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopContinuousRecognition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartContinuousRecognition) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_trackIds); \
		P_GET_UBOOL(Z_Param_trackIdsIsBlacklist); \
		P_GET_UBOOL(Z_Param_force); \
		P_GET_UBOOL(Z_Param_resetOnRecognized); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartContinuousRecognition(Z_Param_Out_trackIds,Z_Param_trackIdsIsBlacklist,Z_Param_force,Z_Param_resetOnRecognized); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishRecognition) \
	{ \
		P_GET_ENUM_REF(EGestureRecognizeResult,Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_id); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_recognitionDuration); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_lengthRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishRecognition((EGestureRecognizeResult&)(Z_Param_Out_result),Z_Param_Out_id,Z_Param_Out_name,Z_Param_Out_recognitionDuration,Z_Param_Out_lengthRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecognition) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_trackIds); \
		P_GET_UBOOL(Z_Param_trackIdsIsBlacklist); \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartRecognition(Z_Param_Out_trackIds,Z_Param_trackIdsIsBlacklist,Z_Param_force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishRecording) \
	{ \
		P_GET_ENUM_REF(EGestureRecordResult,Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_assignedId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishRecording((EGestureRecordResult&)(Z_Param_Out_result),Z_Param_Out_assignedId,Z_Param_id,Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecording) \
	{ \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartRecording(Z_Param_force); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateDrawIds) \
	{ \
		P_GET_TARRAY(int32,Z_Param_drawIds); \
		P_GET_UBOOL(Z_Param_drawIdsIsBlacklist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateDrawIds(Z_Param_drawIds,Z_Param_drawIdsIsBlacklist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePredictDrawMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdatePredictDrawMaterials(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrackDrawMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateTrackDrawMaterials(Z_Param_mesh,Z_Param_baseMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawGestureByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_GET_OBJECT_REF(UGestureMeshComponent,Z_Param_Out_drawResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawGestureByName(Z_Param_name,Z_Param_mesh,(EGestureLibFunctionResult&)(Z_Param_Out_result),Z_Param_Out_drawResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawGestureById) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_GET_OBJECT_REF(UGestureMeshComponent,Z_Param_Out_drawResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawGestureById(Z_Param_id,Z_Param_mesh,(EGestureLibFunctionResult&)(Z_Param_Out_result),Z_Param_Out_drawResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDrawPredictedGesture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopDrawPredictedGesture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDrawPredictedGesture) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_drawIds); \
		P_GET_UBOOL(Z_Param_drawIdsIsBlacklist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartDrawPredictedGesture(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial,Z_Param_Out_drawIds,Z_Param_drawIdsIsBlacklist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopDrawTrackedGesture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopDrawTrackedGesture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartDrawTrackedGesture) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartDrawTrackedGesture(Z_Param_mesh,Z_Param_baseMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPercentageComplete) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPercentageComplete(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictedGestureId) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetPredictedGestureId(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateTrackIds) \
	{ \
		P_GET_TARRAY(int32,Z_Param_trackIds); \
		P_GET_UBOOL(Z_Param_trackIdsIsBlacklist); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateTrackIds(Z_Param_trackIds,Z_Param_trackIdsIsBlacklist); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPredictedGesturePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=this->GetPredictedGesturePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGesturePath) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=this->GetGesturePath(Z_Param_id); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIds) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->GetIds(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetNumGestures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ClearGestures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGestures) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->LoadGestures(Z_Param_filename,(EGestureLibFunctionResult&)(Z_Param_Out_result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGestures) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_filename); \
		P_GET_ENUM_REF(EGestureLibFunctionResult,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SaveGestures(Z_Param_filename,(EGestureLibFunctionResult&)(Z_Param_Out_result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopContinuousRecognition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StopContinuousRecognition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartContinuousRecognition) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_trackIds); \
		P_GET_UBOOL(Z_Param_trackIdsIsBlacklist); \
		P_GET_UBOOL(Z_Param_force); \
		P_GET_UBOOL(Z_Param_resetOnRecognized); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartContinuousRecognition(Z_Param_Out_trackIds,Z_Param_trackIdsIsBlacklist,Z_Param_force,Z_Param_resetOnRecognized); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishRecognition) \
	{ \
		P_GET_ENUM_REF(EGestureRecognizeResult,Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_id); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_name); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_recognitionDuration); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_lengthRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishRecognition((EGestureRecognizeResult&)(Z_Param_Out_result),Z_Param_Out_id,Z_Param_Out_name,Z_Param_Out_recognitionDuration,Z_Param_Out_lengthRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecognition) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_trackIds); \
		P_GET_UBOOL(Z_Param_trackIdsIsBlacklist); \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartRecognition(Z_Param_Out_trackIds,Z_Param_trackIdsIsBlacklist,Z_Param_force); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFinishRecording) \
	{ \
		P_GET_ENUM_REF(EGestureRecordResult,Z_Param_Out_result); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_assignedId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_id); \
		P_GET_PROPERTY(UStrProperty,Z_Param_name); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishRecording((EGestureRecordResult&)(Z_Param_Out_result),Z_Param_Out_assignedId,Z_Param_id,Z_Param_name); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecording) \
	{ \
		P_GET_UBOOL(Z_Param_force); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartRecording(Z_Param_force); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGestureTracker(); \
	friend GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureTracker(); \
public: \
	DECLARE_CLASS(UGestureTracker, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GestureTrackerVR"), NO_API) \
	DECLARE_SERIALIZER(UGestureTracker) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUGestureTracker(); \
	friend GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureTracker(); \
public: \
	DECLARE_CLASS(UGestureTracker, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GestureTrackerVR"), NO_API) \
	DECLARE_SERIALIZER(UGestureTracker) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGestureTracker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGestureTracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestureTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestureTracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestureTracker(UGestureTracker&&); \
	NO_API UGestureTracker(const UGestureTracker&); \
public:


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestureTracker(UGestureTracker&&); \
	NO_API UGestureTracker(const UGestureTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestureTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestureTracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGestureTracker)


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bTracking() { return STRUCT_OFFSET(UGestureTracker, bTracking); } \
	FORCEINLINE static uint32 __PPO__bRecording() { return STRUCT_OFFSET(UGestureTracker, bRecording); } \
	FORCEINLINE static uint32 __PPO__bContinuous() { return STRUCT_OFFSET(UGestureTracker, bContinuous); } \
	FORCEINLINE static uint32 __PPO__bContinuousResetOnRecognized() { return STRUCT_OFFSET(UGestureTracker, bContinuousResetOnRecognized); } \
	FORCEINLINE static uint32 __PPO__bDrawingTracked() { return STRUCT_OFFSET(UGestureTracker, bDrawingTracked); } \
	FORCEINLINE static uint32 __PPO__bDrawingPredicted() { return STRUCT_OFFSET(UGestureTracker, bDrawingPredicted); } \
	FORCEINLINE static uint32 __PPO__drawIds() { return STRUCT_OFFSET(UGestureTracker, drawIds); } \
	FORCEINLINE static uint32 __PPO__trackGestureMesh() { return STRUCT_OFFSET(UGestureTracker, trackGestureMesh); } \
	FORCEINLINE static uint32 __PPO__predictGestureMesh() { return STRUCT_OFFSET(UGestureTracker, predictGestureMesh); } \
	FORCEINLINE static uint32 __PPO__trackMesh() { return STRUCT_OFFSET(UGestureTracker, trackMesh); } \
	FORCEINLINE static uint32 __PPO__trackBaseMaterial() { return STRUCT_OFFSET(UGestureTracker, trackBaseMaterial); } \
	FORCEINLINE static uint32 __PPO__predictMesh() { return STRUCT_OFFSET(UGestureTracker, predictMesh); } \
	FORCEINLINE static uint32 __PPO__predictBaseMaterial() { return STRUCT_OFFSET(UGestureTracker, predictBaseMaterial); } \
	FORCEINLINE static uint32 __PPO__predictSuccessMaterial() { return STRUCT_OFFSET(UGestureTracker, predictSuccessMaterial); }


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_50_PROLOG
#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_RPC_WRAPPERS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_INCLASS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureTracker_h


#define FOREACH_ENUM_EGESTURELIBFUNCTIONRESULT(op) \
	op(EGestureLibFunctionResult::Success) \
	op(EGestureLibFunctionResult::Failed) 
#define FOREACH_ENUM_EGESTURERECOGNIZERESULT(op) \
	op(EGestureRecognizeResult::Recognized) \
	op(EGestureRecognizeResult::Failed) 
#define FOREACH_ENUM_EGESTURERECORDRESULT(op) \
	op(EGestureRecordResult::Recorded) \
	op(EGestureRecordResult::Failed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
