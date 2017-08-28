// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVRGesture;
class UStaticMesh;
class UMaterial;
struct FVector;
struct FRotator;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Gestures_generated_h
#error "RunebergVR_Gestures.generated.h already included, missing '#pragma once' in RunebergVR_Gestures.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Gestures_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_47_GENERATED_BODY \
	friend RUNEBERGVRPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FDrawnGestures(); \
	RUNEBERGVRPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_36_GENERATED_BODY \
	friend RUNEBERGVRPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FIntArray(); \
	RUNEBERGVRPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_25_GENERATED_BODY \
	friend RUNEBERGVRPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FFloatArray(); \
	RUNEBERGVRPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindGesture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->FindGesture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawVRGesture) \
	{ \
		P_GET_STRUCT(FVRGesture,Z_Param_VR_Gesture); \
		P_GET_OBJECT(UStaticMesh,Z_Param_LineMesh); \
		P_GET_OBJECT(UMaterial,Z_Param_LineMaterial); \
		P_GET_STRUCT(FVector,Z_Param_OriginLocation); \
		P_GET_STRUCT(FRotator,Z_Param_OriginRotation); \
		P_GET_STRUCT(FVector,Z_Param_OffsetLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OffsetDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Lifetime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawVRGesture(Z_Param_VR_Gesture,Z_Param_LineMesh,Z_Param_LineMaterial,Z_Param_OriginLocation,Z_Param_OriginRotation,Z_Param_OffsetLocation,Z_Param_OffsetDistance,Z_Param_Lifetime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmptyKnownGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->EmptyKnownGestures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGestureToDB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SaveGestureToDB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingGesture) \
	{ \
		P_GET_UBOOL(Z_Param_SaveToDB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVRGesture*)Z_Param__Result=this->StopRecordingGesture(Z_Param_SaveToDB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingGesture) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RecordingInterval); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GestureName); \
		P_GET_UBOOL(Z_Param_DrawLine); \
		P_GET_OBJECT(UStaticMesh,Z_Param_LineMesh); \
		P_GET_OBJECT(UMaterial,Z_Param_LineMaterial); \
		P_GET_STRUCT(FVector,Z_Param_LineOffset); \
		P_GET_STRUCT(FRotator,Z_Param_RotationOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartRecordingGesture(Z_Param_RecordingInterval,Z_Param_GestureName,Z_Param_DrawLine,Z_Param_LineMesh,Z_Param_LineMaterial,Z_Param_LineOffset,Z_Param_RotationOffset); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindGesture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->FindGesture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawVRGesture) \
	{ \
		P_GET_STRUCT(FVRGesture,Z_Param_VR_Gesture); \
		P_GET_OBJECT(UStaticMesh,Z_Param_LineMesh); \
		P_GET_OBJECT(UMaterial,Z_Param_LineMaterial); \
		P_GET_STRUCT(FVector,Z_Param_OriginLocation); \
		P_GET_STRUCT(FRotator,Z_Param_OriginRotation); \
		P_GET_STRUCT(FVector,Z_Param_OffsetLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OffsetDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Lifetime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DrawVRGesture(Z_Param_VR_Gesture,Z_Param_LineMesh,Z_Param_LineMaterial,Z_Param_OriginLocation,Z_Param_OriginRotation,Z_Param_OffsetLocation,Z_Param_OffsetDistance,Z_Param_Lifetime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEmptyKnownGestures) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->EmptyKnownGestures(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGestureToDB) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->SaveGestureToDB(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopRecordingGesture) \
	{ \
		P_GET_UBOOL(Z_Param_SaveToDB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVRGesture*)Z_Param__Result=this->StopRecordingGesture(Z_Param_SaveToDB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRecordingGesture) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RecordingInterval); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GestureName); \
		P_GET_UBOOL(Z_Param_DrawLine); \
		P_GET_OBJECT(UStaticMesh,Z_Param_LineMesh); \
		P_GET_OBJECT(UMaterial,Z_Param_LineMaterial); \
		P_GET_STRUCT(FVector,Z_Param_LineOffset); \
		P_GET_STRUCT(FRotator,Z_Param_RotationOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartRecordingGesture(Z_Param_RecordingInterval,Z_Param_GestureName,Z_Param_DrawLine,Z_Param_LineMesh,Z_Param_LineMaterial,Z_Param_LineOffset,Z_Param_RotationOffset); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_Gestures(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Gestures(); \
public: \
	DECLARE_CLASS(URunebergVR_Gestures, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Gestures) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_Gestures(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Gestures(); \
public: \
	DECLARE_CLASS(URunebergVR_Gestures, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Gestures) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_Gestures(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_Gestures) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Gestures); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Gestures); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Gestures(URunebergVR_Gestures&&); \
	NO_API URunebergVR_Gestures(const URunebergVR_Gestures&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Gestures(URunebergVR_Gestures&&); \
	NO_API URunebergVR_Gestures(const URunebergVR_Gestures&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Gestures); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Gestures); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_Gestures)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_60_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gestures_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
