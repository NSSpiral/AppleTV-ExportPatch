/* Runtime dump - TSDSpecSetFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecSetFill : TSDSpecFill
{
    TSDFill * _fill;
    char _unset;
}

- (TSDSpecSetFill *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSDSpecSetFill *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
