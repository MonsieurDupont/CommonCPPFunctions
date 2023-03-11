// Copyright 2023 Monsieur Dupond. All Rights Reserved.

#include "CommonCPPFunctionsBPLibrary.h"
#include "Math/Vector2D.h"
#include "CommonCPPFunctions.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/FileHelper.h"

UCommonCPPFunctionsBPLibrary::UCommonCPPFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

// Clipboard

void UCommonCPPFunctionsBPLibrary::CopyToClipboard(const FString & Text)
{
	FPlatformMisc::ClipboardCopy(*Text);
}

void UCommonCPPFunctionsBPLibrary::PasteFromClipboard(FString & ReturnValue)
{
	FPlatformMisc::ClipboardPaste(ReturnValue);
}

// File

FString UCommonCPPFunctionsBPLibrary::ReadStringFromFile(FString FilePath, bool& Success, FString& InfoMessage, bool& EmptyText)
{
	//Check if the file exists

	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
	{
		//File doesn't exist
		Success = false;
		InfoMessage = FString::Printf(TEXT("Failed to read file: File doesn't exist"), *FilePath);
		return "";
	}

	FString RetString = "";

	//Read file

	if (!FFileHelper::LoadFileToString(RetString, *FilePath))
	{
		//Can't read file
		Success = false;
		InfoMessage = FString::Printf(TEXT("Failed to read file"), *FilePath);
		return "";
	}

	//Succesfully read file
	if (!RetString.IsEmpty())
	{
		Success = true;
		EmptyText = false;
		InfoMessage = FString::Printf(TEXT("Succesfully read file"), *FilePath);
		return RetString;
	}

	//File is empty 
	else
	{
		Success = true;
		EmptyText = true;
		InfoMessage = FString::Printf(TEXT("Succesfully read file but file is empty"));
		return RetString;
	}
}

void UCommonCPPFunctionsBPLibrary::SaveStringToFile(FString FilePath, FString StringToSave, bool& Success, FString& InfoMessage)
{
	//Save string to file

	if (!FFileHelper::SaveStringToFile(StringToSave, *FilePath))
	{
		//Can't save file: invalid path
		Success = false;
		InfoMessage = FString::Printf(TEXT("Failed to save file: Path is invalid"), *FilePath);
		return;
	}

	//Successfully saved file
    Success = true;
	InfoMessage = FString::Printf(TEXT("Successfully saved file"), *FilePath);
}

void UCommonCPPFunctionsBPLibrary::DeleteFile(FString FilePath, bool& Success, FString& InfoMessage)
{
	//Delete file

	if (!FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*FilePath))
	{
		//Could not delete file: file cannot be found
		Success = false;
		InfoMessage = FString::Printf(TEXT("Could not find file"));
	}
	else
	{
		//Successfully deleted file
		Success = true;
		InfoMessage = FString::Printf(TEXT("File deleted successfully"));
	}
	
}
