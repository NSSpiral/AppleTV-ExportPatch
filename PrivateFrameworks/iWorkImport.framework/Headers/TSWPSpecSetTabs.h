/* Runtime dump - TSWPSpecSetTabs
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetTabs : TSWPSpecTabs
{
    TSWPTabs * _tabs;
    char _unset;
}

- (TSWPSpecSetTabs *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetTabs *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
