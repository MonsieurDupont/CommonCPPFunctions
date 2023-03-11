// Copyright Monsieur Dupond, 2023. All rights reserved.

#include "MDMultiLineEditableText.h"
#include "Framework/Text/TextLayout.h"
#include "Widgets\Text\SMultiLineEditableText.h"


TSharedRef<SWidget> UMDMultiLineEditableText::RebuildWidget()
{
	MyMultiLineEditableText = SNew(SMultiLineEditableText)
	.TextStyle(&WidgetStyle)
	.AllowContextMenu(AllowContextMenu)
	.IsReadOnly(bIsReadOnly)
	.OnCursorMoved(BIND_UOBJECT_DELEGATE(FOnCursorMoved, HandleEditableTextCursorMoved))
	.SelectAllTextWhenFocused(SelectAllTextWhenFocused)
	.ClearTextSelectionOnFocusLoss(ClearTextSelectionOnFocusLoss)
	.RevertTextOnEscape(RevertTextOnEscape)
	.ClearKeyboardFocusOnCommit(ClearKeyboardFocusOnCommit)
	.VirtualKeyboardOptions(VirtualKeyboardOptions)
	.VirtualKeyboardDismissAction(VirtualKeyboardDismissAction)
	.OnTextChanged(BIND_UOBJECT_DELEGATE(FOnTextChanged, HandleOnTextChanged))
	.OnTextCommitted(BIND_UOBJECT_DELEGATE(FOnTextCommitted, HandleOnTextCommitted))
	;

	return MyMultiLineEditableText.ToSharedRef();
}

void UMDMultiLineEditableText::HandleEditableTextCursorMoved(const FTextLocation& NewCursorPosition) const
{
	OnCursorMoved.Broadcast(NewCursorPosition.GetLineIndex(), NewCursorPosition.GetOffset());
}

	/** Insert text at the caret position */
void UMDMultiLineEditableText::InsertTextAtCursor(const FString InText) const
{
	MyMultiLineEditableText->InsertTextAtCursor(InText);
}

	/** Get the currently selected text */
FText UMDMultiLineEditableText::GetSelectedText() const
{
	return MyMultiLineEditableText->GetSelectedText();
}

	/*Select all text present in the text box*/
void UMDMultiLineEditableText::SelectAllText()
{
	MyMultiLineEditableText->SelectAllText();
}

	/*Check if any text is selected in the text box*/
bool UMDMultiLineEditableText::AnyTextSelected() const
{
	return MyMultiLineEditableText->AnyTextSelected();
}

	/** Delete the currently selected text (doesn't delete anything if no text is selected) */
	void UMDMultiLineEditableText::DeleteSelectedText()
{
	MyMultiLineEditableText->DeleteSelectedText();
}

	/** Clear the current text selection (doesn't clear anything if no text is selected) */
	void UMDMultiLineEditableText::ClearSelection()
{
	MyMultiLineEditableText->ClearSelection();
}



