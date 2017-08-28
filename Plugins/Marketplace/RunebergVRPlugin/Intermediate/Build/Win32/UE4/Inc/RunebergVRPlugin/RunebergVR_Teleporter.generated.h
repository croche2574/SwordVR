// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMoveDirectionEnum : uint8;
struct FRotator;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Teleporter_generated_h
#error "RunebergVR_Teleporter.generated.h already included, missing '#pragma once' in RunebergVR_Teleporter.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Teleporter_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTeleportNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HideMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveMarker) \
	{ \
		P_GET_ENUM(EMoveDirectionEnum,Z_Param_MarkerDirection); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Rate); \
		P_GET_STRUCT(FRotator,Z_Param_CustomDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MoveMarker(EMoveDirectionEnum(Z_Param_MarkerDirection),Z_Param_Rate,Z_Param_CustomDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShowMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideTeleportRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HideTeleportRay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideTeleportArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HideTeleportArc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowTeleportRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShowTeleportRay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowTeleportArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShowTeleportArc(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTeleportNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->TeleportNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HideMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveMarker) \
	{ \
		P_GET_ENUM(EMoveDirectionEnum,Z_Param_MarkerDirection); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Rate); \
		P_GET_STRUCT(FRotator,Z_Param_CustomDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->MoveMarker(EMoveDirectionEnum(Z_Param_MarkerDirection),Z_Param_Rate,Z_Param_CustomDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShowMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideTeleportRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HideTeleportRay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHideTeleportArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HideTeleportArc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowTeleportRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShowTeleportRay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowTeleportArc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->ShowTeleportArc(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_Teleporter(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Teleporter(); \
public: \
	DECLARE_CLASS(URunebergVR_Teleporter, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Teleporter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_Teleporter(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Teleporter(); \
public: \
	DECLARE_CLASS(URunebergVR_Teleporter, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Teleporter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_Teleporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_Teleporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Teleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Teleporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Teleporter(URunebergVR_Teleporter&&); \
	NO_API URunebergVR_Teleporter(const URunebergVR_Teleporter&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Teleporter(URunebergVR_Teleporter&&); \
	NO_API URunebergVR_Teleporter(const URunebergVR_Teleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Teleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Teleporter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_Teleporter)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_32_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Teleporter_h


#define FOREACH_ENUM_EMOVEDIRECTIONENUM(op) \
	op(EMoveDirectionEnum::MOVE_FORWARD) \
	op(EMoveDirectionEnum::MOVE_BACKWARD) \
	op(EMoveDirectionEnum::MOVE_LEFT) \
	op(EMoveDirectionEnum::MOVE_RIGHT) \
	op(EMoveDirectionEnum::MOVE_CUSTOM) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
