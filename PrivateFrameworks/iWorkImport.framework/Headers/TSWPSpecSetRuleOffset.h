/* Runtime dump - TSWPSpecSetRuleOffset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetRuleOffset : TSWPSpecRuleOffset
{
    TSWPRuleOffset * _ruleOffset;
    char _unset;
}

- (TSWPSpecSetRuleOffset *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetRuleOffset *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
