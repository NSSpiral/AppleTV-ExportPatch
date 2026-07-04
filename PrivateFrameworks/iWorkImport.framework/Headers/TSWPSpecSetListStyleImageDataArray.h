/* Runtime dump - TSWPSpecSetListStyleImageDataArray
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSpecSetListStyleImageDataArray : TSWPSpecListStyleImageDataArray
{
    NSArray * _listStyleImageDataArray;
    char _unset;
}

- (TSWPSpecSetListStyleImageDataArray *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSWPSpecSetListStyleImageDataArray *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
