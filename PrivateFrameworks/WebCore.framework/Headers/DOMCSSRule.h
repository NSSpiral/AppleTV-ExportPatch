/* Runtime dump - DOMCSSRule
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMCSSRule : DOMObject

@property (readonly) unsigned short type;
@property (copy) NSString * cssText;
@property (readonly) DOMCSSStyleSheet * parentStyleSheet;
@property (readonly) DOMCSSRule * parentRule;

- (void)dealloc;
- (unsigned short)type;
- (void)setCssText:(NSString *)arg0;
- (void)finalize;
- (NSString *)cssText;
- (DOMCSSStyleSheet *)parentStyleSheet;
- (DOMCSSRule *)parentRule;

@end
