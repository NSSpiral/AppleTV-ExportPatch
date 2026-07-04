/* Runtime dump - TSSSpecSetString
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetString : TSSSpecString
{
    NSString * _value;
    char _unset;
}

- (TSSSpecSetString *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSSSpecSetString *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
