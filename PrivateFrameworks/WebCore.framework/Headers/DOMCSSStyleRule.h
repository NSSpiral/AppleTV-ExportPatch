/* Runtime dump - DOMCSSStyleRule
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMCSSStyleRule : DOMCSSRule

@property (copy) NSString * selectorText;
@property (readonly) DOMCSSStyleDeclaration * style;

- (DOMCSSStyleDeclaration *)style;
- (NSString *)selectorText;
- (void)setSelectorText:(NSString *)arg0;

@end
