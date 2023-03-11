// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MDMultiLineEditableText.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONCPPFUNCTIONS_MDMultiLineEditableText_generated_h
#error "MDMultiLineEditableText.generated.h already included, missing '#pragma once' in MDMultiLineEditableText.h"
#endif
#define COMMONCPPFUNCTIONS_MDMultiLineEditableText_generated_h

#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_11_DELEGATE \
struct _Script_CommonCPPFunctions_eventOnCursorMovedRM_Parms \
{ \
	int32 InLineIndex; \
	int32 InOffset; \
}; \
static inline void FOnCursorMovedRM_DelegateWrapper(const FMulticastScriptDelegate& OnCursorMovedRM, int32 InLineIndex, int32 InOffset) \
{ \
	_Script_CommonCPPFunctions_eventOnCursorMovedRM_Parms Parms; \
	Parms.InLineIndex=InLineIndex; \
	Parms.InOffset=InOffset; \
	OnCursorMovedRM.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_SPARSE_DATA
#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInsertTextAtCursor);


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInsertTextAtCursor);


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_ACCESSORS
#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMDMultiLineEditableText(); \
	friend struct Z_Construct_UClass_UMDMultiLineEditableText_Statics; \
public: \
	DECLARE_CLASS(UMDMultiLineEditableText, UMultiLineEditableText, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonCPPFunctions"), NO_API) \
	DECLARE_SERIALIZER(UMDMultiLineEditableText)


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMDMultiLineEditableText(); \
	friend struct Z_Construct_UClass_UMDMultiLineEditableText_Statics; \
public: \
	DECLARE_CLASS(UMDMultiLineEditableText, UMultiLineEditableText, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonCPPFunctions"), NO_API) \
	DECLARE_SERIALIZER(UMDMultiLineEditableText)


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMDMultiLineEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMDMultiLineEditableText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMDMultiLineEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMDMultiLineEditableText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMDMultiLineEditableText(UMDMultiLineEditableText&&); \
	NO_API UMDMultiLineEditableText(const UMDMultiLineEditableText&); \
public: \
	NO_API virtual ~UMDMultiLineEditableText();


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMDMultiLineEditableText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMDMultiLineEditableText(UMDMultiLineEditableText&&); \
	NO_API UMDMultiLineEditableText(const UMDMultiLineEditableText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMDMultiLineEditableText); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMDMultiLineEditableText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMDMultiLineEditableText) \
	NO_API virtual ~UMDMultiLineEditableText();


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_16_PROLOG
#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_SPARSE_DATA \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_RPC_WRAPPERS \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_ACCESSORS \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_INCLASS \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_SPARSE_DATA \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_ACCESSORS \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCPPFUNCTIONS_API UClass* StaticClass<class UMDMultiLineEditableText>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
