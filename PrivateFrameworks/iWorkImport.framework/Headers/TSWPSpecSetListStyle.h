/* Runtime dump - TSWPSpecSetListStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetListStyle : TSWPSpecListStyle
{
    TSWPListStyle * _listStyle;
    char _unset;
}

- (TSWPSpecSetListStyle *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetListStyle *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
