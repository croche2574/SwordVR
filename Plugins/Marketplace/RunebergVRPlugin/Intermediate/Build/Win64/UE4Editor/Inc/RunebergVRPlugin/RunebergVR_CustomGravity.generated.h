// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_CustomGravity_generated_h
#error "RunebergVR_CustomGravity.generated.h already included, missing '#pragma once' in RunebergVR_CustomGravity.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_CustomGravity_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProcessTags) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ProcessTags(Z_Param_OtherActor,Z_Param_OtherComp); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProcessTags) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ProcessTags(Z_Param_OtherActor,Z_Param_OtherComp); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_CustomGravity(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_CustomGravity(); \
public: \
	DECLARE_CLASS(URunebergVR_CustomGravity, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_CustomGravity) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_CustomGravity(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_CustomGravity(); \
public: \
	DECLARE_CLASS(URunebergVR_CustomGravity, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_CustomGravity) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_CustomGravity(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_CustomGravity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_CustomGravity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_CustomGravity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_CustomGravity(URunebergVR_CustomGravity&&); \
	NO_API URunebergVR_CustomGravity(const URunebergVR_CustomGravity&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_CustomGravity(URunebergVR_CustomGravity&&); \
	NO_API URunebergVR_CustomGravity(const URunebergVR_CustomGravity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_CustomGravity); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_CustomGravity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_CustomGravity)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_31_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_CustomGravity_h


#define FOREACH_ENUM_EGRAVITYDIRECTION(op) \
	op(EGravityDirection::DIR_DOWN) \
	op(EGravityDirection::DIR_UP) \
	op(EGravityDirection::DIR_LEFT) \
	op(EGravityDirection::DIR_RIGHT) \
	op(EGravityDirection::DIR_FORWARD) \
	op(EGravityDirection::DIR_BACK) \
	op(EGravityDirection::DIR_RELATIVE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
