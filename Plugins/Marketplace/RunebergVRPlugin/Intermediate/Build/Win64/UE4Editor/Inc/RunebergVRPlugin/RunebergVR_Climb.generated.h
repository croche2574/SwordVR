// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Climb_generated_h
#error "RunebergVR_Climb.generated.h already included, missing '#pragma once' in RunebergVR_Climb.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Climb_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLetGo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LetGo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClimb) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Climb(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLetGo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->LetGo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClimb) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Climb(); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_Climb(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Climb(); \
public: \
	DECLARE_CLASS(URunebergVR_Climb, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Climb) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_Climb(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Climb(); \
public: \
	DECLARE_CLASS(URunebergVR_Climb, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Climb) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_Climb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_Climb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Climb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Climb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Climb(URunebergVR_Climb&&); \
	NO_API URunebergVR_Climb(const URunebergVR_Climb&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Climb(URunebergVR_Climb&&); \
	NO_API URunebergVR_Climb(const URunebergVR_Climb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Climb); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Climb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_Climb)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_21_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Climb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
