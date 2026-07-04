/* Runtime dump - TSWPSpecSetColumns
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetColumns : TSWPSpecColumns
{
    TSWPColumns * _columns;
    char _unset;
}

- (TSWPSpecSetColumns *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetColumns *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
