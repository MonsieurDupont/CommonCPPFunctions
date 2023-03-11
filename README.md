# CommonCPPFunctions
 
This plugin add some useful functions that you can use in blueprints or in C++! More will be added over time.

It also adds a new *multiline editable text box* called **MD Editable Text** that exposes with more functions in blueprints.


## Functions

### Clipboard

- Copy to clipboard 
 
 ![image](https://user-images.githubusercontent.com/122630849/224508490-7bed4879-7e10-44fd-9add-75f7f25a054b.png)
- Paste from clipboard

 ![image](https://user-images.githubusercontent.com/122630849/224508510-f92f1e80-de51-4690-9ae5-8771441af056.png)
 
### File 

- Read file

 ![image](https://user-images.githubusercontent.com/122630849/224508534-523f1799-0dde-4052-900f-8127f59b214d.png)
- Save file

 ![image](https://user-images.githubusercontent.com/122630849/224508549-37daf0f4-2ec4-4f18-ab7e-f4bb331fa66d.png)
- Delete file

 ![image](https://user-images.githubusercontent.com/122630849/224508567-f3d1037c-ba86-4e9e-814f-3e2cd215b6d8.png)

### MD Editable text box

This text box can be added via UMG and is the same as a normal multiline editable text box.

**Functions added**

- Event OnCursorMoved

  ![image](https://user-images.githubusercontent.com/122630849/224508644-cc8e6941-41c1-4703-a8c3-0fc42424ec21.png)
- - Returns the line where the cursor is and its position in the line
- Get selected text

  ![image](https://user-images.githubusercontent.com/122630849/224508687-89842f98-8a7c-4eaf-a555-0fe76d4a3c34.png)
- - Gets the current selected text inside the text box
- Delete selection

  ![image](https://user-images.githubusercontent.com/122630849/224508714-8fb9c2f2-4671-471c-9f5d-e43a7940df44.png)
- - Deletes the current selected text
- Clear selection

 ![image](https://user-images.githubusercontent.com/122630849/224508737-00ecf7d3-86bb-46a8-ae09-29e5c496c368.png)
- - Clears the current selection
- Is any text selected

  ![image](https://user-images.githubusercontent.com/122630849/224508860-e899e380-b22e-4368-a930-bf0e801188a2.png)
- - Checks if any text is selected inside the text box


