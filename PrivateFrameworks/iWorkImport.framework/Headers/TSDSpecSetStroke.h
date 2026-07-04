/* Runtime dump - TSDSpecSetStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSpecSetStroke : TSDSpecStroke
{
    TSDStroke * _stroke;
    char _unset;
}

- (TSDSpecSetStroke *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSDSpecSetStroke *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
