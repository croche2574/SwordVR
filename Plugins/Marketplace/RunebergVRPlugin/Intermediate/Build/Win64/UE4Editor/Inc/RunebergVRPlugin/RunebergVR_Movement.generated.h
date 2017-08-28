// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
class USceneComponent;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Movement_generated_h
#error "RunebergVR_Movement.generated.h already included, missing '#pragma once' in RunebergVR_Movement.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Movement_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBounceBackFromVRBounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementDuration); \
		P_GET_UBOOL(Z_Param_ResetMovementStateAfterBounce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BounceBackFromVRBounds(Z_Param_MovementSpeed,Z_Param_MovementDuration,Z_Param_ResetMovementStateAfterBounce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimedDashMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_STRUCT(FRotator,Z_Param_MovementDirection); \
		P_GET_UBOOL(Z_Param_ObeyNavMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TimedDashMove(Z_Param_MovementDuration,Z_Param_MovementSpeed,Z_Param_MovementDirection,Z_Param_ObeyNavMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimedMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_LockPitchY); \
		P_GET_UBOOL(Z_Param_LockYawZ); \
		P_GET_UBOOL(Z_Param_LockRollX); \
		P_GET_STRUCT(FRotator,Z_Param_CustomDirection); \
		P_GET_UBOOL(Z_Param_ObeyNavMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TimedMovement(Z_Param_MovementDuration,Z_Param_MovementSpeed,Z_Param_MovementDirectionReference,Z_Param_LockPitchY,Z_Param_LockYawZ,Z_Param_LockRollX,Z_Param_CustomDirection,Z_Param_ObeyNavMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySpeedMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SpeedMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseSpeed); \
		P_GET_UBOOL(Z_Param_UseCurrentSpeedAsBase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplySpeedMultiplier(Z_Param_SpeedMultiplier,Z_Param_BaseSpeed,Z_Param_UseCurrentSpeedAsBase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableVRMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableVRMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnable360Movement) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_LockPitch); \
		P_GET_UBOOL(Z_Param_LockYaw); \
		P_GET_UBOOL(Z_Param_LockRoll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_XAxisInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_YAxisInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Enable360Movement(Z_Param_MovementDirectionReference,Z_Param_LockPitch,Z_Param_LockYaw,Z_Param_LockRoll,Z_Param_MovementSpeed,Z_Param_XAxisInput,Z_Param_YAxisInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVRMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_ObeyNavMesh); \
		P_GET_UBOOL(Z_Param_LockPitch); \
		P_GET_UBOOL(Z_Param_LockYaw); \
		P_GET_UBOOL(Z_Param_LockRoll); \
		P_GET_STRUCT(FRotator,Z_Param_CustomDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableVRMovement(Z_Param_MovementSpeed,Z_Param_MovementDirectionReference,Z_Param_ObeyNavMesh,Z_Param_LockPitch,Z_Param_LockYaw,Z_Param_LockRoll,Z_Param_CustomDirection); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBounceBackFromVRBounds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementDuration); \
		P_GET_UBOOL(Z_Param_ResetMovementStateAfterBounce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BounceBackFromVRBounds(Z_Param_MovementSpeed,Z_Param_MovementDuration,Z_Param_ResetMovementStateAfterBounce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimedDashMove) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_STRUCT(FRotator,Z_Param_MovementDirection); \
		P_GET_UBOOL(Z_Param_ObeyNavMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TimedDashMove(Z_Param_MovementDuration,Z_Param_MovementSpeed,Z_Param_MovementDirection,Z_Param_ObeyNavMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTimedMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementDuration); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_LockPitchY); \
		P_GET_UBOOL(Z_Param_LockYawZ); \
		P_GET_UBOOL(Z_Param_LockRollX); \
		P_GET_STRUCT(FRotator,Z_Param_CustomDirection); \
		P_GET_UBOOL(Z_Param_ObeyNavMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TimedMovement(Z_Param_MovementDuration,Z_Param_MovementSpeed,Z_Param_MovementDirectionReference,Z_Param_LockPitchY,Z_Param_LockYawZ,Z_Param_LockRollX,Z_Param_CustomDirection,Z_Param_ObeyNavMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplySpeedMultiplier) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SpeedMultiplier); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseSpeed); \
		P_GET_UBOOL(Z_Param_UseCurrentSpeedAsBase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplySpeedMultiplier(Z_Param_SpeedMultiplier,Z_Param_BaseSpeed,Z_Param_UseCurrentSpeedAsBase); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableVRMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->DisableVRMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnable360Movement) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_LockPitch); \
		P_GET_UBOOL(Z_Param_LockYaw); \
		P_GET_UBOOL(Z_Param_LockRoll); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_XAxisInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_YAxisInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Enable360Movement(Z_Param_MovementDirectionReference,Z_Param_LockPitch,Z_Param_LockYaw,Z_Param_LockRoll,Z_Param_MovementSpeed,Z_Param_XAxisInput,Z_Param_YAxisInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVRMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MovementSpeed); \
		P_GET_OBJECT(USceneComponent,Z_Param_MovementDirectionReference); \
		P_GET_UBOOL(Z_Param_ObeyNavMesh); \
		P_GET_UBOOL(Z_Param_LockPitch); \
		P_GET_UBOOL(Z_Param_LockYaw); \
		P_GET_UBOOL(Z_Param_LockRoll); \
		P_GET_STRUCT(FRotator,Z_Param_CustomDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EnableVRMovement(Z_Param_MovementSpeed,Z_Param_MovementDirectionReference,Z_Param_ObeyNavMesh,Z_Param_LockPitch,Z_Param_LockYaw,Z_Param_LockRoll,Z_Param_CustomDirection); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_Movement(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Movement(); \
public: \
	DECLARE_CLASS(URunebergVR_Movement, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Movement) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_Movement(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Movement(); \
public: \
	DECLARE_CLASS(URunebergVR_Movement, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Movement) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_Movement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_Movement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Movement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Movement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Movement(URunebergVR_Movement&&); \
	NO_API URunebergVR_Movement(const URunebergVR_Movement&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Movement(URunebergVR_Movement&&); \
	NO_API URunebergVR_Movement(const URunebergVR_Movement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Movement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Movement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_Movement)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_20_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Movement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
