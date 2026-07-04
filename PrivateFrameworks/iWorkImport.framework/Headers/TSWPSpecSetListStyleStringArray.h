/* Runtime dump - TSWPSpecSetListStyleStringArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetListStyleStringArray : TSWPSpecListStyleStringArray
{
    NSArray * _listStyleStringArray;
    char _unset;
}

- (TSWPSpecSetListStyleStringArray *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetListStyleStringArray *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
