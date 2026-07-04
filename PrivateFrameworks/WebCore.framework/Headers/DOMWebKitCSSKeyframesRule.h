/* Runtime dump - DOMWebKitCSSKeyframesRule
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWebKitCSSKeyframesRule : DOMCSSRule

@property (copy) NSString * name;
@property (readonly) DOMCSSRuleList * cssRules;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (DOMCSSRuleList *)cssRules;
- (void)deleteRule:(unsigned int)arg0;
- (void)insertRule:(NSObject *)arg0;
- (NSObject *)findRule:(NSObject *)arg0;

@end
