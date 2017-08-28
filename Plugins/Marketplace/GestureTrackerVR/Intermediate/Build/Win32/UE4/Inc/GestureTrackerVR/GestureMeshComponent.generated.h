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
#ifdef GESTURETRACKERVR_GestureMeshComponent_generated_h
#error "GestureMeshComponent.generated.h already included, missing '#pragma once' in GestureMeshComponent.h"
#endif
#define GESTURETRACKERVR_GestureMeshComponent_generated_h

#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Success(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMaterials(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSuccess) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Success(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMaterials) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_baseMaterial); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_successMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMaterials(Z_Param_mesh,Z_Param_baseMaterial,Z_Param_successMaterial); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGestureMeshComponent(); \
	friend GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureMeshComponent(); \
public: \
	DECLARE_CLASS(UGestureMeshComponent, USplineComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GestureTrackerVR"), NO_API) \
	DECLARE_SERIALIZER(UGestureMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGestureMeshComponent(); \
	friend GESTURETRACKERVR_API class UClass* Z_Construct_UClass_UGestureMeshComponent(); \
public: \
	DECLARE_CLASS(UGestureMeshComponent, USplineComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GestureTrackerVR"), NO_API) \
	DECLARE_SERIALIZER(UGestureMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGestureMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGestureMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestureMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestureMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestureMeshComponent(UGestureMeshComponent&&); \
	NO_API UGestureMeshComponent(const UGestureMeshComponent&); \
public:


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGestureMeshComponent(UGestureMeshComponent&&); \
	NO_API UGestureMeshComponent(const UGestureMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGestureMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGestureMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGestureMeshComponent)


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(UGestureMeshComponent, mesh); } \
	FORCEINLINE static uint32 __PPO__baseMaterial() { return STRUCT_OFFSET(UGestureMeshComponent, baseMaterial); } \
	FORCEINLINE static uint32 __PPO__successMaterial() { return STRUCT_OFFSET(UGestureMeshComponent, successMaterial); }


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_12_PROLOG
#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_RPC_WRAPPERS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_INCLASS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GestureTrackerVR_Source_GestureTrackerVR_Public_GestureMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
