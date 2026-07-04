/* Runtime dump - DOMHTMLLabelElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLLabelElement : DOMHTMLElement

@property (readonly) DOMHTMLFormElement * form;
@property (copy) NSString * htmlFor;
@property (copy) NSString * accessKey;

- (DOMHTMLFormElement *)form;
- (NSString *)accessKey;
- (void)setAccessKey:(NSString *)arg0;
- (NSString *)htmlFor;
- (void)setHtmlFor:(NSString *)arg0;
- (UIControl *)control;

@end
