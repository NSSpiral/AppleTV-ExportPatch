/* Runtime dump - TSSSpecSetInteger
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSSpecSetInteger : TSSSpecInteger
{
    int _value;
    char _unset;
}

- (TSSSpecSetInteger *)initWithCurrentProperty:(NSObject *)arg0;
- (NSString *)operationPropertyName;
- (TSSSpecSetInteger *)initUnsetSpec;
- (char)isUnsetSpec;
- (id)apply:(id /* block */)arg0;

@end
