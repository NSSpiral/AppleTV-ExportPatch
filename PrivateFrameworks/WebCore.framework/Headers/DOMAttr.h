/* Runtime dump - DOMAttr
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMAttr : DOMNode

@property (readonly, copy) NSString * name;
@property (readonly) char specified;
@property (copy) NSString * value;
@property (readonly) DOMElement * ownerElement;
@property (readonly) DOMCSSStyleDeclaration * style;

- (NSString *)name;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (DOMCSSStyleDeclaration *)style;
- (char)specified;
- (DOMElement *)ownerElement;
- (char)isId;

@end
