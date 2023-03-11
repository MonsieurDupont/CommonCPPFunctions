// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonCPPFunctions/Public/MDMultiLineEditableText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMDMultiLineEditableText() {}
// Cross Module References
	COMMONCPPFUNCTIONS_API UClass* Z_Construct_UClass_UMDMultiLineEditableText();
	COMMONCPPFUNCTIONS_API UClass* Z_Construct_UClass_UMDMultiLineEditableText_NoRegister();
	COMMONCPPFUNCTIONS_API UFunction* Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText();
	UPackage* Z_Construct_UPackage__Script_CommonCPPFunctions();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics
	{
		struct _Script_CommonCPPFunctions_eventOnCursorMovedRM_Parms
		{
			int32 InLineIndex;
			int32 InOffset;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLineIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::NewProp_InLineIndex = { "InLineIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonCPPFunctions_eventOnCursorMovedRM_Parms, InLineIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonCPPFunctions_eventOnCursorMovedRM_Parms, InOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::NewProp_InLineIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the cursor is moved within the text area */" },
		{ "ModuleRelativePath", "Public/MDMultiLineEditableText.h" },
		{ "ToolTip", "Called when the cursor is moved within the text area" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonCPPFunctions, nullptr, "OnCursorMovedRM__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::_Script_CommonCPPFunctions_eventOnCursorMovedRM_Parms), Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UMDMultiLineEditableText::execInsertTextAtCursor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertTextAtCursor(Z_Param_InText);
		P_NATIVE_END;
	}
	void UMDMultiLineEditableText::StaticRegisterNativesUMDMultiLineEditableText()
	{
		UClass* Class = UMDMultiLineEditableText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InsertTextAtCursor", &UMDMultiLineEditableText::execInsertTextAtCursor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics
	{
		struct MDMultiLineEditableText_eventInsertTextAtCursor_Parms
		{
			FString InText;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MDMultiLineEditableText_eventInsertTextAtCursor_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MDMultiLineEditableText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMDMultiLineEditableText, nullptr, "InsertTextAtCursor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::MDMultiLineEditableText_eventInsertTextAtCursor_Parms), Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMDMultiLineEditableText);
	UClass* Z_Construct_UClass_UMDMultiLineEditableText_NoRegister()
	{
		return UMDMultiLineEditableText::StaticClass();
	}
	struct Z_Construct_UClass_UMDMultiLineEditableText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCursorMoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCursorMoved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMDMultiLineEditableText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiLineEditableText,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonCPPFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMDMultiLineEditableText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMDMultiLineEditableText_InsertTextAtCursor, "InsertTextAtCursor" }, // 2344655015
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDMultiLineEditableText_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editable text box widget\n */" },
		{ "DisplayName", "Editable Text (Multi-Line)" },
		{ "IncludePath", "MDMultiLineEditableText.h" },
		{ "ModuleRelativePath", "Public/MDMultiLineEditableText.h" },
		{ "ToolTip", "Editable text box widget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMDMultiLineEditableText_Statics::NewProp_OnCursorMoved_MetaData[] = {
		{ "Comment", "/** Called when the cursor is moved within the text area */" },
		{ "ModuleRelativePath", "Public/MDMultiLineEditableText.h" },
		{ "ToolTip", "Called when the cursor is moved within the text area" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMDMultiLineEditableText_Statics::NewProp_OnCursorMoved = { "OnCursorMoved", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMDMultiLineEditableText, OnCursorMoved), Z_Construct_UDelegateFunction_CommonCPPFunctions_OnCursorMovedRM__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMDMultiLineEditableText_Statics::NewProp_OnCursorMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMDMultiLineEditableText_Statics::NewProp_OnCursorMoved_MetaData)) }; // 850020501
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMDMultiLineEditableText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDMultiLineEditableText_Statics::NewProp_OnCursorMoved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMDMultiLineEditableText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDMultiLineEditableText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDMultiLineEditableText_Statics::ClassParams = {
		&UMDMultiLineEditableText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMDMultiLineEditableText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMDMultiLineEditableText_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMDMultiLineEditableText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMDMultiLineEditableText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMDMultiLineEditableText()
	{
		if (!Z_Registration_Info_UClass_UMDMultiLineEditableText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDMultiLineEditableText.OuterSingleton, Z_Construct_UClass_UMDMultiLineEditableText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMDMultiLineEditableText.OuterSingleton;
	}
	template<> COMMONCPPFUNCTIONS_API UClass* StaticClass<UMDMultiLineEditableText>()
	{
		return UMDMultiLineEditableText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMDMultiLineEditableText);
	UMDMultiLineEditableText::~UMDMultiLineEditableText() {}
	struct Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMDMultiLineEditableText, UMDMultiLineEditableText::StaticClass, TEXT("UMDMultiLineEditableText"), &Z_Registration_Info_UClass_UMDMultiLineEditableText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDMultiLineEditableText), 3609408869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_898167757(TEXT("/Script/CommonCPPFunctions"),
		Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_MDMultiLineEditableText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
