/* Runtime dump - TSSSpecSetColor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetColor : TSSSpecColor
{
    TSUColor * _color;
    char _unset;
}

- (TSSSpecSetColor *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSSSpecSetColor *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
