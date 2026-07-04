/* Runtime dump - DOMHTMLTextAreaElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTextAreaElement : DOMHTMLElement

@property char autofocus;
@property int cols;
@property char disabled;
@property (readonly) DOMHTMLFormElement * form;
@property (copy) NSString * name;
@property char readOnly;
@property int rows;
@property (readonly, copy) NSString * type;
@property (copy) NSString * defaultValue;
@property (copy) NSString * value;
@property (readonly) char willValidate;
@property int selectionStart;
@property int selectionEnd;
@property (copy) NSString * accessKey;

- (void)_startAssistingDocumentView:(NSObject *)arg0;
- (void)_stopAssistingDocumentView:(NSObject *)arg0;
- (char)_requiresAccessoryView;
- (char)_requiresInputView;
- (char)_supportsAutoFill;
- (NSObject *)_textFormElement;
- (char)nodeCanBecomeFirstResponder;
- (char)isEditing;
- (NSArray *)textInputTraits;
- (void)setSelectionWithPoint:(struct CGPoint)arg0;
- (char)isTextControl;
- (UITextPosition *)startPosition;
- (NSObject *)endPosition;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)type;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (void)setPlaceholder:(NSString *)arg0;
- (DOMHTMLFormElement *)form;
- (int)_autocapitalizeType;
- (char)autocorrect;
- (NSString *)placeholder;
- (int)rows;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (char)readOnly;
- (char)_isEdited;
- (int)structuralComplexityContribution;
- (void)setRows:(int)arg0;
- (NSString *)defaultValue;
- (void)setReadOnly:(char)arg0;
- (NSString *)accessKey;
- (void)setAccessKey:(NSString *)arg0;
- (char)autofocus;
- (void)setAutofocus:(char)arg0;
- (char)willValidate;
- (NSString *)validity;
- (NSString *)validationMessage;
- (NSArray *)labels;
- (char)checkValidity;
- (void)setCustomValidity:(id)arg0;
- (void)setAutocorrect:(char)arg0;
- (id)autocapitalize;
- (void)setAutocapitalize:(id)arg0;
- (int)cols;
- (void)setCols:(int)arg0;
- (NSString *)dirName;
- (void)setDirName:(NSString *)arg0;
- (int)maxLength;
- (void)setMaxLength:(int)arg0;
- (char)required;
- (void)setRequired:(char)arg0;
- (void)setDefaultValue:(NSString *)arg0;
- (int)selectionStart;
- (void)setSelectionStart:(int)arg0;
- (int)selectionEnd;
- (void)setSelectionEnd:(int)arg0;
- (id)selectionDirection;
- (void)setSelectionDirection:(id)arg0;
- (void)select;
- (void)setRangeText:(NSString *)arg0;
- (void)setRangeText:(NSString *)arg0 start:(unsigned int)arg1 end:(unsigned int)arg2 selectionMode:(id)arg3;
- (void)setSelectionRange:(int)arg0 end:(int)arg1;
- (id)wrap;
- (void)setWrap:(id)arg0;
- (unsigned int)textLength;

@end
