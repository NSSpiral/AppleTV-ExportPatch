/* Runtime dump - DOMHTMLSelectElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLSelectElement : DOMHTMLElement

@property char autofocus;
@property char disabled;
@property (readonly) DOMHTMLFormElement * form;
@property char multiple;
@property (copy) NSString * name;
@property int size;
@property (readonly, copy) NSString * type;
@property (readonly) DOMHTMLOptionsCollection * options;
@property (readonly) int length;
@property int selectedIndex;
@property (copy) NSString * value;
@property (readonly) char willValidate;

- (void)_startAssistingDocumentView:(NSObject *)arg0;
- (void)_stopAssistingDocumentView:(NSObject *)arg0;
- (char)_requiresAccessoryView;
- (char)_requiresInputView;
- (char)_supportsAutoFill;
- (char)nodeCanBecomeFirstResponder;
- (id)createPeripheral;
- (int)size;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)length;
- (NSString *)type;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (void)setSize:(int)arg0;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (NSObject *)item:(unsigned int)arg0;
- (DOMHTMLFormElement *)form;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (void)_activateItemAtIndex:(int)arg0;
- (void)_activateItemAtIndex:(int)arg0 allowMultipleSelection:(char)arg1;
- (DOMHTMLOptionsCollection *)options;
- (char)multiple;
- (unsigned int)completeLength;
- (NSObject *)listItemAtIndex:(int)arg0;
- (int)structuralComplexityContribution;
- (NSObject *)namedItem:(NSObject *)arg0;
- (void)remove:(int)arg0;
- (char)autofocus;
- (void)setAutofocus:(char)arg0;
- (char)willValidate;
- (NSString *)validity;
- (NSString *)validationMessage;
- (NSArray *)labels;
- (char)checkValidity;
- (void)setCustomValidity:(id)arg0;
- (void)setMultiple:(char)arg0;
- (char)required;
- (void)setRequired:(char)arg0;
- (NSDictionary *)selectedOptions;
- (void)add:(int)arg0 before:(id)arg1;
- (void)add:(int)arg0 :(id)arg1;

@end
