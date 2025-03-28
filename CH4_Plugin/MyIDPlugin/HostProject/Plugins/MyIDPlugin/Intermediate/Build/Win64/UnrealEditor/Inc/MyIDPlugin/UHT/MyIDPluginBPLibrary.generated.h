// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyIDPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYIDPLUGIN_MyIDPluginBPLibrary_generated_h
#error "MyIDPluginBPLibrary.generated.h already included, missing '#pragma once' in MyIDPluginBPLibrary.h"
#endif
#define MYIDPLUGIN_MyIDPluginBPLibrary_generated_h

#define FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUserName); \
	DECLARE_FUNCTION(execGetUserName);


#define FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyIDPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UMyIDPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UMyIDPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyIDPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyIDPluginBPLibrary)


#define FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyIDPluginBPLibrary(UMyIDPluginBPLibrary&&); \
	UMyIDPluginBPLibrary(const UMyIDPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyIDPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyIDPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyIDPluginBPLibrary) \
	NO_API virtual ~UMyIDPluginBPLibrary();


#define FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_9_PROLOG
#define FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYIDPLUGIN_API UClass* StaticClass<class UMyIDPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Plugin_CH4_Plugin_MyIDPlugin_HostProject_Plugins_MyIDPlugin_Source_MyIDPlugin_Public_MyIDPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
