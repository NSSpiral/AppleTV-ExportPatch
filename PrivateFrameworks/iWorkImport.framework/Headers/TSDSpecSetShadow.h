/* Runtime dump - TSDSpecSetShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecSetShadow : TSDSpecShadow
{
    TSDShadow * _shadow;
    char _unset;
}

- (TSDSpecSetShadow *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSDSpecSetShadow *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
