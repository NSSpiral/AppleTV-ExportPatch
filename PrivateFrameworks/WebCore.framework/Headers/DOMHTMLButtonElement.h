/* Runtime dump - DOMHTMLButtonElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLButtonElement : DOMHTMLElement

@property char autofocus;
@property char disabled;
@property (readonly) DOMHTMLFormElement * form;
@property (copy) NSString * name;
@property (copy) NSString * type;
@property (copy) NSString * value;
@property (readonly) char willValidate;
@property (copy) NSString * accessKey;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (DOMHTMLFormElement *)form;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (int)structuralComplexityContribution;
- (NSString *)accessKey;
- (void)setAccessKey:(NSString *)arg0;
- (char)autofocus;
- (void)setAutofocus:(char)arg0;
- (NSObject *)formAction;
- (void)setFormAction:(NSObject *)arg0;
- (id)formEnctype;
- (void)setFormEnctype:(id)arg0;
- (NSString *)formMethod;
- (void)setFormMethod:(NSString *)arg0;
- (char)formNoValidate;
- (void)setFormNoValidate:(char)arg0;
- (NSObject *)formTarget;
- (void)setFormTarget:(NSObject *)arg0;
- (char)willValidate;
- (NSString *)validity;
- (NSString *)validationMessage;
- (NSArray *)labels;
- (char)checkValidity;
- (void)setCustomValidity:(id)arg0;
- (void)click;

@end
