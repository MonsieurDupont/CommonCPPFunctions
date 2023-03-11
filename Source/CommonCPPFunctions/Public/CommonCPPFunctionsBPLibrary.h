// Copyright 2023 Monsieur Dupond. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "GenericPlatform/GenericPlatformApplicationMisc.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CommonCPPFunctionsBPLibrary.generated.h"


UCLASS()
class UCommonCPPFunctionsBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


// CLIPBOARD

	/**
	 * Copies the text to the clipboard
	 * @param	Text	String to copy to clipboard
	 */

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy To Clipboard", Keywords = "Copy Paste Clipboard"), Category = "Clipboard")
	static void CopyToClipboard(const FString& Text);

	/**
	 * Pastes the current clipboard text to a String
	 * @param	ReturnValue String retrieved from clipboard
	 */

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Paste From Clipboard", Keywords = "Copy Paste Clipboard"), Category = "Clipboard")
	static void PasteFromClipboard(FString &ReturnValue);

// File

	/**
	 * Open file and read document
	 * @param	FString Read text
	 */

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Read file", Keywords = "Read Load File "), Category = "Read write file")
		static FString ReadStringFromFile(FString FilePath, bool& Success, FString& InfoMessage, bool& EmptyText);

	/**
	 * Save text to document
	 * @param	FilePath The path should contain the file name with the extension at the end
	 */

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Save file", Keywords = "Save Write File "), Category = "Read write file")
		static void SaveStringToFile(FString FilePath, FString StringToSave, bool& Success, FString& InfoMessage);

	/**
	 * Delete file if found
	 * @param	
	 */

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete file", Keywords = "Delete Remove File "), Category = "Read write file")
		static void DeleteFile(FString FilePath, bool& Success, FString& InfoMessage);

//SCREEN



};
