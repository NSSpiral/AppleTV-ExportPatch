/* Runtime dump - DOMHTMLKeygenElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLKeygenElement : DOMHTMLElement

@property char autofocus;
@property (copy) NSString * challenge;
@property char disabled;
@property (readonly) DOMHTMLFormElement * form;
@property (copy) NSString * keytype;
@property (copy) NSString * name;
@property (readonly, copy) NSString * type;
@property (readonly) char willValidate;
@property (readonly) DOMValidityState * validity;
@property (readonly, copy) NSString * validationMessage;
@property (readonly) DOMNodeList * labels;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)type;
- (DOMHTMLFormElement *)form;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (char)autofocus;
- (void)setAutofocus:(char)arg0;
- (char)willValidate;
- (DOMValidityState *)validity;
- (NSString *)validationMessage;
- (DOMNodeList *)labels;
- (char)checkValidity;
- (void)setCustomValidity:(id)arg0;
- (NSString *)challenge;
- (void)setChallenge:(NSString *)arg0;
- (NSString *)keytype;
- (void)setKeytype:(NSString *)arg0;

@end
