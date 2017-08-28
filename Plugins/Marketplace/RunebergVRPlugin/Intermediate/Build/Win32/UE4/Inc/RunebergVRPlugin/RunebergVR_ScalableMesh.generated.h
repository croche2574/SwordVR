// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EScaleDirectionEnum : uint8;
struct FVector;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_ScalableMesh_generated_h
#error "RunebergVR_ScalableMesh.generated.h already included, missing '#pragma once' in RunebergVR_ScalableMesh.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_ScalableMesh_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execScaleDownAndMove) \
	{ \
		P_GET_ENUM(EScaleDirectionEnum,Z_Param_Scale_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistanceCorrection); \
		P_GET_UBOOL(Z_Param_VisibilityAfterScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleDownAndMove(EScaleDirectionEnum(Z_Param_Scale_Direction),Z_Param_Rate,Z_Param_DistanceCorrection,Z_Param_VisibilityAfterScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleMeshToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Target_Location); \
		P_GET_ENUM(EScaleDirectionEnum,Z_Param_Scale_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleMeshToLocation(Z_Param_Target_Location,EScaleDirectionEnum(Z_Param_Scale_Direction),Z_Param_Rate,Z_Param_NewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleMeshDown) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DistanceToScaleDownXYZ); \
		P_GET_STRUCT(FVector,Z_Param_RateXYZ); \
		P_GET_UBOOL(Z_Param_VisibilityAfterScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleMeshDown(Z_Param_DistanceToScaleDownXYZ,Z_Param_RateXYZ,Z_Param_VisibilityAfterScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleMeshUp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DistanceToScaleUpXYZ); \
		P_GET_STRUCT(FVector,Z_Param_RateXYZ); \
		P_GET_UBOOL(Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleMeshUp(Z_Param_DistanceToScaleUpXYZ,Z_Param_RateXYZ,Z_Param_NewVisibility); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScaleDownAndMove) \
	{ \
		P_GET_ENUM(EScaleDirectionEnum,Z_Param_Scale_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistanceCorrection); \
		P_GET_UBOOL(Z_Param_VisibilityAfterScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleDownAndMove(EScaleDirectionEnum(Z_Param_Scale_Direction),Z_Param_Rate,Z_Param_DistanceCorrection,Z_Param_VisibilityAfterScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleMeshToLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Target_Location); \
		P_GET_ENUM(EScaleDirectionEnum,Z_Param_Scale_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rate); \
		P_GET_UBOOL(Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleMeshToLocation(Z_Param_Target_Location,EScaleDirectionEnum(Z_Param_Scale_Direction),Z_Param_Rate,Z_Param_NewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleMeshDown) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DistanceToScaleDownXYZ); \
		P_GET_STRUCT(FVector,Z_Param_RateXYZ); \
		P_GET_UBOOL(Z_Param_VisibilityAfterScale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleMeshDown(Z_Param_DistanceToScaleDownXYZ,Z_Param_RateXYZ,Z_Param_VisibilityAfterScale); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScaleMeshUp) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_DistanceToScaleUpXYZ); \
		P_GET_STRUCT(FVector,Z_Param_RateXYZ); \
		P_GET_UBOOL(Z_Param_NewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ScaleMeshUp(Z_Param_DistanceToScaleUpXYZ,Z_Param_RateXYZ,Z_Param_NewVisibility); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_ScalableMesh(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_ScalableMesh(); \
public: \
	DECLARE_CLASS(URunebergVR_ScalableMesh, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_ScalableMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_ScalableMesh(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_ScalableMesh(); \
public: \
	DECLARE_CLASS(URunebergVR_ScalableMesh, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_ScalableMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_ScalableMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_ScalableMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_ScalableMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_ScalableMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_ScalableMesh(URunebergVR_ScalableMesh&&); \
	NO_API URunebergVR_ScalableMesh(const URunebergVR_ScalableMesh&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_ScalableMesh(URunebergVR_ScalableMesh&&); \
	NO_API URunebergVR_ScalableMesh(const URunebergVR_ScalableMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_ScalableMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_ScalableMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_ScalableMesh)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_36_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_ScalableMesh_h


#define FOREACH_ENUM_ESCALEDIRECTIONENUM(op) \
	op(EScaleDirectionEnum::SCALE_X) \
	op(EScaleDirectionEnum::SCALE_Y) \
	op(EScaleDirectionEnum::SCALE_Z) 
#define FOREACH_ENUM_ESCALEMODEENUM(op) \
	op(EScaleModeEnum::SCALE_TO_MAX) \
	op(EScaleModeEnum::SCALE_TO_MIN) \
	op(EScaleModeEnum::SCALE_TO_LOC) \
	op(EScaleModeEnum::SCALE_DN_MOV) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
