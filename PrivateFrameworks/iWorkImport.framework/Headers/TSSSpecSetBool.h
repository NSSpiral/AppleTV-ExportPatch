/* Runtime dump - TSSSpecSetBool
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetBool : TSSSpecBool
{
    char _value;
    char _unset;
}

- (TSSSpecSetBool *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSSSpecSetBool *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
