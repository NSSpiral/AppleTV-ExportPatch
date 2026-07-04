/* Runtime dump - DOMHTMLFormElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString * acceptCharset;
@property (copy) NSString * action;
@property (copy) NSString * enctype;
@property (copy) NSString * encoding;
@property (copy) NSString * method;
@property (copy) NSString * name;
@property (copy) NSString * target;
@property (readonly) DOMHTMLCollection * elements;
@property (readonly) int length;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)length;
- (void)setTarget:(NSString *)arg0;
- (NSString *)action;
- (void)reset;
- (NSString *)target;
- (void)setAction:(NSString *)arg0;
- (DOMHTMLCollection *)elements;
- (char)autocorrect;
- (NSString *)method;
- (int)structuralComplexityContribution;
- (NSString *)encoding;
- (char)checkValidity;
- (NSString *)acceptCharset;
- (void)setAcceptCharset:(NSString *)arg0;
- (id)autocomplete;
- (void)setAutocomplete:(id)arg0;
- (NSString *)enctype;
- (void)setEnctype:(NSString *)arg0;
- (void)setEncoding:(NSString *)arg0;
- (void)setMethod:(NSString *)arg0;
- (char)noValidate;
- (void)setNoValidate:(char)arg0;
- (void)setAutocorrect:(char)arg0;
- (id)autocapitalize;
- (void)setAutocapitalize:(id)arg0;
- (void)submit;

@end
