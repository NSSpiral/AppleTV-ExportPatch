/* Runtime dump - DOMCSSMediaRule
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMMediaList * media;
@property (readonly) DOMCSSRuleList * cssRules;

- (DOMMediaList *)media;
- (DOMCSSRuleList *)cssRules;
- (unsigned int)insertRule:(NSObject *)arg0 index:(unsigned int)arg1;
- (unsigned int)insertRule:(NSObject *)arg0 :(unsigned int)arg1;
- (void)deleteRule:(unsigned int)arg0;

@end
