/* Runtime dump - TSWPSpecSetListStyleFloatArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetListStyleFloatArray : TSWPSpecListStyleFloatArray
{
    NSArray * _listStyleFloatArray;
    char _unset;
}

- (TSWPSpecSetListStyleFloatArray *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetListStyleFloatArray *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
