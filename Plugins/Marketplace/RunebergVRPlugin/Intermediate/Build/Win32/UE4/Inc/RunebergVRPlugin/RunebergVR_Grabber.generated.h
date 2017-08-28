// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EGrabTypeEnum : uint8;
struct FRotator;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Grabber_generated_h
#error "RunebergVR_Grabber.generated.h already included, missing '#pragma once' in RunebergVR_Grabber.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Grabber_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGrabSun) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Sky_Sphere); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SunCycleRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GrabSun(Z_Param_Sky_Sphere,Z_Param_SunCycleRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPush) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->StopPush(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->StopPull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushGrabbedObject) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PushSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PushGrabbedObject(Z_Param_PushSpeed,Z_Param_MinDistance,Z_Param_MaxDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPullGrabbedObject) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PullSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PullGrabbedObject(Z_Param_PullSpeed,Z_Param_MinDistance,Z_Param_MaxDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Release(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceFromController) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDistanceFromController(Z_Param_NewDistance,Z_Param_MinDistance,Z_Param_MaxDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Reach); \
		P_GET_UBOOL(Z_Param_ScanOnlyWillManuallyAttach); \
		P_GET_ENUM(EGrabTypeEnum,Z_Param_GrabMode); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation_Offset); \
		P_GET_UBOOL(Z_Param_RetainObjectRotation); \
		P_GET_UBOOL(Z_Param_RetainDistance); \
		P_GET_UBOOL(Z_Param_ShowDebugLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Grab(Z_Param_Reach,Z_Param_ScanOnlyWillManuallyAttach,EGrabTypeEnum(Z_Param_GrabMode),Z_Param_TagName,Z_Param_Rotation_Offset,Z_Param_RetainObjectRotation,Z_Param_RetainDistance,Z_Param_ShowDebugLine); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGrabSun) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Sky_Sphere); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SunCycleRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GrabSun(Z_Param_Sky_Sphere,Z_Param_SunCycleRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPush) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->StopPush(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->StopPull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushGrabbedObject) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PushSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PushGrabbedObject(Z_Param_PushSpeed,Z_Param_MinDistance,Z_Param_MaxDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPullGrabbedObject) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PullSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PullGrabbedObject(Z_Param_PullSpeed,Z_Param_MinDistance,Z_Param_MaxDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRelease) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Release(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceFromController) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinDistance); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetDistanceFromController(Z_Param_NewDistance,Z_Param_MinDistance,Z_Param_MaxDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrab) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Reach); \
		P_GET_UBOOL(Z_Param_ScanOnlyWillManuallyAttach); \
		P_GET_ENUM(EGrabTypeEnum,Z_Param_GrabMode); \
		P_GET_PROPERTY(UNameProperty,Z_Param_TagName); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation_Offset); \
		P_GET_UBOOL(Z_Param_RetainObjectRotation); \
		P_GET_UBOOL(Z_Param_RetainDistance); \
		P_GET_UBOOL(Z_Param_ShowDebugLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=this->Grab(Z_Param_Reach,Z_Param_ScanOnlyWillManuallyAttach,EGrabTypeEnum(Z_Param_GrabMode),Z_Param_TagName,Z_Param_Rotation_Offset,Z_Param_RetainObjectRotation,Z_Param_RetainDistance,Z_Param_ShowDebugLine); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_Grabber(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Grabber(); \
public: \
	DECLARE_CLASS(URunebergVR_Grabber, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Grabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_Grabber(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Grabber(); \
public: \
	DECLARE_CLASS(URunebergVR_Grabber, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Grabber) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_Grabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_Grabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Grabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Grabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Grabber(URunebergVR_Grabber&&); \
	NO_API URunebergVR_Grabber(const URunebergVR_Grabber&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Grabber(URunebergVR_Grabber&&); \
	NO_API URunebergVR_Grabber(const URunebergVR_Grabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Grabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Grabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_Grabber)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_30_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Grabber_h


#define FOREACH_ENUM_EGRABTYPEENUM(op) \
	op(EGrabTypeEnum::PRECISION_GRAB) \
	op(EGrabTypeEnum::SNAP_GRAB) \
	op(EGrabTypeEnum::LOCK_GRAB) \
	op(EGrabTypeEnum::DANGLING_GRAB) \
	op(EGrabTypeEnum::PRECISION_LOCK) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
