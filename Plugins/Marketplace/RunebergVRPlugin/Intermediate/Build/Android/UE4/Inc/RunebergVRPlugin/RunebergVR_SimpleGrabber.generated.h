// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_SimpleGrabber_generated_h
#error "RunebergVR_SimpleGrabber.generated.h already included, missing '#pragma once' in RunebergVR_SimpleGrabber.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_SimpleGrabber_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_GET_UBOOL(Z_Param_EnablePhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Release(Z_Param_EnablePhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__ObjectTypeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Grab(Z_Param__ObjectTypeID); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_GET_UBOOL(Z_Param_EnablePhysics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Release(Z_Param_EnablePhysics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param__ObjectTypeID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Grab(Z_Param__ObjectTypeID); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_SimpleGrabber(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_SimpleGrabber(); \
public: \
	DECLARE_CLASS(URunebergVR_SimpleGrabber, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_SimpleGrabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_SimpleGrabber(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_SimpleGrabber(); \
public: \
	DECLARE_CLASS(URunebergVR_SimpleGrabber, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_SimpleGrabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_SimpleGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_SimpleGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_SimpleGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_SimpleGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_SimpleGrabber(URunebergVR_SimpleGrabber&&); \
	NO_API URunebergVR_SimpleGrabber(const URunebergVR_SimpleGrabber&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_SimpleGrabber(URunebergVR_SimpleGrabber&&); \
	NO_API URunebergVR_SimpleGrabber(const URunebergVR_SimpleGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_SimpleGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_SimpleGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_SimpleGrabber)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_20_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_SimpleGrabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
