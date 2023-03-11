// Copyright Monsieur Dupond, 2023. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components\EditableTextBox.h"
#include "Framework/Text/TextLayout.h"
#include "Components\MultiLineEditableText.h"
#include "MDMultiLineEditableText.generated.h"


/** Called when the cursor is moved within the text area */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCursorMovedRM, int32, InLineIndex, int32, InOffset);

/**
 * Editable text box widget
 */
UCLASS(meta=( DisplayName="MD Editable Text (Multi-Line)" ))
class COMMONCPPFUNCTIONS_API UMDMultiLineEditableText : public UMultiLineEditableText
{
	/** Called when the cursor is moved within the text area */
	DECLARE_DELEGATE_OneParam( FOnCursorMoved, const FTextLocation& );
	
	GENERATED_BODY()

	/** Called when the cursor is moved within the text area */
	UPROPERTY(BlueprintAssignable)
	FOnCursorMovedRM OnCursorMoved;
	
	virtual TSharedRef<SWidget> RebuildWidget() override;



public:

	void HandleEditableTextCursorMoved(const FTextLocation& NewCursorPosition ) const;

	/** Insert text at the caret position */	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Insert Text", Keywords = "Insert text at cursor caret"), Category = "Editable Text")
	void InsertTextAtCursor(FString InText) const;

	/** Get the currently selected text */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Selected Text", Keywords = "Get selected text selection"), Category = "Editable Text")
	FText GetSelectedText() const;

	/*Select all text present in the text box*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Select All Text", Keywords = "Select all text"), Category = "Editable Text")
	void SelectAllText();

	/*Check if any text is selected in the text box*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Any Text Telected", Keywords = "Is any text selected"), Category = "Editable Text")
	bool AnyTextSelected() const;

	/** Delete the currently selected text (doesn't delete anything if no text is selected) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Selection", Keywords = "Delete selection selected text"), Category = "Editable Text")
	void DeleteSelectedText();

	/** Clear the current text selection (doesn't clear anything if no text is selected) */
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Clear Selection", Keywords = "Clear selection selected text"), Category = "Editable Text")
	void ClearSelection();


};

