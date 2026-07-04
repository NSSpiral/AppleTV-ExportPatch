/* Runtime dump - TSWPSpecSetListStyleBoolArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetListStyleBoolArray : TSWPSpecListStyleBoolArray
{
    NSArray * _listStyleBoolArray;
    char _unset;
}

- (TSWPSpecSetListStyleBoolArray *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetListStyleBoolArray *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
