/* Runtime dump - DOMCSSStyleSheet
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRule * ownerRule;
@property (readonly) DOMCSSRuleList * cssRules;
@property (readonly) DOMCSSRuleList * rules;

- (DOMCSSRuleList *)cssRules;
- (unsigned int)insertRule:(NSObject *)arg0 index:(unsigned int)arg1;
- (unsigned int)insertRule:(NSObject *)arg0 :(unsigned int)arg1;
- (void)deleteRule:(unsigned int)arg0;
- (DOMCSSRule *)ownerRule;
- (DOMCSSRuleList *)rules;
- (int)addRule:(NSObject *)arg0 style:(NSObject *)arg1 index:(unsigned int)arg2;
- (void)removeRule:(unsigned int)arg0;

@end
