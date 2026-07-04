/* Runtime dump - TSDSpecSetLineEnd
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecSetLineEnd : TSDSpecLineEnd
{
    TSDLineEnd * _lineEnd;
    char _unset;
}

- (TSDSpecSetLineEnd *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSDSpecSetLineEnd *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
