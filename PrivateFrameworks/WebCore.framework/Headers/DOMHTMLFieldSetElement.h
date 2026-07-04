/* Runtime dump - DOMHTMLFieldSetElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLFieldSetElement : DOMHTMLElement

@property (readonly) DOMHTMLFormElement * form;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)type;
- (NSArray *)elements;
- (DOMHTMLFormElement *)form;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (char)willValidate;
- (NSString *)validity;
- (NSString *)validationMessage;
- (char)checkValidity;
- (void)setCustomValidity:(id)arg0;

@end
