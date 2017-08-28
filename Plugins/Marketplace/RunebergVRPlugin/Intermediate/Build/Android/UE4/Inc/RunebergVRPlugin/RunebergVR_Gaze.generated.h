// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef RUNEBERGVRPLUGIN_RunebergVR_Gaze_generated_h
#error "RunebergVR_Gaze.generated.h already included, missing '#pragma once' in RunebergVR_Gaze.h"
#endif
#define RUNEBERGVRPLUGIN_RunebergVR_Gaze_generated_h

#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_47_GENERATED_BODY \
	friend RUNEBERGVRPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FFrontGaze(); \
	RUNEBERGVRPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_31_GENERATED_BODY \
	friend RUNEBERGVRPLUGIN_API class UScriptStruct* Z_Construct_UScriptStruct_FGazeReadOnly(); \
	RUNEBERGVRPLUGIN_API static class UScriptStruct* StaticStruct();


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_24_DELEGATE \
struct _Script_RunebergVRPlugin_eventComponentGazeLostSignature_Parms \
{ \
	FHitResult LastGazeHit; \
}; \
static inline void FComponentGazeLostSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentGazeLostSignature, FHitResult LastGazeHit) \
{ \
	_Script_RunebergVRPlugin_eventComponentGazeLostSignature_Parms Parms; \
	Parms.LastGazeHit=LastGazeHit; \
	ComponentGazeLostSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_23_DELEGATE \
struct _Script_RunebergVRPlugin_eventComponentGazeActivateSignature_Parms \
{ \
	FHitResult GazeHit; \
}; \
static inline void FComponentGazeActivateSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentGazeActivateSignature, FHitResult GazeHit) \
{ \
	_Script_RunebergVRPlugin_eventComponentGazeActivateSignature_Parms Parms; \
	Parms.GazeHit=GazeHit; \
	ComponentGazeActivateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_22_DELEGATE \
struct _Script_RunebergVRPlugin_eventComponentGazeHasHitSignature_Parms \
{ \
	FHitResult GazeHit; \
	float PercentActive; \
}; \
static inline void FComponentGazeHasHitSignature_DelegateWrapper(const FMulticastScriptDelegate& ComponentGazeHasHitSignature, FHitResult GazeHit, float PercentActive) \
{ \
	_Script_RunebergVRPlugin_eventComponentGazeHasHitSignature_Parms Parms; \
	Parms.GazeHit=GazeHit; \
	Parms.PercentActive=PercentActive; \
	ComponentGazeHasHitSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndGaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndGaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartGaze) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gaze_Range); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gaze_TargetDuration); \
		P_GET_UBOOL(Z_Param_DrawDebugLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartGaze(Z_Param_Gaze_Range,Z_Param_Gaze_TargetDuration,Z_Param_DrawDebugLine); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndGaze) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->EndGaze(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartGaze) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gaze_Range); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Gaze_TargetDuration); \
		P_GET_UBOOL(Z_Param_DrawDebugLine); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->StartGaze(Z_Param_Gaze_Range,Z_Param_Gaze_TargetDuration,Z_Param_DrawDebugLine); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunebergVR_Gaze(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Gaze(); \
public: \
	DECLARE_CLASS(URunebergVR_Gaze, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Gaze) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_INCLASS \
private: \
	static void StaticRegisterNativesURunebergVR_Gaze(); \
	friend RUNEBERGVRPLUGIN_API class UClass* Z_Construct_UClass_URunebergVR_Gaze(); \
public: \
	DECLARE_CLASS(URunebergVR_Gaze, USceneComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RunebergVRPlugin"), NO_API) \
	DECLARE_SERIALIZER(URunebergVR_Gaze) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunebergVR_Gaze(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URunebergVR_Gaze) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Gaze); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Gaze); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Gaze(URunebergVR_Gaze&&); \
	NO_API URunebergVR_Gaze(const URunebergVR_Gaze&); \
public:


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URunebergVR_Gaze(URunebergVR_Gaze&&); \
	NO_API URunebergVR_Gaze(const URunebergVR_Gaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunebergVR_Gaze); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunebergVR_Gaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunebergVR_Gaze)


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_84_PROLOG
#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_RPC_WRAPPERS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_INCLASS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RunebergVRPlugin_Source_Public_RunebergVR_Gaze_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
