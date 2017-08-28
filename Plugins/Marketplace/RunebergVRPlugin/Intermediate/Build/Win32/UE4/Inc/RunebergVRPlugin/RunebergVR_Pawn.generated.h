// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FVector;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Pawn_generated_h
#error "RunebergVR_Pawn.generated.h already included, missing '#pragma once' in RunebergVR_Pawn.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Pawn_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_26_GENERATED_BODY \
	friend RUNEBERGVRPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FGravityVariables(); \
	RUNEBERGVRPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintDebugMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_UBOOL(Z_Param_OverwriteExisting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PrintDebugMessage(Z_Param_Message,Z_Param_OverwriteExisting,Z_Param_Duration,Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHMDWorn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsHMDWorn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatePawn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_XAxisInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_YAxisInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotatePawn(Z_Param_RotationRate,Z_Param_XAxisInput,Z_Param_YAxisInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverridePawnValues) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PawnBaseEyeHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleRadius); \
		P_GET_STRUCT(FVector,Z_Param_CapsuleRelativeLocation); \
		P_GET_STRUCT(FVector,Z_Param_SceneLocation); \
		P_GET_STRUCT(FVector,Z_Param_LeftControllerLocation); \
		P_GET_STRUCT(FVector,Z_Param_RightControllerLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverridePawnValues(Z_Param_PawnBaseEyeHeight,Z_Param_FOV,Z_Param_CapsuleHalfHeight,Z_Param_CapsuleRadius,Z_Param_CapsuleRelativeLocation,Z_Param_SceneLocation,Z_Param_LeftControllerLocation,Z_Param_RightControllerLocation); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintDebugMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_UBOOL(Z_Param_OverwriteExisting); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_STRUCT(FColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PrintDebugMessage(Z_Param_Message,Z_Param_OverwriteExisting,Z_Param_Duration,Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHMDWorn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsHMDWorn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotatePawn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RotationRate); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_XAxisInput); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_YAxisInput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RotatePawn(Z_Param_RotationRate,Z_Param_XAxisInput,Z_Param_YAxisInput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOverridePawnValues) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PawnBaseEyeHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_FOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleHalfHeight); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CapsuleRadius); \
		P_GET_STRUCT(FVector,Z_Param_CapsuleRelativeLocation); \
		P_GET_STRUCT(FVector,Z_Param_SceneLocation); \
		P_GET_STRUCT(FVector,Z_Param_LeftControllerLocation); \
		P_GET_STRUCT(FVector,Z_Param_RightControllerLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OverridePawnValues(Z_Param_PawnBaseEyeHeight,Z_Param_FOV,Z_Param_CapsuleHalfHeight,Z_Param_CapsuleRadius,Z_Param_CapsuleRelativeLocation,Z_Param_SceneLocation,Z_Param_LeftControllerLocation,Z_Param_RightControllerLocation); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARunebergVR_Pawn(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_ARunebergVR_Pawn(); \
public: \
	DECLARE_CLASS(ARunebergVR_Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARunebergVR_Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_INCLASS \
private: \
	static void StaticRegisterNativesARunebergVR_Pawn(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_ARunebergVR_Pawn(); \
public: \
	DECLARE_CLASS(ARunebergVR_Pawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(ARunebergVR_Pawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARunebergVR_Pawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunebergVR_Pawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunebergVR_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunebergVR_Pawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunebergVR_Pawn(ARunebergVR_Pawn&&); \
	NO_API ARunebergVR_Pawn(const ARunebergVR_Pawn&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARunebergVR_Pawn(ARunebergVR_Pawn&&); \
	NO_API ARunebergVR_Pawn(const ARunebergVR_Pawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARunebergVR_Pawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARunebergVR_Pawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARunebergVR_Pawn)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_51_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
