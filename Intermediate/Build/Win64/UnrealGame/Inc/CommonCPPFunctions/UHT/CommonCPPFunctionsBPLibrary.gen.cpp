// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonCPPFunctions/Public/CommonCPPFunctionsBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonCPPFunctionsBPLibrary() {}
// Cross Module References
	COMMONCPPFUNCTIONS_API UClass* Z_Construct_UClass_UCommonCPPFunctionsBPLibrary();
	COMMONCPPFUNCTIONS_API UClass* Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CommonCPPFunctions();
// End Cross Module References
	DEFINE_FUNCTION(UCommonCPPFunctionsBPLibrary::execPasteFromClipboard)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ReturnValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCommonCPPFunctionsBPLibrary::PasteFromClipboard(Z_Param_Out_ReturnValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonCPPFunctionsBPLibrary::execCopyToClipboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCommonCPPFunctionsBPLibrary::CopyToClipboard(Z_Param_Text);
		P_NATIVE_END;
	}
	void UCommonCPPFunctionsBPLibrary::StaticRegisterNativesUCommonCPPFunctionsBPLibrary()
	{
		UClass* Class = UCommonCPPFunctionsBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyToClipboard", &UCommonCPPFunctionsBPLibrary::execCopyToClipboard },
			{ "PasteFromClipboard", &UCommonCPPFunctionsBPLibrary::execPasteFromClipboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics
	{
		struct CommonCPPFunctionsBPLibrary_eventCopyToClipboard_Parms
		{
			FString Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonCPPFunctionsBPLibrary_eventCopyToClipboard_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipboard" },
		{ "Comment", "/**\n\x09 * Copies the text to the clipboard\n\x09 * @param\x09Text\x09String to copy to clipboard\n\x09 */" },
		{ "DisplayName", "Copy To Clipboard" },
		{ "Keywords", "Copy Paste Clipboard" },
		{ "ModuleRelativePath", "Public/CommonCPPFunctionsBPLibrary.h" },
		{ "ToolTip", "Copies the text to the clipboard\n@param       Text    String to copy to clipboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonCPPFunctionsBPLibrary, nullptr, "CopyToClipboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::CommonCPPFunctionsBPLibrary_eventCopyToClipboard_Parms), Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics
	{
		struct CommonCPPFunctionsBPLibrary_eventPasteFromClipboard_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonCPPFunctionsBPLibrary_eventPasteFromClipboard_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clipboard" },
		{ "Comment", "/**\n\x09 * Pastes the current clipboard text to a String\n\x09 * @param\x09ReturnValue String retrieved from clipboard\n\x09 */" },
		{ "DisplayName", "Paste From Clipboard" },
		{ "Keywords", "Copy Paste Clipboard" },
		{ "ModuleRelativePath", "Public/CommonCPPFunctionsBPLibrary.h" },
		{ "ToolTip", "Pastes the current clipboard text to a String\n@param       ReturnValue String retrieved from clipboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonCPPFunctionsBPLibrary, nullptr, "PasteFromClipboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::CommonCPPFunctionsBPLibrary_eventPasteFromClipboard_Parms), Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonCPPFunctionsBPLibrary);
	UClass* Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_NoRegister()
	{
		return UCommonCPPFunctionsBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonCPPFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_CopyToClipboard, "CopyToClipboard" }, // 25030111
		{ &Z_Construct_UFunction_UCommonCPPFunctionsBPLibrary_PasteFromClipboard, "PasteFromClipboard" }, // 2170016293
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonCPPFunctionsBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CommonCPPFunctionsBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonCPPFunctionsBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::ClassParams = {
		&UCommonCPPFunctionsBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonCPPFunctionsBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UCommonCPPFunctionsBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonCPPFunctionsBPLibrary.OuterSingleton, Z_Construct_UClass_UCommonCPPFunctionsBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonCPPFunctionsBPLibrary.OuterSingleton;
	}
	template<> COMMONCPPFUNCTIONS_API UClass* StaticClass<UCommonCPPFunctionsBPLibrary>()
	{
		return UCommonCPPFunctionsBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonCPPFunctionsBPLibrary);
	UCommonCPPFunctionsBPLibrary::~UCommonCPPFunctionsBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_CommonCPPFunctionsBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_CommonCPPFunctionsBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonCPPFunctionsBPLibrary, UCommonCPPFunctionsBPLibrary::StaticClass, TEXT("UCommonCPPFunctionsBPLibrary"), &Z_Registration_Info_UClass_UCommonCPPFunctionsBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonCPPFunctionsBPLibrary), 2302646347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_CommonCPPFunctionsBPLibrary_h_2968070280(TEXT("/Script/CommonCPPFunctions"),
		Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_CommonCPPFunctionsBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xdTro_Documents_Unreal_Projects_GetSelectedText_Plugins_CommonCPPFunctions_Source_CommonCPPFunctions_Public_CommonCPPFunctionsBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
