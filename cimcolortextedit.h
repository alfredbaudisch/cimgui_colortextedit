#ifndef CIMGUI_COLOR_TEXT_EDIT_INCLUDED
#define CIMGUI_COLOR_TEXT_EDIT_INCLUDED

#include "cimgui.h"

typedef struct TextEditor TextEditor;

CIMGUI_API TextEditor* ImColorTextEdit_TextEditor(void);
CIMGUI_API void ImColorTextEdit_destroy(TextEditor* self);

CIMGUI_API void ImColorTextEdit_TextEditor_Render(TextEditor* self, const char* aTitle);
CIMGUI_API void ImColorTextEdit_TextEditor_RenderSize(TextEditor* self, const char* aTitle, const ImVec2* aSize);
CIMGUI_API void ImColorTextEdit_TextEditor_RenderSizeBorder(TextEditor* self, const char* aTitle, const ImVec2* aSize, bool aBorder);

CIMGUI_API void ImColorTextEdit_TextEditor_SetText(TextEditor* self, const char *text);

#endif //CIMGUI_COLOR_TEXT_EDIT_INCLUDED
